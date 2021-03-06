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
 **     class RateParticleGenerator!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &RateParticleGeneratorBase::getClassType(void)
{
    return _type;
}

//! access the numerical type of the class
inline
OSG::UInt32 RateParticleGeneratorBase::getClassTypeId(void)
{
    return _type.getId();
}

inline
OSG::UInt16 RateParticleGeneratorBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/

//! Get the value of the RateParticleGenerator::_sfGenerationRate field.

inline
Real32 &RateParticleGeneratorBase::editGenerationRate(void)
{
    editSField(GenerationRateFieldMask);

    return _sfGenerationRate.getValue();
}

//! Get the value of the RateParticleGenerator::_sfGenerationRate field.
inline
      Real32  RateParticleGeneratorBase::getGenerationRate(void) const
{
    return _sfGenerationRate.getValue();
}

//! Set the value of the RateParticleGenerator::_sfGenerationRate field.
inline
void RateParticleGeneratorBase::setGenerationRate(const Real32 value)
{
    editSField(GenerationRateFieldMask);

    _sfGenerationRate.setValue(value);
}
//! Get the value of the RateParticleGenerator::_sfTimeSinceLastGeneration field.

inline
Real32 &RateParticleGeneratorBase::editTimeSinceLastGeneration(void)
{
    editSField(TimeSinceLastGenerationFieldMask);

    return _sfTimeSinceLastGeneration.getValue();
}

//! Get the value of the RateParticleGenerator::_sfTimeSinceLastGeneration field.
inline
      Real32  RateParticleGeneratorBase::getTimeSinceLastGeneration(void) const
{
    return _sfTimeSinceLastGeneration.getValue();
}

//! Set the value of the RateParticleGenerator::_sfTimeSinceLastGeneration field.
inline
void RateParticleGeneratorBase::setTimeSinceLastGeneration(const Real32 value)
{
    editSField(TimeSinceLastGenerationFieldMask);

    _sfTimeSinceLastGeneration.setValue(value);
}
//! Get the value of the RateParticleGenerator::_sfRateSpread field.

inline
Real32 &RateParticleGeneratorBase::editRateSpread(void)
{
    editSField(RateSpreadFieldMask);

    return _sfRateSpread.getValue();
}

//! Get the value of the RateParticleGenerator::_sfRateSpread field.
inline
      Real32  RateParticleGeneratorBase::getRateSpread(void) const
{
    return _sfRateSpread.getValue();
}

//! Set the value of the RateParticleGenerator::_sfRateSpread field.
inline
void RateParticleGeneratorBase::setRateSpread(const Real32 value)
{
    editSField(RateSpreadFieldMask);

    _sfRateSpread.setValue(value);
}


#ifdef OSG_MT_CPTR_ASPECT
inline
void RateParticleGeneratorBase::execSync (      RateParticleGeneratorBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Inherited::execSync(pFrom, whichField, oOffsets, syncMode, uiSyncInfo);

    if(FieldBits::NoField != (GenerationRateFieldMask & whichField))
        _sfGenerationRate.syncWith(pFrom->_sfGenerationRate);

    if(FieldBits::NoField != (TimeSinceLastGenerationFieldMask & whichField))
        _sfTimeSinceLastGeneration.syncWith(pFrom->_sfTimeSinceLastGeneration);

    if(FieldBits::NoField != (RateSpreadFieldMask & whichField))
        _sfRateSpread.syncWith(pFrom->_sfRateSpread);
}
#endif


inline
const Char8 *RateParticleGeneratorBase::getClassname(void)
{
    return "RateParticleGenerator";
}
OSG_GEN_CONTAINERPTR(RateParticleGenerator);

OSG_END_NAMESPACE

