/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
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
 **     class PhysicsHingeJoint!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &PhysicsHingeJointBase::getClassType(void)
{
    return _type;
}

//! access the numerical type of the class
inline
OSG::UInt32 PhysicsHingeJointBase::getClassTypeId(void)
{
    return _type.getId();
}

inline
OSG::UInt16 PhysicsHingeJointBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/

//! Get the value of the PhysicsHingeJoint::_sfAnchor field.

inline
Vec3f &PhysicsHingeJointBase::editAnchor(void)
{
    editSField(AnchorFieldMask);

    return _sfAnchor.getValue();
}

//! Get the value of the PhysicsHingeJoint::_sfAnchor field.
inline
const Vec3f &PhysicsHingeJointBase::getAnchor(void) const
{
    return _sfAnchor.getValue();
}

//! Set the value of the PhysicsHingeJoint::_sfAnchor field.
inline
void PhysicsHingeJointBase::setAnchor(const Vec3f &value)
{
    editSField(AnchorFieldMask);

    _sfAnchor.setValue(value);
}
//! Get the value of the PhysicsHingeJoint::_sfAxis field.

inline
Vec3f &PhysicsHingeJointBase::editAxis(void)
{
    editSField(AxisFieldMask);

    return _sfAxis.getValue();
}

//! Get the value of the PhysicsHingeJoint::_sfAxis field.
inline
const Vec3f &PhysicsHingeJointBase::getAxis(void) const
{
    return _sfAxis.getValue();
}

//! Set the value of the PhysicsHingeJoint::_sfAxis field.
inline
void PhysicsHingeJointBase::setAxis(const Vec3f &value)
{
    editSField(AxisFieldMask);

    _sfAxis.setValue(value);
}
//! Get the value of the PhysicsHingeJoint::_sfHiStop field.

inline
Real32 &PhysicsHingeJointBase::editHiStop(void)
{
    editSField(HiStopFieldMask);

    return _sfHiStop.getValue();
}

//! Get the value of the PhysicsHingeJoint::_sfHiStop field.
inline
      Real32  PhysicsHingeJointBase::getHiStop(void) const
{
    return _sfHiStop.getValue();
}

//! Set the value of the PhysicsHingeJoint::_sfHiStop field.
inline
void PhysicsHingeJointBase::setHiStop(const Real32 value)
{
    editSField(HiStopFieldMask);

    _sfHiStop.setValue(value);
}
//! Get the value of the PhysicsHingeJoint::_sfLoStop field.

inline
Real32 &PhysicsHingeJointBase::editLoStop(void)
{
    editSField(LoStopFieldMask);

    return _sfLoStop.getValue();
}

//! Get the value of the PhysicsHingeJoint::_sfLoStop field.
inline
      Real32  PhysicsHingeJointBase::getLoStop(void) const
{
    return _sfLoStop.getValue();
}

//! Set the value of the PhysicsHingeJoint::_sfLoStop field.
inline
void PhysicsHingeJointBase::setLoStop(const Real32 value)
{
    editSField(LoStopFieldMask);

    _sfLoStop.setValue(value);
}
//! Get the value of the PhysicsHingeJoint::_sfBounce field.

inline
Real32 &PhysicsHingeJointBase::editBounce(void)
{
    editSField(BounceFieldMask);

    return _sfBounce.getValue();
}

//! Get the value of the PhysicsHingeJoint::_sfBounce field.
inline
      Real32  PhysicsHingeJointBase::getBounce(void) const
{
    return _sfBounce.getValue();
}

//! Set the value of the PhysicsHingeJoint::_sfBounce field.
inline
void PhysicsHingeJointBase::setBounce(const Real32 value)
{
    editSField(BounceFieldMask);

    _sfBounce.setValue(value);
}
//! Get the value of the PhysicsHingeJoint::_sfCFM field.

inline
Real32 &PhysicsHingeJointBase::editCFM(void)
{
    editSField(CFMFieldMask);

    return _sfCFM.getValue();
}

//! Get the value of the PhysicsHingeJoint::_sfCFM field.
inline
      Real32  PhysicsHingeJointBase::getCFM(void) const
{
    return _sfCFM.getValue();
}

//! Set the value of the PhysicsHingeJoint::_sfCFM field.
inline
void PhysicsHingeJointBase::setCFM(const Real32 value)
{
    editSField(CFMFieldMask);

    _sfCFM.setValue(value);
}
//! Get the value of the PhysicsHingeJoint::_sfStopERP field.

inline
Real32 &PhysicsHingeJointBase::editStopERP(void)
{
    editSField(StopERPFieldMask);

    return _sfStopERP.getValue();
}

//! Get the value of the PhysicsHingeJoint::_sfStopERP field.
inline
      Real32  PhysicsHingeJointBase::getStopERP(void) const
{
    return _sfStopERP.getValue();
}

//! Set the value of the PhysicsHingeJoint::_sfStopERP field.
inline
void PhysicsHingeJointBase::setStopERP(const Real32 value)
{
    editSField(StopERPFieldMask);

    _sfStopERP.setValue(value);
}
//! Get the value of the PhysicsHingeJoint::_sfStopCFM field.

inline
Real32 &PhysicsHingeJointBase::editStopCFM(void)
{
    editSField(StopCFMFieldMask);

    return _sfStopCFM.getValue();
}

//! Get the value of the PhysicsHingeJoint::_sfStopCFM field.
inline
      Real32  PhysicsHingeJointBase::getStopCFM(void) const
{
    return _sfStopCFM.getValue();
}

//! Set the value of the PhysicsHingeJoint::_sfStopCFM field.
inline
void PhysicsHingeJointBase::setStopCFM(const Real32 value)
{
    editSField(StopCFMFieldMask);

    _sfStopCFM.setValue(value);
}


#ifdef OSG_MT_CPTR_ASPECT
inline
void PhysicsHingeJointBase::execSync (      PhysicsHingeJointBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Inherited::execSync(pFrom, whichField, oOffsets, syncMode, uiSyncInfo);

    if(FieldBits::NoField != (AnchorFieldMask & whichField))
        _sfAnchor.syncWith(pFrom->_sfAnchor);

    if(FieldBits::NoField != (AxisFieldMask & whichField))
        _sfAxis.syncWith(pFrom->_sfAxis);

    if(FieldBits::NoField != (HiStopFieldMask & whichField))
        _sfHiStop.syncWith(pFrom->_sfHiStop);

    if(FieldBits::NoField != (LoStopFieldMask & whichField))
        _sfLoStop.syncWith(pFrom->_sfLoStop);

    if(FieldBits::NoField != (BounceFieldMask & whichField))
        _sfBounce.syncWith(pFrom->_sfBounce);

    if(FieldBits::NoField != (CFMFieldMask & whichField))
        _sfCFM.syncWith(pFrom->_sfCFM);

    if(FieldBits::NoField != (StopERPFieldMask & whichField))
        _sfStopERP.syncWith(pFrom->_sfStopERP);

    if(FieldBits::NoField != (StopCFMFieldMask & whichField))
        _sfStopCFM.syncWith(pFrom->_sfStopCFM);
}
#endif


inline
const Char8 *PhysicsHingeJointBase::getClassname(void)
{
    return "PhysicsHingeJoint";
}
OSG_GEN_CONTAINERPTR(PhysicsHingeJoint);

OSG_END_NAMESPACE

