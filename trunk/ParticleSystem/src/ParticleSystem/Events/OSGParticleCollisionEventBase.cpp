/*---------------------------------------------------------------------------*\
 *                     OpenSG ToolBox UserInterface                          *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                         www.vrac.iastate.edu                              *
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
 **     class ParticleCollisionEvent!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILEPARTICLECOLLISIONEVENTINST

#include <stdlib.h>
#include <stdio.h>

#include <OpenSG/OSGConfig.h>

#include "OSGParticleCollisionEventBase.h"
#include "OSGParticleCollisionEvent.h"


OSG_BEGIN_NAMESPACE

const OSG::BitVector  ParticleCollisionEventBase::PrimarySystemFieldMask = 
    (TypeTraits<BitVector>::One << ParticleCollisionEventBase::PrimarySystemFieldId);

const OSG::BitVector  ParticleCollisionEventBase::PrimaryParticleIndexFieldMask = 
    (TypeTraits<BitVector>::One << ParticleCollisionEventBase::PrimaryParticleIndexFieldId);

const OSG::BitVector  ParticleCollisionEventBase::SecondarySystemFieldMask = 
    (TypeTraits<BitVector>::One << ParticleCollisionEventBase::SecondarySystemFieldId);

const OSG::BitVector  ParticleCollisionEventBase::SecondaryParticleIndexFieldMask = 
    (TypeTraits<BitVector>::One << ParticleCollisionEventBase::SecondaryParticleIndexFieldId);

const OSG::BitVector ParticleCollisionEventBase::MTInfluenceMask = 
    (Inherited::MTInfluenceMask) | 
    (static_cast<BitVector>(0x0) << Inherited::NextFieldId); 


// Field descriptions

/*! \var ParticleSystemPtr ParticleCollisionEventBase::_sfPrimarySystem
    
*/
/*! \var UInt32          ParticleCollisionEventBase::_sfPrimaryParticleIndex
    
*/
/*! \var ParticleSystemPtr ParticleCollisionEventBase::_sfSecondarySystem
    
*/
/*! \var UInt32          ParticleCollisionEventBase::_sfSecondaryParticleIndex
    
*/

//! ParticleCollisionEvent description

FieldDescription *ParticleCollisionEventBase::_desc[] = 
{
    new FieldDescription(SFParticleSystemPtr::getClassType(), 
                     "PrimarySystem", 
                     PrimarySystemFieldId, PrimarySystemFieldMask,
                     true,
                     reinterpret_cast<FieldAccessMethod>(&ParticleCollisionEventBase::editSFPrimarySystem)),
    new FieldDescription(SFUInt32::getClassType(), 
                     "PrimaryParticleIndex", 
                     PrimaryParticleIndexFieldId, PrimaryParticleIndexFieldMask,
                     true,
                     reinterpret_cast<FieldAccessMethod>(&ParticleCollisionEventBase::editSFPrimaryParticleIndex)),
    new FieldDescription(SFParticleSystemPtr::getClassType(), 
                     "SecondarySystem", 
                     SecondarySystemFieldId, SecondarySystemFieldMask,
                     true,
                     reinterpret_cast<FieldAccessMethod>(&ParticleCollisionEventBase::editSFSecondarySystem)),
    new FieldDescription(SFUInt32::getClassType(), 
                     "SecondaryParticleIndex", 
                     SecondaryParticleIndexFieldId, SecondaryParticleIndexFieldMask,
                     true,
                     reinterpret_cast<FieldAccessMethod>(&ParticleCollisionEventBase::editSFSecondaryParticleIndex))
};


FieldContainerType ParticleCollisionEventBase::_type(
    "ParticleCollisionEvent",
    "Event",
    NULL,
    reinterpret_cast<PrototypeCreateF>(&ParticleCollisionEventBase::createEmpty),
    ParticleCollisionEvent::initMethod,
    _desc,
    sizeof(_desc));

//OSG_FIELD_CONTAINER_DEF(ParticleCollisionEventBase, ParticleCollisionEventPtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType &ParticleCollisionEventBase::getType(void) 
{
    return _type; 
} 

const FieldContainerType &ParticleCollisionEventBase::getType(void) const 
{
    return _type;
} 


FieldContainerPtr ParticleCollisionEventBase::shallowCopy(void) const 
{ 
    ParticleCollisionEventPtr returnValue; 

    newPtr(returnValue, dynamic_cast<const ParticleCollisionEvent *>(this)); 

    return returnValue; 
}

UInt32 ParticleCollisionEventBase::getContainerSize(void) const 
{ 
    return sizeof(ParticleCollisionEvent); 
}


#if !defined(OSG_FIXED_MFIELDSYNC)
void ParticleCollisionEventBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField)
{
    this->executeSyncImpl(static_cast<ParticleCollisionEventBase *>(&other),
                          whichField);
}
#else
void ParticleCollisionEventBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField,                                    const SyncInfo       &sInfo     )
{
    this->executeSyncImpl((ParticleCollisionEventBase *) &other, whichField, sInfo);
}
void ParticleCollisionEventBase::execBeginEdit(const BitVector &whichField, 
                                            UInt32     uiAspect,
                                            UInt32     uiContainerSize) 
{
    this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void ParticleCollisionEventBase::onDestroyAspect(UInt32 uiId, UInt32 uiAspect)
{
    Inherited::onDestroyAspect(uiId, uiAspect);

}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning (disable : 383)
#endif

ParticleCollisionEventBase::ParticleCollisionEventBase(void) :
    _sfPrimarySystem          (ParticleSystemPtr(NullFC)), 
    _sfPrimaryParticleIndex   (UInt32(0)), 
    _sfSecondarySystem        (ParticleSystemPtr(NullFC)), 
    _sfSecondaryParticleIndex (UInt32(0)), 
    Inherited() 
{
}

#ifdef OSG_WIN32_ICL
#pragma warning (default : 383)
#endif

ParticleCollisionEventBase::ParticleCollisionEventBase(const ParticleCollisionEventBase &source) :
    _sfPrimarySystem          (source._sfPrimarySystem          ), 
    _sfPrimaryParticleIndex   (source._sfPrimaryParticleIndex   ), 
    _sfSecondarySystem        (source._sfSecondarySystem        ), 
    _sfSecondaryParticleIndex (source._sfSecondaryParticleIndex ), 
    Inherited                 (source)
{
}

/*-------------------------- destructors ----------------------------------*/

ParticleCollisionEventBase::~ParticleCollisionEventBase(void)
{
}

/*------------------------------ access -----------------------------------*/

UInt32 ParticleCollisionEventBase::getBinSize(const BitVector &whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (PrimarySystemFieldMask & whichField))
    {
        returnValue += _sfPrimarySystem.getBinSize();
    }

    if(FieldBits::NoField != (PrimaryParticleIndexFieldMask & whichField))
    {
        returnValue += _sfPrimaryParticleIndex.getBinSize();
    }

    if(FieldBits::NoField != (SecondarySystemFieldMask & whichField))
    {
        returnValue += _sfSecondarySystem.getBinSize();
    }

    if(FieldBits::NoField != (SecondaryParticleIndexFieldMask & whichField))
    {
        returnValue += _sfSecondaryParticleIndex.getBinSize();
    }


    return returnValue;
}

void ParticleCollisionEventBase::copyToBin(      BinaryDataHandler &pMem,
                                  const BitVector         &whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (PrimarySystemFieldMask & whichField))
    {
        _sfPrimarySystem.copyToBin(pMem);
    }

    if(FieldBits::NoField != (PrimaryParticleIndexFieldMask & whichField))
    {
        _sfPrimaryParticleIndex.copyToBin(pMem);
    }

    if(FieldBits::NoField != (SecondarySystemFieldMask & whichField))
    {
        _sfSecondarySystem.copyToBin(pMem);
    }

    if(FieldBits::NoField != (SecondaryParticleIndexFieldMask & whichField))
    {
        _sfSecondaryParticleIndex.copyToBin(pMem);
    }


}

void ParticleCollisionEventBase::copyFromBin(      BinaryDataHandler &pMem,
                                    const BitVector    &whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (PrimarySystemFieldMask & whichField))
    {
        _sfPrimarySystem.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (PrimaryParticleIndexFieldMask & whichField))
    {
        _sfPrimaryParticleIndex.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (SecondarySystemFieldMask & whichField))
    {
        _sfSecondarySystem.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (SecondaryParticleIndexFieldMask & whichField))
    {
        _sfSecondaryParticleIndex.copyFromBin(pMem);
    }


}

#if !defined(OSG_FIXED_MFIELDSYNC)
void ParticleCollisionEventBase::executeSyncImpl(      ParticleCollisionEventBase *pOther,
                                        const BitVector         &whichField)
{

    Inherited::executeSyncImpl(pOther, whichField);

    if(FieldBits::NoField != (PrimarySystemFieldMask & whichField))
        _sfPrimarySystem.syncWith(pOther->_sfPrimarySystem);

    if(FieldBits::NoField != (PrimaryParticleIndexFieldMask & whichField))
        _sfPrimaryParticleIndex.syncWith(pOther->_sfPrimaryParticleIndex);

    if(FieldBits::NoField != (SecondarySystemFieldMask & whichField))
        _sfSecondarySystem.syncWith(pOther->_sfSecondarySystem);

    if(FieldBits::NoField != (SecondaryParticleIndexFieldMask & whichField))
        _sfSecondaryParticleIndex.syncWith(pOther->_sfSecondaryParticleIndex);


}
#else
void ParticleCollisionEventBase::executeSyncImpl(      ParticleCollisionEventBase *pOther,
                                        const BitVector         &whichField,
                                        const SyncInfo          &sInfo      )
{

    Inherited::executeSyncImpl(pOther, whichField, sInfo);

    if(FieldBits::NoField != (PrimarySystemFieldMask & whichField))
        _sfPrimarySystem.syncWith(pOther->_sfPrimarySystem);

    if(FieldBits::NoField != (PrimaryParticleIndexFieldMask & whichField))
        _sfPrimaryParticleIndex.syncWith(pOther->_sfPrimaryParticleIndex);

    if(FieldBits::NoField != (SecondarySystemFieldMask & whichField))
        _sfSecondarySystem.syncWith(pOther->_sfSecondarySystem);

    if(FieldBits::NoField != (SecondaryParticleIndexFieldMask & whichField))
        _sfSecondaryParticleIndex.syncWith(pOther->_sfSecondaryParticleIndex);



}

void ParticleCollisionEventBase::execBeginEditImpl (const BitVector &whichField, 
                                                 UInt32     uiAspect,
                                                 UInt32     uiContainerSize)
{
    Inherited::execBeginEditImpl(whichField, uiAspect, uiContainerSize);

}
#endif



OSG_END_NAMESPACE

#include <OpenSG/OSGSFieldTypeDef.inl>

OSG_BEGIN_NAMESPACE

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldDataTraits<ParticleCollisionEventPtr>::_type("ParticleCollisionEventPtr", "EventPtr");
#endif

OSG_DLLEXPORT_SFIELD_DEF1(ParticleCollisionEventPtr, OSG_PARTICLESYSTEMLIB_DLLTMPLMAPPING);


OSG_END_NAMESPACE

