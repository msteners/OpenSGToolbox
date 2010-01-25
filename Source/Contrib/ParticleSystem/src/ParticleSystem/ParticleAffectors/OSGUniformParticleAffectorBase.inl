/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
 *                                                                           *
 *   contact:  David Kabala (djkabala@gmail.com), Daniel Guilliams           *
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
 **     class UniformParticleAffector!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &UniformParticleAffectorBase::getClassType(void)
{
    return _type;
}

//! access the numerical type of the class
inline
OSG::UInt32 UniformParticleAffectorBase::getClassTypeId(void)
{
    return _type.getId();
}

inline
OSG::UInt16 UniformParticleAffectorBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/

//! Get the value of the UniformParticleAffector::_sfMagnitude field.

inline
Real32 &UniformParticleAffectorBase::editMagnitude(void)
{
    editSField(MagnitudeFieldMask);

    return _sfMagnitude.getValue();
}

//! Get the value of the UniformParticleAffector::_sfMagnitude field.
inline
      Real32  UniformParticleAffectorBase::getMagnitude(void) const
{
    return _sfMagnitude.getValue();
}

//! Set the value of the UniformParticleAffector::_sfMagnitude field.
inline
void UniformParticleAffectorBase::setMagnitude(const Real32 value)
{
    editSField(MagnitudeFieldMask);

    _sfMagnitude.setValue(value);
}
//! Get the value of the UniformParticleAffector::_sfDirection field.

inline
Vec3f &UniformParticleAffectorBase::editDirection(void)
{
    editSField(DirectionFieldMask);

    return _sfDirection.getValue();
}

//! Get the value of the UniformParticleAffector::_sfDirection field.
inline
const Vec3f &UniformParticleAffectorBase::getDirection(void) const
{
    return _sfDirection.getValue();
}

//! Set the value of the UniformParticleAffector::_sfDirection field.
inline
void UniformParticleAffectorBase::setDirection(const Vec3f &value)
{
    editSField(DirectionFieldMask);

    _sfDirection.setValue(value);
}
//! Get the value of the UniformParticleAffector::_sfAttenuation field.

inline
Real32 &UniformParticleAffectorBase::editAttenuation(void)
{
    editSField(AttenuationFieldMask);

    return _sfAttenuation.getValue();
}

//! Get the value of the UniformParticleAffector::_sfAttenuation field.
inline
      Real32  UniformParticleAffectorBase::getAttenuation(void) const
{
    return _sfAttenuation.getValue();
}

//! Set the value of the UniformParticleAffector::_sfAttenuation field.
inline
void UniformParticleAffectorBase::setAttenuation(const Real32 value)
{
    editSField(AttenuationFieldMask);

    _sfAttenuation.setValue(value);
}
//! Get the value of the UniformParticleAffector::_sfMaxDistance field.

inline
Real32 &UniformParticleAffectorBase::editMaxDistance(void)
{
    editSField(MaxDistanceFieldMask);

    return _sfMaxDistance.getValue();
}

//! Get the value of the UniformParticleAffector::_sfMaxDistance field.
inline
      Real32  UniformParticleAffectorBase::getMaxDistance(void) const
{
    return _sfMaxDistance.getValue();
}

//! Set the value of the UniformParticleAffector::_sfMaxDistance field.
inline
void UniformParticleAffectorBase::setMaxDistance(const Real32 value)
{
    editSField(MaxDistanceFieldMask);

    _sfMaxDistance.setValue(value);
}

//! Get the value of the UniformParticleAffector::_sfBeacon field.
inline
Node * UniformParticleAffectorBase::getBeacon(void) const
{
    return _sfBeacon.getValue();
}

//! Set the value of the UniformParticleAffector::_sfBeacon field.
inline
void UniformParticleAffectorBase::setBeacon(Node * const value)
{
    editSField(BeaconFieldMask);

    _sfBeacon.setValue(value);
}
//! Get the value of the UniformParticleAffector::_sfParticleMass field.

inline
Real32 &UniformParticleAffectorBase::editParticleMass(void)
{
    editSField(ParticleMassFieldMask);

    return _sfParticleMass.getValue();
}

//! Get the value of the UniformParticleAffector::_sfParticleMass field.
inline
      Real32  UniformParticleAffectorBase::getParticleMass(void) const
{
    return _sfParticleMass.getValue();
}

//! Set the value of the UniformParticleAffector::_sfParticleMass field.
inline
void UniformParticleAffectorBase::setParticleMass(const Real32 value)
{
    editSField(ParticleMassFieldMask);

    _sfParticleMass.setValue(value);
}


#ifdef OSG_MT_CPTR_ASPECT
inline
void UniformParticleAffectorBase::execSync (      UniformParticleAffectorBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Inherited::execSync(pFrom, whichField, oOffsets, syncMode, uiSyncInfo);

    if(FieldBits::NoField != (MagnitudeFieldMask & whichField))
        _sfMagnitude.syncWith(pFrom->_sfMagnitude);

    if(FieldBits::NoField != (DirectionFieldMask & whichField))
        _sfDirection.syncWith(pFrom->_sfDirection);

    if(FieldBits::NoField != (AttenuationFieldMask & whichField))
        _sfAttenuation.syncWith(pFrom->_sfAttenuation);

    if(FieldBits::NoField != (MaxDistanceFieldMask & whichField))
        _sfMaxDistance.syncWith(pFrom->_sfMaxDistance);

    if(FieldBits::NoField != (BeaconFieldMask & whichField))
        _sfBeacon.syncWith(pFrom->_sfBeacon);

    if(FieldBits::NoField != (ParticleMassFieldMask & whichField))
        _sfParticleMass.syncWith(pFrom->_sfParticleMass);
}
#endif


inline
const Char8 *UniformParticleAffectorBase::getClassname(void)
{
    return "UniformParticleAffector";
}


OSG_GEN_CONTAINERPTR(UniformParticleAffector);

OSG_END_NAMESPACE
