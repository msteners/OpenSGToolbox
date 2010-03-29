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
 **     class TreeModelEvent!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include "OSGConfig.h"




#include "OSGTreeModelEventBase.h"
#include "OSGTreeModelEvent.h"

#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::TreeModelEvent
    
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var UInt32          TreeModelEventBase::_mfChildIndices
    
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<TreeModelEvent *>::_type("TreeModelEventPtr", "EventPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(TreeModelEvent *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           TreeModelEvent *,
                           0);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           TreeModelEvent *,
                           0);

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void TreeModelEventBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new MFUInt32::Description(
        MFUInt32::getClassType(),
        "ChildIndices",
        "",
        ChildIndicesFieldId, ChildIndicesFieldMask,
        false,
        (Field::MFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&TreeModelEvent::editHandleChildIndices),
        static_cast<FieldGetMethodSig >(&TreeModelEvent::getHandleChildIndices));

    oType.addInitialDesc(pDesc);
}


TreeModelEventBase::TypeObject TreeModelEventBase::_type(
    TreeModelEventBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    reinterpret_cast<PrototypeCreateF>(&TreeModelEventBase::createEmptyLocal),
    TreeModelEvent::initMethod,
    TreeModelEvent::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&TreeModelEvent::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"TreeModelEvent\"\n"
    "\tparent=\"Event\"\n"
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
    "\t<Field\n"
    "\t\tname=\"ChildIndices\"\n"
    "\t\ttype=\"UInt32\"\n"
    "        category=\"data\"\n"
    "\t\tcardinality=\"multi\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"protected\"\n"
    "\t\tdefaultValue=\"0\"\n"
    "        publicRead=\"true\"\n"
    "\t>\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    ""
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &TreeModelEventBase::getType(void)
{
    return _type;
}

const FieldContainerType &TreeModelEventBase::getType(void) const
{
    return _type;
}

UInt32 TreeModelEventBase::getContainerSize(void) const
{
    return sizeof(TreeModelEvent);
}

/*------------------------- decorator get ------------------------------*/


MFUInt32 *TreeModelEventBase::editMFChildIndices(void)
{
    editMField(ChildIndicesFieldMask, _mfChildIndices);

    return &_mfChildIndices;
}

const MFUInt32 *TreeModelEventBase::getMFChildIndices(void) const
{
    return &_mfChildIndices;
}






/*------------------------------ access -----------------------------------*/

UInt32 TreeModelEventBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (ChildIndicesFieldMask & whichField))
    {
        returnValue += _mfChildIndices.getBinSize();
    }

    return returnValue;
}

void TreeModelEventBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (ChildIndicesFieldMask & whichField))
    {
        _mfChildIndices.copyToBin(pMem);
    }
}

void TreeModelEventBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (ChildIndicesFieldMask & whichField))
    {
        _mfChildIndices.copyFromBin(pMem);
    }
}

//! create a new instance of the class
TreeModelEventTransitPtr TreeModelEventBase::createLocal(BitVector bFlags)
{
    TreeModelEventTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<TreeModelEvent>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
TreeModelEventTransitPtr TreeModelEventBase::createDependent(BitVector bFlags)
{
    TreeModelEventTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<TreeModelEvent>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
TreeModelEventTransitPtr TreeModelEventBase::create(void)
{
    TreeModelEventTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<TreeModelEvent>(tmpPtr);
    }

    return fc;
}

TreeModelEvent *TreeModelEventBase::createEmptyLocal(BitVector bFlags)
{
    TreeModelEvent *returnValue;

    newPtr<TreeModelEvent>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
TreeModelEvent *TreeModelEventBase::createEmpty(void)
{
    TreeModelEvent *returnValue;

    newPtr<TreeModelEvent>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr TreeModelEventBase::shallowCopyLocal(
    BitVector bFlags) const
{
    TreeModelEvent *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const TreeModelEvent *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr TreeModelEventBase::shallowCopyDependent(
    BitVector bFlags) const
{
    TreeModelEvent *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const TreeModelEvent *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr TreeModelEventBase::shallowCopy(void) const
{
    TreeModelEvent *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const TreeModelEvent *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

TreeModelEventBase::TreeModelEventBase(void) :
    Inherited(),
    _mfChildIndices           (UInt32(0))
{
}

TreeModelEventBase::TreeModelEventBase(const TreeModelEventBase &source) :
    Inherited(source),
    _mfChildIndices           (source._mfChildIndices           )
{
}


/*-------------------------- destructors ----------------------------------*/

TreeModelEventBase::~TreeModelEventBase(void)
{
}


GetFieldHandlePtr TreeModelEventBase::getHandleChildIndices    (void) const
{
    MFUInt32::GetHandlePtr returnValue(
        new  MFUInt32::GetHandle(
             &_mfChildIndices,
             this->getType().getFieldDesc(ChildIndicesFieldId),
             const_cast<TreeModelEventBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr TreeModelEventBase::editHandleChildIndices   (void)
{
    MFUInt32::EditHandlePtr returnValue(
        new  MFUInt32::EditHandle(
             &_mfChildIndices,
             this->getType().getFieldDesc(ChildIndicesFieldId),
             this));


    editMField(ChildIndicesFieldMask, _mfChildIndices);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void TreeModelEventBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    TreeModelEvent *pThis = static_cast<TreeModelEvent *>(this);

    pThis->execSync(static_cast<TreeModelEvent *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *TreeModelEventBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    TreeModelEvent *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const TreeModelEvent *>(pRefAspect),
                  dynamic_cast<const TreeModelEvent *>(this));

    return returnValue;
}
#endif

void TreeModelEventBase::resolveLinks(void)
{
    Inherited::resolveLinks();

#ifdef OSG_MT_CPTR_ASPECT
    AspectOffsetStore oOffsets;

    _pAspectStore->fillOffsetArray(oOffsets, this);
#endif

#ifdef OSG_MT_CPTR_ASPECT
    _mfChildIndices.terminateShare(Thread::getCurrentAspect(),
                                      oOffsets);
#endif
}


OSG_END_NAMESPACE
