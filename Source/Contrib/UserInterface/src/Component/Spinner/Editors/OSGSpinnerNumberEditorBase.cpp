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
 **     class SpinnerNumberEditor!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include "OSGConfig.h"




#include "OSGSpinnerNumberEditorBase.h"
#include "OSGSpinnerNumberEditor.h"

#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::SpinnerNumberEditor
    A UI SpinnerNumberEditor.
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<SpinnerNumberEditor *>::_type("SpinnerNumberEditorPtr", "SpinnerDefaultEditorPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(SpinnerNumberEditor *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           SpinnerNumberEditor *,
                           0);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           SpinnerNumberEditor *,
                           0);

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void SpinnerNumberEditorBase::classDescInserter(TypeObject &oType)
{
}


SpinnerNumberEditorBase::TypeObject SpinnerNumberEditorBase::_type(
    SpinnerNumberEditorBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    reinterpret_cast<PrototypeCreateF>(&SpinnerNumberEditorBase::createEmptyLocal),
    SpinnerNumberEditor::initMethod,
    SpinnerNumberEditor::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&SpinnerNumberEditor::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"SpinnerNumberEditor\"\n"
    "\tparent=\"SpinnerDefaultEditor\"\n"
    "    library=\"ContribUserInterface\"\n"
    "    pointerfieldtypes=\"both\"\n"
    "\tstructure=\"concrete\"\n"
    "    systemcomponent=\"true\"\n"
    "    parentsystemcomponent=\"true\"\n"
    "    decoratable=\"false\"\n"
    "    useLocalIncludes=\"false\"\n"
    "    isNodeCore=\"false\"\n"
    "    authors=\"David Kabala (djkabala@gmail.com)                             \"\n"
    ">\n"
    "A UI SpinnerNumberEditor.\n"
    "</FieldContainer>\n",
    "A UI SpinnerNumberEditor.\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &SpinnerNumberEditorBase::getType(void)
{
    return _type;
}

const FieldContainerType &SpinnerNumberEditorBase::getType(void) const
{
    return _type;
}

UInt32 SpinnerNumberEditorBase::getContainerSize(void) const
{
    return sizeof(SpinnerNumberEditor);
}

/*------------------------- decorator get ------------------------------*/






/*------------------------------ access -----------------------------------*/

UInt32 SpinnerNumberEditorBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);


    return returnValue;
}

void SpinnerNumberEditorBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

}

void SpinnerNumberEditorBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

}

//! create a new instance of the class
SpinnerNumberEditorTransitPtr SpinnerNumberEditorBase::createLocal(BitVector bFlags)
{
    SpinnerNumberEditorTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<SpinnerNumberEditor>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
SpinnerNumberEditorTransitPtr SpinnerNumberEditorBase::createDependent(BitVector bFlags)
{
    SpinnerNumberEditorTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<SpinnerNumberEditor>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
SpinnerNumberEditorTransitPtr SpinnerNumberEditorBase::create(void)
{
    SpinnerNumberEditorTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<SpinnerNumberEditor>(tmpPtr);
    }

    return fc;
}

SpinnerNumberEditor *SpinnerNumberEditorBase::createEmptyLocal(BitVector bFlags)
{
    SpinnerNumberEditor *returnValue;

    newPtr<SpinnerNumberEditor>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
SpinnerNumberEditor *SpinnerNumberEditorBase::createEmpty(void)
{
    SpinnerNumberEditor *returnValue;

    newPtr<SpinnerNumberEditor>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr SpinnerNumberEditorBase::shallowCopyLocal(
    BitVector bFlags) const
{
    SpinnerNumberEditor *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const SpinnerNumberEditor *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr SpinnerNumberEditorBase::shallowCopyDependent(
    BitVector bFlags) const
{
    SpinnerNumberEditor *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const SpinnerNumberEditor *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr SpinnerNumberEditorBase::shallowCopy(void) const
{
    SpinnerNumberEditor *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const SpinnerNumberEditor *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

SpinnerNumberEditorBase::SpinnerNumberEditorBase(void) :
    Inherited()
{
}

SpinnerNumberEditorBase::SpinnerNumberEditorBase(const SpinnerNumberEditorBase &source) :
    Inherited(source)
{
}


/*-------------------------- destructors ----------------------------------*/

SpinnerNumberEditorBase::~SpinnerNumberEditorBase(void)
{
}



#ifdef OSG_MT_CPTR_ASPECT
void SpinnerNumberEditorBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    SpinnerNumberEditor *pThis = static_cast<SpinnerNumberEditor *>(this);

    pThis->execSync(static_cast<SpinnerNumberEditor *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *SpinnerNumberEditorBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    SpinnerNumberEditor *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const SpinnerNumberEditor *>(pRefAspect),
                  dynamic_cast<const SpinnerNumberEditor *>(this));

    return returnValue;
}
#endif

void SpinnerNumberEditorBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


OSG_END_NAMESPACE
