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
 **     class UIRectangleMouseTransformFunctor!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILEUIRECTANGLEMOUSETRANSFORMFUNCTORINST

#include <stdlib.h>
#include <stdio.h>

#include <OpenSG/OSGConfig.h>

#include "OSGUIRectangleMouseTransformFunctorBase.h"
#include "OSGUIRectangleMouseTransformFunctor.h"


OSG_BEGIN_NAMESPACE

const OSG::BitVector  UIRectangleMouseTransformFunctorBase::ParentFieldMask = 
    (TypeTraits<BitVector>::One << UIRectangleMouseTransformFunctorBase::ParentFieldId);

const OSG::BitVector UIRectangleMouseTransformFunctorBase::MTInfluenceMask = 
    (Inherited::MTInfluenceMask) | 
    (static_cast<BitVector>(0x0) << Inherited::NextFieldId); 


// Field descriptions

/*! \var UIRectanglePtr  UIRectangleMouseTransformFunctorBase::_sfParent
    
*/

//! UIRectangleMouseTransformFunctor description

FieldDescription *UIRectangleMouseTransformFunctorBase::_desc[] = 
{
    new FieldDescription(SFUIRectanglePtr::getClassType(), 
                     "Parent", 
                     ParentFieldId, ParentFieldMask,
                     false,
                     (FieldAccessMethod) &UIRectangleMouseTransformFunctorBase::getSFParent)
};


FieldContainerType UIRectangleMouseTransformFunctorBase::_type(
    "UIRectangleMouseTransformFunctor",
    "UIDrawingSurfaceMouseTransformFunctor",
    NULL,
    (PrototypeCreateF) &UIRectangleMouseTransformFunctorBase::createEmpty,
    UIRectangleMouseTransformFunctor::initMethod,
    _desc,
    sizeof(_desc));

//OSG_FIELD_CONTAINER_DEF(UIRectangleMouseTransformFunctorBase, UIRectangleMouseTransformFunctorPtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType &UIRectangleMouseTransformFunctorBase::getType(void) 
{
    return _type; 
} 

const FieldContainerType &UIRectangleMouseTransformFunctorBase::getType(void) const 
{
    return _type;
} 


FieldContainerPtr UIRectangleMouseTransformFunctorBase::shallowCopy(void) const 
{ 
    UIRectangleMouseTransformFunctorPtr returnValue; 

    newPtr(returnValue, dynamic_cast<const UIRectangleMouseTransformFunctor *>(this)); 

    return returnValue; 
}

UInt32 UIRectangleMouseTransformFunctorBase::getContainerSize(void) const 
{ 
    return sizeof(UIRectangleMouseTransformFunctor); 
}


#if !defined(OSG_FIXED_MFIELDSYNC)
void UIRectangleMouseTransformFunctorBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField)
{
    this->executeSyncImpl((UIRectangleMouseTransformFunctorBase *) &other, whichField);
}
#else
void UIRectangleMouseTransformFunctorBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField,                                    const SyncInfo       &sInfo     )
{
    this->executeSyncImpl((UIRectangleMouseTransformFunctorBase *) &other, whichField, sInfo);
}
void UIRectangleMouseTransformFunctorBase::execBeginEdit(const BitVector &whichField, 
                                            UInt32     uiAspect,
                                            UInt32     uiContainerSize) 
{
    this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void UIRectangleMouseTransformFunctorBase::onDestroyAspect(UInt32 uiId, UInt32 uiAspect)
{
    Inherited::onDestroyAspect(uiId, uiAspect);

}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning (disable : 383)
#endif

UIRectangleMouseTransformFunctorBase::UIRectangleMouseTransformFunctorBase(void) :
    _sfParent                 (UIRectanglePtr(NullFC)), 
    Inherited() 
{
}

#ifdef OSG_WIN32_ICL
#pragma warning (default : 383)
#endif

UIRectangleMouseTransformFunctorBase::UIRectangleMouseTransformFunctorBase(const UIRectangleMouseTransformFunctorBase &source) :
    _sfParent                 (source._sfParent                 ), 
    Inherited                 (source)
{
}

/*-------------------------- destructors ----------------------------------*/

UIRectangleMouseTransformFunctorBase::~UIRectangleMouseTransformFunctorBase(void)
{
}

/*------------------------------ access -----------------------------------*/

UInt32 UIRectangleMouseTransformFunctorBase::getBinSize(const BitVector &whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (ParentFieldMask & whichField))
    {
        returnValue += _sfParent.getBinSize();
    }


    return returnValue;
}

void UIRectangleMouseTransformFunctorBase::copyToBin(      BinaryDataHandler &pMem,
                                  const BitVector         &whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (ParentFieldMask & whichField))
    {
        _sfParent.copyToBin(pMem);
    }


}

void UIRectangleMouseTransformFunctorBase::copyFromBin(      BinaryDataHandler &pMem,
                                    const BitVector    &whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (ParentFieldMask & whichField))
    {
        _sfParent.copyFromBin(pMem);
    }


}

#if !defined(OSG_FIXED_MFIELDSYNC)
void UIRectangleMouseTransformFunctorBase::executeSyncImpl(      UIRectangleMouseTransformFunctorBase *pOther,
                                        const BitVector         &whichField)
{

    Inherited::executeSyncImpl(pOther, whichField);

    if(FieldBits::NoField != (ParentFieldMask & whichField))
        _sfParent.syncWith(pOther->_sfParent);


}
#else
void UIRectangleMouseTransformFunctorBase::executeSyncImpl(      UIRectangleMouseTransformFunctorBase *pOther,
                                        const BitVector         &whichField,
                                        const SyncInfo          &sInfo      )
{

    Inherited::executeSyncImpl(pOther, whichField, sInfo);

    if(FieldBits::NoField != (ParentFieldMask & whichField))
        _sfParent.syncWith(pOther->_sfParent);



}

void UIRectangleMouseTransformFunctorBase::execBeginEditImpl (const BitVector &whichField, 
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
DataType FieldDataTraits<UIRectangleMouseTransformFunctorPtr>::_type("UIRectangleMouseTransformFunctorPtr", "UIDrawingSurfaceMouseTransformFunctorPtr");
#endif

OSG_DLLEXPORT_SFIELD_DEF1(UIRectangleMouseTransformFunctorPtr, OSG_USERINTERFACELIB_DLLTMPLMAPPING);
OSG_DLLEXPORT_MFIELD_DEF1(UIRectangleMouseTransformFunctorPtr, OSG_USERINTERFACELIB_DLLTMPLMAPPING);


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
    static Char8 cvsid_hpp       [] = OSGUIRECTANGLEMOUSETRANSFORMFUNCTORBASE_HEADER_CVSID;
    static Char8 cvsid_inl       [] = OSGUIRECTANGLEMOUSETRANSFORMFUNCTORBASE_INLINE_CVSID;

    static Char8 cvsid_fields_hpp[] = OSGUIRECTANGLEMOUSETRANSFORMFUNCTORFIELDS_HEADER_CVSID;
}

OSG_END_NAMESPACE

