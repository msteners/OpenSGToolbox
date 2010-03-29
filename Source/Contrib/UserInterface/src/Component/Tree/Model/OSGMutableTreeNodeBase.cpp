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
 **     class MutableTreeNode!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include "OSGConfig.h"




#include "OSGMutableTreeNodeBase.h"
#include "OSGMutableTreeNode.h"

#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::MutableTreeNode
    A UI Mutable Tree Node.
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<MutableTreeNode *>::_type("MutableTreeNodePtr", "ModelTreeNodePtr");
#endif

OSG_FIELDTRAITS_GETTYPE(MutableTreeNode *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           MutableTreeNode *,
                           0);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           MutableTreeNode *,
                           0);

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void MutableTreeNodeBase::classDescInserter(TypeObject &oType)
{
}


MutableTreeNodeBase::TypeObject MutableTreeNodeBase::_type(
    MutableTreeNodeBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    NULL,
    MutableTreeNode::initMethod,
    MutableTreeNode::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&MutableTreeNode::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"MutableTreeNode\"\n"
    "\tparent=\"ModelTreeNode\"\n"
    "    library=\"ContribUserInterface\"\n"
    "    pointerfieldtypes=\"both\"\n"
    "\tstructure=\"abstract\"\n"
    "    systemcomponent=\"true\"\n"
    "    parentsystemcomponent=\"true\"\n"
    "    decoratable=\"false\"\n"
    "    useLocalIncludes=\"false\"\n"
    "    isNodeCore=\"false\"\n"
    "    authors=\"David Kabala (djkabala@gmail.com)                             \"\n"
    ">\n"
    "A UI Mutable Tree Node.\n"
    "</FieldContainer>\n",
    "A UI Mutable Tree Node.\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &MutableTreeNodeBase::getType(void)
{
    return _type;
}

const FieldContainerType &MutableTreeNodeBase::getType(void) const
{
    return _type;
}

UInt32 MutableTreeNodeBase::getContainerSize(void) const
{
    return sizeof(MutableTreeNode);
}

/*------------------------- decorator get ------------------------------*/






/*------------------------------ access -----------------------------------*/

UInt32 MutableTreeNodeBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);


    return returnValue;
}

void MutableTreeNodeBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

}

void MutableTreeNodeBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

}




/*------------------------- constructors ----------------------------------*/

MutableTreeNodeBase::MutableTreeNodeBase(void) :
    Inherited()
{
}

MutableTreeNodeBase::MutableTreeNodeBase(const MutableTreeNodeBase &source) :
    Inherited(source)
{
}


/*-------------------------- destructors ----------------------------------*/

MutableTreeNodeBase::~MutableTreeNodeBase(void)
{
}



#ifdef OSG_MT_CPTR_ASPECT
void MutableTreeNodeBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    MutableTreeNode *pThis = static_cast<MutableTreeNode *>(this);

    pThis->execSync(static_cast<MutableTreeNode *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif



void MutableTreeNodeBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


OSG_END_NAMESPACE
