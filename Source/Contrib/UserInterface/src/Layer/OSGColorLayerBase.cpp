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
 **     class ColorLayer!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include "OSGConfig.h"




#include "OSGColorLayerBase.h"
#include "OSGColorLayer.h"

#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::ColorLayer
    UI Color Background.
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var Color4f         ColorLayerBase::_sfColor
    
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<ColorLayer *>::_type("ColorLayerPtr", "LayerPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(ColorLayer *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           ColorLayer *,
                           0);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           ColorLayer *,
                           0);

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void ColorLayerBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFColor4f::Description(
        SFColor4f::getClassType(),
        "Color",
        "",
        ColorFieldId, ColorFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&ColorLayer::editHandleColor),
        static_cast<FieldGetMethodSig >(&ColorLayer::getHandleColor));

    oType.addInitialDesc(pDesc);
}


ColorLayerBase::TypeObject ColorLayerBase::_type(
    ColorLayerBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    reinterpret_cast<PrototypeCreateF>(&ColorLayerBase::createEmptyLocal),
    ColorLayer::initMethod,
    ColorLayer::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&ColorLayer::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"ColorLayer\"\n"
    "\tparent=\"Layer\"\n"
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
    "UI Color Background.\n"
    "\t<Field\n"
    "\t\tname=\"Color\"\n"
    "\t\ttype=\"Color4f\"\n"
    "        category=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"0.0,0.0,0.0,1.0\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    "UI Color Background.\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &ColorLayerBase::getType(void)
{
    return _type;
}

const FieldContainerType &ColorLayerBase::getType(void) const
{
    return _type;
}

UInt32 ColorLayerBase::getContainerSize(void) const
{
    return sizeof(ColorLayer);
}

/*------------------------- decorator get ------------------------------*/


SFColor4f *ColorLayerBase::editSFColor(void)
{
    editSField(ColorFieldMask);

    return &_sfColor;
}

const SFColor4f *ColorLayerBase::getSFColor(void) const
{
    return &_sfColor;
}






/*------------------------------ access -----------------------------------*/

UInt32 ColorLayerBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (ColorFieldMask & whichField))
    {
        returnValue += _sfColor.getBinSize();
    }

    return returnValue;
}

void ColorLayerBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (ColorFieldMask & whichField))
    {
        _sfColor.copyToBin(pMem);
    }
}

void ColorLayerBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (ColorFieldMask & whichField))
    {
        _sfColor.copyFromBin(pMem);
    }
}

//! create a new instance of the class
ColorLayerTransitPtr ColorLayerBase::createLocal(BitVector bFlags)
{
    ColorLayerTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<ColorLayer>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
ColorLayerTransitPtr ColorLayerBase::createDependent(BitVector bFlags)
{
    ColorLayerTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<ColorLayer>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
ColorLayerTransitPtr ColorLayerBase::create(void)
{
    ColorLayerTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<ColorLayer>(tmpPtr);
    }

    return fc;
}

ColorLayer *ColorLayerBase::createEmptyLocal(BitVector bFlags)
{
    ColorLayer *returnValue;

    newPtr<ColorLayer>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
ColorLayer *ColorLayerBase::createEmpty(void)
{
    ColorLayer *returnValue;

    newPtr<ColorLayer>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr ColorLayerBase::shallowCopyLocal(
    BitVector bFlags) const
{
    ColorLayer *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const ColorLayer *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr ColorLayerBase::shallowCopyDependent(
    BitVector bFlags) const
{
    ColorLayer *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const ColorLayer *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr ColorLayerBase::shallowCopy(void) const
{
    ColorLayer *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const ColorLayer *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

ColorLayerBase::ColorLayerBase(void) :
    Inherited(),
    _sfColor                  (Color4f(0.0,0.0,0.0,1.0))
{
}

ColorLayerBase::ColorLayerBase(const ColorLayerBase &source) :
    Inherited(source),
    _sfColor                  (source._sfColor                  )
{
}


/*-------------------------- destructors ----------------------------------*/

ColorLayerBase::~ColorLayerBase(void)
{
}


GetFieldHandlePtr ColorLayerBase::getHandleColor           (void) const
{
    SFColor4f::GetHandlePtr returnValue(
        new  SFColor4f::GetHandle(
             &_sfColor,
             this->getType().getFieldDesc(ColorFieldId),
             const_cast<ColorLayerBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr ColorLayerBase::editHandleColor          (void)
{
    SFColor4f::EditHandlePtr returnValue(
        new  SFColor4f::EditHandle(
             &_sfColor,
             this->getType().getFieldDesc(ColorFieldId),
             this));


    editSField(ColorFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void ColorLayerBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    ColorLayer *pThis = static_cast<ColorLayer *>(this);

    pThis->execSync(static_cast<ColorLayer *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *ColorLayerBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    ColorLayer *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const ColorLayer *>(pRefAspect),
                  dynamic_cast<const ColorLayer *>(this));

    return returnValue;
}
#endif

void ColorLayerBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


OSG_END_NAMESPACE
