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
 **     class DefaultListComponentGenerator!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILEDEFAULTLISTCOMPONENTGENERATORINST

#include <stdlib.h>
#include <stdio.h>

#include <OpenSG/OSGConfig.h>

#include "OSGDefaultListComponentGeneratorBase.h"
#include "OSGDefaultListComponentGenerator.h"


OSG_BEGIN_NAMESPACE

const OSG::BitVector  DefaultListComponentGeneratorBase::DrawObjectPrototypeFieldMask = 
    (TypeTraits<BitVector>::One << DefaultListComponentGeneratorBase::DrawObjectPrototypeFieldId);

const OSG::BitVector  DefaultListComponentGeneratorBase::SelectedBackgroundFieldMask = 
    (TypeTraits<BitVector>::One << DefaultListComponentGeneratorBase::SelectedBackgroundFieldId);

const OSG::BitVector  DefaultListComponentGeneratorBase::FocusedBackgroundFieldMask = 
    (TypeTraits<BitVector>::One << DefaultListComponentGeneratorBase::FocusedBackgroundFieldId);

const OSG::BitVector  DefaultListComponentGeneratorBase::SelectedBorderFieldMask = 
    (TypeTraits<BitVector>::One << DefaultListComponentGeneratorBase::SelectedBorderFieldId);

const OSG::BitVector  DefaultListComponentGeneratorBase::FocusedBorderFieldMask = 
    (TypeTraits<BitVector>::One << DefaultListComponentGeneratorBase::FocusedBorderFieldId);

const OSG::BitVector  DefaultListComponentGeneratorBase::SelectedTextColorFieldMask = 
    (TypeTraits<BitVector>::One << DefaultListComponentGeneratorBase::SelectedTextColorFieldId);

const OSG::BitVector  DefaultListComponentGeneratorBase::FocusedTextColorFieldMask = 
    (TypeTraits<BitVector>::One << DefaultListComponentGeneratorBase::FocusedTextColorFieldId);

const OSG::BitVector  DefaultListComponentGeneratorBase::FocusedTextColorHasPriorityFieldMask = 
    (TypeTraits<BitVector>::One << DefaultListComponentGeneratorBase::FocusedTextColorHasPriorityFieldId);

const OSG::BitVector  DefaultListComponentGeneratorBase::FocusedBorderHasPriorityFieldMask = 
    (TypeTraits<BitVector>::One << DefaultListComponentGeneratorBase::FocusedBorderHasPriorityFieldId);

const OSG::BitVector  DefaultListComponentGeneratorBase::FocusedBackgroundHasPriorityFieldMask = 
    (TypeTraits<BitVector>::One << DefaultListComponentGeneratorBase::FocusedBackgroundHasPriorityFieldId);

const OSG::BitVector DefaultListComponentGeneratorBase::MTInfluenceMask = 
    (Inherited::MTInfluenceMask) | 
    (static_cast<BitVector>(0x0) << Inherited::NextFieldId); 


// Field descriptions

/*! \var ComponentPtr    DefaultListComponentGeneratorBase::_sfDrawObjectPrototype
    
*/
/*! \var UIBackgroundPtr DefaultListComponentGeneratorBase::_sfSelectedBackground
    
*/
/*! \var UIBackgroundPtr DefaultListComponentGeneratorBase::_sfFocusedBackground
    
*/
/*! \var BorderPtr       DefaultListComponentGeneratorBase::_sfSelectedBorder
    
*/
/*! \var BorderPtr       DefaultListComponentGeneratorBase::_sfFocusedBorder
    
*/
/*! \var Color4f         DefaultListComponentGeneratorBase::_sfSelectedTextColor
    
*/
/*! \var Color4f         DefaultListComponentGeneratorBase::_sfFocusedTextColor
    
*/
/*! \var bool            DefaultListComponentGeneratorBase::_sfFocusedTextColorHasPriority
    
*/
/*! \var bool            DefaultListComponentGeneratorBase::_sfFocusedBorderHasPriority
    
*/
/*! \var bool            DefaultListComponentGeneratorBase::_sfFocusedBackgroundHasPriority
    
*/

//! DefaultListComponentGenerator description

FieldDescription *DefaultListComponentGeneratorBase::_desc[] = 
{
    new FieldDescription(SFComponentPtr::getClassType(), 
                     "DrawObjectPrototype", 
                     DrawObjectPrototypeFieldId, DrawObjectPrototypeFieldMask,
                     false,
                     (FieldAccessMethod) &DefaultListComponentGeneratorBase::getSFDrawObjectPrototype),
    new FieldDescription(SFUIBackgroundPtr::getClassType(), 
                     "SelectedBackground", 
                     SelectedBackgroundFieldId, SelectedBackgroundFieldMask,
                     false,
                     (FieldAccessMethod) &DefaultListComponentGeneratorBase::getSFSelectedBackground),
    new FieldDescription(SFUIBackgroundPtr::getClassType(), 
                     "FocusedBackground", 
                     FocusedBackgroundFieldId, FocusedBackgroundFieldMask,
                     false,
                     (FieldAccessMethod) &DefaultListComponentGeneratorBase::getSFFocusedBackground),
    new FieldDescription(SFBorderPtr::getClassType(), 
                     "SelectedBorder", 
                     SelectedBorderFieldId, SelectedBorderFieldMask,
                     false,
                     (FieldAccessMethod) &DefaultListComponentGeneratorBase::getSFSelectedBorder),
    new FieldDescription(SFBorderPtr::getClassType(), 
                     "FocusedBorder", 
                     FocusedBorderFieldId, FocusedBorderFieldMask,
                     false,
                     (FieldAccessMethod) &DefaultListComponentGeneratorBase::getSFFocusedBorder),
    new FieldDescription(SFColor4f::getClassType(), 
                     "SelectedTextColor", 
                     SelectedTextColorFieldId, SelectedTextColorFieldMask,
                     false,
                     (FieldAccessMethod) &DefaultListComponentGeneratorBase::getSFSelectedTextColor),
    new FieldDescription(SFColor4f::getClassType(), 
                     "FocusedTextColor", 
                     FocusedTextColorFieldId, FocusedTextColorFieldMask,
                     false,
                     (FieldAccessMethod) &DefaultListComponentGeneratorBase::getSFFocusedTextColor),
    new FieldDescription(SFBool::getClassType(), 
                     "FocusedTextColorHasPriority", 
                     FocusedTextColorHasPriorityFieldId, FocusedTextColorHasPriorityFieldMask,
                     false,
                     (FieldAccessMethod) &DefaultListComponentGeneratorBase::getSFFocusedTextColorHasPriority),
    new FieldDescription(SFBool::getClassType(), 
                     "FocusedBorderHasPriority", 
                     FocusedBorderHasPriorityFieldId, FocusedBorderHasPriorityFieldMask,
                     false,
                     (FieldAccessMethod) &DefaultListComponentGeneratorBase::getSFFocusedBorderHasPriority),
    new FieldDescription(SFBool::getClassType(), 
                     "FocusedBackgroundHasPriority", 
                     FocusedBackgroundHasPriorityFieldId, FocusedBackgroundHasPriorityFieldMask,
                     false,
                     (FieldAccessMethod) &DefaultListComponentGeneratorBase::getSFFocusedBackgroundHasPriority)
};


FieldContainerType DefaultListComponentGeneratorBase::_type(
    "DefaultListComponentGenerator",
    "ListComponentGenerator",
    NULL,
    (PrototypeCreateF) &DefaultListComponentGeneratorBase::createEmpty,
    DefaultListComponentGenerator::initMethod,
    _desc,
    sizeof(_desc));

//OSG_FIELD_CONTAINER_DEF(DefaultListComponentGeneratorBase, DefaultListComponentGeneratorPtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType &DefaultListComponentGeneratorBase::getType(void) 
{
    return _type; 
} 

const FieldContainerType &DefaultListComponentGeneratorBase::getType(void) const 
{
    return _type;
} 


FieldContainerPtr DefaultListComponentGeneratorBase::shallowCopy(void) const 
{ 
    DefaultListComponentGeneratorPtr returnValue; 

    newPtr(returnValue, dynamic_cast<const DefaultListComponentGenerator *>(this)); 

    return returnValue; 
}

UInt32 DefaultListComponentGeneratorBase::getContainerSize(void) const 
{ 
    return sizeof(DefaultListComponentGenerator); 
}


#if !defined(OSG_FIXED_MFIELDSYNC)
void DefaultListComponentGeneratorBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField)
{
    this->executeSyncImpl((DefaultListComponentGeneratorBase *) &other, whichField);
}
#else
void DefaultListComponentGeneratorBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField,                                    const SyncInfo       &sInfo     )
{
    this->executeSyncImpl((DefaultListComponentGeneratorBase *) &other, whichField, sInfo);
}
void DefaultListComponentGeneratorBase::execBeginEdit(const BitVector &whichField, 
                                            UInt32     uiAspect,
                                            UInt32     uiContainerSize) 
{
    this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void DefaultListComponentGeneratorBase::onDestroyAspect(UInt32 uiId, UInt32 uiAspect)
{
    Inherited::onDestroyAspect(uiId, uiAspect);

}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning (disable : 383)
#endif

DefaultListComponentGeneratorBase::DefaultListComponentGeneratorBase(void) :
    _sfDrawObjectPrototype    (ComponentPtr(NullFC)), 
    _sfSelectedBackground     (UIBackgroundPtr(NullFC)), 
    _sfFocusedBackground      (UIBackgroundPtr(NullFC)), 
    _sfSelectedBorder         (BorderPtr(NullFC)), 
    _sfFocusedBorder          (BorderPtr(NullFC)), 
    _sfSelectedTextColor      (Color4f(0.0,0.0,0.0,1.0)), 
    _sfFocusedTextColor       (Color4f(0.0,0.0,0.0,1.0)), 
    _sfFocusedTextColorHasPriority(bool(true)), 
    _sfFocusedBorderHasPriority(bool(true)), 
    _sfFocusedBackgroundHasPriority(bool(true)), 
    Inherited() 
{
}

#ifdef OSG_WIN32_ICL
#pragma warning (default : 383)
#endif

DefaultListComponentGeneratorBase::DefaultListComponentGeneratorBase(const DefaultListComponentGeneratorBase &source) :
    _sfDrawObjectPrototype    (source._sfDrawObjectPrototype    ), 
    _sfSelectedBackground     (source._sfSelectedBackground     ), 
    _sfFocusedBackground      (source._sfFocusedBackground      ), 
    _sfSelectedBorder         (source._sfSelectedBorder         ), 
    _sfFocusedBorder          (source._sfFocusedBorder          ), 
    _sfSelectedTextColor      (source._sfSelectedTextColor      ), 
    _sfFocusedTextColor       (source._sfFocusedTextColor       ), 
    _sfFocusedTextColorHasPriority(source._sfFocusedTextColorHasPriority), 
    _sfFocusedBorderHasPriority(source._sfFocusedBorderHasPriority), 
    _sfFocusedBackgroundHasPriority(source._sfFocusedBackgroundHasPriority), 
    Inherited                 (source)
{
}

/*-------------------------- destructors ----------------------------------*/

DefaultListComponentGeneratorBase::~DefaultListComponentGeneratorBase(void)
{
}

/*------------------------------ access -----------------------------------*/

UInt32 DefaultListComponentGeneratorBase::getBinSize(const BitVector &whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (DrawObjectPrototypeFieldMask & whichField))
    {
        returnValue += _sfDrawObjectPrototype.getBinSize();
    }

    if(FieldBits::NoField != (SelectedBackgroundFieldMask & whichField))
    {
        returnValue += _sfSelectedBackground.getBinSize();
    }

    if(FieldBits::NoField != (FocusedBackgroundFieldMask & whichField))
    {
        returnValue += _sfFocusedBackground.getBinSize();
    }

    if(FieldBits::NoField != (SelectedBorderFieldMask & whichField))
    {
        returnValue += _sfSelectedBorder.getBinSize();
    }

    if(FieldBits::NoField != (FocusedBorderFieldMask & whichField))
    {
        returnValue += _sfFocusedBorder.getBinSize();
    }

    if(FieldBits::NoField != (SelectedTextColorFieldMask & whichField))
    {
        returnValue += _sfSelectedTextColor.getBinSize();
    }

    if(FieldBits::NoField != (FocusedTextColorFieldMask & whichField))
    {
        returnValue += _sfFocusedTextColor.getBinSize();
    }

    if(FieldBits::NoField != (FocusedTextColorHasPriorityFieldMask & whichField))
    {
        returnValue += _sfFocusedTextColorHasPriority.getBinSize();
    }

    if(FieldBits::NoField != (FocusedBorderHasPriorityFieldMask & whichField))
    {
        returnValue += _sfFocusedBorderHasPriority.getBinSize();
    }

    if(FieldBits::NoField != (FocusedBackgroundHasPriorityFieldMask & whichField))
    {
        returnValue += _sfFocusedBackgroundHasPriority.getBinSize();
    }


    return returnValue;
}

void DefaultListComponentGeneratorBase::copyToBin(      BinaryDataHandler &pMem,
                                  const BitVector         &whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (DrawObjectPrototypeFieldMask & whichField))
    {
        _sfDrawObjectPrototype.copyToBin(pMem);
    }

    if(FieldBits::NoField != (SelectedBackgroundFieldMask & whichField))
    {
        _sfSelectedBackground.copyToBin(pMem);
    }

    if(FieldBits::NoField != (FocusedBackgroundFieldMask & whichField))
    {
        _sfFocusedBackground.copyToBin(pMem);
    }

    if(FieldBits::NoField != (SelectedBorderFieldMask & whichField))
    {
        _sfSelectedBorder.copyToBin(pMem);
    }

    if(FieldBits::NoField != (FocusedBorderFieldMask & whichField))
    {
        _sfFocusedBorder.copyToBin(pMem);
    }

    if(FieldBits::NoField != (SelectedTextColorFieldMask & whichField))
    {
        _sfSelectedTextColor.copyToBin(pMem);
    }

    if(FieldBits::NoField != (FocusedTextColorFieldMask & whichField))
    {
        _sfFocusedTextColor.copyToBin(pMem);
    }

    if(FieldBits::NoField != (FocusedTextColorHasPriorityFieldMask & whichField))
    {
        _sfFocusedTextColorHasPriority.copyToBin(pMem);
    }

    if(FieldBits::NoField != (FocusedBorderHasPriorityFieldMask & whichField))
    {
        _sfFocusedBorderHasPriority.copyToBin(pMem);
    }

    if(FieldBits::NoField != (FocusedBackgroundHasPriorityFieldMask & whichField))
    {
        _sfFocusedBackgroundHasPriority.copyToBin(pMem);
    }


}

void DefaultListComponentGeneratorBase::copyFromBin(      BinaryDataHandler &pMem,
                                    const BitVector    &whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (DrawObjectPrototypeFieldMask & whichField))
    {
        _sfDrawObjectPrototype.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (SelectedBackgroundFieldMask & whichField))
    {
        _sfSelectedBackground.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (FocusedBackgroundFieldMask & whichField))
    {
        _sfFocusedBackground.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (SelectedBorderFieldMask & whichField))
    {
        _sfSelectedBorder.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (FocusedBorderFieldMask & whichField))
    {
        _sfFocusedBorder.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (SelectedTextColorFieldMask & whichField))
    {
        _sfSelectedTextColor.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (FocusedTextColorFieldMask & whichField))
    {
        _sfFocusedTextColor.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (FocusedTextColorHasPriorityFieldMask & whichField))
    {
        _sfFocusedTextColorHasPriority.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (FocusedBorderHasPriorityFieldMask & whichField))
    {
        _sfFocusedBorderHasPriority.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (FocusedBackgroundHasPriorityFieldMask & whichField))
    {
        _sfFocusedBackgroundHasPriority.copyFromBin(pMem);
    }


}

#if !defined(OSG_FIXED_MFIELDSYNC)
void DefaultListComponentGeneratorBase::executeSyncImpl(      DefaultListComponentGeneratorBase *pOther,
                                        const BitVector         &whichField)
{

    Inherited::executeSyncImpl(pOther, whichField);

    if(FieldBits::NoField != (DrawObjectPrototypeFieldMask & whichField))
        _sfDrawObjectPrototype.syncWith(pOther->_sfDrawObjectPrototype);

    if(FieldBits::NoField != (SelectedBackgroundFieldMask & whichField))
        _sfSelectedBackground.syncWith(pOther->_sfSelectedBackground);

    if(FieldBits::NoField != (FocusedBackgroundFieldMask & whichField))
        _sfFocusedBackground.syncWith(pOther->_sfFocusedBackground);

    if(FieldBits::NoField != (SelectedBorderFieldMask & whichField))
        _sfSelectedBorder.syncWith(pOther->_sfSelectedBorder);

    if(FieldBits::NoField != (FocusedBorderFieldMask & whichField))
        _sfFocusedBorder.syncWith(pOther->_sfFocusedBorder);

    if(FieldBits::NoField != (SelectedTextColorFieldMask & whichField))
        _sfSelectedTextColor.syncWith(pOther->_sfSelectedTextColor);

    if(FieldBits::NoField != (FocusedTextColorFieldMask & whichField))
        _sfFocusedTextColor.syncWith(pOther->_sfFocusedTextColor);

    if(FieldBits::NoField != (FocusedTextColorHasPriorityFieldMask & whichField))
        _sfFocusedTextColorHasPriority.syncWith(pOther->_sfFocusedTextColorHasPriority);

    if(FieldBits::NoField != (FocusedBorderHasPriorityFieldMask & whichField))
        _sfFocusedBorderHasPriority.syncWith(pOther->_sfFocusedBorderHasPriority);

    if(FieldBits::NoField != (FocusedBackgroundHasPriorityFieldMask & whichField))
        _sfFocusedBackgroundHasPriority.syncWith(pOther->_sfFocusedBackgroundHasPriority);


}
#else
void DefaultListComponentGeneratorBase::executeSyncImpl(      DefaultListComponentGeneratorBase *pOther,
                                        const BitVector         &whichField,
                                        const SyncInfo          &sInfo      )
{

    Inherited::executeSyncImpl(pOther, whichField, sInfo);

    if(FieldBits::NoField != (DrawObjectPrototypeFieldMask & whichField))
        _sfDrawObjectPrototype.syncWith(pOther->_sfDrawObjectPrototype);

    if(FieldBits::NoField != (SelectedBackgroundFieldMask & whichField))
        _sfSelectedBackground.syncWith(pOther->_sfSelectedBackground);

    if(FieldBits::NoField != (FocusedBackgroundFieldMask & whichField))
        _sfFocusedBackground.syncWith(pOther->_sfFocusedBackground);

    if(FieldBits::NoField != (SelectedBorderFieldMask & whichField))
        _sfSelectedBorder.syncWith(pOther->_sfSelectedBorder);

    if(FieldBits::NoField != (FocusedBorderFieldMask & whichField))
        _sfFocusedBorder.syncWith(pOther->_sfFocusedBorder);

    if(FieldBits::NoField != (SelectedTextColorFieldMask & whichField))
        _sfSelectedTextColor.syncWith(pOther->_sfSelectedTextColor);

    if(FieldBits::NoField != (FocusedTextColorFieldMask & whichField))
        _sfFocusedTextColor.syncWith(pOther->_sfFocusedTextColor);

    if(FieldBits::NoField != (FocusedTextColorHasPriorityFieldMask & whichField))
        _sfFocusedTextColorHasPriority.syncWith(pOther->_sfFocusedTextColorHasPriority);

    if(FieldBits::NoField != (FocusedBorderHasPriorityFieldMask & whichField))
        _sfFocusedBorderHasPriority.syncWith(pOther->_sfFocusedBorderHasPriority);

    if(FieldBits::NoField != (FocusedBackgroundHasPriorityFieldMask & whichField))
        _sfFocusedBackgroundHasPriority.syncWith(pOther->_sfFocusedBackgroundHasPriority);



}

void DefaultListComponentGeneratorBase::execBeginEditImpl (const BitVector &whichField, 
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
DataType FieldDataTraits<DefaultListComponentGeneratorPtr>::_type("DefaultListComponentGeneratorPtr", "ListComponentGeneratorPtr");
#endif

OSG_DLLEXPORT_SFIELD_DEF1(DefaultListComponentGeneratorPtr, OSG_USERINTERFACELIB_DLLTMPLMAPPING);
OSG_DLLEXPORT_MFIELD_DEF1(DefaultListComponentGeneratorPtr, OSG_USERINTERFACELIB_DLLTMPLMAPPING);


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
    static Char8 cvsid_hpp       [] = OSGDEFAULTLISTCOMPONENTGENERATORBASE_HEADER_CVSID;
    static Char8 cvsid_inl       [] = OSGDEFAULTLISTCOMPONENTGENERATORBASE_INLINE_CVSID;

    static Char8 cvsid_fields_hpp[] = OSGDEFAULTLISTCOMPONENTGENERATORFIELDS_HEADER_CVSID;
}

OSG_END_NAMESPACE

