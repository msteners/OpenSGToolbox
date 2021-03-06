/*---------------------------------------------------------------------------*\
 *                          OpenSG ToolBox Input                             *
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
 **     class WindowActivity!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILEWINDOWACTIVITYINST

#include <stdlib.h>
#include <stdio.h>

#include <OpenSG/OSGConfig.h>

#include "OSGWindowActivityBase.h"
#include "OSGWindowActivity.h"


OSG_BEGIN_NAMESPACE

const OSG::BitVector  WindowActivityBase::WindowEventProducerFieldMask = 
    (TypeTraits<BitVector>::One << WindowActivityBase::WindowEventProducerFieldId);

const OSG::BitVector  WindowActivityBase::ActivityTypeFieldMask = 
    (TypeTraits<BitVector>::One << WindowActivityBase::ActivityTypeFieldId);

const OSG::BitVector WindowActivityBase::MTInfluenceMask = 
    (Inherited::MTInfluenceMask) | 
    (static_cast<BitVector>(0x0) << Inherited::NextFieldId); 


// Field descriptions

/*! \var WindowEventProducerPtr WindowActivityBase::_sfWindowEventProducer
    
*/
/*! \var UInt8           WindowActivityBase::_sfActivityType
    
*/

//! WindowActivity description

FieldDescription *WindowActivityBase::_desc[] = 
{
    new FieldDescription(SFWindowEventProducerPtr::getClassType(), 
                     "WindowEventProducer", 
                     WindowEventProducerFieldId, WindowEventProducerFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&WindowActivityBase::editSFWindowEventProducer)),
    new FieldDescription(SFUInt8::getClassType(), 
                     "ActivityType", 
                     ActivityTypeFieldId, ActivityTypeFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&WindowActivityBase::editSFActivityType))
};


FieldContainerType WindowActivityBase::_type(
    "WindowActivity",
    "Activity",
    NULL,
    reinterpret_cast<PrototypeCreateF>(&WindowActivityBase::createEmpty),
    WindowActivity::initMethod,
    _desc,
    sizeof(_desc));

//OSG_FIELD_CONTAINER_DEF(WindowActivityBase, WindowActivityPtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType &WindowActivityBase::getType(void) 
{
    return _type; 
} 

const FieldContainerType &WindowActivityBase::getType(void) const 
{
    return _type;
} 


FieldContainerPtr WindowActivityBase::shallowCopy(void) const 
{ 
    WindowActivityPtr returnValue; 

    newPtr(returnValue, dynamic_cast<const WindowActivity *>(this)); 

    return returnValue; 
}

UInt32 WindowActivityBase::getContainerSize(void) const 
{ 
    return sizeof(WindowActivity); 
}


#if !defined(OSG_FIXED_MFIELDSYNC)
void WindowActivityBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField)
{
    this->executeSyncImpl(static_cast<WindowActivityBase *>(&other),
                          whichField);
}
#else
void WindowActivityBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField,                                    const SyncInfo       &sInfo     )
{
    this->executeSyncImpl((WindowActivityBase *) &other, whichField, sInfo);
}
void WindowActivityBase::execBeginEdit(const BitVector &whichField, 
                                            UInt32     uiAspect,
                                            UInt32     uiContainerSize) 
{
    this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void WindowActivityBase::onDestroyAspect(UInt32 uiId, UInt32 uiAspect)
{
    Inherited::onDestroyAspect(uiId, uiAspect);

}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning (disable : 383)
#endif

WindowActivityBase::WindowActivityBase(void) :
    _sfWindowEventProducer    (WindowEventProducerPtr(NullFC)), 
    _sfActivityType           (UInt8(WindowActivity::WINDOW_CLOSE)), 
    Inherited() 
{
}

#ifdef OSG_WIN32_ICL
#pragma warning (default : 383)
#endif

WindowActivityBase::WindowActivityBase(const WindowActivityBase &source) :
    _sfWindowEventProducer    (source._sfWindowEventProducer    ), 
    _sfActivityType           (source._sfActivityType           ), 
    Inherited                 (source)
{
}

/*-------------------------- destructors ----------------------------------*/

WindowActivityBase::~WindowActivityBase(void)
{
}

/*------------------------------ access -----------------------------------*/

UInt32 WindowActivityBase::getBinSize(const BitVector &whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (WindowEventProducerFieldMask & whichField))
    {
        returnValue += _sfWindowEventProducer.getBinSize();
    }

    if(FieldBits::NoField != (ActivityTypeFieldMask & whichField))
    {
        returnValue += _sfActivityType.getBinSize();
    }


    return returnValue;
}

void WindowActivityBase::copyToBin(      BinaryDataHandler &pMem,
                                  const BitVector         &whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (WindowEventProducerFieldMask & whichField))
    {
        _sfWindowEventProducer.copyToBin(pMem);
    }

    if(FieldBits::NoField != (ActivityTypeFieldMask & whichField))
    {
        _sfActivityType.copyToBin(pMem);
    }


}

void WindowActivityBase::copyFromBin(      BinaryDataHandler &pMem,
                                    const BitVector    &whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (WindowEventProducerFieldMask & whichField))
    {
        _sfWindowEventProducer.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (ActivityTypeFieldMask & whichField))
    {
        _sfActivityType.copyFromBin(pMem);
    }


}

#if !defined(OSG_FIXED_MFIELDSYNC)
void WindowActivityBase::executeSyncImpl(      WindowActivityBase *pOther,
                                        const BitVector         &whichField)
{

    Inherited::executeSyncImpl(pOther, whichField);

    if(FieldBits::NoField != (WindowEventProducerFieldMask & whichField))
        _sfWindowEventProducer.syncWith(pOther->_sfWindowEventProducer);

    if(FieldBits::NoField != (ActivityTypeFieldMask & whichField))
        _sfActivityType.syncWith(pOther->_sfActivityType);


}
#else
void WindowActivityBase::executeSyncImpl(      WindowActivityBase *pOther,
                                        const BitVector         &whichField,
                                        const SyncInfo          &sInfo      )
{

    Inherited::executeSyncImpl(pOther, whichField, sInfo);

    if(FieldBits::NoField != (WindowEventProducerFieldMask & whichField))
        _sfWindowEventProducer.syncWith(pOther->_sfWindowEventProducer);

    if(FieldBits::NoField != (ActivityTypeFieldMask & whichField))
        _sfActivityType.syncWith(pOther->_sfActivityType);



}

void WindowActivityBase::execBeginEditImpl (const BitVector &whichField, 
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
DataType FieldDataTraits<WindowActivityPtr>::_type("WindowActivityPtr", "ActivityPtr");
#endif

OSG_DLLEXPORT_SFIELD_DEF1(WindowActivityPtr, OSG_INPUTLIB_DLLTMPLMAPPING);
OSG_DLLEXPORT_MFIELD_DEF1(WindowActivityPtr, OSG_INPUTLIB_DLLTMPLMAPPING);


OSG_END_NAMESPACE

