/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
 *                                                                           *
 *                            www.opensg.org                                 *
 *                                                                           *
 *   contact:  David Kabala (djkabala@gmail.com)                             *
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
 **     class WindowEvent!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include "OSGConfig.h"




#include "OSGWindowEventBase.h"
#include "OSGWindowEvent.h"

#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::WindowEvent
    
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<WindowEvent *>::_type("WindowEventPtr", "EventPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(WindowEvent *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           WindowEvent *,
                           0);


/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void WindowEventBase::classDescInserter(TypeObject &oType)
{
}


WindowEventBase::TypeObject WindowEventBase::_type(
    WindowEventBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    reinterpret_cast<PrototypeCreateF>(&WindowEventBase::createEmptyLocal),
    WindowEvent::initMethod,
    WindowEvent::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&WindowEvent::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"WindowEvent\"\n"
    "\tparent=\"Event\"\n"
    "    library=\"System\"\n"
    "\tpointerfieldtypes=\"single\"\n"
    "\tstructure=\"concrete\"\n"
    "\tsystemcomponent=\"true\"\n"
    "\tparentsystemcomponent=\"true\"\n"
    "\tdecoratable=\"false\"\n"
    "    isNodeCore=\"false\"\n"
    "    authors=\"David Kabala (djkabala@gmail.com)                             \"\n"
    ">\n"
    "</FieldContainer>\n",
    ""
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &WindowEventBase::getType(void)
{
    return _type;
}

const FieldContainerType &WindowEventBase::getType(void) const
{
    return _type;
}

UInt32 WindowEventBase::getContainerSize(void) const
{
    return sizeof(WindowEvent);
}

/*------------------------- decorator get ------------------------------*/






/*------------------------------ access -----------------------------------*/

UInt32 WindowEventBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);


    return returnValue;
}

void WindowEventBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

}

void WindowEventBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

}

//! create a new instance of the class
WindowEventTransitPtr WindowEventBase::createLocal(BitVector bFlags)
{
    WindowEventTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<WindowEvent>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
WindowEventTransitPtr WindowEventBase::createDependent(BitVector bFlags)
{
    WindowEventTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<WindowEvent>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
WindowEventTransitPtr WindowEventBase::create(void)
{
    WindowEventTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<WindowEvent>(tmpPtr);
    }

    return fc;
}

WindowEvent *WindowEventBase::createEmptyLocal(BitVector bFlags)
{
    WindowEvent *returnValue;

    newPtr<WindowEvent>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
WindowEvent *WindowEventBase::createEmpty(void)
{
    WindowEvent *returnValue;

    newPtr<WindowEvent>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr WindowEventBase::shallowCopyLocal(
    BitVector bFlags) const
{
    WindowEvent *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const WindowEvent *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr WindowEventBase::shallowCopyDependent(
    BitVector bFlags) const
{
    WindowEvent *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const WindowEvent *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr WindowEventBase::shallowCopy(void) const
{
    WindowEvent *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const WindowEvent *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

WindowEventBase::WindowEventBase(void) :
    Inherited()
{
}

WindowEventBase::WindowEventBase(const WindowEventBase &source) :
    Inherited(source)
{
}


/*-------------------------- destructors ----------------------------------*/

WindowEventBase::~WindowEventBase(void)
{
}



#ifdef OSG_MT_CPTR_ASPECT
void WindowEventBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    WindowEvent *pThis = static_cast<WindowEvent *>(this);

    pThis->execSync(static_cast<WindowEvent *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *WindowEventBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    WindowEvent *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const WindowEvent *>(pRefAspect),
                  dynamic_cast<const WindowEvent *>(this));

    return returnValue;
}
#endif

void WindowEventBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


OSG_END_NAMESPACE
