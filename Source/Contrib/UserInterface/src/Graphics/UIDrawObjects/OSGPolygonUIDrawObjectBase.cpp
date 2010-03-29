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
 **     class PolygonUIDrawObject!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include "OSGConfig.h"




#include "OSGPolygonUIDrawObjectBase.h"
#include "OSGPolygonUIDrawObject.h"

#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::PolygonUIDrawObject
    A UI PolygonUIDrawObject.
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var Pnt2f           PolygonUIDrawObjectBase::_mfVerticies
    
*/

/*! \var Color4f         PolygonUIDrawObjectBase::_sfColor
    
*/

/*! \var Real32          PolygonUIDrawObjectBase::_sfOpacity
    
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<PolygonUIDrawObject *>::_type("PolygonUIDrawObjectPtr", "UIDrawObjectPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(PolygonUIDrawObject *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           PolygonUIDrawObject *,
                           0);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           PolygonUIDrawObject *,
                           0);

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void PolygonUIDrawObjectBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new MFPnt2f::Description(
        MFPnt2f::getClassType(),
        "Verticies",
        "",
        VerticiesFieldId, VerticiesFieldMask,
        false,
        (Field::MFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&PolygonUIDrawObject::editHandleVerticies),
        static_cast<FieldGetMethodSig >(&PolygonUIDrawObject::getHandleVerticies));

    oType.addInitialDesc(pDesc);

    pDesc = new SFColor4f::Description(
        SFColor4f::getClassType(),
        "Color",
        "",
        ColorFieldId, ColorFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&PolygonUIDrawObject::editHandleColor),
        static_cast<FieldGetMethodSig >(&PolygonUIDrawObject::getHandleColor));

    oType.addInitialDesc(pDesc);

    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "Opacity",
        "",
        OpacityFieldId, OpacityFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&PolygonUIDrawObject::editHandleOpacity),
        static_cast<FieldGetMethodSig >(&PolygonUIDrawObject::getHandleOpacity));

    oType.addInitialDesc(pDesc);
}


PolygonUIDrawObjectBase::TypeObject PolygonUIDrawObjectBase::_type(
    PolygonUIDrawObjectBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    reinterpret_cast<PrototypeCreateF>(&PolygonUIDrawObjectBase::createEmptyLocal),
    PolygonUIDrawObject::initMethod,
    PolygonUIDrawObject::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&PolygonUIDrawObject::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"PolygonUIDrawObject\"\n"
    "\tparent=\"UIDrawObject\"\n"
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
    "A UI PolygonUIDrawObject.\n"
    "\t<Field\n"
    "\t\tname=\"Verticies\"\n"
    "\t\ttype=\"Pnt2f\"\n"
    "        category=\"data\"\n"
    "\t\tcardinality=\"multi\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"Color\"\n"
    "\t\ttype=\"Color4f\"\n"
    "        category=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t\tdefaultValue=\"1.0,1.0,1.0,1.0\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"Opacity\"\n"
    "\t\ttype=\"Real32\"\n"
    "        category=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t\tdefaultValue=\"1.0\"\n"
    "\t>\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    "A UI PolygonUIDrawObject.\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &PolygonUIDrawObjectBase::getType(void)
{
    return _type;
}

const FieldContainerType &PolygonUIDrawObjectBase::getType(void) const
{
    return _type;
}

UInt32 PolygonUIDrawObjectBase::getContainerSize(void) const
{
    return sizeof(PolygonUIDrawObject);
}

/*------------------------- decorator get ------------------------------*/


MFPnt2f *PolygonUIDrawObjectBase::editMFVerticies(void)
{
    editMField(VerticiesFieldMask, _mfVerticies);

    return &_mfVerticies;
}

const MFPnt2f *PolygonUIDrawObjectBase::getMFVerticies(void) const
{
    return &_mfVerticies;
}


SFColor4f *PolygonUIDrawObjectBase::editSFColor(void)
{
    editSField(ColorFieldMask);

    return &_sfColor;
}

const SFColor4f *PolygonUIDrawObjectBase::getSFColor(void) const
{
    return &_sfColor;
}


SFReal32 *PolygonUIDrawObjectBase::editSFOpacity(void)
{
    editSField(OpacityFieldMask);

    return &_sfOpacity;
}

const SFReal32 *PolygonUIDrawObjectBase::getSFOpacity(void) const
{
    return &_sfOpacity;
}






/*------------------------------ access -----------------------------------*/

UInt32 PolygonUIDrawObjectBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (VerticiesFieldMask & whichField))
    {
        returnValue += _mfVerticies.getBinSize();
    }
    if(FieldBits::NoField != (ColorFieldMask & whichField))
    {
        returnValue += _sfColor.getBinSize();
    }
    if(FieldBits::NoField != (OpacityFieldMask & whichField))
    {
        returnValue += _sfOpacity.getBinSize();
    }

    return returnValue;
}

void PolygonUIDrawObjectBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (VerticiesFieldMask & whichField))
    {
        _mfVerticies.copyToBin(pMem);
    }
    if(FieldBits::NoField != (ColorFieldMask & whichField))
    {
        _sfColor.copyToBin(pMem);
    }
    if(FieldBits::NoField != (OpacityFieldMask & whichField))
    {
        _sfOpacity.copyToBin(pMem);
    }
}

void PolygonUIDrawObjectBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (VerticiesFieldMask & whichField))
    {
        _mfVerticies.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (ColorFieldMask & whichField))
    {
        _sfColor.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (OpacityFieldMask & whichField))
    {
        _sfOpacity.copyFromBin(pMem);
    }
}

//! create a new instance of the class
PolygonUIDrawObjectTransitPtr PolygonUIDrawObjectBase::createLocal(BitVector bFlags)
{
    PolygonUIDrawObjectTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<PolygonUIDrawObject>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
PolygonUIDrawObjectTransitPtr PolygonUIDrawObjectBase::createDependent(BitVector bFlags)
{
    PolygonUIDrawObjectTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<PolygonUIDrawObject>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
PolygonUIDrawObjectTransitPtr PolygonUIDrawObjectBase::create(void)
{
    PolygonUIDrawObjectTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<PolygonUIDrawObject>(tmpPtr);
    }

    return fc;
}

PolygonUIDrawObject *PolygonUIDrawObjectBase::createEmptyLocal(BitVector bFlags)
{
    PolygonUIDrawObject *returnValue;

    newPtr<PolygonUIDrawObject>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
PolygonUIDrawObject *PolygonUIDrawObjectBase::createEmpty(void)
{
    PolygonUIDrawObject *returnValue;

    newPtr<PolygonUIDrawObject>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr PolygonUIDrawObjectBase::shallowCopyLocal(
    BitVector bFlags) const
{
    PolygonUIDrawObject *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const PolygonUIDrawObject *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr PolygonUIDrawObjectBase::shallowCopyDependent(
    BitVector bFlags) const
{
    PolygonUIDrawObject *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const PolygonUIDrawObject *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr PolygonUIDrawObjectBase::shallowCopy(void) const
{
    PolygonUIDrawObject *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const PolygonUIDrawObject *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

PolygonUIDrawObjectBase::PolygonUIDrawObjectBase(void) :
    Inherited(),
    _mfVerticies              (),
    _sfColor                  (Color4f(1.0,1.0,1.0,1.0)),
    _sfOpacity                (Real32(1.0))
{
}

PolygonUIDrawObjectBase::PolygonUIDrawObjectBase(const PolygonUIDrawObjectBase &source) :
    Inherited(source),
    _mfVerticies              (source._mfVerticies              ),
    _sfColor                  (source._sfColor                  ),
    _sfOpacity                (source._sfOpacity                )
{
}


/*-------------------------- destructors ----------------------------------*/

PolygonUIDrawObjectBase::~PolygonUIDrawObjectBase(void)
{
}


GetFieldHandlePtr PolygonUIDrawObjectBase::getHandleVerticies       (void) const
{
    MFPnt2f::GetHandlePtr returnValue(
        new  MFPnt2f::GetHandle(
             &_mfVerticies,
             this->getType().getFieldDesc(VerticiesFieldId),
             const_cast<PolygonUIDrawObjectBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr PolygonUIDrawObjectBase::editHandleVerticies      (void)
{
    MFPnt2f::EditHandlePtr returnValue(
        new  MFPnt2f::EditHandle(
             &_mfVerticies,
             this->getType().getFieldDesc(VerticiesFieldId),
             this));


    editMField(VerticiesFieldMask, _mfVerticies);

    return returnValue;
}

GetFieldHandlePtr PolygonUIDrawObjectBase::getHandleColor           (void) const
{
    SFColor4f::GetHandlePtr returnValue(
        new  SFColor4f::GetHandle(
             &_sfColor,
             this->getType().getFieldDesc(ColorFieldId),
             const_cast<PolygonUIDrawObjectBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr PolygonUIDrawObjectBase::editHandleColor          (void)
{
    SFColor4f::EditHandlePtr returnValue(
        new  SFColor4f::EditHandle(
             &_sfColor,
             this->getType().getFieldDesc(ColorFieldId),
             this));


    editSField(ColorFieldMask);

    return returnValue;
}

GetFieldHandlePtr PolygonUIDrawObjectBase::getHandleOpacity         (void) const
{
    SFReal32::GetHandlePtr returnValue(
        new  SFReal32::GetHandle(
             &_sfOpacity,
             this->getType().getFieldDesc(OpacityFieldId),
             const_cast<PolygonUIDrawObjectBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr PolygonUIDrawObjectBase::editHandleOpacity        (void)
{
    SFReal32::EditHandlePtr returnValue(
        new  SFReal32::EditHandle(
             &_sfOpacity,
             this->getType().getFieldDesc(OpacityFieldId),
             this));


    editSField(OpacityFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void PolygonUIDrawObjectBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    PolygonUIDrawObject *pThis = static_cast<PolygonUIDrawObject *>(this);

    pThis->execSync(static_cast<PolygonUIDrawObject *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *PolygonUIDrawObjectBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    PolygonUIDrawObject *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const PolygonUIDrawObject *>(pRefAspect),
                  dynamic_cast<const PolygonUIDrawObject *>(this));

    return returnValue;
}
#endif

void PolygonUIDrawObjectBase::resolveLinks(void)
{
    Inherited::resolveLinks();

#ifdef OSG_MT_CPTR_ASPECT
    AspectOffsetStore oOffsets;

    _pAspectStore->fillOffsetArray(oOffsets, this);
#endif

#ifdef OSG_MT_CPTR_ASPECT
    _mfVerticies.terminateShare(Thread::getCurrentAspect(),
                                      oOffsets);
#endif
}


OSG_END_NAMESPACE
