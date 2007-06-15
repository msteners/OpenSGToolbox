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
 **     class NormalForce!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILENORMALFORCEINST

#include <stdlib.h>
#include <stdio.h>

#include <OpenSG/OSGConfig.h>

#include "OSGNormalForceBase.h"
#include "OSGNormalForce.h"


OSG_USING_NAMESPACE

const OSG::BitVector  NormalForceBase::SurfaceFieldMask = 
    (TypeTraits<BitVector>::One << NormalForceBase::SurfaceFieldId);

const OSG::BitVector NormalForceBase::MTInfluenceMask = 
    (Inherited::MTInfluenceMask) | 
    (static_cast<BitVector>(0x0) << Inherited::NextFieldId); 


// Field descriptions

/*! \var SurfacePtr      NormalForceBase::_sfSurface
    
*/

//! NormalForce description

FieldDescription *NormalForceBase::_desc[] = 
{
    new FieldDescription(SFSurfacePtr::getClassType(), 
                     "Surface", 
                     SurfaceFieldId, SurfaceFieldMask,
                     false,
                     (FieldAccessMethod) &NormalForceBase::getSFSurface)
};


FieldContainerType NormalForceBase::_type(
    "NormalForce",
    "Force",
    NULL,
    (PrototypeCreateF) &NormalForceBase::createEmpty,
    NormalForce::initMethod,
    _desc,
    sizeof(_desc));

//OSG_FIELD_CONTAINER_DEF(NormalForceBase, NormalForcePtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType &NormalForceBase::getType(void) 
{
    return _type; 
} 

const FieldContainerType &NormalForceBase::getType(void) const 
{
    return _type;
} 


FieldContainerPtr NormalForceBase::shallowCopy(void) const 
{ 
    NormalForcePtr returnValue; 

    newPtr(returnValue, dynamic_cast<const NormalForce *>(this)); 

    return returnValue; 
}

UInt32 NormalForceBase::getContainerSize(void) const 
{ 
    return sizeof(NormalForce); 
}


#if !defined(OSG_FIXED_MFIELDSYNC)
void NormalForceBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField)
{
    this->executeSyncImpl((NormalForceBase *) &other, whichField);
}
#else
void NormalForceBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField,                                    const SyncInfo       &sInfo     )
{
    this->executeSyncImpl((NormalForceBase *) &other, whichField, sInfo);
}
void NormalForceBase::execBeginEdit(const BitVector &whichField, 
                                            UInt32     uiAspect,
                                            UInt32     uiContainerSize) 
{
    this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void NormalForceBase::onDestroyAspect(UInt32 uiId, UInt32 uiAspect)
{
    Inherited::onDestroyAspect(uiId, uiAspect);

}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning (disable : 383)
#endif

NormalForceBase::NormalForceBase(void) :
    _sfSurface                (), 
    Inherited() 
{
}

#ifdef OSG_WIN32_ICL
#pragma warning (default : 383)
#endif

NormalForceBase::NormalForceBase(const NormalForceBase &source) :
    _sfSurface                (source._sfSurface                ), 
    Inherited                 (source)
{
}

/*-------------------------- destructors ----------------------------------*/

NormalForceBase::~NormalForceBase(void)
{
}

/*------------------------------ access -----------------------------------*/

UInt32 NormalForceBase::getBinSize(const BitVector &whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (SurfaceFieldMask & whichField))
    {
        returnValue += _sfSurface.getBinSize();
    }


    return returnValue;
}

void NormalForceBase::copyToBin(      BinaryDataHandler &pMem,
                                  const BitVector         &whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (SurfaceFieldMask & whichField))
    {
        _sfSurface.copyToBin(pMem);
    }


}

void NormalForceBase::copyFromBin(      BinaryDataHandler &pMem,
                                    const BitVector    &whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (SurfaceFieldMask & whichField))
    {
        _sfSurface.copyFromBin(pMem);
    }


}

#if !defined(OSG_FIXED_MFIELDSYNC)
void NormalForceBase::executeSyncImpl(      NormalForceBase *pOther,
                                        const BitVector         &whichField)
{

    Inherited::executeSyncImpl(pOther, whichField);

    if(FieldBits::NoField != (SurfaceFieldMask & whichField))
        _sfSurface.syncWith(pOther->_sfSurface);


}
#else
void NormalForceBase::executeSyncImpl(      NormalForceBase *pOther,
                                        const BitVector         &whichField,
                                        const SyncInfo          &sInfo      )
{

    Inherited::executeSyncImpl(pOther, whichField, sInfo);

    if(FieldBits::NoField != (SurfaceFieldMask & whichField))
        _sfSurface.syncWith(pOther->_sfSurface);



}

void NormalForceBase::execBeginEditImpl (const BitVector &whichField, 
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
DataType FieldDataTraits<NormalForcePtr>::_type("NormalForcePtr", "ForcePtr");
#endif

OSG_DLLEXPORT_SFIELD_DEF1(NormalForcePtr, );
OSG_DLLEXPORT_MFIELD_DEF1(NormalForcePtr, );

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
    static Char8 cvsid_hpp       [] = OSGNORMALFORCEBASE_HEADER_CVSID;
    static Char8 cvsid_inl       [] = OSGNORMALFORCEBASE_INLINE_CVSID;

    static Char8 cvsid_fields_hpp[] = OSGNORMALFORCEFIELDS_HEADER_CVSID;
}

