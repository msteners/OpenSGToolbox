/*---------------------------------------------------------------------------*\
 *                     OpenSG ToolBox UserInterface                          *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                         www.vrac.iastate.edu                              *
 *                                                                           *
 *   Authors: David Kabala, Alden Peterson, Lee Zaniewski, Jonathan Flory    *
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
 **     class UIForeground!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILEUIFOREGROUNDINST

#include <stdlib.h>
#include <stdio.h>

#include <OpenSG/OSGConfig.h>

#include "OSGUIForegroundBase.h"
#include "OSGUIForeground.h"

#include <UIDrawingSurface/Foreground/OSGUIForegroundMouseTransformFunctor.h>   // MouseTransformFunctor default header

OSG_BEGIN_NAMESPACE

const OSG::BitVector  UIForegroundBase::DrawingSurfaceFieldMask = 
    (TypeTraits<BitVector>::One << UIForegroundBase::DrawingSurfaceFieldId);

const OSG::BitVector  UIForegroundBase::MouseTransformFunctorFieldMask = 
    (TypeTraits<BitVector>::One << UIForegroundBase::MouseTransformFunctorFieldId);

const OSG::BitVector UIForegroundBase::MTInfluenceMask = 
    (Inherited::MTInfluenceMask) | 
    (static_cast<BitVector>(0x0) << Inherited::NextFieldId); 


// Field descriptions

/*! \var UIDrawingSurfacePtr UIForegroundBase::_sfDrawingSurface
    
*/
/*! \var UIForegroundMouseTransformFunctorPtr UIForegroundBase::_sfMouseTransformFunctor
    
*/

//! UIForeground description

FieldDescription *UIForegroundBase::_desc[] = 
{
    new FieldDescription(SFUIDrawingSurfacePtr::getClassType(), 
                     "DrawingSurface", 
                     DrawingSurfaceFieldId, DrawingSurfaceFieldMask,
                     false,
                     (FieldAccessMethod) &UIForegroundBase::getSFDrawingSurface),
    new FieldDescription(SFUIForegroundMouseTransformFunctorPtr::getClassType(), 
                     "MouseTransformFunctor", 
                     MouseTransformFunctorFieldId, MouseTransformFunctorFieldMask,
                     false,
                     (FieldAccessMethod) &UIForegroundBase::getSFMouseTransformFunctor)
};


FieldContainerType UIForegroundBase::_type(
    "UIForeground",
    "Foreground",
    NULL,
    (PrototypeCreateF) &UIForegroundBase::createEmpty,
    UIForeground::initMethod,
    _desc,
    sizeof(_desc));

//OSG_FIELD_CONTAINER_DEF(UIForegroundBase, UIForegroundPtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType &UIForegroundBase::getType(void) 
{
    return _type; 
} 

const FieldContainerType &UIForegroundBase::getType(void) const 
{
    return _type;
} 


FieldContainerPtr UIForegroundBase::shallowCopy(void) const 
{ 
    UIForegroundPtr returnValue; 

    newPtr(returnValue, dynamic_cast<const UIForeground *>(this)); 

    return returnValue; 
}

UInt32 UIForegroundBase::getContainerSize(void) const 
{ 
    return sizeof(UIForeground); 
}


#if !defined(OSG_FIXED_MFIELDSYNC)
void UIForegroundBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField)
{
    this->executeSyncImpl((UIForegroundBase *) &other, whichField);
}
#else
void UIForegroundBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField,                                    const SyncInfo       &sInfo     )
{
    this->executeSyncImpl((UIForegroundBase *) &other, whichField, sInfo);
}
void UIForegroundBase::execBeginEdit(const BitVector &whichField, 
                                            UInt32     uiAspect,
                                            UInt32     uiContainerSize) 
{
    this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void UIForegroundBase::onDestroyAspect(UInt32 uiId, UInt32 uiAspect)
{
    Inherited::onDestroyAspect(uiId, uiAspect);

}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning (disable : 383)
#endif

UIForegroundBase::UIForegroundBase(void) :
    _sfDrawingSurface         (), 
    _sfMouseTransformFunctor  (UIForegroundMouseTransformFunctorPtr(UIForegroundMouseTransformFunctor::create())), 
    Inherited() 
{
}

#ifdef OSG_WIN32_ICL
#pragma warning (default : 383)
#endif

UIForegroundBase::UIForegroundBase(const UIForegroundBase &source) :
    _sfDrawingSurface         (source._sfDrawingSurface         ), 
    _sfMouseTransformFunctor  (UIForegroundMouseTransformFunctorPtr(UIForegroundMouseTransformFunctor::create())), 
    Inherited                 (source)
{
}

/*-------------------------- destructors ----------------------------------*/

UIForegroundBase::~UIForegroundBase(void)
{
}

/*------------------------------ access -----------------------------------*/

UInt32 UIForegroundBase::getBinSize(const BitVector &whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (DrawingSurfaceFieldMask & whichField))
    {
        returnValue += _sfDrawingSurface.getBinSize();
    }

    if(FieldBits::NoField != (MouseTransformFunctorFieldMask & whichField))
    {
        returnValue += _sfMouseTransformFunctor.getBinSize();
    }


    return returnValue;
}

void UIForegroundBase::copyToBin(      BinaryDataHandler &pMem,
                                  const BitVector         &whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (DrawingSurfaceFieldMask & whichField))
    {
        _sfDrawingSurface.copyToBin(pMem);
    }

    if(FieldBits::NoField != (MouseTransformFunctorFieldMask & whichField))
    {
        _sfMouseTransformFunctor.copyToBin(pMem);
    }


}

void UIForegroundBase::copyFromBin(      BinaryDataHandler &pMem,
                                    const BitVector    &whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (DrawingSurfaceFieldMask & whichField))
    {
        _sfDrawingSurface.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (MouseTransformFunctorFieldMask & whichField))
    {
        _sfMouseTransformFunctor.copyFromBin(pMem);
    }


}

#if !defined(OSG_FIXED_MFIELDSYNC)
void UIForegroundBase::executeSyncImpl(      UIForegroundBase *pOther,
                                        const BitVector         &whichField)
{

    Inherited::executeSyncImpl(pOther, whichField);

    if(FieldBits::NoField != (DrawingSurfaceFieldMask & whichField))
        _sfDrawingSurface.syncWith(pOther->_sfDrawingSurface);

    if(FieldBits::NoField != (MouseTransformFunctorFieldMask & whichField))
        _sfMouseTransformFunctor.syncWith(pOther->_sfMouseTransformFunctor);


}
#else
void UIForegroundBase::executeSyncImpl(      UIForegroundBase *pOther,
                                        const BitVector         &whichField,
                                        const SyncInfo          &sInfo      )
{

    Inherited::executeSyncImpl(pOther, whichField, sInfo);

    if(FieldBits::NoField != (DrawingSurfaceFieldMask & whichField))
        _sfDrawingSurface.syncWith(pOther->_sfDrawingSurface);

    if(FieldBits::NoField != (MouseTransformFunctorFieldMask & whichField))
        _sfMouseTransformFunctor.syncWith(pOther->_sfMouseTransformFunctor);



}

void UIForegroundBase::execBeginEditImpl (const BitVector &whichField, 
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
DataType FieldDataTraits<UIForegroundPtr>::_type("UIForegroundPtr", "ForegroundPtr");
#endif

OSG_DLLEXPORT_SFIELD_DEF1(UIForegroundPtr, OSG_USERINTERFACELIB_DLLTMPLMAPPING);
OSG_DLLEXPORT_MFIELD_DEF1(UIForegroundPtr, OSG_USERINTERFACELIB_DLLTMPLMAPPING);


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
    static Char8 cvsid_hpp       [] = OSGUIFOREGROUNDBASE_HEADER_CVSID;
    static Char8 cvsid_inl       [] = OSGUIFOREGROUNDBASE_INLINE_CVSID;

    static Char8 cvsid_fields_hpp[] = OSGUIFOREGROUNDFIELDS_HEADER_CVSID;
}

OSG_END_NAMESPACE

