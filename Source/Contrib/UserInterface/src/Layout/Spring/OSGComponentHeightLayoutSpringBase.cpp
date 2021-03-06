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
 **     class ComponentHeightLayoutSpring!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include "OSGConfig.h"



#include "OSGComponent.h"               // Component Class

#include "OSGComponentHeightLayoutSpringBase.h"
#include "OSGComponentHeightLayoutSpring.h"

#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::ComponentHeightLayoutSpring
    A UI ComponentHeight LayoutSpring.
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var Component *     ComponentHeightLayoutSpringBase::_sfComponent
    
*/

/*! \var UInt32          ComponentHeightLayoutSpringBase::_sfSizeField
    
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<ComponentHeightLayoutSpring *>::_type("ComponentHeightLayoutSpringPtr", "AbstractLayoutSpringPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(ComponentHeightLayoutSpring *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           ComponentHeightLayoutSpring *,
                           0);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           ComponentHeightLayoutSpring *,
                           0);

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void ComponentHeightLayoutSpringBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFUnrecComponentPtr::Description(
        SFUnrecComponentPtr::getClassType(),
        "Component",
        "",
        ComponentFieldId, ComponentFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&ComponentHeightLayoutSpring::editHandleComponent),
        static_cast<FieldGetMethodSig >(&ComponentHeightLayoutSpring::getHandleComponent));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUInt32::Description(
        SFUInt32::getClassType(),
        "SizeField",
        "",
        SizeFieldFieldId, SizeFieldFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&ComponentHeightLayoutSpring::editHandleSizeField),
        static_cast<FieldGetMethodSig >(&ComponentHeightLayoutSpring::getHandleSizeField));

    oType.addInitialDesc(pDesc);
}


ComponentHeightLayoutSpringBase::TypeObject ComponentHeightLayoutSpringBase::_type(
    ComponentHeightLayoutSpringBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    reinterpret_cast<PrototypeCreateF>(&ComponentHeightLayoutSpringBase::createEmptyLocal),
    ComponentHeightLayoutSpring::initMethod,
    ComponentHeightLayoutSpring::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&ComponentHeightLayoutSpring::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"ComponentHeightLayoutSpring\"\n"
    "\tparent=\"AbstractLayoutSpring\"\n"
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
    "A UI ComponentHeight LayoutSpring.\n"
    "\t<Field\n"
    "\t\tname=\"Component\"\n"
    "\t\ttype=\"Component\"\n"
    "        category=\"pointer\"\n"
    "\t\tcardinality=\"single\"\n"
    "      visibility=\"external\"\n"
    "\t\tdefaultValue=\"NULL\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "   </Field>\n"
    "\t<Field\n"
    "\t\tname=\"SizeField\"\n"
    "\t\ttype=\"UInt32\"\n"
    "        category=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "      visibility=\"external\"\n"
    "\t\tdefaultValue=\"ComponentHeightLayoutSpring::PREFERRED_SIZE\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "   </Field>\n"
    "</FieldContainer>\n",
    "A UI ComponentHeight LayoutSpring.\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &ComponentHeightLayoutSpringBase::getType(void)
{
    return _type;
}

const FieldContainerType &ComponentHeightLayoutSpringBase::getType(void) const
{
    return _type;
}

UInt32 ComponentHeightLayoutSpringBase::getContainerSize(void) const
{
    return sizeof(ComponentHeightLayoutSpring);
}

/*------------------------- decorator get ------------------------------*/


//! Get the ComponentHeightLayoutSpring::_sfComponent field.
const SFUnrecComponentPtr *ComponentHeightLayoutSpringBase::getSFComponent(void) const
{
    return &_sfComponent;
}

SFUnrecComponentPtr *ComponentHeightLayoutSpringBase::editSFComponent      (void)
{
    editSField(ComponentFieldMask);

    return &_sfComponent;
}

SFUInt32 *ComponentHeightLayoutSpringBase::editSFSizeField(void)
{
    editSField(SizeFieldFieldMask);

    return &_sfSizeField;
}

const SFUInt32 *ComponentHeightLayoutSpringBase::getSFSizeField(void) const
{
    return &_sfSizeField;
}






/*------------------------------ access -----------------------------------*/

UInt32 ComponentHeightLayoutSpringBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (ComponentFieldMask & whichField))
    {
        returnValue += _sfComponent.getBinSize();
    }
    if(FieldBits::NoField != (SizeFieldFieldMask & whichField))
    {
        returnValue += _sfSizeField.getBinSize();
    }

    return returnValue;
}

void ComponentHeightLayoutSpringBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (ComponentFieldMask & whichField))
    {
        _sfComponent.copyToBin(pMem);
    }
    if(FieldBits::NoField != (SizeFieldFieldMask & whichField))
    {
        _sfSizeField.copyToBin(pMem);
    }
}

void ComponentHeightLayoutSpringBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (ComponentFieldMask & whichField))
    {
        _sfComponent.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (SizeFieldFieldMask & whichField))
    {
        _sfSizeField.copyFromBin(pMem);
    }
}

//! create a new instance of the class
ComponentHeightLayoutSpringTransitPtr ComponentHeightLayoutSpringBase::createLocal(BitVector bFlags)
{
    ComponentHeightLayoutSpringTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<ComponentHeightLayoutSpring>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
ComponentHeightLayoutSpringTransitPtr ComponentHeightLayoutSpringBase::createDependent(BitVector bFlags)
{
    ComponentHeightLayoutSpringTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<ComponentHeightLayoutSpring>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
ComponentHeightLayoutSpringTransitPtr ComponentHeightLayoutSpringBase::create(void)
{
    ComponentHeightLayoutSpringTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<ComponentHeightLayoutSpring>(tmpPtr);
    }

    return fc;
}

ComponentHeightLayoutSpring *ComponentHeightLayoutSpringBase::createEmptyLocal(BitVector bFlags)
{
    ComponentHeightLayoutSpring *returnValue;

    newPtr<ComponentHeightLayoutSpring>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
ComponentHeightLayoutSpring *ComponentHeightLayoutSpringBase::createEmpty(void)
{
    ComponentHeightLayoutSpring *returnValue;

    newPtr<ComponentHeightLayoutSpring>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr ComponentHeightLayoutSpringBase::shallowCopyLocal(
    BitVector bFlags) const
{
    ComponentHeightLayoutSpring *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const ComponentHeightLayoutSpring *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr ComponentHeightLayoutSpringBase::shallowCopyDependent(
    BitVector bFlags) const
{
    ComponentHeightLayoutSpring *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const ComponentHeightLayoutSpring *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr ComponentHeightLayoutSpringBase::shallowCopy(void) const
{
    ComponentHeightLayoutSpring *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const ComponentHeightLayoutSpring *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

ComponentHeightLayoutSpringBase::ComponentHeightLayoutSpringBase(void) :
    Inherited(),
    _sfComponent              (NULL),
    _sfSizeField              (UInt32(ComponentHeightLayoutSpring::PREFERRED_SIZE))
{
}

ComponentHeightLayoutSpringBase::ComponentHeightLayoutSpringBase(const ComponentHeightLayoutSpringBase &source) :
    Inherited(source),
    _sfComponent              (NULL),
    _sfSizeField              (source._sfSizeField              )
{
}


/*-------------------------- destructors ----------------------------------*/

ComponentHeightLayoutSpringBase::~ComponentHeightLayoutSpringBase(void)
{
}

void ComponentHeightLayoutSpringBase::onCreate(const ComponentHeightLayoutSpring *source)
{
    Inherited::onCreate(source);

    if(source != NULL)
    {
        ComponentHeightLayoutSpring *pThis = static_cast<ComponentHeightLayoutSpring *>(this);

        pThis->setComponent(source->getComponent());
    }
}

GetFieldHandlePtr ComponentHeightLayoutSpringBase::getHandleComponent       (void) const
{
    SFUnrecComponentPtr::GetHandlePtr returnValue(
        new  SFUnrecComponentPtr::GetHandle(
             &_sfComponent,
             this->getType().getFieldDesc(ComponentFieldId),
             const_cast<ComponentHeightLayoutSpringBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr ComponentHeightLayoutSpringBase::editHandleComponent      (void)
{
    SFUnrecComponentPtr::EditHandlePtr returnValue(
        new  SFUnrecComponentPtr::EditHandle(
             &_sfComponent,
             this->getType().getFieldDesc(ComponentFieldId),
             this));

    returnValue->setSetMethod(
        boost::bind(&ComponentHeightLayoutSpring::setComponent,
                    static_cast<ComponentHeightLayoutSpring *>(this), _1));

    editSField(ComponentFieldMask);

    return returnValue;
}

GetFieldHandlePtr ComponentHeightLayoutSpringBase::getHandleSizeField       (void) const
{
    SFUInt32::GetHandlePtr returnValue(
        new  SFUInt32::GetHandle(
             &_sfSizeField,
             this->getType().getFieldDesc(SizeFieldFieldId),
             const_cast<ComponentHeightLayoutSpringBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr ComponentHeightLayoutSpringBase::editHandleSizeField      (void)
{
    SFUInt32::EditHandlePtr returnValue(
        new  SFUInt32::EditHandle(
             &_sfSizeField,
             this->getType().getFieldDesc(SizeFieldFieldId),
             this));


    editSField(SizeFieldFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void ComponentHeightLayoutSpringBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    ComponentHeightLayoutSpring *pThis = static_cast<ComponentHeightLayoutSpring *>(this);

    pThis->execSync(static_cast<ComponentHeightLayoutSpring *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *ComponentHeightLayoutSpringBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    ComponentHeightLayoutSpring *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const ComponentHeightLayoutSpring *>(pRefAspect),
                  dynamic_cast<const ComponentHeightLayoutSpring *>(this));

    return returnValue;
}
#endif

void ComponentHeightLayoutSpringBase::resolveLinks(void)
{
    Inherited::resolveLinks();

    static_cast<ComponentHeightLayoutSpring *>(this)->setComponent(NULL);


}


OSG_END_NAMESPACE
