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
 **     class UIFont!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include "OSGConfig.h"


#include "OSGTextFace.h"                  // Style default header

#include "OSGTextureObjChunk.h"         // Texture Class

#include "OSGUIFontBase.h"
#include "OSGUIFont.h"

#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::UIFont
    UI Font.
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var std::string     UIFontBase::_sfFamily
    
*/

/*! \var UInt32          UIFontBase::_sfGlyphPixelSize
    
*/

/*! \var UInt32          UIFontBase::_sfSize
    
*/

/*! \var UInt32          UIFontBase::_sfGap
    
*/

/*! \var UInt32          UIFontBase::_sfTextureWidth
    
*/

/*! \var UInt32          UIFontBase::_sfStyle
    
*/

/*! \var bool            UIFontBase::_sfAntiAliasing
    
*/

/*! \var TextureObjChunk * UIFontBase::_sfTexture
    
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<UIFont *>::_type("UIFontPtr", "AttachmentContainerPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(UIFont *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           UIFont *,
                           0);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           UIFont *,
                           0);

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void UIFontBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFString::Description(
        SFString::getClassType(),
        "Family",
        "",
        FamilyFieldId, FamilyFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&UIFont::editHandleFamily),
        static_cast<FieldGetMethodSig >(&UIFont::getHandleFamily));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUInt32::Description(
        SFUInt32::getClassType(),
        "GlyphPixelSize",
        "",
        GlyphPixelSizeFieldId, GlyphPixelSizeFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&UIFont::editHandleGlyphPixelSize),
        static_cast<FieldGetMethodSig >(&UIFont::getHandleGlyphPixelSize));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUInt32::Description(
        SFUInt32::getClassType(),
        "Size",
        "",
        SizeFieldId, SizeFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&UIFont::editHandleSize),
        static_cast<FieldGetMethodSig >(&UIFont::getHandleSize));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUInt32::Description(
        SFUInt32::getClassType(),
        "Gap",
        "",
        GapFieldId, GapFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&UIFont::editHandleGap),
        static_cast<FieldGetMethodSig >(&UIFont::getHandleGap));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUInt32::Description(
        SFUInt32::getClassType(),
        "TextureWidth",
        "",
        TextureWidthFieldId, TextureWidthFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&UIFont::editHandleTextureWidth),
        static_cast<FieldGetMethodSig >(&UIFont::getHandleTextureWidth));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUInt32::Description(
        SFUInt32::getClassType(),
        "Style",
        "",
        StyleFieldId, StyleFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&UIFont::editHandleStyle),
        static_cast<FieldGetMethodSig >(&UIFont::getHandleStyle));

    oType.addInitialDesc(pDesc);

    pDesc = new SFBool::Description(
        SFBool::getClassType(),
        "AntiAliasing",
        "",
        AntiAliasingFieldId, AntiAliasingFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&UIFont::editHandleAntiAliasing),
        static_cast<FieldGetMethodSig >(&UIFont::getHandleAntiAliasing));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUnrecTextureObjChunkPtr::Description(
        SFUnrecTextureObjChunkPtr::getClassType(),
        "Texture",
        "",
        TextureFieldId, TextureFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&UIFont::editHandleTexture),
        static_cast<FieldGetMethodSig >(&UIFont::getHandleTexture));

    oType.addInitialDesc(pDesc);
}


UIFontBase::TypeObject UIFontBase::_type(
    UIFontBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    reinterpret_cast<PrototypeCreateF>(&UIFontBase::createEmptyLocal),
    UIFont::initMethod,
    UIFont::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&UIFont::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"UIFont\"\n"
    "\tparent=\"AttachmentContainer\"\n"
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
    "UI Font.\n"
    "\t<Field\n"
    "\t\tname=\"Family\"\n"
    "\t\ttype=\"std::string\"\n"
    "        category=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue='\"SANS\"'\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"GlyphPixelSize\"\n"
    "\t\ttype=\"UInt32\"\n"
    "        category=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"46\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"Size\"\n"
    "\t\ttype=\"UInt32\"\n"
    "        category=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"12\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"Gap\"\n"
    "\t\ttype=\"UInt32\"\n"
    "        category=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"3\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"TextureWidth\"\n"
    "\t\ttype=\"UInt32\"\n"
    "        category=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"0\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"Style\"\n"
    "\t\ttype=\"UInt32\"\n"
    "        category=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"TextFace::STYLE_PLAIN\"\n"
    "\t\tdefaultHeader=\"OSGTextFace.h\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"AntiAliasing\"\n"
    "\t\ttype=\"bool\"\n"
    "        category=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"true\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"Texture\"\n"
    "\t\ttype=\"TextureObjChunk\"\n"
    "        category=\"pointer\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    "UI Font.\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &UIFontBase::getType(void)
{
    return _type;
}

const FieldContainerType &UIFontBase::getType(void) const
{
    return _type;
}

UInt32 UIFontBase::getContainerSize(void) const
{
    return sizeof(UIFont);
}

/*------------------------- decorator get ------------------------------*/


SFString *UIFontBase::editSFFamily(void)
{
    editSField(FamilyFieldMask);

    return &_sfFamily;
}

const SFString *UIFontBase::getSFFamily(void) const
{
    return &_sfFamily;
}


SFUInt32 *UIFontBase::editSFGlyphPixelSize(void)
{
    editSField(GlyphPixelSizeFieldMask);

    return &_sfGlyphPixelSize;
}

const SFUInt32 *UIFontBase::getSFGlyphPixelSize(void) const
{
    return &_sfGlyphPixelSize;
}


SFUInt32 *UIFontBase::editSFSize(void)
{
    editSField(SizeFieldMask);

    return &_sfSize;
}

const SFUInt32 *UIFontBase::getSFSize(void) const
{
    return &_sfSize;
}


SFUInt32 *UIFontBase::editSFGap(void)
{
    editSField(GapFieldMask);

    return &_sfGap;
}

const SFUInt32 *UIFontBase::getSFGap(void) const
{
    return &_sfGap;
}


SFUInt32 *UIFontBase::editSFTextureWidth(void)
{
    editSField(TextureWidthFieldMask);

    return &_sfTextureWidth;
}

const SFUInt32 *UIFontBase::getSFTextureWidth(void) const
{
    return &_sfTextureWidth;
}


SFUInt32 *UIFontBase::editSFStyle(void)
{
    editSField(StyleFieldMask);

    return &_sfStyle;
}

const SFUInt32 *UIFontBase::getSFStyle(void) const
{
    return &_sfStyle;
}


SFBool *UIFontBase::editSFAntiAliasing(void)
{
    editSField(AntiAliasingFieldMask);

    return &_sfAntiAliasing;
}

const SFBool *UIFontBase::getSFAntiAliasing(void) const
{
    return &_sfAntiAliasing;
}


//! Get the UIFont::_sfTexture field.
const SFUnrecTextureObjChunkPtr *UIFontBase::getSFTexture(void) const
{
    return &_sfTexture;
}

SFUnrecTextureObjChunkPtr *UIFontBase::editSFTexture        (void)
{
    editSField(TextureFieldMask);

    return &_sfTexture;
}





/*------------------------------ access -----------------------------------*/

UInt32 UIFontBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (FamilyFieldMask & whichField))
    {
        returnValue += _sfFamily.getBinSize();
    }
    if(FieldBits::NoField != (GlyphPixelSizeFieldMask & whichField))
    {
        returnValue += _sfGlyphPixelSize.getBinSize();
    }
    if(FieldBits::NoField != (SizeFieldMask & whichField))
    {
        returnValue += _sfSize.getBinSize();
    }
    if(FieldBits::NoField != (GapFieldMask & whichField))
    {
        returnValue += _sfGap.getBinSize();
    }
    if(FieldBits::NoField != (TextureWidthFieldMask & whichField))
    {
        returnValue += _sfTextureWidth.getBinSize();
    }
    if(FieldBits::NoField != (StyleFieldMask & whichField))
    {
        returnValue += _sfStyle.getBinSize();
    }
    if(FieldBits::NoField != (AntiAliasingFieldMask & whichField))
    {
        returnValue += _sfAntiAliasing.getBinSize();
    }
    if(FieldBits::NoField != (TextureFieldMask & whichField))
    {
        returnValue += _sfTexture.getBinSize();
    }

    return returnValue;
}

void UIFontBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (FamilyFieldMask & whichField))
    {
        _sfFamily.copyToBin(pMem);
    }
    if(FieldBits::NoField != (GlyphPixelSizeFieldMask & whichField))
    {
        _sfGlyphPixelSize.copyToBin(pMem);
    }
    if(FieldBits::NoField != (SizeFieldMask & whichField))
    {
        _sfSize.copyToBin(pMem);
    }
    if(FieldBits::NoField != (GapFieldMask & whichField))
    {
        _sfGap.copyToBin(pMem);
    }
    if(FieldBits::NoField != (TextureWidthFieldMask & whichField))
    {
        _sfTextureWidth.copyToBin(pMem);
    }
    if(FieldBits::NoField != (StyleFieldMask & whichField))
    {
        _sfStyle.copyToBin(pMem);
    }
    if(FieldBits::NoField != (AntiAliasingFieldMask & whichField))
    {
        _sfAntiAliasing.copyToBin(pMem);
    }
    if(FieldBits::NoField != (TextureFieldMask & whichField))
    {
        _sfTexture.copyToBin(pMem);
    }
}

void UIFontBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (FamilyFieldMask & whichField))
    {
        _sfFamily.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (GlyphPixelSizeFieldMask & whichField))
    {
        _sfGlyphPixelSize.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (SizeFieldMask & whichField))
    {
        _sfSize.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (GapFieldMask & whichField))
    {
        _sfGap.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (TextureWidthFieldMask & whichField))
    {
        _sfTextureWidth.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (StyleFieldMask & whichField))
    {
        _sfStyle.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (AntiAliasingFieldMask & whichField))
    {
        _sfAntiAliasing.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (TextureFieldMask & whichField))
    {
        _sfTexture.copyFromBin(pMem);
    }
}

//! create a new instance of the class
UIFontTransitPtr UIFontBase::createLocal(BitVector bFlags)
{
    UIFontTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<UIFont>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
UIFontTransitPtr UIFontBase::createDependent(BitVector bFlags)
{
    UIFontTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<UIFont>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
UIFontTransitPtr UIFontBase::create(void)
{
    UIFontTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<UIFont>(tmpPtr);
    }

    return fc;
}

UIFont *UIFontBase::createEmptyLocal(BitVector bFlags)
{
    UIFont *returnValue;

    newPtr<UIFont>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
UIFont *UIFontBase::createEmpty(void)
{
    UIFont *returnValue;

    newPtr<UIFont>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr UIFontBase::shallowCopyLocal(
    BitVector bFlags) const
{
    UIFont *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const UIFont *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr UIFontBase::shallowCopyDependent(
    BitVector bFlags) const
{
    UIFont *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const UIFont *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr UIFontBase::shallowCopy(void) const
{
    UIFont *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const UIFont *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

UIFontBase::UIFontBase(void) :
    Inherited(),
    _sfFamily                 (std::string("SANS")),
    _sfGlyphPixelSize         (UInt32(46)),
    _sfSize                   (UInt32(12)),
    _sfGap                    (UInt32(3)),
    _sfTextureWidth           (UInt32(0)),
    _sfStyle                  (UInt32(TextFace::STYLE_PLAIN)),
    _sfAntiAliasing           (bool(true)),
    _sfTexture                (NULL)
{
}

UIFontBase::UIFontBase(const UIFontBase &source) :
    Inherited(source),
    _sfFamily                 (source._sfFamily                 ),
    _sfGlyphPixelSize         (source._sfGlyphPixelSize         ),
    _sfSize                   (source._sfSize                   ),
    _sfGap                    (source._sfGap                    ),
    _sfTextureWidth           (source._sfTextureWidth           ),
    _sfStyle                  (source._sfStyle                  ),
    _sfAntiAliasing           (source._sfAntiAliasing           ),
    _sfTexture                (NULL)
{
}


/*-------------------------- destructors ----------------------------------*/

UIFontBase::~UIFontBase(void)
{
}

void UIFontBase::onCreate(const UIFont *source)
{
    Inherited::onCreate(source);

    if(source != NULL)
    {
        UIFont *pThis = static_cast<UIFont *>(this);

        pThis->setTexture(source->getTexture());
    }
}

GetFieldHandlePtr UIFontBase::getHandleFamily          (void) const
{
    SFString::GetHandlePtr returnValue(
        new  SFString::GetHandle(
             &_sfFamily,
             this->getType().getFieldDesc(FamilyFieldId),
             const_cast<UIFontBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr UIFontBase::editHandleFamily         (void)
{
    SFString::EditHandlePtr returnValue(
        new  SFString::EditHandle(
             &_sfFamily,
             this->getType().getFieldDesc(FamilyFieldId),
             this));


    editSField(FamilyFieldMask);

    return returnValue;
}

GetFieldHandlePtr UIFontBase::getHandleGlyphPixelSize  (void) const
{
    SFUInt32::GetHandlePtr returnValue(
        new  SFUInt32::GetHandle(
             &_sfGlyphPixelSize,
             this->getType().getFieldDesc(GlyphPixelSizeFieldId),
             const_cast<UIFontBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr UIFontBase::editHandleGlyphPixelSize (void)
{
    SFUInt32::EditHandlePtr returnValue(
        new  SFUInt32::EditHandle(
             &_sfGlyphPixelSize,
             this->getType().getFieldDesc(GlyphPixelSizeFieldId),
             this));


    editSField(GlyphPixelSizeFieldMask);

    return returnValue;
}

GetFieldHandlePtr UIFontBase::getHandleSize            (void) const
{
    SFUInt32::GetHandlePtr returnValue(
        new  SFUInt32::GetHandle(
             &_sfSize,
             this->getType().getFieldDesc(SizeFieldId),
             const_cast<UIFontBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr UIFontBase::editHandleSize           (void)
{
    SFUInt32::EditHandlePtr returnValue(
        new  SFUInt32::EditHandle(
             &_sfSize,
             this->getType().getFieldDesc(SizeFieldId),
             this));


    editSField(SizeFieldMask);

    return returnValue;
}

GetFieldHandlePtr UIFontBase::getHandleGap             (void) const
{
    SFUInt32::GetHandlePtr returnValue(
        new  SFUInt32::GetHandle(
             &_sfGap,
             this->getType().getFieldDesc(GapFieldId),
             const_cast<UIFontBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr UIFontBase::editHandleGap            (void)
{
    SFUInt32::EditHandlePtr returnValue(
        new  SFUInt32::EditHandle(
             &_sfGap,
             this->getType().getFieldDesc(GapFieldId),
             this));


    editSField(GapFieldMask);

    return returnValue;
}

GetFieldHandlePtr UIFontBase::getHandleTextureWidth    (void) const
{
    SFUInt32::GetHandlePtr returnValue(
        new  SFUInt32::GetHandle(
             &_sfTextureWidth,
             this->getType().getFieldDesc(TextureWidthFieldId),
             const_cast<UIFontBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr UIFontBase::editHandleTextureWidth   (void)
{
    SFUInt32::EditHandlePtr returnValue(
        new  SFUInt32::EditHandle(
             &_sfTextureWidth,
             this->getType().getFieldDesc(TextureWidthFieldId),
             this));


    editSField(TextureWidthFieldMask);

    return returnValue;
}

GetFieldHandlePtr UIFontBase::getHandleStyle           (void) const
{
    SFUInt32::GetHandlePtr returnValue(
        new  SFUInt32::GetHandle(
             &_sfStyle,
             this->getType().getFieldDesc(StyleFieldId),
             const_cast<UIFontBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr UIFontBase::editHandleStyle          (void)
{
    SFUInt32::EditHandlePtr returnValue(
        new  SFUInt32::EditHandle(
             &_sfStyle,
             this->getType().getFieldDesc(StyleFieldId),
             this));


    editSField(StyleFieldMask);

    return returnValue;
}

GetFieldHandlePtr UIFontBase::getHandleAntiAliasing    (void) const
{
    SFBool::GetHandlePtr returnValue(
        new  SFBool::GetHandle(
             &_sfAntiAliasing,
             this->getType().getFieldDesc(AntiAliasingFieldId),
             const_cast<UIFontBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr UIFontBase::editHandleAntiAliasing   (void)
{
    SFBool::EditHandlePtr returnValue(
        new  SFBool::EditHandle(
             &_sfAntiAliasing,
             this->getType().getFieldDesc(AntiAliasingFieldId),
             this));


    editSField(AntiAliasingFieldMask);

    return returnValue;
}

GetFieldHandlePtr UIFontBase::getHandleTexture         (void) const
{
    SFUnrecTextureObjChunkPtr::GetHandlePtr returnValue(
        new  SFUnrecTextureObjChunkPtr::GetHandle(
             &_sfTexture,
             this->getType().getFieldDesc(TextureFieldId),
             const_cast<UIFontBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr UIFontBase::editHandleTexture        (void)
{
    SFUnrecTextureObjChunkPtr::EditHandlePtr returnValue(
        new  SFUnrecTextureObjChunkPtr::EditHandle(
             &_sfTexture,
             this->getType().getFieldDesc(TextureFieldId),
             this));

    returnValue->setSetMethod(
        boost::bind(&UIFont::setTexture,
                    static_cast<UIFont *>(this), _1));

    editSField(TextureFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void UIFontBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    UIFont *pThis = static_cast<UIFont *>(this);

    pThis->execSync(static_cast<UIFont *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *UIFontBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    UIFont *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const UIFont *>(pRefAspect),
                  dynamic_cast<const UIFont *>(this));

    return returnValue;
}
#endif

void UIFontBase::resolveLinks(void)
{
    Inherited::resolveLinks();

    static_cast<UIFont *>(this)->setTexture(NULL);


}


OSG_END_NAMESPACE
