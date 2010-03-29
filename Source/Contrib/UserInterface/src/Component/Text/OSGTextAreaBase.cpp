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
 **     class TextArea!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include "OSGConfig.h"




#include "OSGTextAreaBase.h"
#include "OSGTextArea.h"

#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::TextArea
    A UI TextArea
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var bool            TextAreaBase::_sfLineWrap
    
*/

/*! \var bool            TextAreaBase::_sfWrapStyleWord
    
*/

/*! \var UInt32          TextAreaBase::_sfTabSize
    
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<TextArea *>::_type("TextAreaPtr", "EditableTextComponentPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(TextArea *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           TextArea *,
                           0);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           TextArea *,
                           0);

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void TextAreaBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFBool::Description(
        SFBool::getClassType(),
        "LineWrap",
        "",
        LineWrapFieldId, LineWrapFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&TextArea::editHandleLineWrap),
        static_cast<FieldGetMethodSig >(&TextArea::getHandleLineWrap));

    oType.addInitialDesc(pDesc);

    pDesc = new SFBool::Description(
        SFBool::getClassType(),
        "WrapStyleWord",
        "",
        WrapStyleWordFieldId, WrapStyleWordFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&TextArea::editHandleWrapStyleWord),
        static_cast<FieldGetMethodSig >(&TextArea::getHandleWrapStyleWord));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUInt32::Description(
        SFUInt32::getClassType(),
        "TabSize",
        "",
        TabSizeFieldId, TabSizeFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&TextArea::editHandleTabSize),
        static_cast<FieldGetMethodSig >(&TextArea::getHandleTabSize));

    oType.addInitialDesc(pDesc);
}


TextAreaBase::TypeObject TextAreaBase::_type(
    TextAreaBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    reinterpret_cast<PrototypeCreateF>(&TextAreaBase::createEmptyLocal),
    TextArea::initMethod,
    TextArea::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&TextArea::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"TextArea\"\n"
    "\tparent=\"EditableTextComponent\"\n"
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
    "A UI TextArea\n"
    "\t<Field\n"
    "\t\tname=\"LineWrap\"\n"
    "\t\ttype=\"bool\"\n"
    "\t\tcategory=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"true\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"WrapStyleWord\"\n"
    "\t\ttype=\"bool\"\n"
    "\t\tcategory=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"true\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"TabSize\"\n"
    "\t\ttype=\"UInt32\"\n"
    "\t\tcategory=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"3\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    "A UI TextArea\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &TextAreaBase::getType(void)
{
    return _type;
}

const FieldContainerType &TextAreaBase::getType(void) const
{
    return _type;
}

UInt32 TextAreaBase::getContainerSize(void) const
{
    return sizeof(TextArea);
}

/*------------------------- decorator get ------------------------------*/


SFBool *TextAreaBase::editSFLineWrap(void)
{
    editSField(LineWrapFieldMask);

    return &_sfLineWrap;
}

const SFBool *TextAreaBase::getSFLineWrap(void) const
{
    return &_sfLineWrap;
}


SFBool *TextAreaBase::editSFWrapStyleWord(void)
{
    editSField(WrapStyleWordFieldMask);

    return &_sfWrapStyleWord;
}

const SFBool *TextAreaBase::getSFWrapStyleWord(void) const
{
    return &_sfWrapStyleWord;
}


SFUInt32 *TextAreaBase::editSFTabSize(void)
{
    editSField(TabSizeFieldMask);

    return &_sfTabSize;
}

const SFUInt32 *TextAreaBase::getSFTabSize(void) const
{
    return &_sfTabSize;
}






/*------------------------------ access -----------------------------------*/

UInt32 TextAreaBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (LineWrapFieldMask & whichField))
    {
        returnValue += _sfLineWrap.getBinSize();
    }
    if(FieldBits::NoField != (WrapStyleWordFieldMask & whichField))
    {
        returnValue += _sfWrapStyleWord.getBinSize();
    }
    if(FieldBits::NoField != (TabSizeFieldMask & whichField))
    {
        returnValue += _sfTabSize.getBinSize();
    }

    return returnValue;
}

void TextAreaBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (LineWrapFieldMask & whichField))
    {
        _sfLineWrap.copyToBin(pMem);
    }
    if(FieldBits::NoField != (WrapStyleWordFieldMask & whichField))
    {
        _sfWrapStyleWord.copyToBin(pMem);
    }
    if(FieldBits::NoField != (TabSizeFieldMask & whichField))
    {
        _sfTabSize.copyToBin(pMem);
    }
}

void TextAreaBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (LineWrapFieldMask & whichField))
    {
        _sfLineWrap.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (WrapStyleWordFieldMask & whichField))
    {
        _sfWrapStyleWord.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (TabSizeFieldMask & whichField))
    {
        _sfTabSize.copyFromBin(pMem);
    }
}

//! create a new instance of the class
TextAreaTransitPtr TextAreaBase::createLocal(BitVector bFlags)
{
    TextAreaTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<TextArea>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
TextAreaTransitPtr TextAreaBase::createDependent(BitVector bFlags)
{
    TextAreaTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<TextArea>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
TextAreaTransitPtr TextAreaBase::create(void)
{
    TextAreaTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<TextArea>(tmpPtr);
    }

    return fc;
}

TextArea *TextAreaBase::createEmptyLocal(BitVector bFlags)
{
    TextArea *returnValue;

    newPtr<TextArea>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
TextArea *TextAreaBase::createEmpty(void)
{
    TextArea *returnValue;

    newPtr<TextArea>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr TextAreaBase::shallowCopyLocal(
    BitVector bFlags) const
{
    TextArea *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const TextArea *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr TextAreaBase::shallowCopyDependent(
    BitVector bFlags) const
{
    TextArea *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const TextArea *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr TextAreaBase::shallowCopy(void) const
{
    TextArea *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const TextArea *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

TextAreaBase::TextAreaBase(void) :
    Inherited(),
    _sfLineWrap               (bool(true)),
    _sfWrapStyleWord          (bool(true)),
    _sfTabSize                (UInt32(3))
{
}

TextAreaBase::TextAreaBase(const TextAreaBase &source) :
    Inherited(source),
    _sfLineWrap               (source._sfLineWrap               ),
    _sfWrapStyleWord          (source._sfWrapStyleWord          ),
    _sfTabSize                (source._sfTabSize                )
{
}


/*-------------------------- destructors ----------------------------------*/

TextAreaBase::~TextAreaBase(void)
{
}


GetFieldHandlePtr TextAreaBase::getHandleLineWrap        (void) const
{
    SFBool::GetHandlePtr returnValue(
        new  SFBool::GetHandle(
             &_sfLineWrap,
             this->getType().getFieldDesc(LineWrapFieldId),
             const_cast<TextAreaBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr TextAreaBase::editHandleLineWrap       (void)
{
    SFBool::EditHandlePtr returnValue(
        new  SFBool::EditHandle(
             &_sfLineWrap,
             this->getType().getFieldDesc(LineWrapFieldId),
             this));


    editSField(LineWrapFieldMask);

    return returnValue;
}

GetFieldHandlePtr TextAreaBase::getHandleWrapStyleWord   (void) const
{
    SFBool::GetHandlePtr returnValue(
        new  SFBool::GetHandle(
             &_sfWrapStyleWord,
             this->getType().getFieldDesc(WrapStyleWordFieldId),
             const_cast<TextAreaBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr TextAreaBase::editHandleWrapStyleWord  (void)
{
    SFBool::EditHandlePtr returnValue(
        new  SFBool::EditHandle(
             &_sfWrapStyleWord,
             this->getType().getFieldDesc(WrapStyleWordFieldId),
             this));


    editSField(WrapStyleWordFieldMask);

    return returnValue;
}

GetFieldHandlePtr TextAreaBase::getHandleTabSize         (void) const
{
    SFUInt32::GetHandlePtr returnValue(
        new  SFUInt32::GetHandle(
             &_sfTabSize,
             this->getType().getFieldDesc(TabSizeFieldId),
             const_cast<TextAreaBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr TextAreaBase::editHandleTabSize        (void)
{
    SFUInt32::EditHandlePtr returnValue(
        new  SFUInt32::EditHandle(
             &_sfTabSize,
             this->getType().getFieldDesc(TabSizeFieldId),
             this));


    editSField(TabSizeFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void TextAreaBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    TextArea *pThis = static_cast<TextArea *>(this);

    pThis->execSync(static_cast<TextArea *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *TextAreaBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    TextArea *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const TextArea *>(pRefAspect),
                  dynamic_cast<const TextArea *>(this));

    return returnValue;
}
#endif

void TextAreaBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


OSG_END_NAMESPACE
