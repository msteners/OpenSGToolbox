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
 **     class TextField!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include "OSGConfig.h"



#include "OSGUIFont.h"                  // EmptyDescTextFont Class

#include "OSGTextFieldBase.h"
#include "OSGTextField.h"

#include <boost/bind.hpp>

#include "OSGEvent.h"

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::TextField
    A UI Text Field
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var Vec2f           TextFieldBase::_sfAlignment
    
*/

/*! \var UIFont *        TextFieldBase::_sfEmptyDescTextFont
    
*/

/*! \var std::string     TextFieldBase::_sfEmptyDescText
    
*/

/*! \var Color4f         TextFieldBase::_sfEmptyDescTextColor
    
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<TextField *>::_type("TextFieldPtr", "EditableTextComponentPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(TextField *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           TextField *,
                           0);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           TextField *,
                           0);

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void TextFieldBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFVec2f::Description(
        SFVec2f::getClassType(),
        "Alignment",
        "",
        AlignmentFieldId, AlignmentFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&TextField::editHandleAlignment),
        static_cast<FieldGetMethodSig >(&TextField::getHandleAlignment));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUnrecUIFontPtr::Description(
        SFUnrecUIFontPtr::getClassType(),
        "EmptyDescTextFont",
        "",
        EmptyDescTextFontFieldId, EmptyDescTextFontFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&TextField::editHandleEmptyDescTextFont),
        static_cast<FieldGetMethodSig >(&TextField::getHandleEmptyDescTextFont));

    oType.addInitialDesc(pDesc);

    pDesc = new SFString::Description(
        SFString::getClassType(),
        "EmptyDescText",
        "",
        EmptyDescTextFieldId, EmptyDescTextFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&TextField::editHandleEmptyDescText),
        static_cast<FieldGetMethodSig >(&TextField::getHandleEmptyDescText));

    oType.addInitialDesc(pDesc);

    pDesc = new SFColor4f::Description(
        SFColor4f::getClassType(),
        "EmptyDescTextColor",
        "",
        EmptyDescTextColorFieldId, EmptyDescTextColorFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&TextField::editHandleEmptyDescTextColor),
        static_cast<FieldGetMethodSig >(&TextField::getHandleEmptyDescTextColor));

    oType.addInitialDesc(pDesc);
}


TextFieldBase::TypeObject TextFieldBase::_type(
    TextFieldBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    reinterpret_cast<PrototypeCreateF>(&TextFieldBase::createEmptyLocal),
    TextField::initMethod,
    TextField::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&TextField::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"TextField\"\n"
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
    "    parentProducer=\"TextComponent\"\n"
    ">\n"
    "A UI Text Field\n"
    "\t<Field\n"
    "\t\tname=\"Alignment\"\n"
    "\t\ttype=\"Vec2f\"\n"
    "\t\tcategory=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"0.0f, 0.5f\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"EmptyDescTextFont\"\n"
    "\t\ttype=\"UIFont\"\n"
    "\t\tcategory=\"pointer\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"NULL\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"EmptyDescText\"\n"
    "\t\ttype=\"std::string\"\n"
    "\t\tcategory=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"EmptyDescTextColor\"\n"
    "\t\ttype=\"Color4f\"\n"
    "\t\tcategory=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"0.3,0.3,0.3,1.0\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<ProducedMethod\n"
    "\t\tname=\"ActionPerformed\"\n"
    "\t\ttype=\"ActionEventPtr\"\n"
    "\t>\n"
    "\t</ProducedMethod>\n"
    "</FieldContainer>\n",
    "A UI Text Field\n"
    );

//! TextField Produced Methods

MethodDescription *TextFieldBase::_methodDesc[] =
{
    new MethodDescription("ActionPerformed", 
                    "",
                     ActionPerformedMethodId, 
                     SFUnrecEventPtr::getClassType(),
                     FunctorAccessMethod())
};

EventProducerType TextFieldBase::_producerType(
    "TextFieldProducerType",
    "TextComponentProducerType",
    "",
    InitEventProducerFunctor(),
    _methodDesc,
    sizeof(_methodDesc));

/*------------------------------ get -----------------------------------*/

FieldContainerType &TextFieldBase::getType(void)
{
    return _type;
}

const FieldContainerType &TextFieldBase::getType(void) const
{
    return _type;
}

const EventProducerType &TextFieldBase::getProducerType(void) const
{
    return _producerType;
}

UInt32 TextFieldBase::getContainerSize(void) const
{
    return sizeof(TextField);
}

/*------------------------- decorator get ------------------------------*/


SFVec2f *TextFieldBase::editSFAlignment(void)
{
    editSField(AlignmentFieldMask);

    return &_sfAlignment;
}

const SFVec2f *TextFieldBase::getSFAlignment(void) const
{
    return &_sfAlignment;
}


//! Get the TextField::_sfEmptyDescTextFont field.
const SFUnrecUIFontPtr *TextFieldBase::getSFEmptyDescTextFont(void) const
{
    return &_sfEmptyDescTextFont;
}

SFUnrecUIFontPtr    *TextFieldBase::editSFEmptyDescTextFont(void)
{
    editSField(EmptyDescTextFontFieldMask);

    return &_sfEmptyDescTextFont;
}

SFString *TextFieldBase::editSFEmptyDescText(void)
{
    editSField(EmptyDescTextFieldMask);

    return &_sfEmptyDescText;
}

const SFString *TextFieldBase::getSFEmptyDescText(void) const
{
    return &_sfEmptyDescText;
}


SFColor4f *TextFieldBase::editSFEmptyDescTextColor(void)
{
    editSField(EmptyDescTextColorFieldMask);

    return &_sfEmptyDescTextColor;
}

const SFColor4f *TextFieldBase::getSFEmptyDescTextColor(void) const
{
    return &_sfEmptyDescTextColor;
}






/*------------------------------ access -----------------------------------*/

UInt32 TextFieldBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (AlignmentFieldMask & whichField))
    {
        returnValue += _sfAlignment.getBinSize();
    }
    if(FieldBits::NoField != (EmptyDescTextFontFieldMask & whichField))
    {
        returnValue += _sfEmptyDescTextFont.getBinSize();
    }
    if(FieldBits::NoField != (EmptyDescTextFieldMask & whichField))
    {
        returnValue += _sfEmptyDescText.getBinSize();
    }
    if(FieldBits::NoField != (EmptyDescTextColorFieldMask & whichField))
    {
        returnValue += _sfEmptyDescTextColor.getBinSize();
    }

    return returnValue;
}

void TextFieldBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (AlignmentFieldMask & whichField))
    {
        _sfAlignment.copyToBin(pMem);
    }
    if(FieldBits::NoField != (EmptyDescTextFontFieldMask & whichField))
    {
        _sfEmptyDescTextFont.copyToBin(pMem);
    }
    if(FieldBits::NoField != (EmptyDescTextFieldMask & whichField))
    {
        _sfEmptyDescText.copyToBin(pMem);
    }
    if(FieldBits::NoField != (EmptyDescTextColorFieldMask & whichField))
    {
        _sfEmptyDescTextColor.copyToBin(pMem);
    }
}

void TextFieldBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (AlignmentFieldMask & whichField))
    {
        _sfAlignment.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (EmptyDescTextFontFieldMask & whichField))
    {
        _sfEmptyDescTextFont.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (EmptyDescTextFieldMask & whichField))
    {
        _sfEmptyDescText.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (EmptyDescTextColorFieldMask & whichField))
    {
        _sfEmptyDescTextColor.copyFromBin(pMem);
    }
}

//! create a new instance of the class
TextFieldTransitPtr TextFieldBase::createLocal(BitVector bFlags)
{
    TextFieldTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<TextField>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
TextFieldTransitPtr TextFieldBase::createDependent(BitVector bFlags)
{
    TextFieldTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<TextField>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
TextFieldTransitPtr TextFieldBase::create(void)
{
    TextFieldTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<TextField>(tmpPtr);
    }

    return fc;
}

TextField *TextFieldBase::createEmptyLocal(BitVector bFlags)
{
    TextField *returnValue;

    newPtr<TextField>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
TextField *TextFieldBase::createEmpty(void)
{
    TextField *returnValue;

    newPtr<TextField>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr TextFieldBase::shallowCopyLocal(
    BitVector bFlags) const
{
    TextField *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const TextField *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr TextFieldBase::shallowCopyDependent(
    BitVector bFlags) const
{
    TextField *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const TextField *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr TextFieldBase::shallowCopy(void) const
{
    TextField *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const TextField *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

TextFieldBase::TextFieldBase(void) :
    Inherited(),
    _sfAlignment              (Vec2f(0.0f, 0.5f)),
    _sfEmptyDescTextFont      (NULL),
    _sfEmptyDescText          (),
    _sfEmptyDescTextColor     (Color4f(0.3,0.3,0.3,1.0))
{
    _Producer.setType(&_producerType);
}

TextFieldBase::TextFieldBase(const TextFieldBase &source) :
    Inherited(source),
    _sfAlignment              (source._sfAlignment              ),
    _sfEmptyDescTextFont      (NULL),
    _sfEmptyDescText          (source._sfEmptyDescText          ),
    _sfEmptyDescTextColor     (source._sfEmptyDescTextColor     )
{
}


/*-------------------------- destructors ----------------------------------*/

TextFieldBase::~TextFieldBase(void)
{
}

void TextFieldBase::onCreate(const TextField *source)
{
    Inherited::onCreate(source);

    if(source != NULL)
    {
        TextField *pThis = static_cast<TextField *>(this);

        pThis->setEmptyDescTextFont(source->getEmptyDescTextFont());
    }
}

GetFieldHandlePtr TextFieldBase::getHandleAlignment       (void) const
{
    SFVec2f::GetHandlePtr returnValue(
        new  SFVec2f::GetHandle(
             &_sfAlignment,
             this->getType().getFieldDesc(AlignmentFieldId),
             const_cast<TextFieldBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr TextFieldBase::editHandleAlignment      (void)
{
    SFVec2f::EditHandlePtr returnValue(
        new  SFVec2f::EditHandle(
             &_sfAlignment,
             this->getType().getFieldDesc(AlignmentFieldId),
             this));


    editSField(AlignmentFieldMask);

    return returnValue;
}

GetFieldHandlePtr TextFieldBase::getHandleEmptyDescTextFont (void) const
{
    SFUnrecUIFontPtr::GetHandlePtr returnValue(
        new  SFUnrecUIFontPtr::GetHandle(
             &_sfEmptyDescTextFont,
             this->getType().getFieldDesc(EmptyDescTextFontFieldId),
             const_cast<TextFieldBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr TextFieldBase::editHandleEmptyDescTextFont(void)
{
    SFUnrecUIFontPtr::EditHandlePtr returnValue(
        new  SFUnrecUIFontPtr::EditHandle(
             &_sfEmptyDescTextFont,
             this->getType().getFieldDesc(EmptyDescTextFontFieldId),
             this));

    returnValue->setSetMethod(
        boost::bind(&TextField::setEmptyDescTextFont,
                    static_cast<TextField *>(this), _1));

    editSField(EmptyDescTextFontFieldMask);

    return returnValue;
}

GetFieldHandlePtr TextFieldBase::getHandleEmptyDescText   (void) const
{
    SFString::GetHandlePtr returnValue(
        new  SFString::GetHandle(
             &_sfEmptyDescText,
             this->getType().getFieldDesc(EmptyDescTextFieldId),
             const_cast<TextFieldBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr TextFieldBase::editHandleEmptyDescText  (void)
{
    SFString::EditHandlePtr returnValue(
        new  SFString::EditHandle(
             &_sfEmptyDescText,
             this->getType().getFieldDesc(EmptyDescTextFieldId),
             this));


    editSField(EmptyDescTextFieldMask);

    return returnValue;
}

GetFieldHandlePtr TextFieldBase::getHandleEmptyDescTextColor (void) const
{
    SFColor4f::GetHandlePtr returnValue(
        new  SFColor4f::GetHandle(
             &_sfEmptyDescTextColor,
             this->getType().getFieldDesc(EmptyDescTextColorFieldId),
             const_cast<TextFieldBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr TextFieldBase::editHandleEmptyDescTextColor(void)
{
    SFColor4f::EditHandlePtr returnValue(
        new  SFColor4f::EditHandle(
             &_sfEmptyDescTextColor,
             this->getType().getFieldDesc(EmptyDescTextColorFieldId),
             this));


    editSField(EmptyDescTextColorFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void TextFieldBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    TextField *pThis = static_cast<TextField *>(this);

    pThis->execSync(static_cast<TextField *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *TextFieldBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    TextField *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const TextField *>(pRefAspect),
                  dynamic_cast<const TextField *>(this));

    return returnValue;
}
#endif

void TextFieldBase::resolveLinks(void)
{
    Inherited::resolveLinks();

    static_cast<TextField *>(this)->setEmptyDescTextFont(NULL);


}


OSG_END_NAMESPACE
