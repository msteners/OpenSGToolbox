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
 **     class RoundedCornerLineBorder!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILEROUNDEDCORNERLINEBORDERINST

#include <stdlib.h>
#include <stdio.h>

#include <OpenSG/OSGConfig.h>

#include "OSGRoundedCornerLineBorderBase.h"
#include "OSGRoundedCornerLineBorder.h"


OSG_BEGIN_NAMESPACE

const OSG::BitVector  RoundedCornerLineBorderBase::WidthFieldMask = 
    (TypeTraits<BitVector>::One << RoundedCornerLineBorderBase::WidthFieldId);

const OSG::BitVector  RoundedCornerLineBorderBase::ColorFieldMask = 
    (TypeTraits<BitVector>::One << RoundedCornerLineBorderBase::ColorFieldId);

const OSG::BitVector  RoundedCornerLineBorderBase::CornerRadiusFieldMask = 
    (TypeTraits<BitVector>::One << RoundedCornerLineBorderBase::CornerRadiusFieldId);

const OSG::BitVector RoundedCornerLineBorderBase::MTInfluenceMask = 
    (Inherited::MTInfluenceMask) | 
    (static_cast<BitVector>(0x0) << Inherited::NextFieldId); 


// Field descriptions

/*! \var UInt32          RoundedCornerLineBorderBase::_sfWidth
    
*/
/*! \var Color4f         RoundedCornerLineBorderBase::_sfColor
    
*/
/*! \var UInt32          RoundedCornerLineBorderBase::_sfCornerRadius
    
*/

//! RoundedCornerLineBorder description

FieldDescription *RoundedCornerLineBorderBase::_desc[] = 
{
    new FieldDescription(SFUInt32::getClassType(), 
                     "Width", 
                     WidthFieldId, WidthFieldMask,
                     false,
                     (FieldAccessMethod) &RoundedCornerLineBorderBase::getSFWidth),
    new FieldDescription(SFColor4f::getClassType(), 
                     "Color", 
                     ColorFieldId, ColorFieldMask,
                     false,
                     (FieldAccessMethod) &RoundedCornerLineBorderBase::getSFColor),
    new FieldDescription(SFUInt32::getClassType(), 
                     "CornerRadius", 
                     CornerRadiusFieldId, CornerRadiusFieldMask,
                     false,
                     (FieldAccessMethod) &RoundedCornerLineBorderBase::getSFCornerRadius)
};


FieldContainerType RoundedCornerLineBorderBase::_type(
    "RoundedCornerLineBorder",
    "Border",
    NULL,
    (PrototypeCreateF) &RoundedCornerLineBorderBase::createEmpty,
    RoundedCornerLineBorder::initMethod,
    _desc,
    sizeof(_desc));

//OSG_FIELD_CONTAINER_DEF(RoundedCornerLineBorderBase, RoundedCornerLineBorderPtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType &RoundedCornerLineBorderBase::getType(void) 
{
    return _type; 
} 

const FieldContainerType &RoundedCornerLineBorderBase::getType(void) const 
{
    return _type;
} 


FieldContainerPtr RoundedCornerLineBorderBase::shallowCopy(void) const 
{ 
    RoundedCornerLineBorderPtr returnValue; 

    newPtr(returnValue, dynamic_cast<const RoundedCornerLineBorder *>(this)); 

    return returnValue; 
}

UInt32 RoundedCornerLineBorderBase::getContainerSize(void) const 
{ 
    return sizeof(RoundedCornerLineBorder); 
}


#if !defined(OSG_FIXED_MFIELDSYNC)
void RoundedCornerLineBorderBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField)
{
    this->executeSyncImpl((RoundedCornerLineBorderBase *) &other, whichField);
}
#else
void RoundedCornerLineBorderBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField,                                    const SyncInfo       &sInfo     )
{
    this->executeSyncImpl((RoundedCornerLineBorderBase *) &other, whichField, sInfo);
}
void RoundedCornerLineBorderBase::execBeginEdit(const BitVector &whichField, 
                                            UInt32     uiAspect,
                                            UInt32     uiContainerSize) 
{
    this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void RoundedCornerLineBorderBase::onDestroyAspect(UInt32 uiId, UInt32 uiAspect)
{
    Inherited::onDestroyAspect(uiId, uiAspect);

}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning (disable : 383)
#endif

RoundedCornerLineBorderBase::RoundedCornerLineBorderBase(void) :
    _sfWidth                  (UInt32(1)), 
    _sfColor                  (Color4f(0.0,0.0,0.0,1.0)), 
    _sfCornerRadius           (UInt32(3)), 
    Inherited() 
{
}

#ifdef OSG_WIN32_ICL
#pragma warning (default : 383)
#endif

RoundedCornerLineBorderBase::RoundedCornerLineBorderBase(const RoundedCornerLineBorderBase &source) :
    _sfWidth                  (source._sfWidth                  ), 
    _sfColor                  (source._sfColor                  ), 
    _sfCornerRadius           (source._sfCornerRadius           ), 
    Inherited                 (source)
{
}

/*-------------------------- destructors ----------------------------------*/

RoundedCornerLineBorderBase::~RoundedCornerLineBorderBase(void)
{
}

/*------------------------------ access -----------------------------------*/

UInt32 RoundedCornerLineBorderBase::getBinSize(const BitVector &whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (WidthFieldMask & whichField))
    {
        returnValue += _sfWidth.getBinSize();
    }

    if(FieldBits::NoField != (ColorFieldMask & whichField))
    {
        returnValue += _sfColor.getBinSize();
    }

    if(FieldBits::NoField != (CornerRadiusFieldMask & whichField))
    {
        returnValue += _sfCornerRadius.getBinSize();
    }


    return returnValue;
}

void RoundedCornerLineBorderBase::copyToBin(      BinaryDataHandler &pMem,
                                  const BitVector         &whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (WidthFieldMask & whichField))
    {
        _sfWidth.copyToBin(pMem);
    }

    if(FieldBits::NoField != (ColorFieldMask & whichField))
    {
        _sfColor.copyToBin(pMem);
    }

    if(FieldBits::NoField != (CornerRadiusFieldMask & whichField))
    {
        _sfCornerRadius.copyToBin(pMem);
    }


}

void RoundedCornerLineBorderBase::copyFromBin(      BinaryDataHandler &pMem,
                                    const BitVector    &whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (WidthFieldMask & whichField))
    {
        _sfWidth.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (ColorFieldMask & whichField))
    {
        _sfColor.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (CornerRadiusFieldMask & whichField))
    {
        _sfCornerRadius.copyFromBin(pMem);
    }


}

#if !defined(OSG_FIXED_MFIELDSYNC)
void RoundedCornerLineBorderBase::executeSyncImpl(      RoundedCornerLineBorderBase *pOther,
                                        const BitVector         &whichField)
{

    Inherited::executeSyncImpl(pOther, whichField);

    if(FieldBits::NoField != (WidthFieldMask & whichField))
        _sfWidth.syncWith(pOther->_sfWidth);

    if(FieldBits::NoField != (ColorFieldMask & whichField))
        _sfColor.syncWith(pOther->_sfColor);

    if(FieldBits::NoField != (CornerRadiusFieldMask & whichField))
        _sfCornerRadius.syncWith(pOther->_sfCornerRadius);


}
#else
void RoundedCornerLineBorderBase::executeSyncImpl(      RoundedCornerLineBorderBase *pOther,
                                        const BitVector         &whichField,
                                        const SyncInfo          &sInfo      )
{

    Inherited::executeSyncImpl(pOther, whichField, sInfo);

    if(FieldBits::NoField != (WidthFieldMask & whichField))
        _sfWidth.syncWith(pOther->_sfWidth);

    if(FieldBits::NoField != (ColorFieldMask & whichField))
        _sfColor.syncWith(pOther->_sfColor);

    if(FieldBits::NoField != (CornerRadiusFieldMask & whichField))
        _sfCornerRadius.syncWith(pOther->_sfCornerRadius);



}

void RoundedCornerLineBorderBase::execBeginEditImpl (const BitVector &whichField, 
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
DataType FieldDataTraits<RoundedCornerLineBorderPtr>::_type("RoundedCornerLineBorderPtr", "BorderPtr");
#endif

OSG_DLLEXPORT_SFIELD_DEF1(RoundedCornerLineBorderPtr, OSG_USERINTERFACELIB_DLLTMPLMAPPING);
OSG_DLLEXPORT_MFIELD_DEF1(RoundedCornerLineBorderPtr, OSG_USERINTERFACELIB_DLLTMPLMAPPING);


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
    static Char8 cvsid_cpp       [] = "@(#)$Id: FCBaseTemplate_cpp.h,v 1.47 2006/03/17 17:03:19 pdaehne Exp $";
    static Char8 cvsid_hpp       [] = OSGROUNDEDCORNERLINEBORDERBASE_HEADER_CVSID;
    static Char8 cvsid_inl       [] = OSGROUNDEDCORNERLINEBORDERBASE_INLINE_CVSID;

    static Char8 cvsid_fields_hpp[] = OSGROUNDEDCORNERLINEBORDERFIELDS_HEADER_CVSID;
}

OSG_END_NAMESPACE
