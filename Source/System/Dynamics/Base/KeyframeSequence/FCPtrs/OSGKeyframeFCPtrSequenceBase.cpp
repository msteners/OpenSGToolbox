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
 **     class KeyframeFCPtrSequence!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include "OSGConfig.h"



#include "OSGFieldContainer.h"          // Values Class

#include "OSGKeyframeFCPtrSequenceBase.h"
#include "OSGKeyframeFCPtrSequence.h"

#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::KeyframeFCPtrSequence
    KeyframeSequence is the base class of all Point Keyframe Sequences.
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var FieldContainer * KeyframeFCPtrSequenceBase::_mfValues
    
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<KeyframeFCPtrSequence *>::_type("KeyframeFCPtrSequencePtr", "KeyframeSequencePtr");
#endif

OSG_FIELDTRAITS_GETTYPE(KeyframeFCPtrSequence *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           KeyframeFCPtrSequence *,
                           0);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           KeyframeFCPtrSequence *,
                           0);

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void KeyframeFCPtrSequenceBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new MFUnrecFieldContainerPtr::Description(
        MFUnrecFieldContainerPtr::getClassType(),
        "Values",
        "",
        ValuesFieldId, ValuesFieldMask,
        false,
        (Field::MFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&KeyframeFCPtrSequence::editHandleValues),
        static_cast<FieldGetMethodSig >(&KeyframeFCPtrSequence::getHandleValues));

    oType.addInitialDesc(pDesc);
}


KeyframeFCPtrSequenceBase::TypeObject KeyframeFCPtrSequenceBase::_type(
    KeyframeFCPtrSequenceBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    reinterpret_cast<PrototypeCreateF>(&KeyframeFCPtrSequenceBase::createEmptyLocal),
    KeyframeFCPtrSequence::initMethod,
    KeyframeFCPtrSequence::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&KeyframeFCPtrSequence::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"KeyframeFCPtrSequence\"\n"
    "\tparent=\"KeyframeSequence\"\n"
    "    library=\"TBAnimation\"\n"
    "\tpointerfieldtypes=\"both\"\n"
    "\tstructure=\"concrete\"\n"
    "\tsystemcomponent=\"true\"\n"
    "\tparentsystemcomponent=\"true\"\n"
    "\tdecoratable=\"false\"\n"
    "    isNodeCore=\"false\"\n"
    "    authors=\"David Kabala (djkabala@gmail.com)                             \"\n"
    ">\n"
    "KeyframeSequence is the base class of all Point Keyframe Sequences.\n"
    "\t<Field\n"
    "\t\tname=\"Values\"\n"
    "\t\ttype=\"FieldContainer\"\n"
    "        category=\"pointer\"\n"
    "\t\tcardinality=\"multi\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"protected\"\n"
    "\t>\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    "KeyframeSequence is the base class of all Point Keyframe Sequences.\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &KeyframeFCPtrSequenceBase::getType(void)
{
    return _type;
}

const FieldContainerType &KeyframeFCPtrSequenceBase::getType(void) const
{
    return _type;
}

UInt32 KeyframeFCPtrSequenceBase::getContainerSize(void) const
{
    return sizeof(KeyframeFCPtrSequence);
}

/*------------------------- decorator get ------------------------------*/


//! Get the KeyframeFCPtrSequence::_mfValues field.
const MFUnrecFieldContainerPtr *KeyframeFCPtrSequenceBase::getMFValues(void) const
{
    return &_mfValues;
}

MFUnrecFieldContainerPtr *KeyframeFCPtrSequenceBase::editMFValues         (void)
{
    editMField(ValuesFieldMask, _mfValues);

    return &_mfValues;
}



void KeyframeFCPtrSequenceBase::pushToValues(FieldContainer * const value)
{
    editMField(ValuesFieldMask, _mfValues);

    _mfValues.push_back(value);
}

void KeyframeFCPtrSequenceBase::assignValues   (const MFUnrecFieldContainerPtr &value)
{
    MFUnrecFieldContainerPtr::const_iterator elemIt  =
        value.begin();
    MFUnrecFieldContainerPtr::const_iterator elemEnd =
        value.end  ();

    static_cast<KeyframeFCPtrSequence *>(this)->clearValues();

    while(elemIt != elemEnd)
    {
        this->pushToValues(*elemIt);

        ++elemIt;
    }
}

void KeyframeFCPtrSequenceBase::removeFromValues(UInt32 uiIndex)
{
    if(uiIndex < _mfValues.size())
    {
        editMField(ValuesFieldMask, _mfValues);

        _mfValues.erase(uiIndex);
    }
}

void KeyframeFCPtrSequenceBase::removeObjFromValues(FieldContainer * const value)
{
    Int32 iElemIdx = _mfValues.findIndex(value);

    if(iElemIdx != -1)
    {
        editMField(ValuesFieldMask, _mfValues);

        _mfValues.erase(iElemIdx);
    }
}
void KeyframeFCPtrSequenceBase::clearValues(void)
{
    editMField(ValuesFieldMask, _mfValues);


    _mfValues.clear();
}



/*------------------------------ access -----------------------------------*/

UInt32 KeyframeFCPtrSequenceBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (ValuesFieldMask & whichField))
    {
        returnValue += _mfValues.getBinSize();
    }

    return returnValue;
}

void KeyframeFCPtrSequenceBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (ValuesFieldMask & whichField))
    {
        _mfValues.copyToBin(pMem);
    }
}

void KeyframeFCPtrSequenceBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (ValuesFieldMask & whichField))
    {
        _mfValues.copyFromBin(pMem);
    }
}

//! create a new instance of the class
KeyframeFCPtrSequenceTransitPtr KeyframeFCPtrSequenceBase::createLocal(BitVector bFlags)
{
    KeyframeFCPtrSequenceTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<KeyframeFCPtrSequence>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
KeyframeFCPtrSequenceTransitPtr KeyframeFCPtrSequenceBase::createDependent(BitVector bFlags)
{
    KeyframeFCPtrSequenceTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<KeyframeFCPtrSequence>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
KeyframeFCPtrSequenceTransitPtr KeyframeFCPtrSequenceBase::create(void)
{
    KeyframeFCPtrSequenceTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<KeyframeFCPtrSequence>(tmpPtr);
    }

    return fc;
}

KeyframeFCPtrSequence *KeyframeFCPtrSequenceBase::createEmptyLocal(BitVector bFlags)
{
    KeyframeFCPtrSequence *returnValue;

    newPtr<KeyframeFCPtrSequence>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
KeyframeFCPtrSequence *KeyframeFCPtrSequenceBase::createEmpty(void)
{
    KeyframeFCPtrSequence *returnValue;

    newPtr<KeyframeFCPtrSequence>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr KeyframeFCPtrSequenceBase::shallowCopyLocal(
    BitVector bFlags) const
{
    KeyframeFCPtrSequence *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const KeyframeFCPtrSequence *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr KeyframeFCPtrSequenceBase::shallowCopyDependent(
    BitVector bFlags) const
{
    KeyframeFCPtrSequence *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const KeyframeFCPtrSequence *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr KeyframeFCPtrSequenceBase::shallowCopy(void) const
{
    KeyframeFCPtrSequence *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const KeyframeFCPtrSequence *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

KeyframeFCPtrSequenceBase::KeyframeFCPtrSequenceBase(void) :
    Inherited(),
    _mfValues                 ()
{
}

KeyframeFCPtrSequenceBase::KeyframeFCPtrSequenceBase(const KeyframeFCPtrSequenceBase &source) :
    Inherited(source),
    _mfValues                 ()
{
}


/*-------------------------- destructors ----------------------------------*/

KeyframeFCPtrSequenceBase::~KeyframeFCPtrSequenceBase(void)
{
}

void KeyframeFCPtrSequenceBase::onCreate(const KeyframeFCPtrSequence *source)
{
    Inherited::onCreate(source);

    if(source != NULL)
    {
        KeyframeFCPtrSequence *pThis = static_cast<KeyframeFCPtrSequence *>(this);

        MFUnrecFieldContainerPtr::const_iterator ValuesIt  =
            source->_mfValues.begin();
        MFUnrecFieldContainerPtr::const_iterator ValuesEnd =
            source->_mfValues.end  ();

        while(ValuesIt != ValuesEnd)
        {
            pThis->pushToValues(*ValuesIt);

            ++ValuesIt;
        }
    }
}

GetFieldHandlePtr KeyframeFCPtrSequenceBase::getHandleValues          (void) const
{
    MFUnrecFieldContainerPtr::GetHandlePtr returnValue(
        new  MFUnrecFieldContainerPtr::GetHandle(
             &_mfValues,
             this->getType().getFieldDesc(ValuesFieldId),
             const_cast<KeyframeFCPtrSequenceBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr KeyframeFCPtrSequenceBase::editHandleValues         (void)
{
    MFUnrecFieldContainerPtr::EditHandlePtr returnValue(
        new  MFUnrecFieldContainerPtr::EditHandle(
             &_mfValues,
             this->getType().getFieldDesc(ValuesFieldId),
             this));

    returnValue->setAddMethod(
        boost::bind(&KeyframeFCPtrSequence::pushToValues,
                    static_cast<KeyframeFCPtrSequence *>(this), _1));
    returnValue->setRemoveMethod(
        boost::bind(&KeyframeFCPtrSequence::removeFromValues,
                    static_cast<KeyframeFCPtrSequence *>(this), _1));
    returnValue->setRemoveObjMethod(
        boost::bind(&KeyframeFCPtrSequence::removeObjFromValues,
                    static_cast<KeyframeFCPtrSequence *>(this), _1));
    returnValue->setClearMethod(
        boost::bind(&KeyframeFCPtrSequence::clearValues,
                    static_cast<KeyframeFCPtrSequence *>(this)));

    editMField(ValuesFieldMask, _mfValues);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void KeyframeFCPtrSequenceBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    KeyframeFCPtrSequence *pThis = static_cast<KeyframeFCPtrSequence *>(this);

    pThis->execSync(static_cast<KeyframeFCPtrSequence *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *KeyframeFCPtrSequenceBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    KeyframeFCPtrSequence *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const KeyframeFCPtrSequence *>(pRefAspect),
                  dynamic_cast<const KeyframeFCPtrSequence *>(this));

    return returnValue;
}
#endif

void KeyframeFCPtrSequenceBase::resolveLinks(void)
{
    Inherited::resolveLinks();

    static_cast<KeyframeFCPtrSequence *>(this)->clearValues();


}


OSG_END_NAMESPACE
