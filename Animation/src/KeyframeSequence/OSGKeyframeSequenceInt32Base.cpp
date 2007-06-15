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
 **     class KeyframeSequenceInt32!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILEKEYFRAMESEQUENCEINT32INST

#include <stdlib.h>
#include <stdio.h>

#include <OpenSG/OSGConfig.h>

#include "OSGKeyframeSequenceInt32Base.h"
#include "OSGKeyframeSequenceInt32.h"


OSG_USING_NAMESPACE

const OSG::BitVector  KeyframeSequenceInt32Base::ValuesFieldMask = 
    (TypeTraits<BitVector>::One << KeyframeSequenceInt32Base::ValuesFieldId);

const OSG::BitVector KeyframeSequenceInt32Base::MTInfluenceMask = 
    (Inherited::MTInfluenceMask) | 
    (static_cast<BitVector>(0x0) << Inherited::NextFieldId); 


// Field descriptions

/*! \var Int32           KeyframeSequenceInt32Base::_mfValues
    
*/

//! KeyframeSequenceInt32 description

FieldDescription *KeyframeSequenceInt32Base::_desc[] = 
{
    new FieldDescription(MFInt32::getClassType(), 
                     "Values", 
                     ValuesFieldId, ValuesFieldMask,
                     false,
                     (FieldAccessMethod) &KeyframeSequenceInt32Base::getMFValues)
};


FieldContainerType KeyframeSequenceInt32Base::_type(
    "KeyframeSequenceInt32",
    "KeyframeSequence",
    NULL,
    (PrototypeCreateF) &KeyframeSequenceInt32Base::createEmpty,
    KeyframeSequenceInt32::initMethod,
    _desc,
    sizeof(_desc));

//OSG_FIELD_CONTAINER_DEF(KeyframeSequenceInt32Base, KeyframeSequenceInt32Ptr)

/*------------------------------ get -----------------------------------*/

FieldContainerType &KeyframeSequenceInt32Base::getType(void) 
{
    return _type; 
} 

const FieldContainerType &KeyframeSequenceInt32Base::getType(void) const 
{
    return _type;
} 


FieldContainerPtr KeyframeSequenceInt32Base::shallowCopy(void) const 
{ 
    KeyframeSequenceInt32Ptr returnValue; 

    newPtr(returnValue, dynamic_cast<const KeyframeSequenceInt32 *>(this)); 

    return returnValue; 
}

UInt32 KeyframeSequenceInt32Base::getContainerSize(void) const 
{ 
    return sizeof(KeyframeSequenceInt32); 
}


#if !defined(OSG_FIXED_MFIELDSYNC)
void KeyframeSequenceInt32Base::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField)
{
    this->executeSyncImpl((KeyframeSequenceInt32Base *) &other, whichField);
}
#else
void KeyframeSequenceInt32Base::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField,                                    const SyncInfo       &sInfo     )
{
    this->executeSyncImpl((KeyframeSequenceInt32Base *) &other, whichField, sInfo);
}
void KeyframeSequenceInt32Base::execBeginEdit(const BitVector &whichField, 
                                            UInt32     uiAspect,
                                            UInt32     uiContainerSize) 
{
    this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void KeyframeSequenceInt32Base::onDestroyAspect(UInt32 uiId, UInt32 uiAspect)
{
    Inherited::onDestroyAspect(uiId, uiAspect);

    _mfValues.terminateShare(uiAspect, this->getContainerSize());
}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning (disable : 383)
#endif

KeyframeSequenceInt32Base::KeyframeSequenceInt32Base(void) :
    _mfValues                 (), 
    Inherited() 
{
}

#ifdef OSG_WIN32_ICL
#pragma warning (default : 383)
#endif

KeyframeSequenceInt32Base::KeyframeSequenceInt32Base(const KeyframeSequenceInt32Base &source) :
    _mfValues                 (source._mfValues                 ), 
    Inherited                 (source)
{
}

/*-------------------------- destructors ----------------------------------*/

KeyframeSequenceInt32Base::~KeyframeSequenceInt32Base(void)
{
}

/*------------------------------ access -----------------------------------*/

UInt32 KeyframeSequenceInt32Base::getBinSize(const BitVector &whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (ValuesFieldMask & whichField))
    {
        returnValue += _mfValues.getBinSize();
    }


    return returnValue;
}

void KeyframeSequenceInt32Base::copyToBin(      BinaryDataHandler &pMem,
                                  const BitVector         &whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (ValuesFieldMask & whichField))
    {
        _mfValues.copyToBin(pMem);
    }


}

void KeyframeSequenceInt32Base::copyFromBin(      BinaryDataHandler &pMem,
                                    const BitVector    &whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (ValuesFieldMask & whichField))
    {
        _mfValues.copyFromBin(pMem);
    }


}

#if !defined(OSG_FIXED_MFIELDSYNC)
void KeyframeSequenceInt32Base::executeSyncImpl(      KeyframeSequenceInt32Base *pOther,
                                        const BitVector         &whichField)
{

    Inherited::executeSyncImpl(pOther, whichField);

    if(FieldBits::NoField != (ValuesFieldMask & whichField))
        _mfValues.syncWith(pOther->_mfValues);


}
#else
void KeyframeSequenceInt32Base::executeSyncImpl(      KeyframeSequenceInt32Base *pOther,
                                        const BitVector         &whichField,
                                        const SyncInfo          &sInfo      )
{

    Inherited::executeSyncImpl(pOther, whichField, sInfo);


    if(FieldBits::NoField != (ValuesFieldMask & whichField))
        _mfValues.syncWith(pOther->_mfValues, sInfo);


}

void KeyframeSequenceInt32Base::execBeginEditImpl (const BitVector &whichField, 
                                                 UInt32     uiAspect,
                                                 UInt32     uiContainerSize)
{
    Inherited::execBeginEditImpl(whichField, uiAspect, uiContainerSize);

    if(FieldBits::NoField != (ValuesFieldMask & whichField))
        _mfValues.beginEdit(uiAspect, uiContainerSize);

}
#endif



#include <OpenSG/OSGSFieldTypeDef.inl>
#include <OpenSG/OSGMFieldTypeDef.inl>

OSG_BEGIN_NAMESPACE

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldDataTraits<KeyframeSequenceInt32Ptr>::_type("KeyframeSequenceInt32Ptr", "KeyframeSequencePtr");
#endif

OSG_DLLEXPORT_SFIELD_DEF1(KeyframeSequenceInt32Ptr, );
OSG_DLLEXPORT_MFIELD_DEF1(KeyframeSequenceInt32Ptr, );

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
    static Char8 cvsid_hpp       [] = OSGKEYFRAMESEQUENCEINT32BASE_HEADER_CVSID;
    static Char8 cvsid_inl       [] = OSGKEYFRAMESEQUENCEINT32BASE_INLINE_CVSID;

    static Char8 cvsid_fields_hpp[] = OSGKEYFRAMESEQUENCEINT32FIELDS_HEADER_CVSID;
}
