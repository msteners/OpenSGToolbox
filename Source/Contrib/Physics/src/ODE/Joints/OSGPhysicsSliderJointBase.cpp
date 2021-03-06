/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
 *                                                                           *
 *                            www.opensg.org                                 *
 *                                                                           *
 *   contact:  David Kabala (djkabala@gmail.com),  Behboud Kalantary         *
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
 **     class PhysicsSliderJoint!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include "OSGConfig.h"




#include "OSGPhysicsSliderJointBase.h"
#include "OSGPhysicsSliderJoint.h"

#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::PhysicsSliderJoint
    
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var Vec3f           PhysicsSliderJointBase::_sfAxis
    
*/

/*! \var Real32          PhysicsSliderJointBase::_sfHiStop
    High stop angle or position. Setting this to dInfinity (the default value) turns off the high stop. For rotational joints, this stop must be less than pi to be effective. If the high stop is less than the low stop then both stops will be ineffective.
*/

/*! \var Real32          PhysicsSliderJointBase::_sfLoStop
    Low stop angle or position. Setting this to -dInfinity (the default value) turns off the low stop.  For rotational joints, this stop must be greater than - pi to be effective. 
*/

/*! \var Real32          PhysicsSliderJointBase::_sfBounce
    The bouncyness of the stops. This is a restitution parameter in the range 0..1. 0 means the stops are not bouncy at all, 1 means maximum bouncyness.
*/

/*! \var Real32          PhysicsSliderJointBase::_sfCFM
    The constraint force mixing (CFM) value used when not at a stop.
*/

/*! \var Real32          PhysicsSliderJointBase::_sfStopERP
    The error reduction parameter (ERP) used by the stops.
*/

/*! \var Real32          PhysicsSliderJointBase::_sfStopCFM
    The constraint force mixing (CFM) value used by the stops. Together with the ERP value this can be used to get spongy or soft stops. Note that this is intended for unpowered joints, it does not really work as expected when a powered joint reaches its limit. 
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<PhysicsSliderJoint *>::_type("PhysicsSliderJointPtr", "PhysicsJointPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(PhysicsSliderJoint *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           PhysicsSliderJoint *,
                           0);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           PhysicsSliderJoint *,
                           0);

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void PhysicsSliderJointBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFVec3f::Description(
        SFVec3f::getClassType(),
        "axis",
        "",
        AxisFieldId, AxisFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&PhysicsSliderJoint::editHandleAxis),
        static_cast<FieldGetMethodSig >(&PhysicsSliderJoint::getHandleAxis));

    oType.addInitialDesc(pDesc);

    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "hiStop",
        "High stop angle or position. Setting this to dInfinity (the default value) turns off the high stop. For rotational joints, this stop must be less than pi to be effective. If the high stop is less than the low stop then both stops will be ineffective.\n",
        HiStopFieldId, HiStopFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&PhysicsSliderJoint::editHandleHiStop),
        static_cast<FieldGetMethodSig >(&PhysicsSliderJoint::getHandleHiStop));

    oType.addInitialDesc(pDesc);

    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "loStop",
        "Low stop angle or position. Setting this to -dInfinity (the default value) turns off the low stop.  For rotational joints, this stop must be greater than - pi to be effective. \n",
        LoStopFieldId, LoStopFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&PhysicsSliderJoint::editHandleLoStop),
        static_cast<FieldGetMethodSig >(&PhysicsSliderJoint::getHandleLoStop));

    oType.addInitialDesc(pDesc);

    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "bounce",
        "The bouncyness of the stops. This is a restitution parameter in the range 0..1. 0 means the stops are not bouncy at all, 1 means maximum bouncyness.\n",
        BounceFieldId, BounceFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&PhysicsSliderJoint::editHandleBounce),
        static_cast<FieldGetMethodSig >(&PhysicsSliderJoint::getHandleBounce));

    oType.addInitialDesc(pDesc);

    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "CFM",
        "The constraint force mixing (CFM) value used when not at a stop.\n",
        CFMFieldId, CFMFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&PhysicsSliderJoint::editHandleCFM),
        static_cast<FieldGetMethodSig >(&PhysicsSliderJoint::getHandleCFM));

    oType.addInitialDesc(pDesc);

    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "stopERP",
        "The error reduction parameter (ERP) used by the stops.\n",
        StopERPFieldId, StopERPFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&PhysicsSliderJoint::editHandleStopERP),
        static_cast<FieldGetMethodSig >(&PhysicsSliderJoint::getHandleStopERP));

    oType.addInitialDesc(pDesc);

    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "stopCFM",
        "The constraint force mixing (CFM) value used by the stops. Together with the ERP value this can be used to get spongy or soft stops. Note that this is intended for unpowered joints, it does not really work as expected when a powered joint reaches its limit. \n",
        StopCFMFieldId, StopCFMFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&PhysicsSliderJoint::editHandleStopCFM),
        static_cast<FieldGetMethodSig >(&PhysicsSliderJoint::getHandleStopCFM));

    oType.addInitialDesc(pDesc);
}


PhysicsSliderJointBase::TypeObject PhysicsSliderJointBase::_type(
    PhysicsSliderJointBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    reinterpret_cast<PrototypeCreateF>(&PhysicsSliderJointBase::createEmptyLocal),
    PhysicsSliderJoint::initMethod,
    PhysicsSliderJoint::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&PhysicsSliderJoint::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"PhysicsSliderJoint\"\n"
    "\tparent=\"PhysicsJoint\"\n"
    "    library=\"ContribPhysics\"\n"
    "    pointerfieldtypes=\"both\"\n"
    "    structure=\"concrete\"\n"
    "    systemcomponent=\"true\"\n"
    "    parentsystemcomponent=\"true\"\n"
    "    decoratable=\"false\"\n"
    "    useLocalIncludes=\"false\"\n"
    "    isNodeCore=\"false\"\n"
    "    authors=\"David Kabala (djkabala@gmail.com),  Behboud Kalantary         \"\n"
    ">\n"
    "\t<Field\n"
    "\t\tname=\"axis\"\n"
    "\t\ttype=\"Vec3f\"\n"
    "        category=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"hiStop\"\n"
    "\t\ttype=\"Real32\"\n"
    "        category=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tHigh stop angle or position. Setting this to dInfinity (the default value) turns off the high stop. For rotational joints, this stop must be less than pi to be effective. If the high stop is less than the low stop then both stops will be ineffective.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"loStop\"\n"
    "\t\ttype=\"Real32\"\n"
    "        category=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tLow stop angle or position. Setting this to -dInfinity (the default value) turns off the low stop.  For rotational joints, this stop must be greater than - pi to be effective. \n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"bounce\"\n"
    "\t\ttype=\"Real32\"\n"
    "        category=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tThe bouncyness of the stops. This is a restitution parameter in the range 0..1. 0 means the stops are not bouncy at all, 1 means maximum bouncyness.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"CFM\"\n"
    "\t\ttype=\"Real32\"\n"
    "        category=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tThe constraint force mixing (CFM) value used when not at a stop.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"stopERP\"\n"
    "\t\ttype=\"Real32\"\n"
    "        category=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tThe error reduction parameter (ERP) used by the stops.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"stopCFM\"\n"
    "\t\ttype=\"Real32\"\n"
    "        category=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tThe constraint force mixing (CFM) value used by the stops. Together with the ERP value this can be used to get spongy or soft stops. Note that this is intended for unpowered joints, it does not really work as expected when a powered joint reaches its limit. \n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    ""
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &PhysicsSliderJointBase::getType(void)
{
    return _type;
}

const FieldContainerType &PhysicsSliderJointBase::getType(void) const
{
    return _type;
}

UInt32 PhysicsSliderJointBase::getContainerSize(void) const
{
    return sizeof(PhysicsSliderJoint);
}

/*------------------------- decorator get ------------------------------*/


SFVec3f *PhysicsSliderJointBase::editSFAxis(void)
{
    editSField(AxisFieldMask);

    return &_sfAxis;
}

const SFVec3f *PhysicsSliderJointBase::getSFAxis(void) const
{
    return &_sfAxis;
}


SFReal32 *PhysicsSliderJointBase::editSFHiStop(void)
{
    editSField(HiStopFieldMask);

    return &_sfHiStop;
}

const SFReal32 *PhysicsSliderJointBase::getSFHiStop(void) const
{
    return &_sfHiStop;
}


SFReal32 *PhysicsSliderJointBase::editSFLoStop(void)
{
    editSField(LoStopFieldMask);

    return &_sfLoStop;
}

const SFReal32 *PhysicsSliderJointBase::getSFLoStop(void) const
{
    return &_sfLoStop;
}


SFReal32 *PhysicsSliderJointBase::editSFBounce(void)
{
    editSField(BounceFieldMask);

    return &_sfBounce;
}

const SFReal32 *PhysicsSliderJointBase::getSFBounce(void) const
{
    return &_sfBounce;
}


SFReal32 *PhysicsSliderJointBase::editSFCFM(void)
{
    editSField(CFMFieldMask);

    return &_sfCFM;
}

const SFReal32 *PhysicsSliderJointBase::getSFCFM(void) const
{
    return &_sfCFM;
}


SFReal32 *PhysicsSliderJointBase::editSFStopERP(void)
{
    editSField(StopERPFieldMask);

    return &_sfStopERP;
}

const SFReal32 *PhysicsSliderJointBase::getSFStopERP(void) const
{
    return &_sfStopERP;
}


SFReal32 *PhysicsSliderJointBase::editSFStopCFM(void)
{
    editSField(StopCFMFieldMask);

    return &_sfStopCFM;
}

const SFReal32 *PhysicsSliderJointBase::getSFStopCFM(void) const
{
    return &_sfStopCFM;
}






/*------------------------------ access -----------------------------------*/

UInt32 PhysicsSliderJointBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (AxisFieldMask & whichField))
    {
        returnValue += _sfAxis.getBinSize();
    }
    if(FieldBits::NoField != (HiStopFieldMask & whichField))
    {
        returnValue += _sfHiStop.getBinSize();
    }
    if(FieldBits::NoField != (LoStopFieldMask & whichField))
    {
        returnValue += _sfLoStop.getBinSize();
    }
    if(FieldBits::NoField != (BounceFieldMask & whichField))
    {
        returnValue += _sfBounce.getBinSize();
    }
    if(FieldBits::NoField != (CFMFieldMask & whichField))
    {
        returnValue += _sfCFM.getBinSize();
    }
    if(FieldBits::NoField != (StopERPFieldMask & whichField))
    {
        returnValue += _sfStopERP.getBinSize();
    }
    if(FieldBits::NoField != (StopCFMFieldMask & whichField))
    {
        returnValue += _sfStopCFM.getBinSize();
    }

    return returnValue;
}

void PhysicsSliderJointBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (AxisFieldMask & whichField))
    {
        _sfAxis.copyToBin(pMem);
    }
    if(FieldBits::NoField != (HiStopFieldMask & whichField))
    {
        _sfHiStop.copyToBin(pMem);
    }
    if(FieldBits::NoField != (LoStopFieldMask & whichField))
    {
        _sfLoStop.copyToBin(pMem);
    }
    if(FieldBits::NoField != (BounceFieldMask & whichField))
    {
        _sfBounce.copyToBin(pMem);
    }
    if(FieldBits::NoField != (CFMFieldMask & whichField))
    {
        _sfCFM.copyToBin(pMem);
    }
    if(FieldBits::NoField != (StopERPFieldMask & whichField))
    {
        _sfStopERP.copyToBin(pMem);
    }
    if(FieldBits::NoField != (StopCFMFieldMask & whichField))
    {
        _sfStopCFM.copyToBin(pMem);
    }
}

void PhysicsSliderJointBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (AxisFieldMask & whichField))
    {
        _sfAxis.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (HiStopFieldMask & whichField))
    {
        _sfHiStop.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (LoStopFieldMask & whichField))
    {
        _sfLoStop.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (BounceFieldMask & whichField))
    {
        _sfBounce.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (CFMFieldMask & whichField))
    {
        _sfCFM.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (StopERPFieldMask & whichField))
    {
        _sfStopERP.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (StopCFMFieldMask & whichField))
    {
        _sfStopCFM.copyFromBin(pMem);
    }
}

//! create a new instance of the class
PhysicsSliderJointTransitPtr PhysicsSliderJointBase::createLocal(BitVector bFlags)
{
    PhysicsSliderJointTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<PhysicsSliderJoint>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
PhysicsSliderJointTransitPtr PhysicsSliderJointBase::createDependent(BitVector bFlags)
{
    PhysicsSliderJointTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<PhysicsSliderJoint>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
PhysicsSliderJointTransitPtr PhysicsSliderJointBase::create(void)
{
    PhysicsSliderJointTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<PhysicsSliderJoint>(tmpPtr);
    }

    return fc;
}

PhysicsSliderJoint *PhysicsSliderJointBase::createEmptyLocal(BitVector bFlags)
{
    PhysicsSliderJoint *returnValue;

    newPtr<PhysicsSliderJoint>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
PhysicsSliderJoint *PhysicsSliderJointBase::createEmpty(void)
{
    PhysicsSliderJoint *returnValue;

    newPtr<PhysicsSliderJoint>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr PhysicsSliderJointBase::shallowCopyLocal(
    BitVector bFlags) const
{
    PhysicsSliderJoint *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const PhysicsSliderJoint *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr PhysicsSliderJointBase::shallowCopyDependent(
    BitVector bFlags) const
{
    PhysicsSliderJoint *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const PhysicsSliderJoint *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr PhysicsSliderJointBase::shallowCopy(void) const
{
    PhysicsSliderJoint *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const PhysicsSliderJoint *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

PhysicsSliderJointBase::PhysicsSliderJointBase(void) :
    Inherited(),
    _sfAxis                   (),
    _sfHiStop                 (),
    _sfLoStop                 (),
    _sfBounce                 (),
    _sfCFM                    (),
    _sfStopERP                (),
    _sfStopCFM                ()
{
}

PhysicsSliderJointBase::PhysicsSliderJointBase(const PhysicsSliderJointBase &source) :
    Inherited(source),
    _sfAxis                   (source._sfAxis                   ),
    _sfHiStop                 (source._sfHiStop                 ),
    _sfLoStop                 (source._sfLoStop                 ),
    _sfBounce                 (source._sfBounce                 ),
    _sfCFM                    (source._sfCFM                    ),
    _sfStopERP                (source._sfStopERP                ),
    _sfStopCFM                (source._sfStopCFM                )
{
}


/*-------------------------- destructors ----------------------------------*/

PhysicsSliderJointBase::~PhysicsSliderJointBase(void)
{
}


GetFieldHandlePtr PhysicsSliderJointBase::getHandleAxis            (void) const
{
    SFVec3f::GetHandlePtr returnValue(
        new  SFVec3f::GetHandle(
             &_sfAxis,
             this->getType().getFieldDesc(AxisFieldId),
             const_cast<PhysicsSliderJointBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr PhysicsSliderJointBase::editHandleAxis           (void)
{
    SFVec3f::EditHandlePtr returnValue(
        new  SFVec3f::EditHandle(
             &_sfAxis,
             this->getType().getFieldDesc(AxisFieldId),
             this));


    editSField(AxisFieldMask);

    return returnValue;
}

GetFieldHandlePtr PhysicsSliderJointBase::getHandleHiStop          (void) const
{
    SFReal32::GetHandlePtr returnValue(
        new  SFReal32::GetHandle(
             &_sfHiStop,
             this->getType().getFieldDesc(HiStopFieldId),
             const_cast<PhysicsSliderJointBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr PhysicsSliderJointBase::editHandleHiStop         (void)
{
    SFReal32::EditHandlePtr returnValue(
        new  SFReal32::EditHandle(
             &_sfHiStop,
             this->getType().getFieldDesc(HiStopFieldId),
             this));


    editSField(HiStopFieldMask);

    return returnValue;
}

GetFieldHandlePtr PhysicsSliderJointBase::getHandleLoStop          (void) const
{
    SFReal32::GetHandlePtr returnValue(
        new  SFReal32::GetHandle(
             &_sfLoStop,
             this->getType().getFieldDesc(LoStopFieldId),
             const_cast<PhysicsSliderJointBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr PhysicsSliderJointBase::editHandleLoStop         (void)
{
    SFReal32::EditHandlePtr returnValue(
        new  SFReal32::EditHandle(
             &_sfLoStop,
             this->getType().getFieldDesc(LoStopFieldId),
             this));


    editSField(LoStopFieldMask);

    return returnValue;
}

GetFieldHandlePtr PhysicsSliderJointBase::getHandleBounce          (void) const
{
    SFReal32::GetHandlePtr returnValue(
        new  SFReal32::GetHandle(
             &_sfBounce,
             this->getType().getFieldDesc(BounceFieldId),
             const_cast<PhysicsSliderJointBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr PhysicsSliderJointBase::editHandleBounce         (void)
{
    SFReal32::EditHandlePtr returnValue(
        new  SFReal32::EditHandle(
             &_sfBounce,
             this->getType().getFieldDesc(BounceFieldId),
             this));


    editSField(BounceFieldMask);

    return returnValue;
}

GetFieldHandlePtr PhysicsSliderJointBase::getHandleCFM             (void) const
{
    SFReal32::GetHandlePtr returnValue(
        new  SFReal32::GetHandle(
             &_sfCFM,
             this->getType().getFieldDesc(CFMFieldId),
             const_cast<PhysicsSliderJointBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr PhysicsSliderJointBase::editHandleCFM            (void)
{
    SFReal32::EditHandlePtr returnValue(
        new  SFReal32::EditHandle(
             &_sfCFM,
             this->getType().getFieldDesc(CFMFieldId),
             this));


    editSField(CFMFieldMask);

    return returnValue;
}

GetFieldHandlePtr PhysicsSliderJointBase::getHandleStopERP         (void) const
{
    SFReal32::GetHandlePtr returnValue(
        new  SFReal32::GetHandle(
             &_sfStopERP,
             this->getType().getFieldDesc(StopERPFieldId),
             const_cast<PhysicsSliderJointBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr PhysicsSliderJointBase::editHandleStopERP        (void)
{
    SFReal32::EditHandlePtr returnValue(
        new  SFReal32::EditHandle(
             &_sfStopERP,
             this->getType().getFieldDesc(StopERPFieldId),
             this));


    editSField(StopERPFieldMask);

    return returnValue;
}

GetFieldHandlePtr PhysicsSliderJointBase::getHandleStopCFM         (void) const
{
    SFReal32::GetHandlePtr returnValue(
        new  SFReal32::GetHandle(
             &_sfStopCFM,
             this->getType().getFieldDesc(StopCFMFieldId),
             const_cast<PhysicsSliderJointBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr PhysicsSliderJointBase::editHandleStopCFM        (void)
{
    SFReal32::EditHandlePtr returnValue(
        new  SFReal32::EditHandle(
             &_sfStopCFM,
             this->getType().getFieldDesc(StopCFMFieldId),
             this));


    editSField(StopCFMFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void PhysicsSliderJointBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    PhysicsSliderJoint *pThis = static_cast<PhysicsSliderJoint *>(this);

    pThis->execSync(static_cast<PhysicsSliderJoint *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *PhysicsSliderJointBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    PhysicsSliderJoint *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const PhysicsSliderJoint *>(pRefAspect),
                  dynamic_cast<const PhysicsSliderJoint *>(this));

    return returnValue;
}
#endif

void PhysicsSliderJointBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


OSG_END_NAMESPACE
