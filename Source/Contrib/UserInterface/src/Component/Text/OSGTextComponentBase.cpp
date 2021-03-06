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
 **     class TextComponent!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include "OSGConfig.h"



#include "OSGUIFont.h"                  // Font Class

#include "OSGTextComponentBase.h"
#include "OSGTextComponent.h"

#include <boost/bind.hpp>

#include "OSGEvent.h"

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::TextComponent
    A UI Button.
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var std::string     TextComponentBase::_sfText
    
*/

/*! \var UInt32          TextComponentBase::_sfCaretPosition
    
*/

/*! \var UIFont *        TextComponentBase::_sfFont
    
*/

/*! \var Color4f         TextComponentBase::_sfSelectionBoxColor
    
*/

/*! \var Color4f         TextComponentBase::_sfSelectionTextColor
    
*/

/*! \var Color4f         TextComponentBase::_sfActiveTextColor
    
*/

/*! \var Color4f         TextComponentBase::_sfFocusedTextColor
    
*/

/*! \var Color4f         TextComponentBase::_sfRolloverTextColor
    
*/

/*! \var Color4f         TextComponentBase::_sfDisabledTextColor
    
*/

/*! \var Color4f         TextComponentBase::_sfTextColor
    
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<TextComponent *>::_type("TextComponentPtr", "ComponentPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(TextComponent *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           TextComponent *,
                           0);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           TextComponent *,
                           0);

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void TextComponentBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFString::Description(
        SFString::getClassType(),
        "Text",
        "",
        TextFieldId, TextFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&TextComponent::editHandleText),
        static_cast<FieldGetMethodSig >(&TextComponent::getHandleText));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUInt32::Description(
        SFUInt32::getClassType(),
        "CaretPosition",
        "",
        CaretPositionFieldId, CaretPositionFieldMask,
        true,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&TextComponent::editHandleCaretPosition),
        static_cast<FieldGetMethodSig >(&TextComponent::getHandleCaretPosition));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUnrecUIFontPtr::Description(
        SFUnrecUIFontPtr::getClassType(),
        "Font",
        "",
        FontFieldId, FontFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&TextComponent::editHandleFont),
        static_cast<FieldGetMethodSig >(&TextComponent::getHandleFont));

    oType.addInitialDesc(pDesc);

    pDesc = new SFColor4f::Description(
        SFColor4f::getClassType(),
        "SelectionBoxColor",
        "",
        SelectionBoxColorFieldId, SelectionBoxColorFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&TextComponent::editHandleSelectionBoxColor),
        static_cast<FieldGetMethodSig >(&TextComponent::getHandleSelectionBoxColor));

    oType.addInitialDesc(pDesc);

    pDesc = new SFColor4f::Description(
        SFColor4f::getClassType(),
        "SelectionTextColor",
        "",
        SelectionTextColorFieldId, SelectionTextColorFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&TextComponent::editHandleSelectionTextColor),
        static_cast<FieldGetMethodSig >(&TextComponent::getHandleSelectionTextColor));

    oType.addInitialDesc(pDesc);

    pDesc = new SFColor4f::Description(
        SFColor4f::getClassType(),
        "ActiveTextColor",
        "",
        ActiveTextColorFieldId, ActiveTextColorFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&TextComponent::editHandleActiveTextColor),
        static_cast<FieldGetMethodSig >(&TextComponent::getHandleActiveTextColor));

    oType.addInitialDesc(pDesc);

    pDesc = new SFColor4f::Description(
        SFColor4f::getClassType(),
        "FocusedTextColor",
        "",
        FocusedTextColorFieldId, FocusedTextColorFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&TextComponent::editHandleFocusedTextColor),
        static_cast<FieldGetMethodSig >(&TextComponent::getHandleFocusedTextColor));

    oType.addInitialDesc(pDesc);

    pDesc = new SFColor4f::Description(
        SFColor4f::getClassType(),
        "RolloverTextColor",
        "",
        RolloverTextColorFieldId, RolloverTextColorFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&TextComponent::editHandleRolloverTextColor),
        static_cast<FieldGetMethodSig >(&TextComponent::getHandleRolloverTextColor));

    oType.addInitialDesc(pDesc);

    pDesc = new SFColor4f::Description(
        SFColor4f::getClassType(),
        "DisabledTextColor",
        "",
        DisabledTextColorFieldId, DisabledTextColorFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&TextComponent::editHandleDisabledTextColor),
        static_cast<FieldGetMethodSig >(&TextComponent::getHandleDisabledTextColor));

    oType.addInitialDesc(pDesc);

    pDesc = new SFColor4f::Description(
        SFColor4f::getClassType(),
        "TextColor",
        "",
        TextColorFieldId, TextColorFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&TextComponent::editHandleTextColor),
        static_cast<FieldGetMethodSig >(&TextComponent::getHandleTextColor));

    oType.addInitialDesc(pDesc);
}


TextComponentBase::TypeObject TextComponentBase::_type(
    TextComponentBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    NULL,
    TextComponent::initMethod,
    TextComponent::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&TextComponent::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"TextComponent\"\n"
    "\tparent=\"Component\"\n"
    "    library=\"ContribUserInterface\"\n"
    "    pointerfieldtypes=\"both\"\n"
    "\tstructure=\"abstract\"\n"
    "    systemcomponent=\"true\"\n"
    "    parentsystemcomponent=\"true\"\n"
    "    decoratable=\"false\"\n"
    "    useLocalIncludes=\"false\"\n"
    "    isNodeCore=\"false\"\n"
    "    authors=\"David Kabala (djkabala@gmail.com)                             \"\n"
    "    parentProducer=\"Component\"\n"
    ">\n"
    "A UI Button.\n"
    "\t<Field\n"
    "\t\tname=\"Text\"\n"
    "\t\ttype=\"std::string\"\n"
    "\t\tcategory=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"CaretPosition\"\n"
    "\t\ttype=\"UInt32\"\n"
    "\t\tcategory=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"internal\"\n"
    "\t\tdefaultValue=\"0\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"Font\"\n"
    "\t\ttype=\"UIFont\"\n"
    "\t\tcategory=\"pointer\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"NULL\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"SelectionBoxColor\"\n"
    "\t\ttype=\"Color4f\"\n"
    "\t\tcategory=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"0.0,0.0,1.0,1.0\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"SelectionTextColor\"\n"
    "\t\ttype=\"Color4f\"\n"
    "\t\tcategory=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"1.0,1.0,1.0,1.0\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"ActiveTextColor\"\n"
    "\t\ttype=\"Color4f\"\n"
    "\t\tcategory=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"FocusedTextColor\"\n"
    "\t\ttype=\"Color4f\"\n"
    "\t\tcategory=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"RolloverTextColor\"\n"
    "\t\ttype=\"Color4f\"\n"
    "\t\tcategory=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"DisabledTextColor\"\n"
    "\t\ttype=\"Color4f\"\n"
    "\t\tcategory=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"TextColor\"\n"
    "\t\ttype=\"Color4f\"\n"
    "\t\tcategory=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<ProducedMethod\n"
    "\t\tname=\"TextValueChanged\"\n"
    "\t\ttype=\"TextEventPtr\"\n"
    "\t>\n"
    "\t</ProducedMethod>\n"
    "\t<ProducedMethod\n"
    "\t\tname=\"CaretChanged\"\n"
    "\t\ttype=\"CaretEventPtr\"\n"
    "\t>\n"
    "\t</ProducedMethod>\n"
    "</FieldContainer>\n",
    "A UI Button.\n"
    );

//! TextComponent Produced Methods

MethodDescription *TextComponentBase::_methodDesc[] =
{
    new MethodDescription("TextValueChanged", 
                    "",
                     TextValueChangedMethodId, 
                     SFUnrecEventPtr::getClassType(),
                     FunctorAccessMethod()),
    new MethodDescription("CaretChanged", 
                    "",
                     CaretChangedMethodId, 
                     SFUnrecEventPtr::getClassType(),
                     FunctorAccessMethod())
};

EventProducerType TextComponentBase::_producerType(
    "TextComponentProducerType",
    "ComponentProducerType",
    "",
    InitEventProducerFunctor(),
    _methodDesc,
    sizeof(_methodDesc));

/*------------------------------ get -----------------------------------*/

FieldContainerType &TextComponentBase::getType(void)
{
    return _type;
}

const FieldContainerType &TextComponentBase::getType(void) const
{
    return _type;
}

const EventProducerType &TextComponentBase::getProducerType(void) const
{
    return _producerType;
}

UInt32 TextComponentBase::getContainerSize(void) const
{
    return sizeof(TextComponent);
}

/*------------------------- decorator get ------------------------------*/


SFString *TextComponentBase::editSFText(void)
{
    editSField(TextFieldMask);

    return &_sfText;
}

const SFString *TextComponentBase::getSFText(void) const
{
    return &_sfText;
}


SFUInt32 *TextComponentBase::editSFCaretPosition(void)
{
    editSField(CaretPositionFieldMask);

    return &_sfCaretPosition;
}

const SFUInt32 *TextComponentBase::getSFCaretPosition(void) const
{
    return &_sfCaretPosition;
}


//! Get the TextComponent::_sfFont field.
const SFUnrecUIFontPtr *TextComponentBase::getSFFont(void) const
{
    return &_sfFont;
}

SFUnrecUIFontPtr    *TextComponentBase::editSFFont           (void)
{
    editSField(FontFieldMask);

    return &_sfFont;
}

SFColor4f *TextComponentBase::editSFSelectionBoxColor(void)
{
    editSField(SelectionBoxColorFieldMask);

    return &_sfSelectionBoxColor;
}

const SFColor4f *TextComponentBase::getSFSelectionBoxColor(void) const
{
    return &_sfSelectionBoxColor;
}


SFColor4f *TextComponentBase::editSFSelectionTextColor(void)
{
    editSField(SelectionTextColorFieldMask);

    return &_sfSelectionTextColor;
}

const SFColor4f *TextComponentBase::getSFSelectionTextColor(void) const
{
    return &_sfSelectionTextColor;
}


SFColor4f *TextComponentBase::editSFActiveTextColor(void)
{
    editSField(ActiveTextColorFieldMask);

    return &_sfActiveTextColor;
}

const SFColor4f *TextComponentBase::getSFActiveTextColor(void) const
{
    return &_sfActiveTextColor;
}


SFColor4f *TextComponentBase::editSFFocusedTextColor(void)
{
    editSField(FocusedTextColorFieldMask);

    return &_sfFocusedTextColor;
}

const SFColor4f *TextComponentBase::getSFFocusedTextColor(void) const
{
    return &_sfFocusedTextColor;
}


SFColor4f *TextComponentBase::editSFRolloverTextColor(void)
{
    editSField(RolloverTextColorFieldMask);

    return &_sfRolloverTextColor;
}

const SFColor4f *TextComponentBase::getSFRolloverTextColor(void) const
{
    return &_sfRolloverTextColor;
}


SFColor4f *TextComponentBase::editSFDisabledTextColor(void)
{
    editSField(DisabledTextColorFieldMask);

    return &_sfDisabledTextColor;
}

const SFColor4f *TextComponentBase::getSFDisabledTextColor(void) const
{
    return &_sfDisabledTextColor;
}


SFColor4f *TextComponentBase::editSFTextColor(void)
{
    editSField(TextColorFieldMask);

    return &_sfTextColor;
}

const SFColor4f *TextComponentBase::getSFTextColor(void) const
{
    return &_sfTextColor;
}






/*------------------------------ access -----------------------------------*/

UInt32 TextComponentBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (TextFieldMask & whichField))
    {
        returnValue += _sfText.getBinSize();
    }
    if(FieldBits::NoField != (CaretPositionFieldMask & whichField))
    {
        returnValue += _sfCaretPosition.getBinSize();
    }
    if(FieldBits::NoField != (FontFieldMask & whichField))
    {
        returnValue += _sfFont.getBinSize();
    }
    if(FieldBits::NoField != (SelectionBoxColorFieldMask & whichField))
    {
        returnValue += _sfSelectionBoxColor.getBinSize();
    }
    if(FieldBits::NoField != (SelectionTextColorFieldMask & whichField))
    {
        returnValue += _sfSelectionTextColor.getBinSize();
    }
    if(FieldBits::NoField != (ActiveTextColorFieldMask & whichField))
    {
        returnValue += _sfActiveTextColor.getBinSize();
    }
    if(FieldBits::NoField != (FocusedTextColorFieldMask & whichField))
    {
        returnValue += _sfFocusedTextColor.getBinSize();
    }
    if(FieldBits::NoField != (RolloverTextColorFieldMask & whichField))
    {
        returnValue += _sfRolloverTextColor.getBinSize();
    }
    if(FieldBits::NoField != (DisabledTextColorFieldMask & whichField))
    {
        returnValue += _sfDisabledTextColor.getBinSize();
    }
    if(FieldBits::NoField != (TextColorFieldMask & whichField))
    {
        returnValue += _sfTextColor.getBinSize();
    }

    return returnValue;
}

void TextComponentBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (TextFieldMask & whichField))
    {
        _sfText.copyToBin(pMem);
    }
    if(FieldBits::NoField != (CaretPositionFieldMask & whichField))
    {
        _sfCaretPosition.copyToBin(pMem);
    }
    if(FieldBits::NoField != (FontFieldMask & whichField))
    {
        _sfFont.copyToBin(pMem);
    }
    if(FieldBits::NoField != (SelectionBoxColorFieldMask & whichField))
    {
        _sfSelectionBoxColor.copyToBin(pMem);
    }
    if(FieldBits::NoField != (SelectionTextColorFieldMask & whichField))
    {
        _sfSelectionTextColor.copyToBin(pMem);
    }
    if(FieldBits::NoField != (ActiveTextColorFieldMask & whichField))
    {
        _sfActiveTextColor.copyToBin(pMem);
    }
    if(FieldBits::NoField != (FocusedTextColorFieldMask & whichField))
    {
        _sfFocusedTextColor.copyToBin(pMem);
    }
    if(FieldBits::NoField != (RolloverTextColorFieldMask & whichField))
    {
        _sfRolloverTextColor.copyToBin(pMem);
    }
    if(FieldBits::NoField != (DisabledTextColorFieldMask & whichField))
    {
        _sfDisabledTextColor.copyToBin(pMem);
    }
    if(FieldBits::NoField != (TextColorFieldMask & whichField))
    {
        _sfTextColor.copyToBin(pMem);
    }
}

void TextComponentBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (TextFieldMask & whichField))
    {
        _sfText.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (CaretPositionFieldMask & whichField))
    {
        _sfCaretPosition.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (FontFieldMask & whichField))
    {
        _sfFont.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (SelectionBoxColorFieldMask & whichField))
    {
        _sfSelectionBoxColor.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (SelectionTextColorFieldMask & whichField))
    {
        _sfSelectionTextColor.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (ActiveTextColorFieldMask & whichField))
    {
        _sfActiveTextColor.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (FocusedTextColorFieldMask & whichField))
    {
        _sfFocusedTextColor.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (RolloverTextColorFieldMask & whichField))
    {
        _sfRolloverTextColor.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (DisabledTextColorFieldMask & whichField))
    {
        _sfDisabledTextColor.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (TextColorFieldMask & whichField))
    {
        _sfTextColor.copyFromBin(pMem);
    }
}




/*------------------------- constructors ----------------------------------*/

TextComponentBase::TextComponentBase(void) :
    Inherited(),
    _sfText                   (),
    _sfCaretPosition          (UInt32(0)),
    _sfFont                   (NULL),
    _sfSelectionBoxColor      (Color4f(0.0,0.0,1.0,1.0)),
    _sfSelectionTextColor     (Color4f(1.0,1.0,1.0,1.0)),
    _sfActiveTextColor        (),
    _sfFocusedTextColor       (),
    _sfRolloverTextColor      (),
    _sfDisabledTextColor      (),
    _sfTextColor              ()
{
    _Producer.setType(&_producerType);
}

TextComponentBase::TextComponentBase(const TextComponentBase &source) :
    Inherited(source),
    _sfText                   (source._sfText                   ),
    _sfCaretPosition          (source._sfCaretPosition          ),
    _sfFont                   (NULL),
    _sfSelectionBoxColor      (source._sfSelectionBoxColor      ),
    _sfSelectionTextColor     (source._sfSelectionTextColor     ),
    _sfActiveTextColor        (source._sfActiveTextColor        ),
    _sfFocusedTextColor       (source._sfFocusedTextColor       ),
    _sfRolloverTextColor      (source._sfRolloverTextColor      ),
    _sfDisabledTextColor      (source._sfDisabledTextColor      ),
    _sfTextColor              (source._sfTextColor              )
{
}


/*-------------------------- destructors ----------------------------------*/

TextComponentBase::~TextComponentBase(void)
{
}

void TextComponentBase::onCreate(const TextComponent *source)
{
    Inherited::onCreate(source);

    if(source != NULL)
    {
        TextComponent *pThis = static_cast<TextComponent *>(this);

        pThis->setFont(source->getFont());
    }
}

GetFieldHandlePtr TextComponentBase::getHandleText            (void) const
{
    SFString::GetHandlePtr returnValue(
        new  SFString::GetHandle(
             &_sfText,
             this->getType().getFieldDesc(TextFieldId),
             const_cast<TextComponentBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr TextComponentBase::editHandleText           (void)
{
    SFString::EditHandlePtr returnValue(
        new  SFString::EditHandle(
             &_sfText,
             this->getType().getFieldDesc(TextFieldId),
             this));


    editSField(TextFieldMask);

    return returnValue;
}

GetFieldHandlePtr TextComponentBase::getHandleCaretPosition   (void) const
{
    SFUInt32::GetHandlePtr returnValue(
        new  SFUInt32::GetHandle(
             &_sfCaretPosition,
             this->getType().getFieldDesc(CaretPositionFieldId),
             const_cast<TextComponentBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr TextComponentBase::editHandleCaretPosition  (void)
{
    SFUInt32::EditHandlePtr returnValue(
        new  SFUInt32::EditHandle(
             &_sfCaretPosition,
             this->getType().getFieldDesc(CaretPositionFieldId),
             this));


    editSField(CaretPositionFieldMask);

    return returnValue;
}

GetFieldHandlePtr TextComponentBase::getHandleFont            (void) const
{
    SFUnrecUIFontPtr::GetHandlePtr returnValue(
        new  SFUnrecUIFontPtr::GetHandle(
             &_sfFont,
             this->getType().getFieldDesc(FontFieldId),
             const_cast<TextComponentBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr TextComponentBase::editHandleFont           (void)
{
    SFUnrecUIFontPtr::EditHandlePtr returnValue(
        new  SFUnrecUIFontPtr::EditHandle(
             &_sfFont,
             this->getType().getFieldDesc(FontFieldId),
             this));

    returnValue->setSetMethod(
        boost::bind(&TextComponent::setFont,
                    static_cast<TextComponent *>(this), _1));

    editSField(FontFieldMask);

    return returnValue;
}

GetFieldHandlePtr TextComponentBase::getHandleSelectionBoxColor (void) const
{
    SFColor4f::GetHandlePtr returnValue(
        new  SFColor4f::GetHandle(
             &_sfSelectionBoxColor,
             this->getType().getFieldDesc(SelectionBoxColorFieldId),
             const_cast<TextComponentBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr TextComponentBase::editHandleSelectionBoxColor(void)
{
    SFColor4f::EditHandlePtr returnValue(
        new  SFColor4f::EditHandle(
             &_sfSelectionBoxColor,
             this->getType().getFieldDesc(SelectionBoxColorFieldId),
             this));


    editSField(SelectionBoxColorFieldMask);

    return returnValue;
}

GetFieldHandlePtr TextComponentBase::getHandleSelectionTextColor (void) const
{
    SFColor4f::GetHandlePtr returnValue(
        new  SFColor4f::GetHandle(
             &_sfSelectionTextColor,
             this->getType().getFieldDesc(SelectionTextColorFieldId),
             const_cast<TextComponentBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr TextComponentBase::editHandleSelectionTextColor(void)
{
    SFColor4f::EditHandlePtr returnValue(
        new  SFColor4f::EditHandle(
             &_sfSelectionTextColor,
             this->getType().getFieldDesc(SelectionTextColorFieldId),
             this));


    editSField(SelectionTextColorFieldMask);

    return returnValue;
}

GetFieldHandlePtr TextComponentBase::getHandleActiveTextColor (void) const
{
    SFColor4f::GetHandlePtr returnValue(
        new  SFColor4f::GetHandle(
             &_sfActiveTextColor,
             this->getType().getFieldDesc(ActiveTextColorFieldId),
             const_cast<TextComponentBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr TextComponentBase::editHandleActiveTextColor(void)
{
    SFColor4f::EditHandlePtr returnValue(
        new  SFColor4f::EditHandle(
             &_sfActiveTextColor,
             this->getType().getFieldDesc(ActiveTextColorFieldId),
             this));


    editSField(ActiveTextColorFieldMask);

    return returnValue;
}

GetFieldHandlePtr TextComponentBase::getHandleFocusedTextColor (void) const
{
    SFColor4f::GetHandlePtr returnValue(
        new  SFColor4f::GetHandle(
             &_sfFocusedTextColor,
             this->getType().getFieldDesc(FocusedTextColorFieldId),
             const_cast<TextComponentBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr TextComponentBase::editHandleFocusedTextColor(void)
{
    SFColor4f::EditHandlePtr returnValue(
        new  SFColor4f::EditHandle(
             &_sfFocusedTextColor,
             this->getType().getFieldDesc(FocusedTextColorFieldId),
             this));


    editSField(FocusedTextColorFieldMask);

    return returnValue;
}

GetFieldHandlePtr TextComponentBase::getHandleRolloverTextColor (void) const
{
    SFColor4f::GetHandlePtr returnValue(
        new  SFColor4f::GetHandle(
             &_sfRolloverTextColor,
             this->getType().getFieldDesc(RolloverTextColorFieldId),
             const_cast<TextComponentBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr TextComponentBase::editHandleRolloverTextColor(void)
{
    SFColor4f::EditHandlePtr returnValue(
        new  SFColor4f::EditHandle(
             &_sfRolloverTextColor,
             this->getType().getFieldDesc(RolloverTextColorFieldId),
             this));


    editSField(RolloverTextColorFieldMask);

    return returnValue;
}

GetFieldHandlePtr TextComponentBase::getHandleDisabledTextColor (void) const
{
    SFColor4f::GetHandlePtr returnValue(
        new  SFColor4f::GetHandle(
             &_sfDisabledTextColor,
             this->getType().getFieldDesc(DisabledTextColorFieldId),
             const_cast<TextComponentBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr TextComponentBase::editHandleDisabledTextColor(void)
{
    SFColor4f::EditHandlePtr returnValue(
        new  SFColor4f::EditHandle(
             &_sfDisabledTextColor,
             this->getType().getFieldDesc(DisabledTextColorFieldId),
             this));


    editSField(DisabledTextColorFieldMask);

    return returnValue;
}

GetFieldHandlePtr TextComponentBase::getHandleTextColor       (void) const
{
    SFColor4f::GetHandlePtr returnValue(
        new  SFColor4f::GetHandle(
             &_sfTextColor,
             this->getType().getFieldDesc(TextColorFieldId),
             const_cast<TextComponentBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr TextComponentBase::editHandleTextColor      (void)
{
    SFColor4f::EditHandlePtr returnValue(
        new  SFColor4f::EditHandle(
             &_sfTextColor,
             this->getType().getFieldDesc(TextColorFieldId),
             this));


    editSField(TextColorFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void TextComponentBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    TextComponent *pThis = static_cast<TextComponent *>(this);

    pThis->execSync(static_cast<TextComponent *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif



void TextComponentBase::resolveLinks(void)
{
    Inherited::resolveLinks();

    static_cast<TextComponent *>(this)->setFont(NULL);


}


OSG_END_NAMESPACE
