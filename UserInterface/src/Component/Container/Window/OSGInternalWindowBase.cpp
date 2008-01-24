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
 **     class InternalWindow!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILEINTERNALWINDOWINST

#include <stdlib.h>
#include <stdio.h>

#include <OpenSG/OSGConfig.h>

#include "OSGInternalWindowBase.h"
#include "OSGInternalWindow.h"


OSG_BEGIN_NAMESPACE

const OSG::BitVector  InternalWindowBase::FocusedComponentFieldMask = 
    (TypeTraits<BitVector>::One << InternalWindowBase::FocusedComponentFieldId);

const OSG::BitVector  InternalWindowBase::ActivePopupMenusFieldMask = 
    (TypeTraits<BitVector>::One << InternalWindowBase::ActivePopupMenusFieldId);

const OSG::BitVector  InternalWindowBase::ActiveToolTipFieldMask = 
    (TypeTraits<BitVector>::One << InternalWindowBase::ActiveToolTipFieldId);

const OSG::BitVector  InternalWindowBase::MenuBarFieldMask = 
    (TypeTraits<BitVector>::One << InternalWindowBase::MenuBarFieldId);

const OSG::BitVector  InternalWindowBase::TitlebarFieldMask = 
    (TypeTraits<BitVector>::One << InternalWindowBase::TitlebarFieldId);

const OSG::BitVector InternalWindowBase::MTInfluenceMask = 
    (Inherited::MTInfluenceMask) | 
    (static_cast<BitVector>(0x0) << Inherited::NextFieldId); 


// Field descriptions

/*! \var ComponentPtr    InternalWindowBase::_sfFocusedComponent
    
*/
/*! \var PopupMenuPtr    InternalWindowBase::_mfActivePopupMenus
    
*/
/*! \var ToolTipPtr      InternalWindowBase::_sfActiveToolTip
    
*/
/*! \var MenuBarPtr      InternalWindowBase::_sfMenuBar
    
*/
/*! \var TitlebarPtr     InternalWindowBase::_sfTitlebar
    
*/

//! InternalWindow description

FieldDescription *InternalWindowBase::_desc[] = 
{
    new FieldDescription(SFComponentPtr::getClassType(), 
                     "FocusedComponent", 
                     FocusedComponentFieldId, FocusedComponentFieldMask,
                     false,
                     (FieldAccessMethod) &InternalWindowBase::getSFFocusedComponent),
    new FieldDescription(MFPopupMenuPtr::getClassType(), 
                     "ActivePopupMenus", 
                     ActivePopupMenusFieldId, ActivePopupMenusFieldMask,
                     true,
                     (FieldAccessMethod) &InternalWindowBase::getMFActivePopupMenus),
    new FieldDescription(SFToolTipPtr::getClassType(), 
                     "ActiveToolTip", 
                     ActiveToolTipFieldId, ActiveToolTipFieldMask,
                     false,
                     (FieldAccessMethod) &InternalWindowBase::getSFActiveToolTip),
    new FieldDescription(SFMenuBarPtr::getClassType(), 
                     "MenuBar", 
                     MenuBarFieldId, MenuBarFieldMask,
                     false,
                     (FieldAccessMethod) &InternalWindowBase::getSFMenuBar),
    new FieldDescription(SFTitlebarPtr::getClassType(), 
                     "Titlebar", 
                     TitlebarFieldId, TitlebarFieldMask,
                     false,
                     (FieldAccessMethod) &InternalWindowBase::getSFTitlebar)
};


FieldContainerType InternalWindowBase::_type(
    "InternalWindow",
    "AbstractWindow",
    NULL,
    (PrototypeCreateF) &InternalWindowBase::createEmpty,
    InternalWindow::initMethod,
    _desc,
    sizeof(_desc));

//OSG_FIELD_CONTAINER_DEF(InternalWindowBase, InternalWindowPtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType &InternalWindowBase::getType(void) 
{
    return _type; 
} 

const FieldContainerType &InternalWindowBase::getType(void) const 
{
    return _type;
} 


FieldContainerPtr InternalWindowBase::shallowCopy(void) const 
{ 
    InternalWindowPtr returnValue; 

    newPtr(returnValue, dynamic_cast<const InternalWindow *>(this)); 

    return returnValue; 
}

UInt32 InternalWindowBase::getContainerSize(void) const 
{ 
    return sizeof(InternalWindow); 
}


#if !defined(OSG_FIXED_MFIELDSYNC)
void InternalWindowBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField)
{
    this->executeSyncImpl((InternalWindowBase *) &other, whichField);
}
#else
void InternalWindowBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField,                                    const SyncInfo       &sInfo     )
{
    this->executeSyncImpl((InternalWindowBase *) &other, whichField, sInfo);
}
void InternalWindowBase::execBeginEdit(const BitVector &whichField, 
                                            UInt32     uiAspect,
                                            UInt32     uiContainerSize) 
{
    this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void InternalWindowBase::onDestroyAspect(UInt32 uiId, UInt32 uiAspect)
{
    Inherited::onDestroyAspect(uiId, uiAspect);

    _mfActivePopupMenus.terminateShare(uiAspect, this->getContainerSize());
}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning (disable : 383)
#endif

InternalWindowBase::InternalWindowBase(void) :
    _sfFocusedComponent       (ComponentPtr(NullFC)), 
    _mfActivePopupMenus       (), 
    _sfActiveToolTip          (ToolTipPtr(NullFC)), 
    _sfMenuBar                (MenuBarPtr(NullFC)), 
    _sfTitlebar               (TitlebarPtr(NullFC)), 
    Inherited() 
{
}

#ifdef OSG_WIN32_ICL
#pragma warning (default : 383)
#endif

InternalWindowBase::InternalWindowBase(const InternalWindowBase &source) :
    _sfFocusedComponent       (source._sfFocusedComponent       ), 
    _mfActivePopupMenus       (source._mfActivePopupMenus       ), 
    _sfActiveToolTip          (source._sfActiveToolTip          ), 
    _sfMenuBar                (source._sfMenuBar                ), 
    _sfTitlebar               (source._sfTitlebar               ), 
    Inherited                 (source)
{
}

/*-------------------------- destructors ----------------------------------*/

InternalWindowBase::~InternalWindowBase(void)
{
}

/*------------------------------ access -----------------------------------*/

UInt32 InternalWindowBase::getBinSize(const BitVector &whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (FocusedComponentFieldMask & whichField))
    {
        returnValue += _sfFocusedComponent.getBinSize();
    }

    if(FieldBits::NoField != (ActivePopupMenusFieldMask & whichField))
    {
        returnValue += _mfActivePopupMenus.getBinSize();
    }

    if(FieldBits::NoField != (ActiveToolTipFieldMask & whichField))
    {
        returnValue += _sfActiveToolTip.getBinSize();
    }

    if(FieldBits::NoField != (MenuBarFieldMask & whichField))
    {
        returnValue += _sfMenuBar.getBinSize();
    }

    if(FieldBits::NoField != (TitlebarFieldMask & whichField))
    {
        returnValue += _sfTitlebar.getBinSize();
    }


    return returnValue;
}

void InternalWindowBase::copyToBin(      BinaryDataHandler &pMem,
                                  const BitVector         &whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (FocusedComponentFieldMask & whichField))
    {
        _sfFocusedComponent.copyToBin(pMem);
    }

    if(FieldBits::NoField != (ActivePopupMenusFieldMask & whichField))
    {
        _mfActivePopupMenus.copyToBin(pMem);
    }

    if(FieldBits::NoField != (ActiveToolTipFieldMask & whichField))
    {
        _sfActiveToolTip.copyToBin(pMem);
    }

    if(FieldBits::NoField != (MenuBarFieldMask & whichField))
    {
        _sfMenuBar.copyToBin(pMem);
    }

    if(FieldBits::NoField != (TitlebarFieldMask & whichField))
    {
        _sfTitlebar.copyToBin(pMem);
    }


}

void InternalWindowBase::copyFromBin(      BinaryDataHandler &pMem,
                                    const BitVector    &whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (FocusedComponentFieldMask & whichField))
    {
        _sfFocusedComponent.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (ActivePopupMenusFieldMask & whichField))
    {
        _mfActivePopupMenus.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (ActiveToolTipFieldMask & whichField))
    {
        _sfActiveToolTip.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (MenuBarFieldMask & whichField))
    {
        _sfMenuBar.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (TitlebarFieldMask & whichField))
    {
        _sfTitlebar.copyFromBin(pMem);
    }


}

#if !defined(OSG_FIXED_MFIELDSYNC)
void InternalWindowBase::executeSyncImpl(      InternalWindowBase *pOther,
                                        const BitVector         &whichField)
{

    Inherited::executeSyncImpl(pOther, whichField);

    if(FieldBits::NoField != (FocusedComponentFieldMask & whichField))
        _sfFocusedComponent.syncWith(pOther->_sfFocusedComponent);

    if(FieldBits::NoField != (ActivePopupMenusFieldMask & whichField))
        _mfActivePopupMenus.syncWith(pOther->_mfActivePopupMenus);

    if(FieldBits::NoField != (ActiveToolTipFieldMask & whichField))
        _sfActiveToolTip.syncWith(pOther->_sfActiveToolTip);

    if(FieldBits::NoField != (MenuBarFieldMask & whichField))
        _sfMenuBar.syncWith(pOther->_sfMenuBar);

    if(FieldBits::NoField != (TitlebarFieldMask & whichField))
        _sfTitlebar.syncWith(pOther->_sfTitlebar);


}
#else
void InternalWindowBase::executeSyncImpl(      InternalWindowBase *pOther,
                                        const BitVector         &whichField,
                                        const SyncInfo          &sInfo      )
{

    Inherited::executeSyncImpl(pOther, whichField, sInfo);

    if(FieldBits::NoField != (FocusedComponentFieldMask & whichField))
        _sfFocusedComponent.syncWith(pOther->_sfFocusedComponent);

    if(FieldBits::NoField != (ActiveToolTipFieldMask & whichField))
        _sfActiveToolTip.syncWith(pOther->_sfActiveToolTip);

    if(FieldBits::NoField != (MenuBarFieldMask & whichField))
        _sfMenuBar.syncWith(pOther->_sfMenuBar);

    if(FieldBits::NoField != (TitlebarFieldMask & whichField))
        _sfTitlebar.syncWith(pOther->_sfTitlebar);


    if(FieldBits::NoField != (ActivePopupMenusFieldMask & whichField))
        _mfActivePopupMenus.syncWith(pOther->_mfActivePopupMenus, sInfo);


}

void InternalWindowBase::execBeginEditImpl (const BitVector &whichField, 
                                                 UInt32     uiAspect,
                                                 UInt32     uiContainerSize)
{
    Inherited::execBeginEditImpl(whichField, uiAspect, uiContainerSize);

    if(FieldBits::NoField != (ActivePopupMenusFieldMask & whichField))
        _mfActivePopupMenus.beginEdit(uiAspect, uiContainerSize);

}
#endif



OSG_END_NAMESPACE

#include <OpenSG/OSGSFieldTypeDef.inl>
#include <OpenSG/OSGMFieldTypeDef.inl>

OSG_BEGIN_NAMESPACE

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldDataTraits<InternalWindowPtr>::_type("InternalWindowPtr", "AbstractWindowPtr");
#endif

OSG_DLLEXPORT_SFIELD_DEF1(InternalWindowPtr, OSG_USERINTERFACELIB_DLLTMPLMAPPING);
OSG_DLLEXPORT_MFIELD_DEF1(InternalWindowPtr, OSG_USERINTERFACELIB_DLLTMPLMAPPING);


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
    static Char8 cvsid_hpp       [] = OSGINTERNALWINDOWBASE_HEADER_CVSID;
    static Char8 cvsid_inl       [] = OSGINTERNALWINDOWBASE_INLINE_CVSID;

    static Char8 cvsid_fields_hpp[] = OSGINTERNALWINDOWFIELDS_HEADER_CVSID;
}

OSG_END_NAMESPACE

