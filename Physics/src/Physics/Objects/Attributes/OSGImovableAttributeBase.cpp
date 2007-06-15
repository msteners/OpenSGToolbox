/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2002 by the OpenSG Forum                 *
 *                                                                           *
 *                            www.opensg.org                                 *
 *                                                                           *
 *   contact: dirk@opensg.org, gerrit.voss@vossg.org, jbehr@zgdv.de          *
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
 **     class ImovableAttribute!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILEIMOVABLEATTRIBUTEINST

#include <stdlib.h>
#include <stdio.h>

#include <OpenSG/OSGConfig.h>

#include "OSGImovableAttributeBase.h"
#include "OSGImovableAttribute.h"


OSG_USING_NAMESPACE

const OSG::BitVector ImovableAttributeBase::MTInfluenceMask = 
    (Inherited::MTInfluenceMask) | 
    (static_cast<BitVector>(0x0) << Inherited::NextFieldId); 



FieldContainerType ImovableAttributeBase::_type(
    "ImovableAttribute",
    "PhysicsObjectAttribute",
    NULL,
    (PrototypeCreateF) &ImovableAttributeBase::createEmpty,
    ImovableAttribute::initMethod,
    NULL,
    0);

//OSG_FIELD_CONTAINER_DEF(ImovableAttributeBase, ImovableAttributePtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType &ImovableAttributeBase::getType(void) 
{
    return _type; 
} 

const FieldContainerType &ImovableAttributeBase::getType(void) const 
{
    return _type;
} 


FieldContainerPtr ImovableAttributeBase::shallowCopy(void) const 
{ 
    ImovableAttributePtr returnValue; 

    newPtr(returnValue, dynamic_cast<const ImovableAttribute *>(this)); 

    return returnValue; 
}

UInt32 ImovableAttributeBase::getContainerSize(void) const 
{ 
    return sizeof(ImovableAttribute); 
}


#if !defined(OSG_FIXED_MFIELDSYNC)
void ImovableAttributeBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField)
{
    this->executeSyncImpl((ImovableAttributeBase *) &other, whichField);
}
#else
void ImovableAttributeBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField,                                    const SyncInfo       &sInfo     )
{
    this->executeSyncImpl((ImovableAttributeBase *) &other, whichField, sInfo);
}
void ImovableAttributeBase::execBeginEdit(const BitVector &whichField, 
                                            UInt32     uiAspect,
                                            UInt32     uiContainerSize) 
{
    this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void ImovableAttributeBase::onDestroyAspect(UInt32 uiId, UInt32 uiAspect)
{
    Inherited::onDestroyAspect(uiId, uiAspect);

}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning (disable : 383)
#endif

ImovableAttributeBase::ImovableAttributeBase(void) :
    Inherited() 
{
}

#ifdef OSG_WIN32_ICL
#pragma warning (default : 383)
#endif

ImovableAttributeBase::ImovableAttributeBase(const ImovableAttributeBase &source) :
    Inherited                 (source)
{
}

/*-------------------------- destructors ----------------------------------*/

ImovableAttributeBase::~ImovableAttributeBase(void)
{
}

/*------------------------------ access -----------------------------------*/

UInt32 ImovableAttributeBase::getBinSize(const BitVector &whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);


    return returnValue;
}

void ImovableAttributeBase::copyToBin(      BinaryDataHandler &pMem,
                                  const BitVector         &whichField)
{
    Inherited::copyToBin(pMem, whichField);


}

void ImovableAttributeBase::copyFromBin(      BinaryDataHandler &pMem,
                                    const BitVector    &whichField)
{
    Inherited::copyFromBin(pMem, whichField);


}

#if !defined(OSG_FIXED_MFIELDSYNC)
void ImovableAttributeBase::executeSyncImpl(      ImovableAttributeBase *pOther,
                                        const BitVector         &whichField)
{

    Inherited::executeSyncImpl(pOther, whichField);


}
#else
void ImovableAttributeBase::executeSyncImpl(      ImovableAttributeBase *pOther,
                                        const BitVector         &whichField,
                                        const SyncInfo          &sInfo      )
{

    Inherited::executeSyncImpl(pOther, whichField, sInfo);



}

void ImovableAttributeBase::execBeginEditImpl (const BitVector &whichField, 
                                                 UInt32     uiAspect,
                                                 UInt32     uiContainerSize)
{
    Inherited::execBeginEditImpl(whichField, uiAspect, uiContainerSize);

}
#endif



#include <OpenSG/OSGSFieldTypeDef.inl>
#include <OpenSG/OSGMFieldTypeDef.inl>

OSG_BEGIN_NAMESPACE

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldDataTraits<ImovableAttributePtr>::_type("ImovableAttributePtr", "PhysicsObjectAttributePtr");
#endif

OSG_DLLEXPORT_SFIELD_DEF1(ImovableAttributePtr, );
OSG_DLLEXPORT_MFIELD_DEF1(ImovableAttributePtr, );

OSG_END_NAMESPACE


/*------------------------------------------------------------------------*/
/*                              cvs id's                                  */

#ifdef OSG_SGI_CC
#pragma set woff 1174
#endif

#ifdef OSG_LINUX_ICC
#pragma warning( disable : 177 )
#endif

namespace
{
    static Char8 cvsid_cpp       [] = "@(#)$Id: FCBaseTemplate_cpp.h,v 1.45 2005/07/20 00:10:14 vossg Exp $";
    static Char8 cvsid_hpp       [] = OSGIMOVABLEATTRIBUTEBASE_HEADER_CVSID;
    static Char8 cvsid_inl       [] = OSGIMOVABLEATTRIBUTEBASE_INLINE_CVSID;

    static Char8 cvsid_fields_hpp[] = OSGIMOVABLEATTRIBUTEFIELDS_HEADER_CVSID;
}

