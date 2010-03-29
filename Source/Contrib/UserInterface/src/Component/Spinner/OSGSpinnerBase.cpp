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
 **     class Spinner!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include "OSGConfig.h"



#include "OSGButton.h"                  // NextButton Class
#include "OSGComponent.h"               // Editor Class

#include "OSGSpinnerBase.h"
#include "OSGSpinner.h"

#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::Spinner
    A UI Spinner.
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var Button *        SpinnerBase::_sfNextButton
    
*/

/*! \var Button *        SpinnerBase::_sfPreviousButton
    
*/

/*! \var Component *     SpinnerBase::_sfEditor
    
*/

/*! \var UInt32          SpinnerBase::_sfOrientation
    
*/

/*! \var UInt32          SpinnerBase::_sfEditorToButtonOffset
    
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<Spinner *>::_type("SpinnerPtr", "ComponentContainerPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(Spinner *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           Spinner *,
                           0);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           Spinner *,
                           0);

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void SpinnerBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFUnrecButtonPtr::Description(
        SFUnrecButtonPtr::getClassType(),
        "NextButton",
        "",
        NextButtonFieldId, NextButtonFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&Spinner::editHandleNextButton),
        static_cast<FieldGetMethodSig >(&Spinner::getHandleNextButton));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUnrecButtonPtr::Description(
        SFUnrecButtonPtr::getClassType(),
        "PreviousButton",
        "",
        PreviousButtonFieldId, PreviousButtonFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&Spinner::editHandlePreviousButton),
        static_cast<FieldGetMethodSig >(&Spinner::getHandlePreviousButton));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUnrecComponentPtr::Description(
        SFUnrecComponentPtr::getClassType(),
        "Editor",
        "",
        EditorFieldId, EditorFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&Spinner::editHandleEditor),
        static_cast<FieldGetMethodSig >(&Spinner::getHandleEditor));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUInt32::Description(
        SFUInt32::getClassType(),
        "Orientation",
        "",
        OrientationFieldId, OrientationFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&Spinner::editHandleOrientation),
        static_cast<FieldGetMethodSig >(&Spinner::getHandleOrientation));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUInt32::Description(
        SFUInt32::getClassType(),
        "EditorToButtonOffset",
        "",
        EditorToButtonOffsetFieldId, EditorToButtonOffsetFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&Spinner::editHandleEditorToButtonOffset),
        static_cast<FieldGetMethodSig >(&Spinner::getHandleEditorToButtonOffset));

    oType.addInitialDesc(pDesc);
}


SpinnerBase::TypeObject SpinnerBase::_type(
    SpinnerBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    reinterpret_cast<PrototypeCreateF>(&SpinnerBase::createEmptyLocal),
    Spinner::initMethod,
    Spinner::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&Spinner::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"Spinner\"\n"
    "\tparent=\"ComponentContainer\"\n"
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
    "A UI Spinner.\n"
    "\t<Field\n"
    "\t\tname=\"NextButton\"\n"
    "\t\ttype=\"Button\"\n"
    "\t\tcategory=\"pointer\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t\tdefaultValue=\"NULL\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"PreviousButton\"\n"
    "\t\ttype=\"Button\"\n"
    "\t\tcategory=\"pointer\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t\tdefaultValue=\"NULL\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"Editor\"\n"
    "\t\ttype=\"Component\"\n"
    "\t\tcategory=\"pointer\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t\tdefaultValue=\"NULL\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"Orientation\"\n"
    "\t\ttype=\"UInt32\"\n"
    "\t\tcategory=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t\tdefaultValue=\"Spinner::VERTICAL_ORIENTATION\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"EditorToButtonOffset\"\n"
    "\t\ttype=\"UInt32\"\n"
    "\t\tcategory=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t\tdefaultValue=\"1\"\n"
    "\t>\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    "A UI Spinner.\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &SpinnerBase::getType(void)
{
    return _type;
}

const FieldContainerType &SpinnerBase::getType(void) const
{
    return _type;
}

UInt32 SpinnerBase::getContainerSize(void) const
{
    return sizeof(Spinner);
}

/*------------------------- decorator get ------------------------------*/


//! Get the Spinner::_sfNextButton field.
const SFUnrecButtonPtr *SpinnerBase::getSFNextButton(void) const
{
    return &_sfNextButton;
}

SFUnrecButtonPtr    *SpinnerBase::editSFNextButton     (void)
{
    editSField(NextButtonFieldMask);

    return &_sfNextButton;
}

//! Get the Spinner::_sfPreviousButton field.
const SFUnrecButtonPtr *SpinnerBase::getSFPreviousButton(void) const
{
    return &_sfPreviousButton;
}

SFUnrecButtonPtr    *SpinnerBase::editSFPreviousButton (void)
{
    editSField(PreviousButtonFieldMask);

    return &_sfPreviousButton;
}

//! Get the Spinner::_sfEditor field.
const SFUnrecComponentPtr *SpinnerBase::getSFEditor(void) const
{
    return &_sfEditor;
}

SFUnrecComponentPtr *SpinnerBase::editSFEditor         (void)
{
    editSField(EditorFieldMask);

    return &_sfEditor;
}

SFUInt32 *SpinnerBase::editSFOrientation(void)
{
    editSField(OrientationFieldMask);

    return &_sfOrientation;
}

const SFUInt32 *SpinnerBase::getSFOrientation(void) const
{
    return &_sfOrientation;
}


SFUInt32 *SpinnerBase::editSFEditorToButtonOffset(void)
{
    editSField(EditorToButtonOffsetFieldMask);

    return &_sfEditorToButtonOffset;
}

const SFUInt32 *SpinnerBase::getSFEditorToButtonOffset(void) const
{
    return &_sfEditorToButtonOffset;
}






/*------------------------------ access -----------------------------------*/

UInt32 SpinnerBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (NextButtonFieldMask & whichField))
    {
        returnValue += _sfNextButton.getBinSize();
    }
    if(FieldBits::NoField != (PreviousButtonFieldMask & whichField))
    {
        returnValue += _sfPreviousButton.getBinSize();
    }
    if(FieldBits::NoField != (EditorFieldMask & whichField))
    {
        returnValue += _sfEditor.getBinSize();
    }
    if(FieldBits::NoField != (OrientationFieldMask & whichField))
    {
        returnValue += _sfOrientation.getBinSize();
    }
    if(FieldBits::NoField != (EditorToButtonOffsetFieldMask & whichField))
    {
        returnValue += _sfEditorToButtonOffset.getBinSize();
    }

    return returnValue;
}

void SpinnerBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (NextButtonFieldMask & whichField))
    {
        _sfNextButton.copyToBin(pMem);
    }
    if(FieldBits::NoField != (PreviousButtonFieldMask & whichField))
    {
        _sfPreviousButton.copyToBin(pMem);
    }
    if(FieldBits::NoField != (EditorFieldMask & whichField))
    {
        _sfEditor.copyToBin(pMem);
    }
    if(FieldBits::NoField != (OrientationFieldMask & whichField))
    {
        _sfOrientation.copyToBin(pMem);
    }
    if(FieldBits::NoField != (EditorToButtonOffsetFieldMask & whichField))
    {
        _sfEditorToButtonOffset.copyToBin(pMem);
    }
}

void SpinnerBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (NextButtonFieldMask & whichField))
    {
        _sfNextButton.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (PreviousButtonFieldMask & whichField))
    {
        _sfPreviousButton.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (EditorFieldMask & whichField))
    {
        _sfEditor.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (OrientationFieldMask & whichField))
    {
        _sfOrientation.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (EditorToButtonOffsetFieldMask & whichField))
    {
        _sfEditorToButtonOffset.copyFromBin(pMem);
    }
}

//! create a new instance of the class
SpinnerTransitPtr SpinnerBase::createLocal(BitVector bFlags)
{
    SpinnerTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<Spinner>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
SpinnerTransitPtr SpinnerBase::createDependent(BitVector bFlags)
{
    SpinnerTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<Spinner>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
SpinnerTransitPtr SpinnerBase::create(void)
{
    SpinnerTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<Spinner>(tmpPtr);
    }

    return fc;
}

Spinner *SpinnerBase::createEmptyLocal(BitVector bFlags)
{
    Spinner *returnValue;

    newPtr<Spinner>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
Spinner *SpinnerBase::createEmpty(void)
{
    Spinner *returnValue;

    newPtr<Spinner>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr SpinnerBase::shallowCopyLocal(
    BitVector bFlags) const
{
    Spinner *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const Spinner *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr SpinnerBase::shallowCopyDependent(
    BitVector bFlags) const
{
    Spinner *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const Spinner *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr SpinnerBase::shallowCopy(void) const
{
    Spinner *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const Spinner *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

SpinnerBase::SpinnerBase(void) :
    Inherited(),
    _sfNextButton             (NULL),
    _sfPreviousButton         (NULL),
    _sfEditor                 (NULL),
    _sfOrientation            (UInt32(Spinner::VERTICAL_ORIENTATION)),
    _sfEditorToButtonOffset   (UInt32(1))
{
}

SpinnerBase::SpinnerBase(const SpinnerBase &source) :
    Inherited(source),
    _sfNextButton             (NULL),
    _sfPreviousButton         (NULL),
    _sfEditor                 (NULL),
    _sfOrientation            (source._sfOrientation            ),
    _sfEditorToButtonOffset   (source._sfEditorToButtonOffset   )
{
}


/*-------------------------- destructors ----------------------------------*/

SpinnerBase::~SpinnerBase(void)
{
}

void SpinnerBase::onCreate(const Spinner *source)
{
    Inherited::onCreate(source);

    if(source != NULL)
    {
        Spinner *pThis = static_cast<Spinner *>(this);

        pThis->setNextButton(source->getNextButton());

        pThis->setPreviousButton(source->getPreviousButton());

        pThis->setEditor(source->getEditor());
    }
}

GetFieldHandlePtr SpinnerBase::getHandleNextButton      (void) const
{
    SFUnrecButtonPtr::GetHandlePtr returnValue(
        new  SFUnrecButtonPtr::GetHandle(
             &_sfNextButton,
             this->getType().getFieldDesc(NextButtonFieldId),
             const_cast<SpinnerBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr SpinnerBase::editHandleNextButton     (void)
{
    SFUnrecButtonPtr::EditHandlePtr returnValue(
        new  SFUnrecButtonPtr::EditHandle(
             &_sfNextButton,
             this->getType().getFieldDesc(NextButtonFieldId),
             this));

    returnValue->setSetMethod(
        boost::bind(&Spinner::setNextButton,
                    static_cast<Spinner *>(this), _1));

    editSField(NextButtonFieldMask);

    return returnValue;
}

GetFieldHandlePtr SpinnerBase::getHandlePreviousButton  (void) const
{
    SFUnrecButtonPtr::GetHandlePtr returnValue(
        new  SFUnrecButtonPtr::GetHandle(
             &_sfPreviousButton,
             this->getType().getFieldDesc(PreviousButtonFieldId),
             const_cast<SpinnerBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr SpinnerBase::editHandlePreviousButton (void)
{
    SFUnrecButtonPtr::EditHandlePtr returnValue(
        new  SFUnrecButtonPtr::EditHandle(
             &_sfPreviousButton,
             this->getType().getFieldDesc(PreviousButtonFieldId),
             this));

    returnValue->setSetMethod(
        boost::bind(&Spinner::setPreviousButton,
                    static_cast<Spinner *>(this), _1));

    editSField(PreviousButtonFieldMask);

    return returnValue;
}

GetFieldHandlePtr SpinnerBase::getHandleEditor          (void) const
{
    SFUnrecComponentPtr::GetHandlePtr returnValue(
        new  SFUnrecComponentPtr::GetHandle(
             &_sfEditor,
             this->getType().getFieldDesc(EditorFieldId),
             const_cast<SpinnerBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr SpinnerBase::editHandleEditor         (void)
{
    SFUnrecComponentPtr::EditHandlePtr returnValue(
        new  SFUnrecComponentPtr::EditHandle(
             &_sfEditor,
             this->getType().getFieldDesc(EditorFieldId),
             this));

    returnValue->setSetMethod(
        boost::bind(&Spinner::setEditor,
                    static_cast<Spinner *>(this), _1));

    editSField(EditorFieldMask);

    return returnValue;
}

GetFieldHandlePtr SpinnerBase::getHandleOrientation     (void) const
{
    SFUInt32::GetHandlePtr returnValue(
        new  SFUInt32::GetHandle(
             &_sfOrientation,
             this->getType().getFieldDesc(OrientationFieldId),
             const_cast<SpinnerBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr SpinnerBase::editHandleOrientation    (void)
{
    SFUInt32::EditHandlePtr returnValue(
        new  SFUInt32::EditHandle(
             &_sfOrientation,
             this->getType().getFieldDesc(OrientationFieldId),
             this));


    editSField(OrientationFieldMask);

    return returnValue;
}

GetFieldHandlePtr SpinnerBase::getHandleEditorToButtonOffset (void) const
{
    SFUInt32::GetHandlePtr returnValue(
        new  SFUInt32::GetHandle(
             &_sfEditorToButtonOffset,
             this->getType().getFieldDesc(EditorToButtonOffsetFieldId),
             const_cast<SpinnerBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr SpinnerBase::editHandleEditorToButtonOffset(void)
{
    SFUInt32::EditHandlePtr returnValue(
        new  SFUInt32::EditHandle(
             &_sfEditorToButtonOffset,
             this->getType().getFieldDesc(EditorToButtonOffsetFieldId),
             this));


    editSField(EditorToButtonOffsetFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void SpinnerBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Spinner *pThis = static_cast<Spinner *>(this);

    pThis->execSync(static_cast<Spinner *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *SpinnerBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    Spinner *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const Spinner *>(pRefAspect),
                  dynamic_cast<const Spinner *>(this));

    return returnValue;
}
#endif

void SpinnerBase::resolveLinks(void)
{
    Inherited::resolveLinks();

    static_cast<Spinner *>(this)->setNextButton(NULL);

    static_cast<Spinner *>(this)->setPreviousButton(NULL);

    static_cast<Spinner *>(this)->setEditor(NULL);


}


OSG_END_NAMESPACE
