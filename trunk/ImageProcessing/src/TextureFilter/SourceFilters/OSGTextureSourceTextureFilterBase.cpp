/*---------------------------------------------------------------------------*\
 *                       OpenSG ToolBox ImageProcessing                      *
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
 **     class TextureSourceTextureFilter!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILETEXTURESOURCETEXTUREFILTERINST

#include <stdlib.h>
#include <stdio.h>

#include <OpenSG/OSGConfig.h>

#include "OSGTextureSourceTextureFilterBase.h"
#include "OSGTextureSourceTextureFilter.h"


OSG_BEGIN_NAMESPACE

const OSG::BitVector  TextureSourceTextureFilterBase::TextureFieldMask = 
    (TypeTraits<BitVector>::One << TextureSourceTextureFilterBase::TextureFieldId);

const OSG::BitVector TextureSourceTextureFilterBase::MTInfluenceMask = 
    (Inherited::MTInfluenceMask) | 
    (static_cast<BitVector>(0x0) << Inherited::NextFieldId); 


// Field descriptions

/*! \var TextureChunkPtr TextureSourceTextureFilterBase::_sfTexture
    
*/

//! TextureSourceTextureFilter description

FieldDescription *TextureSourceTextureFilterBase::_desc[] = 
{
    new FieldDescription(SFTextureChunkPtr::getClassType(), 
                     "Texture", 
                     TextureFieldId, TextureFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&TextureSourceTextureFilterBase::editSFTexture))
};


FieldContainerType TextureSourceTextureFilterBase::_type(
    "TextureSourceTextureFilter",
    "SourceTextureFilter",
    NULL,
    reinterpret_cast<PrototypeCreateF>(&TextureSourceTextureFilterBase::createEmpty),
    TextureSourceTextureFilter::initMethod,
    _desc,
    sizeof(_desc));

//OSG_FIELD_CONTAINER_DEF(TextureSourceTextureFilterBase, TextureSourceTextureFilterPtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType &TextureSourceTextureFilterBase::getType(void) 
{
    return _type; 
} 

const FieldContainerType &TextureSourceTextureFilterBase::getType(void) const 
{
    return _type;
} 


FieldContainerPtr TextureSourceTextureFilterBase::shallowCopy(void) const 
{ 
    TextureSourceTextureFilterPtr returnValue; 

    newPtr(returnValue, dynamic_cast<const TextureSourceTextureFilter *>(this)); 

    return returnValue; 
}

UInt32 TextureSourceTextureFilterBase::getContainerSize(void) const 
{ 
    return sizeof(TextureSourceTextureFilter); 
}


#if !defined(OSG_FIXED_MFIELDSYNC)
void TextureSourceTextureFilterBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField)
{
    this->executeSyncImpl(static_cast<TextureSourceTextureFilterBase *>(&other),
                          whichField);
}
#else
void TextureSourceTextureFilterBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField,                                    const SyncInfo       &sInfo     )
{
    this->executeSyncImpl((TextureSourceTextureFilterBase *) &other, whichField, sInfo);
}
void TextureSourceTextureFilterBase::execBeginEdit(const BitVector &whichField, 
                                            UInt32     uiAspect,
                                            UInt32     uiContainerSize) 
{
    this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void TextureSourceTextureFilterBase::onDestroyAspect(UInt32 uiId, UInt32 uiAspect)
{
    Inherited::onDestroyAspect(uiId, uiAspect);

}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning (disable : 383)
#endif

TextureSourceTextureFilterBase::TextureSourceTextureFilterBase(void) :
    _sfTexture                (TextureChunkPtr(NullFC)), 
    Inherited() 
{
}

#ifdef OSG_WIN32_ICL
#pragma warning (default : 383)
#endif

TextureSourceTextureFilterBase::TextureSourceTextureFilterBase(const TextureSourceTextureFilterBase &source) :
    _sfTexture                (source._sfTexture                ), 
    Inherited                 (source)
{
}

/*-------------------------- destructors ----------------------------------*/

TextureSourceTextureFilterBase::~TextureSourceTextureFilterBase(void)
{
}

/*------------------------------ access -----------------------------------*/

UInt32 TextureSourceTextureFilterBase::getBinSize(const BitVector &whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (TextureFieldMask & whichField))
    {
        returnValue += _sfTexture.getBinSize();
    }


    return returnValue;
}

void TextureSourceTextureFilterBase::copyToBin(      BinaryDataHandler &pMem,
                                  const BitVector         &whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (TextureFieldMask & whichField))
    {
        _sfTexture.copyToBin(pMem);
    }


}

void TextureSourceTextureFilterBase::copyFromBin(      BinaryDataHandler &pMem,
                                    const BitVector    &whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (TextureFieldMask & whichField))
    {
        _sfTexture.copyFromBin(pMem);
    }


}

#if !defined(OSG_FIXED_MFIELDSYNC)
void TextureSourceTextureFilterBase::executeSyncImpl(      TextureSourceTextureFilterBase *pOther,
                                        const BitVector         &whichField)
{

    Inherited::executeSyncImpl(pOther, whichField);

    if(FieldBits::NoField != (TextureFieldMask & whichField))
        _sfTexture.syncWith(pOther->_sfTexture);


}
#else
void TextureSourceTextureFilterBase::executeSyncImpl(      TextureSourceTextureFilterBase *pOther,
                                        const BitVector         &whichField,
                                        const SyncInfo          &sInfo      )
{

    Inherited::executeSyncImpl(pOther, whichField, sInfo);

    if(FieldBits::NoField != (TextureFieldMask & whichField))
        _sfTexture.syncWith(pOther->_sfTexture);



}

void TextureSourceTextureFilterBase::execBeginEditImpl (const BitVector &whichField, 
                                                 UInt32     uiAspect,
                                                 UInt32     uiContainerSize)
{
    Inherited::execBeginEditImpl(whichField, uiAspect, uiContainerSize);

}
#endif



OSG_END_NAMESPACE

#include <OpenSG/OSGSFieldTypeDef.inl>
#include <OpenSG/OSGMFieldTypeDef.inl>

OSG_BEGIN_NAMESPACE

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldDataTraits<TextureSourceTextureFilterPtr>::_type("TextureSourceTextureFilterPtr", "SourceTextureFilterPtr");
#endif

OSG_DLLEXPORT_SFIELD_DEF1(TextureSourceTextureFilterPtr, OSG_IMAGEPROCESSINGLIB_DLLTMPLMAPPING);
OSG_DLLEXPORT_MFIELD_DEF1(TextureSourceTextureFilterPtr, OSG_IMAGEPROCESSINGLIB_DLLTMPLMAPPING);


OSG_END_NAMESPACE

