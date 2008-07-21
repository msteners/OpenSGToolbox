/*---------------------------------------------------------------------------*\
 *                     OpenSG ToolBox Particle System                        *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                          Authors: David Kabala                            *
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

/*****************************************************************************\
 *****************************************************************************
 **                                                                         **
 **                  This file is automatically generated.                  **
 **                                                                         **
 **          Any changes made to this file WILL be lost when it is          **
 **           regenerated, which can become necessary at any time.          **
 **                                                                         **
 **     Do not change this file, changes should be done in the derived      **
 **     class GeometryCollisionParticleSystemAffector!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <OpenSG/OSGConfig.h>

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &GeometryCollisionParticleSystemAffectorBase::getClassType(void)
{
    return _type; 
} 

//! access the numerical type of the class
inline
OSG::UInt32 GeometryCollisionParticleSystemAffectorBase::getClassTypeId(void) 
{
    return _type.getId(); 
} 

//! create a new instance of the class
inline
GeometryCollisionParticleSystemAffectorPtr GeometryCollisionParticleSystemAffectorBase::create(void) 
{
    GeometryCollisionParticleSystemAffectorPtr fc; 

    if(getClassType().getPrototype() != OSG::NullFC) 
    {
        fc = GeometryCollisionParticleSystemAffectorPtr::dcast(
            getClassType().getPrototype()-> shallowCopy()); 
    }
    
    return fc; 
}

//! create an empty new instance of the class, do not copy the prototype
inline
GeometryCollisionParticleSystemAffectorPtr GeometryCollisionParticleSystemAffectorBase::createEmpty(void) 
{ 
    GeometryCollisionParticleSystemAffectorPtr returnValue; 
    
    newPtr(returnValue); 

    return returnValue; 
}


/*------------------------------ get -----------------------------------*/

//! Get the GeometryCollisionParticleSystemAffector::_sfCollisionAffector field.
inline
SFParticleAffectorPtr *GeometryCollisionParticleSystemAffectorBase::getSFCollisionAffector(void)
{
    return &_sfCollisionAffector;
}

//! Get the GeometryCollisionParticleSystemAffector::_sfCollisionNode field.
inline
SFNodePtr *GeometryCollisionParticleSystemAffectorBase::getSFCollisionNode(void)
{
    return &_sfCollisionNode;
}


//! Get the value of the GeometryCollisionParticleSystemAffector::_sfCollisionAffector field.
inline
ParticleAffectorPtr &GeometryCollisionParticleSystemAffectorBase::getCollisionAffector(void)
{
    return _sfCollisionAffector.getValue();
}

//! Get the value of the GeometryCollisionParticleSystemAffector::_sfCollisionAffector field.
inline
const ParticleAffectorPtr &GeometryCollisionParticleSystemAffectorBase::getCollisionAffector(void) const
{
    return _sfCollisionAffector.getValue();
}

//! Set the value of the GeometryCollisionParticleSystemAffector::_sfCollisionAffector field.
inline
void GeometryCollisionParticleSystemAffectorBase::setCollisionAffector(const ParticleAffectorPtr &value)
{
    _sfCollisionAffector.setValue(value);
}

//! Get the value of the GeometryCollisionParticleSystemAffector::_sfCollisionNode field.
inline
NodePtr &GeometryCollisionParticleSystemAffectorBase::getCollisionNode(void)
{
    return _sfCollisionNode.getValue();
}

//! Get the value of the GeometryCollisionParticleSystemAffector::_sfCollisionNode field.
inline
const NodePtr &GeometryCollisionParticleSystemAffectorBase::getCollisionNode(void) const
{
    return _sfCollisionNode.getValue();
}

//! Set the value of the GeometryCollisionParticleSystemAffector::_sfCollisionNode field.
inline
void GeometryCollisionParticleSystemAffectorBase::setCollisionNode(const NodePtr &value)
{
    _sfCollisionNode.setValue(value);
}


OSG_END_NAMESPACE

#define OSGGEOMETRYCOLLISIONPARTICLESYSTEMAFFECTORBASE_INLINE_CVSID "@(#)$Id: FCBaseTemplate_inl.h,v 1.20 2002/12/04 14:22:22 dirk Exp $"

