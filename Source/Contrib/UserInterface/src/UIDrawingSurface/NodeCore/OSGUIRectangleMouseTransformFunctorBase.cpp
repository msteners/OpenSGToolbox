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
 **     class UIRectangleMouseTransformFunctor!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include "OSGConfig.h"



#include "OSGUIRectangle.h"             // Parent Class

#include "OSGUIRectangleMouseTransformFunctorBase.h"
#include "OSGUIRectangleMouseTransformFunctor.h"

#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::UIRectangleMouseTransformFunctor
    A UI UIRectangleMouseTransformFunctor.
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var UIRectangle *   UIRectangleMouseTransformFunctorBase::_sfParent
    
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<UIRectangleMouseTransformFunctor *>::_type("UIRectangleMouseTransformFunctorPtr", "UIDrawingSurfaceMouseTransformFunctorPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(UIRectangleMouseTransformFunctor *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           UIRectangleMouseTransformFunctor *,
                           0);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           UIRectangleMouseTransformFunctor *,
                           0);

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void UIRectangleMouseTransformFunctorBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFUnrecUIRectanglePtr::Description(
        SFUnrecUIRectanglePtr::getClassType(),
        "Parent",
        "",
        ParentFieldId, ParentFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&UIRectangleMouseTransformFunctor::editHandleParent),
        static_cast<FieldGetMethodSig >(&UIRectangleMouseTransformFunctor::getHandleParent));

    oType.addInitialDesc(pDesc);
}


UIRectangleMouseTransformFunctorBase::TypeObject UIRectangleMouseTransformFunctorBase::_type(
    UIRectangleMouseTransformFunctorBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    reinterpret_cast<PrototypeCreateF>(&UIRectangleMouseTransformFunctorBase::createEmptyLocal),
    UIRectangleMouseTransformFunctor::initMethod,
    UIRectangleMouseTransformFunctor::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&UIRectangleMouseTransformFunctor::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"UIRectangleMouseTransformFunctor\"\n"
    "\tparent=\"UIDrawingSurfaceMouseTransformFunctor\"\n"
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
    "A UI UIRectangleMouseTransformFunctor.\n"
    "\t<Field\n"
    "\t\tname=\"Parent\"\n"
    "\t\ttype=\"UIRectangle\"\n"
    "\t\tcategory=\"pointer\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"NULL\"\n"
    "\t\taccess=\"protected\"\n"
    "\t>\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    "A UI UIRectangleMouseTransformFunctor.\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &UIRectangleMouseTransformFunctorBase::getType(void)
{
    return _type;
}

const FieldContainerType &UIRectangleMouseTransformFunctorBase::getType(void) const
{
    return _type;
}

UInt32 UIRectangleMouseTransformFunctorBase::getContainerSize(void) const
{
    return sizeof(UIRectangleMouseTransformFunctor);
}

/*------------------------- decorator get ------------------------------*/


//! Get the UIRectangleMouseTransformFunctor::_sfParent field.
const SFUnrecUIRectanglePtr *UIRectangleMouseTransformFunctorBase::getSFParent(void) const
{
    return &_sfParent;
}

SFUnrecUIRectanglePtr *UIRectangleMouseTransformFunctorBase::editSFParent         (void)
{
    editSField(ParentFieldMask);

    return &_sfParent;
}





/*------------------------------ access -----------------------------------*/

UInt32 UIRectangleMouseTransformFunctorBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (ParentFieldMask & whichField))
    {
        returnValue += _sfParent.getBinSize();
    }

    return returnValue;
}

void UIRectangleMouseTransformFunctorBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (ParentFieldMask & whichField))
    {
        _sfParent.copyToBin(pMem);
    }
}

void UIRectangleMouseTransformFunctorBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (ParentFieldMask & whichField))
    {
        _sfParent.copyFromBin(pMem);
    }
}

//! create a new instance of the class
UIRectangleMouseTransformFunctorTransitPtr UIRectangleMouseTransformFunctorBase::createLocal(BitVector bFlags)
{
    UIRectangleMouseTransformFunctorTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<UIRectangleMouseTransformFunctor>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
UIRectangleMouseTransformFunctorTransitPtr UIRectangleMouseTransformFunctorBase::createDependent(BitVector bFlags)
{
    UIRectangleMouseTransformFunctorTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<UIRectangleMouseTransformFunctor>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
UIRectangleMouseTransformFunctorTransitPtr UIRectangleMouseTransformFunctorBase::create(void)
{
    UIRectangleMouseTransformFunctorTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<UIRectangleMouseTransformFunctor>(tmpPtr);
    }

    return fc;
}

UIRectangleMouseTransformFunctor *UIRectangleMouseTransformFunctorBase::createEmptyLocal(BitVector bFlags)
{
    UIRectangleMouseTransformFunctor *returnValue;

    newPtr<UIRectangleMouseTransformFunctor>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
UIRectangleMouseTransformFunctor *UIRectangleMouseTransformFunctorBase::createEmpty(void)
{
    UIRectangleMouseTransformFunctor *returnValue;

    newPtr<UIRectangleMouseTransformFunctor>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr UIRectangleMouseTransformFunctorBase::shallowCopyLocal(
    BitVector bFlags) const
{
    UIRectangleMouseTransformFunctor *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const UIRectangleMouseTransformFunctor *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr UIRectangleMouseTransformFunctorBase::shallowCopyDependent(
    BitVector bFlags) const
{
    UIRectangleMouseTransformFunctor *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const UIRectangleMouseTransformFunctor *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr UIRectangleMouseTransformFunctorBase::shallowCopy(void) const
{
    UIRectangleMouseTransformFunctor *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const UIRectangleMouseTransformFunctor *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

UIRectangleMouseTransformFunctorBase::UIRectangleMouseTransformFunctorBase(void) :
    Inherited(),
    _sfParent                 (NULL)
{
}

UIRectangleMouseTransformFunctorBase::UIRectangleMouseTransformFunctorBase(const UIRectangleMouseTransformFunctorBase &source) :
    Inherited(source),
    _sfParent                 (NULL)
{
}


/*-------------------------- destructors ----------------------------------*/

UIRectangleMouseTransformFunctorBase::~UIRectangleMouseTransformFunctorBase(void)
{
}

void UIRectangleMouseTransformFunctorBase::onCreate(const UIRectangleMouseTransformFunctor *source)
{
    Inherited::onCreate(source);

    if(source != NULL)
    {
        UIRectangleMouseTransformFunctor *pThis = static_cast<UIRectangleMouseTransformFunctor *>(this);

        pThis->setParent(source->getParent());
    }
}

GetFieldHandlePtr UIRectangleMouseTransformFunctorBase::getHandleParent          (void) const
{
    SFUnrecUIRectanglePtr::GetHandlePtr returnValue(
        new  SFUnrecUIRectanglePtr::GetHandle(
             &_sfParent,
             this->getType().getFieldDesc(ParentFieldId),
             const_cast<UIRectangleMouseTransformFunctorBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr UIRectangleMouseTransformFunctorBase::editHandleParent         (void)
{
    SFUnrecUIRectanglePtr::EditHandlePtr returnValue(
        new  SFUnrecUIRectanglePtr::EditHandle(
             &_sfParent,
             this->getType().getFieldDesc(ParentFieldId),
             this));

    returnValue->setSetMethod(
        boost::bind(&UIRectangleMouseTransformFunctor::setParent,
                    static_cast<UIRectangleMouseTransformFunctor *>(this), _1));

    editSField(ParentFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void UIRectangleMouseTransformFunctorBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    UIRectangleMouseTransformFunctor *pThis = static_cast<UIRectangleMouseTransformFunctor *>(this);

    pThis->execSync(static_cast<UIRectangleMouseTransformFunctor *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *UIRectangleMouseTransformFunctorBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    UIRectangleMouseTransformFunctor *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const UIRectangleMouseTransformFunctor *>(pRefAspect),
                  dynamic_cast<const UIRectangleMouseTransformFunctor *>(this));

    return returnValue;
}
#endif

void UIRectangleMouseTransformFunctorBase::resolveLinks(void)
{
    Inherited::resolveLinks();

    static_cast<UIRectangleMouseTransformFunctor *>(this)->setParent(NULL);


}


OSG_END_NAMESPACE
