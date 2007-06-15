/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2002 by the OpenSG Forum                 *
 *                                                                           *
 *                            www.opensg.org                                 *
 *                                                                           *
 *   contact: dirk@opensg.org, gerrit.voss@vossg.org, jbehr@zgdv.de          *
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
 **     class KeyframeSequenceGeoPositionsPtr!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILEKEYFRAMESEQUENCEGEOPOSITIONSPTRINST

#include <stdlib.h>
#include <stdio.h>

#include <OpenSG/OSGConfig.h>

#include "OSGKeyframeSequenceGeoPositionsPtrBase.h"
#include "OSGKeyframeSequenceGeoPositionsPtr.h"


OSG_USING_NAMESPACE

const OSG::BitVector  KeyframeSequenceGeoPositionsPtrBase::BaseValuesFieldMask = 
    (TypeTraits<BitVector>::One << KeyframeSequenceGeoPositionsPtrBase::BaseValuesFieldId);

const OSG::BitVector  KeyframeSequenceGeoPositionsPtrBase::KeyframeDifferenceSetsFieldMask = 
    (TypeTraits<BitVector>::One << KeyframeSequenceGeoPositionsPtrBase::KeyframeDifferenceSetsFieldId);

const OSG::BitVector KeyframeSequenceGeoPositionsPtrBase::MTInfluenceMask = 
    (Inherited::MTInfluenceMask) | 
    (static_cast<BitVector>(0x0) << Inherited::NextFieldId); 


// Field descriptions

/*! \var GeoPositionsPtr KeyframeSequenceGeoPositionsPtrBase::_sfBaseValues
    
*/
/*! \var GeoPositionDifferenceSetPtr KeyframeSequenceGeoPositionsPtrBase::_mfKeyframeDifferenceSets
    
*/

//! KeyframeSequenceGeoPositionsPtr description

FieldDescription *KeyframeSequenceGeoPositionsPtrBase::_desc[] = 
{
    new FieldDescription(SFGeoPositionsPtr::getClassType(), 
                     "BaseValues", 
                     BaseValuesFieldId, BaseValuesFieldMask,
                     false,
                     (FieldAccessMethod) &KeyframeSequenceGeoPositionsPtrBase::getSFBaseValues),
    new FieldDescription(MFGeoPositionDifferenceSetPtr::getClassType(), 
                     "KeyframeDifferenceSets", 
                     KeyframeDifferenceSetsFieldId, KeyframeDifferenceSetsFieldMask,
                     false,
                     (FieldAccessMethod) &KeyframeSequenceGeoPositionsPtrBase::getMFKeyframeDifferenceSets)
};


FieldContainerType KeyframeSequenceGeoPositionsPtrBase::_type(
    "KeyframeSequenceGeoPositionsPtr",
    "KeyframeSequence",
    NULL,
    (PrototypeCreateF) &KeyframeSequenceGeoPositionsPtrBase::createEmpty,
    KeyframeSequenceGeoPositionsPtr::initMethod,
    _desc,
    sizeof(_desc));

//OSG_FIELD_CONTAINER_DEF(KeyframeSequenceGeoPositionsPtrBase, KeyframeSequenceGeoPositionsPtrPtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType &KeyframeSequenceGeoPositionsPtrBase::getType(void) 
{
    return _type; 
} 

const FieldContainerType &KeyframeSequenceGeoPositionsPtrBase::getType(void) const 
{
    return _type;
} 


FieldContainerPtr KeyframeSequenceGeoPositionsPtrBase::shallowCopy(void) const 
{ 
    KeyframeSequenceGeoPositionsPtrPtr returnValue; 

    newPtr(returnValue, dynamic_cast<const KeyframeSequenceGeoPositionsPtr *>(this)); 

    return returnValue; 
}

UInt32 KeyframeSequenceGeoPositionsPtrBase::getContainerSize(void) const 
{ 
    return sizeof(KeyframeSequenceGeoPositionsPtr); 
}


#if !defined(OSG_FIXED_MFIELDSYNC)
void KeyframeSequenceGeoPositionsPtrBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField)
{
    this->executeSyncImpl((KeyframeSequenceGeoPositionsPtrBase *) &other, whichField);
}
#else
void KeyframeSequenceGeoPositionsPtrBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField,                                    const SyncInfo       &sInfo     )
{
    this->executeSyncImpl((KeyframeSequenceGeoPositionsPtrBase *) &other, whichField, sInfo);
}
void KeyframeSequenceGeoPositionsPtrBase::execBeginEdit(const BitVector &whichField, 
                                            UInt32     uiAspect,
                                            UInt32     uiContainerSize) 
{
    this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void KeyframeSequenceGeoPositionsPtrBase::onDestroyAspect(UInt32 uiId, UInt32 uiAspect)
{
    Inherited::onDestroyAspect(uiId, uiAspect);

    _mfKeyframeDifferenceSets.terminateShare(uiAspect, this->getContainerSize());
}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning (disable : 383)
#endif

KeyframeSequenceGeoPositionsPtrBase::KeyframeSequenceGeoPositionsPtrBase(void) :
    _sfBaseValues             (), 
    _mfKeyframeDifferenceSets (), 
    Inherited() 
{
}

#ifdef OSG_WIN32_ICL
#pragma warning (default : 383)
#endif

KeyframeSequenceGeoPositionsPtrBase::KeyframeSequenceGeoPositionsPtrBase(const KeyframeSequenceGeoPositionsPtrBase &source) :
    _sfBaseValues             (source._sfBaseValues             ), 
    _mfKeyframeDifferenceSets (source._mfKeyframeDifferenceSets ), 
    Inherited                 (source)
{
}

/*-------------------------- destructors ----------------------------------*/

KeyframeSequenceGeoPositionsPtrBase::~KeyframeSequenceGeoPositionsPtrBase(void)
{
}

/*------------------------------ access -----------------------------------*/

UInt32 KeyframeSequenceGeoPositionsPtrBase::getBinSize(const BitVector &whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (BaseValuesFieldMask & whichField))
    {
        returnValue += _sfBaseValues.getBinSize();
    }

    if(FieldBits::NoField != (KeyframeDifferenceSetsFieldMask & whichField))
    {
        returnValue += _mfKeyframeDifferenceSets.getBinSize();
    }


    return returnValue;
}

void KeyframeSequenceGeoPositionsPtrBase::copyToBin(      BinaryDataHandler &pMem,
                                  const BitVector         &whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (BaseValuesFieldMask & whichField))
    {
        _sfBaseValues.copyToBin(pMem);
    }

    if(FieldBits::NoField != (KeyframeDifferenceSetsFieldMask & whichField))
    {
        _mfKeyframeDifferenceSets.copyToBin(pMem);
    }


}

void KeyframeSequenceGeoPositionsPtrBase::copyFromBin(      BinaryDataHandler &pMem,
                                    const BitVector    &whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (BaseValuesFieldMask & whichField))
    {
        _sfBaseValues.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (KeyframeDifferenceSetsFieldMask & whichField))
    {
        _mfKeyframeDifferenceSets.copyFromBin(pMem);
    }


}

#if !defined(OSG_FIXED_MFIELDSYNC)
void KeyframeSequenceGeoPositionsPtrBase::executeSyncImpl(      KeyframeSequenceGeoPositionsPtrBase *pOther,
                                        const BitVector         &whichField)
{

    Inherited::executeSyncImpl(pOther, whichField);

    if(FieldBits::NoField != (BaseValuesFieldMask & whichField))
        _sfBaseValues.syncWith(pOther->_sfBaseValues);

    if(FieldBits::NoField != (KeyframeDifferenceSetsFieldMask & whichField))
        _mfKeyframeDifferenceSets.syncWith(pOther->_mfKeyframeDifferenceSets);


}
#else
void KeyframeSequenceGeoPositionsPtrBase::executeSyncImpl(      KeyframeSequenceGeoPositionsPtrBase *pOther,
                                        const BitVector         &whichField,
                                        const SyncInfo          &sInfo      )
{

    Inherited::executeSyncImpl(pOther, whichField, sInfo);

    if(FieldBits::NoField != (BaseValuesFieldMask & whichField))
        _sfBaseValues.syncWith(pOther->_sfBaseValues);


    if(FieldBits::NoField != (KeyframeDifferenceSetsFieldMask & whichField))
        _mfKeyframeDifferenceSets.syncWith(pOther->_mfKeyframeDifferenceSets, sInfo);


}

void KeyframeSequenceGeoPositionsPtrBase::execBeginEditImpl (const BitVector &whichField, 
                                                 UInt32     uiAspect,
                                                 UInt32     uiContainerSize)
{
    Inherited::execBeginEditImpl(whichField, uiAspect, uiContainerSize);

    if(FieldBits::NoField != (KeyframeDifferenceSetsFieldMask & whichField))
        _mfKeyframeDifferenceSets.beginEdit(uiAspect, uiContainerSize);

}
#endif



#include <OpenSG/OSGSFieldTypeDef.inl>
#include <OpenSG/OSGMFieldTypeDef.inl>

OSG_BEGIN_NAMESPACE

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldDataTraits<KeyframeSequenceGeoPositionsPtrPtr>::_type("KeyframeSequenceGeoPositionsPtrPtr", "KeyframeSequencePtr");
#endif

OSG_DLLEXPORT_SFIELD_DEF1(KeyframeSequenceGeoPositionsPtrPtr, );
OSG_DLLEXPORT_MFIELD_DEF1(KeyframeSequenceGeoPositionsPtrPtr, );

OSG_END_NAMESPACE


/*------------------------------------------------------------------------*/
/*                              cvs id's                                  */

#ifdef OSG_SGI_CC
#pragma set woff 1174
#endif

#ifdef OSG_LINUX_ICC
#pragma warning( disable : 177 )
#endif

namespace
{
    static Char8 cvsid_cpp       [] = "@(#)$Id: FCBaseTemplate_cpp.h,v 1.45 2005/07/20 00:10:14 vossg Exp $";
    static Char8 cvsid_hpp       [] = OSGKEYFRAMESEQUENCEGEOPOSITIONSPTRBASE_HEADER_CVSID;
    static Char8 cvsid_inl       [] = OSGKEYFRAMESEQUENCEGEOPOSITIONSPTRBASE_INLINE_CVSID;

    static Char8 cvsid_fields_hpp[] = OSGKEYFRAMESEQUENCEGEOPOSITIONSPTRFIELDS_HEADER_CVSID;
}
