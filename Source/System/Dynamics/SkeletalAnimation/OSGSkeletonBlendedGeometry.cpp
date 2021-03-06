/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
 *                                                                           *
 *                            www.opensg.org                                 *
 *                                                                           *
 *   contact:  David Kabala (djkabala@gmail.com), David Naylor               *
 *                                                                           *
\*---------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------*\
 *                                License                                    *
 *                                                                           *
 * This library is free software; you can redistribute it and/or modify it   *
 * under the terms of the GNU Library General Public License as published    *
 * by the Free Software Foundation, version 2.                               *
 *                                                                           *
 * This library is distributed in the hope that it will be useful, but       *
 * WITHOUT ANY WARRANTY; without even the implied warranty of                *
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU         *
 * Library General Public License for more details.                          *
 *                                                                           *
 * You should have received a copy of the GNU Library General Public         *
 * License along with this library; if not, write to the Free Software       *
 * Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.                 *
 *                                                                           *
\*---------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------*\
 *                                Changes                                    *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
\*---------------------------------------------------------------------------*/

//---------------------------------------------------------------------------
//  Includes
//---------------------------------------------------------------------------

#include <cstdlib>
#include <cstdio>

#include <OSGConfig.h>

#include "OSGSkeletonBlendedGeometry.h"
#include "OSGRenderAction.h"
#include "OSGIntersectAction.h"

#include "OSGTypedGeoIntegralProperty.h"
#include "OSGTypedGeoVectorProperty.h"
#include <boost/bind.hpp>

OSG_BEGIN_NAMESPACE

// Documentation for this class is emitted in the
// OSGSkeletonBlendedGeometryBase.cpp file.
// To modify it, please change the .fcd file (OSGSkeletonBlendedGeometry.fcd) and
// regenerate the base file.

/***************************************************************************\
 *                           Class variables                               *
\***************************************************************************/

/***************************************************************************\
 *                           Class methods                                 *
\***************************************************************************/

void SkeletonBlendedGeometry::initMethod(InitPhase ePhase)
{
    Inherited::initMethod(ePhase);

    if(ePhase == TypeObject::SystemPost)
    {
        IntersectAction::registerEnterDefault(
            getClassType(),
            reinterpret_cast<Action::Callback>(&Geometry::intersect));

        RenderAction::registerEnterDefault(
            getClassType(),
            reinterpret_cast<Action::Callback>(
                &MaterialDrawable::renderActionEnterHandler));
                
        RenderAction::registerLeaveDefault(
            getClassType(),
            reinterpret_cast<Action::Callback>(
                &MaterialDrawable::renderActionLeaveHandler));
    }
}


/***************************************************************************\
 *                           Instance methods                              *
\***************************************************************************/

UInt32 SkeletonBlendedGeometry::getNumJoints(void) const
{
    return getMFInternalJoints()->size();
}

Joint* SkeletonBlendedGeometry::getJoint(UInt32 index) const
{
    if(index < getMFInternalJoints()->size())
    {
        return (*getMFInternalJoints())[index];
    }
    else
    {
        return NULL;
    }
}

Matrix SkeletonBlendedGeometry::getJointInvBind(UInt32 index) const
{
    if(index < getMFInternalJointInvBindTransformations()->size())
    {
        return (*getMFInternalJointInvBindTransformations())[index];
    }
    else
    {
        return Matrix();
    }
}

void SkeletonBlendedGeometry::pushToJoints(Joint* const jointValue,
                           const Matrix& invBind  )
{
    pushToInternalJoints(jointValue);
    editMFInternalJointInvBindTransformations()->push_back(invBind);
    Matrix bind(invBind);
    bind.invert();
    editMFInternalJointBindTransformations()->push_back(bind);
}

void SkeletonBlendedGeometry::removeFromJoints(UInt32 uiIndex)
{
    removeFromInternalJoints(uiIndex);
    editMFInternalJointInvBindTransformations()->erase(uiIndex);
    editMFInternalJointBindTransformations()->erase(uiIndex);
}

void SkeletonBlendedGeometry::removeObjFromJoints(Joint* const jointValue)
{
    editMFInternalJointInvBindTransformations()->erase(getMFInternalJoints()->findIndex(jointValue));
    editMFInternalJointBindTransformations()->erase(getMFInternalJoints()->findIndex(jointValue));
    removeObjFromInternalJoints(jointValue);
}

void SkeletonBlendedGeometry::clearJoints(void)
{
    clearInternalJoints();
    editMFInternalJointInvBindTransformations()->clear();
    editMFInternalJointBindTransformations()->clear();
}

void SkeletonBlendedGeometry::skeletonUpdated(void)
{
	produceChangedEvent();
    if(getBaseGeometry())
    {
        calculatePositions();
    }
}

void SkeletonBlendedGeometry::updateJointTransformations(void)
{
	//Loop through bone hierarchy and update their transformations
	for(UInt32 i(0); i < getMFInternalJoints()->size(); ++i)
	{
		//getJoints(i)->updateTransformations(false);
	}
}

Matrix SkeletonBlendedGeometry::getAbsoluteTransformation(UInt32 index) const
{
    return dynamic_cast<Node*>(getInternalJoints(index)->getParents()[0])->getToWorld();
}

Matrix SkeletonBlendedGeometry::getAbsoluteBindTransformation(UInt32 index) const
{
    Matrix Result(getBindTransformation());
    Result.mult(getInternalJointBindTransformations(index));
    return Result;
}

Int32 SkeletonBlendedGeometry::getJointIndex(Joint* theJoint) const
{
    return getMFInternalJoints()->findIndex(theJoint);
}

Int32 SkeletonBlendedGeometry::getJointParentIndex(UInt32 index) const
{
    Joint* ChildJoint(getJoint(index));
    Node* ChildNode(dynamic_cast<Node*>(ChildJoint->getParents()[0]));

    if(ChildNode->getParent())
    {
        NodeCore* ParentCore(ChildNode->getParent()->getCore());
        if(ParentCore->getType().isDerivedFrom(Joint::getClassType()))
        {
            return getMFInternalJoints()->findIndex(ParentCore);
        }
    }
    return -1;
}

Matrix SkeletonBlendedGeometry::getBindTransformationDiff(UInt32 index) const
{
    Matrix Result(getInternalJointInvBindTransformations(index));
    Result.multLeft(dynamic_cast<Node*>(getJoint(index)->getParents()[0])->getToWorld());
    return Result;
}

void SkeletonBlendedGeometry::addJointBlending(UInt32 VertexIndex, Joint* const TheJoint, Real32 BlendAmount)
{
    if(getWeightIndexes() == NULL)
    {
        GeoUInt32PropertyUnrecPtr Indexes = GeoUInt32Property::create();
        setWeightIndexes(Indexes);
    }
    if(getWeights() == NULL)
    {
        GeoVec1fPropertyUnrecPtr Weights = GeoVec1fProperty::create();
        setWeights(Weights);
    }
    
    Int32 JointIndex(getMFInternalJoints()->findIndex(TheJoint));
    if(JointIndex < 0)
    {
        SFATAL << "Cannot add weight for joint, because that joint is not connected." << std::endl;
        return;
    }

    //Vertex Index
    getWeightIndexes()->push_back(VertexIndex);

    //Joint Index
    getWeightIndexes()->push_back(JointIndex);

    //Weight Index
    getWeightIndexes()->push_back(getWeights()->getSize());

    getWeights()->push_back(Pnt1f(BlendAmount));
}

void SkeletonBlendedGeometry::addJointBlending(UInt32 VertexIndex,
                                               UInt32 JointIndex,
                                               Real32 BlendAmount)
{
    if(getWeightIndexes() == NULL)
    {
        GeoUInt32PropertyUnrecPtr Indexes = GeoUInt32Property::create();
        setWeightIndexes(Indexes);
    }
    if(getWeights() == NULL)
    {
        GeoVec1fPropertyUnrecPtr Weights = GeoVec1fProperty::create();
        setWeights(Weights);
    }

    //Vertex Index
    getWeightIndexes()->push_back(VertexIndex);

    //Joint Index
    getWeightIndexes()->push_back(JointIndex);

    //Weight Index
    getWeightIndexes()->push_back(getWeights()->getSize());

    getWeights()->push_back(Pnt1f(BlendAmount));
}

void SkeletonBlendedGeometry::addJointBlending(UInt32 VertexIndex,
                                               UInt32 JointIndex,
                                               UInt32 WeightIndex)
{
    if(getWeightIndexes() == NULL)
    {
        GeoUInt32PropertyUnrecPtr Indexes = GeoUInt32Property::create();
        setWeightIndexes(Indexes);
    }
    if(getWeights() == NULL)
    {
        GeoVec1fPropertyUnrecPtr Weights = GeoVec1fProperty::create();
        setWeights(Weights);
    }

    //Vertex Index
    getWeightIndexes()->push_back(VertexIndex);

    //Joint Index
    getWeightIndexes()->push_back(JointIndex);

    //Weight Index
    getWeightIndexes()->push_back(WeightIndex);
}

void SkeletonBlendedGeometry::calculatePositions(void)
{
	if(getBaseGeometry() == NULL)
	{
		//Error
		SWARNING << "SkeletonBlendedGeometry::calculatePositions(): Base Geometry is NULL." << std::endl;
        return;
    }
	if(getPositions() == NULL)
	{
		//Error
		SWARNING << "SkeletonBlendedGeometry::calculatePositions(): Positions is NULL." << std::endl;
        return;
	}
	if(getBaseGeometry()->getPositions() == NULL)
	{
		//Error
		SWARNING << "SkeletonBlendedGeometry::calculatePositions(): Base Geometry Postions is NULL." << std::endl;
        return;
	}

    Pnt3f CalculatedPoint;
    Pnt3f BasePointInfluenced;
    Pnt3f BasePoint;
    Vec3f CalculatedNormal;


    //Reset all points
    GeoVectorPropertyUnrecPtr ResetPositions(dynamic_pointer_cast<GeoVectorProperty>(getBaseGeometry()->getPositions()->clone()));
    setPositions(ResetPositions);

    UInt32 WeightIndex, JointIndex, VertexIndex;
    //Update the Positions and Normals
    for(UInt32 i(0) ; i < getWeights()->size() ; ++i)
    {
        VertexIndex = getWeightIndexes()->getValue<UInt32>( 3 * i     );
        JointIndex  = getWeightIndexes()->getValue<UInt32>((3 * i) + 1);
        WeightIndex = getWeightIndexes()->getValue<UInt32>((3 * i) + 2);

        //Get the position of this index from the base geometry
        getBaseGeometry()->getPositions()->getValue<Pnt3f>(BasePoint, VertexIndex);

        //Get the Influence matrix of this joint
        //Apply the influence of this joint to the position
        getBindTransformationDiff(JointIndex).mult(BasePoint, BasePointInfluenced);

        //Add the displacement to the value at this position
        getPositions()->getValue<Pnt3f>(CalculatedPoint, VertexIndex);
        //Scale the influence by the blend amount
        CalculatedPoint += getWeights()->getValue<Pnt1f>(WeightIndex)[0] * (BasePointInfluenced - BasePoint);
        getPositions()->setValue<Pnt3f>(CalculatedPoint, VertexIndex);
    }

    for(UInt32 i = 0; i < _mfParents.size(); i++)
    {
        _mfParents[i]->invalidateVolume();
    }

    _volumeCache.setValid();
    _volumeCache.setEmpty();
}

EventConnection SkeletonBlendedGeometry::addSkeletonListener(SkeletonListenerPtr Listener)
{
   _SkeletonListeners.insert(Listener);
   return EventConnection(
       boost::bind(&SkeletonBlendedGeometry::isSkeletonListenerAttached, this, Listener),
       boost::bind(&SkeletonBlendedGeometry::removeSkeletonListener, this, Listener));
}


void SkeletonBlendedGeometry::removeSkeletonListener(SkeletonListenerPtr Listener)
{
   SkeletonListenerSetItor EraseIter(_SkeletonListeners.find(Listener));
   if(EraseIter != _SkeletonListeners.end())
   {
      _SkeletonListeners.erase(EraseIter);
   }
}

void SkeletonBlendedGeometry::produceChangedEvent(void)
{
	const SkeletonEventUnrecPtr TheEvent = SkeletonEvent::create( this, getTimeStamp());

	SkeletonListenerSet ListenerSet(_SkeletonListeners);
	for(SkeletonListenerSetConstItor SetItor(ListenerSet.begin()) ; SetItor != ListenerSet.end() ; ++SetItor)
	{
	   (*SetItor)->skeletonChanged(TheEvent);
	}
    _Producer.produceEvent(SkeletonChangedMethodId,TheEvent);
}

/*-------------------------------------------------------------------------*\
 -  private                                                                 -
\*-------------------------------------------------------------------------*/

/*----------------------- constructors & destructors ----------------------*/

SkeletonBlendedGeometry::SkeletonBlendedGeometry(void) :
    Inherited()
{
}

SkeletonBlendedGeometry::SkeletonBlendedGeometry(const SkeletonBlendedGeometry &source) :
    Inherited(source)
{
}

SkeletonBlendedGeometry::~SkeletonBlendedGeometry(void)
{
}

/*----------------------------- class specific ----------------------------*/

void SkeletonBlendedGeometry::changed(ConstFieldMaskArg whichField, 
                                      UInt32            origin,
                                      BitVector         details)
{
    Inherited::changed(whichField, origin, details);

    if((whichField & BaseGeometryFieldMask) &&
            getBaseGeometry() != NULL)
    {
        if(getBaseGeometry()->getTypes() != NULL)
        {
            setTypes(getBaseGeometry()->getTypes());
        }
        if(getBaseGeometry()->getLengths() != NULL)
        {
            setLengths(getBaseGeometry()->getLengths());
        }
        if(getBaseGeometry()->getPositions() != NULL)
        {
            GeoPropertyUnrecPtr Pos(getBaseGeometry()->getPositions()->clone());
            setPositions(dynamic_pointer_cast<GeoVectorProperty>(Pos));
        }
        if(getBaseGeometry()->getNormals() != NULL)
        {
            GeoPropertyUnrecPtr Norm(getBaseGeometry()->getNormals()->clone());
            setNormals(dynamic_pointer_cast<GeoVectorProperty>(Norm));
        }
        if(getBaseGeometry()->getColors() != NULL)
        {
            setColors(getBaseGeometry()->getColors());
        }
        if(getBaseGeometry()->getSecondaryColors() != NULL)
        {
            setSecondaryColors(getBaseGeometry()->getSecondaryColors());
        }
        if(getBaseGeometry()->getTexCoords() != NULL)
        {
            setTexCoords(getBaseGeometry()->getTexCoords());
        }
        if(getBaseGeometry()->getTexCoords1() != NULL)
        {
            setTexCoords1(getBaseGeometry()->getTexCoords1());
        }
        if(getBaseGeometry()->getTexCoords2() != NULL)
        {
            setTexCoords2(getBaseGeometry()->getTexCoords2());
        }
        if(getBaseGeometry()->getTexCoords3() != NULL)
        {
            setTexCoords3(getBaseGeometry()->getTexCoords3());
        }
        if(getBaseGeometry()->getTexCoords4() != NULL)
        {
            setTexCoords4(getBaseGeometry()->getTexCoords4());
        }
        if(getBaseGeometry()->getTexCoords5() != NULL)
        {
            setTexCoords5(getBaseGeometry()->getTexCoords5());
        }
        if(getBaseGeometry()->getTexCoords6() != NULL)
        {
            setTexCoords6(getBaseGeometry()->getTexCoords6());
        }
        if(getBaseGeometry()->getTexCoords7() != NULL)
        {
            setTexCoords7(getBaseGeometry()->getTexCoords7());
        }
        if(getBaseGeometry()->getIndices() != NULL)
        {
            setIndices(getBaseGeometry()->getIndices());
        }
        setMaterial(getBaseGeometry()->getMaterial());
    }

    if( (whichField & InternalJointsFieldMask) ||
        (whichField & InternalWeightIndexesFieldMask) ||
        (whichField & InternalWeightsFieldMask))
    {
        calculatePositions();
    }
}

void SkeletonBlendedGeometry::dump(      UInt32    ,
                         const BitVector ) const
{
    SLOG << "Dump SkeletonBlendedGeometry NI" << std::endl;
}

OSG_END_NAMESPACE
