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
 **     class SurfaceParticleGenerator!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &SurfaceParticleGeneratorBase::getClassType(void)
{
    return _type;
}

//! access the numerical type of the class
inline
OSG::UInt32 SurfaceParticleGeneratorBase::getClassTypeId(void)
{
    return _type.getId();
}

inline
OSG::UInt16 SurfaceParticleGeneratorBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/


//! Get the value of the SurfaceParticleGenerator::_sfPositionVelocityDistribution field.
inline
GeoSurfaceDistribution3D * SurfaceParticleGeneratorBase::getPositionVelocityDistribution(void) const
{
    return _sfPositionVelocityDistribution.getValue();
}

//! Set the value of the SurfaceParticleGenerator::_sfPositionVelocityDistribution field.
inline
void SurfaceParticleGeneratorBase::setPositionVelocityDistribution(GeoSurfaceDistribution3D * const value)
{
    editSField(PositionVelocityDistributionFieldMask);

    _sfPositionVelocityDistribution.setValue(value);
}

//! Get the value of the SurfaceParticleGenerator::_sfNormalDistribution field.
inline
Distribution3D * SurfaceParticleGeneratorBase::getNormalDistribution(void) const
{
    return _sfNormalDistribution.getValue();
}

//! Set the value of the SurfaceParticleGenerator::_sfNormalDistribution field.
inline
void SurfaceParticleGeneratorBase::setNormalDistribution(Distribution3D * const value)
{
    editSField(NormalDistributionFieldMask);

    _sfNormalDistribution.setValue(value);
}

//! Get the value of the SurfaceParticleGenerator::_sfColorDistribution field.
inline
Distribution3D * SurfaceParticleGeneratorBase::getColorDistribution(void) const
{
    return _sfColorDistribution.getValue();
}

//! Set the value of the SurfaceParticleGenerator::_sfColorDistribution field.
inline
void SurfaceParticleGeneratorBase::setColorDistribution(Distribution3D * const value)
{
    editSField(ColorDistributionFieldMask);

    _sfColorDistribution.setValue(value);
}

//! Get the value of the SurfaceParticleGenerator::_sfTransparencyDistribution field.
inline
Distribution1D * SurfaceParticleGeneratorBase::getTransparencyDistribution(void) const
{
    return _sfTransparencyDistribution.getValue();
}

//! Set the value of the SurfaceParticleGenerator::_sfTransparencyDistribution field.
inline
void SurfaceParticleGeneratorBase::setTransparencyDistribution(Distribution1D * const value)
{
    editSField(TransparencyDistributionFieldMask);

    _sfTransparencyDistribution.setValue(value);
}

//! Get the value of the SurfaceParticleGenerator::_sfSizeDistribution field.
inline
Distribution3D * SurfaceParticleGeneratorBase::getSizeDistribution(void) const
{
    return _sfSizeDistribution.getValue();
}

//! Set the value of the SurfaceParticleGenerator::_sfSizeDistribution field.
inline
void SurfaceParticleGeneratorBase::setSizeDistribution(Distribution3D * const value)
{
    editSField(SizeDistributionFieldMask);

    _sfSizeDistribution.setValue(value);
}

//! Get the value of the SurfaceParticleGenerator::_sfLifespanDistribution field.
inline
Distribution1D * SurfaceParticleGeneratorBase::getLifespanDistribution(void) const
{
    return _sfLifespanDistribution.getValue();
}

//! Set the value of the SurfaceParticleGenerator::_sfLifespanDistribution field.
inline
void SurfaceParticleGeneratorBase::setLifespanDistribution(Distribution1D * const value)
{
    editSField(LifespanDistributionFieldMask);

    _sfLifespanDistribution.setValue(value);
}

//! Get the value of the SurfaceParticleGenerator::_sfAgeDistribution field.
inline
Distribution1D * SurfaceParticleGeneratorBase::getAgeDistribution(void) const
{
    return _sfAgeDistribution.getValue();
}

//! Set the value of the SurfaceParticleGenerator::_sfAgeDistribution field.
inline
void SurfaceParticleGeneratorBase::setAgeDistribution(Distribution1D * const value)
{
    editSField(AgeDistributionFieldMask);

    _sfAgeDistribution.setValue(value);
}

//! Get the value of the SurfaceParticleGenerator::_sfSpeedDistribution field.
inline
Distribution1D * SurfaceParticleGeneratorBase::getSpeedDistribution(void) const
{
    return _sfSpeedDistribution.getValue();
}

//! Set the value of the SurfaceParticleGenerator::_sfSpeedDistribution field.
inline
void SurfaceParticleGeneratorBase::setSpeedDistribution(Distribution1D * const value)
{
    editSField(SpeedDistributionFieldMask);

    _sfSpeedDistribution.setValue(value);
}

//! Get the value of the SurfaceParticleGenerator::_sfAccelerationDistribution field.
inline
Distribution3D * SurfaceParticleGeneratorBase::getAccelerationDistribution(void) const
{
    return _sfAccelerationDistribution.getValue();
}

//! Set the value of the SurfaceParticleGenerator::_sfAccelerationDistribution field.
inline
void SurfaceParticleGeneratorBase::setAccelerationDistribution(Distribution3D * const value)
{
    editSField(AccelerationDistributionFieldMask);

    _sfAccelerationDistribution.setValue(value);
}


#ifdef OSG_MT_CPTR_ASPECT
inline
void SurfaceParticleGeneratorBase::execSync (      SurfaceParticleGeneratorBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Inherited::execSync(pFrom, whichField, oOffsets, syncMode, uiSyncInfo);

    if(FieldBits::NoField != (PositionVelocityDistributionFieldMask & whichField))
        _sfPositionVelocityDistribution.syncWith(pFrom->_sfPositionVelocityDistribution);

    if(FieldBits::NoField != (NormalDistributionFieldMask & whichField))
        _sfNormalDistribution.syncWith(pFrom->_sfNormalDistribution);

    if(FieldBits::NoField != (ColorDistributionFieldMask & whichField))
        _sfColorDistribution.syncWith(pFrom->_sfColorDistribution);

    if(FieldBits::NoField != (TransparencyDistributionFieldMask & whichField))
        _sfTransparencyDistribution.syncWith(pFrom->_sfTransparencyDistribution);

    if(FieldBits::NoField != (SizeDistributionFieldMask & whichField))
        _sfSizeDistribution.syncWith(pFrom->_sfSizeDistribution);

    if(FieldBits::NoField != (LifespanDistributionFieldMask & whichField))
        _sfLifespanDistribution.syncWith(pFrom->_sfLifespanDistribution);

    if(FieldBits::NoField != (AgeDistributionFieldMask & whichField))
        _sfAgeDistribution.syncWith(pFrom->_sfAgeDistribution);

    if(FieldBits::NoField != (SpeedDistributionFieldMask & whichField))
        _sfSpeedDistribution.syncWith(pFrom->_sfSpeedDistribution);

    if(FieldBits::NoField != (AccelerationDistributionFieldMask & whichField))
        _sfAccelerationDistribution.syncWith(pFrom->_sfAccelerationDistribution);
}
#endif


inline
const Char8 *SurfaceParticleGeneratorBase::getClassname(void)
{
    return "SurfaceParticleGenerator";
}


OSG_GEN_CONTAINERPTR(SurfaceParticleGenerator);

OSG_END_NAMESPACE
