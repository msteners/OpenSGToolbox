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
 **     class DefinedForce!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILEDEFINEDFORCEINST

#include <stdlib.h>
#include <stdio.h>

#include <OpenSG/OSGConfig.h>

#include "OSGDefinedForceBase.h"
#include "OSGDefinedForce.h"


OSG_USING_NAMESPACE

const OSG::BitVector  DefinedForceBase::ForceFieldMask = 
    (TypeTraits<BitVector>::One << DefinedForceBase::ForceFieldId);

const OSG::BitVector  DefinedForceBase::PointOfApplicationFieldMask = 
    (TypeTraits<BitVector>::One << DefinedForceBase::PointOfApplicationFieldId);

const OSG::BitVector DefinedForceBase::MTInfluenceMask = 
    (Inherited::MTInfluenceMask) | 
    (static_cast<BitVector>(0x0) << Inherited::NextFieldId); 


// Field descriptions

/*! \var Vec3f           DefinedForceBase::_sfForce
    
*/
/*! \var Pnt3f           DefinedForceBase::_sfPointOfApplication
    
*/

//! DefinedForce description

FieldDescription *DefinedForceBase::_desc[] = 
{
    new FieldDescription(SFVec3f::getClassType(), 
                     "Force", 
                     ForceFieldId, ForceFieldMask,
                     false,
                     (FieldAccessMethod) &DefinedForceBase::getSFForce),
    new FieldDescription(SFPnt3f::getClassType(), 
                     "PointOfApplication", 
                     PointOfApplicationFieldId, PointOfApplicationFieldMask,
                     false,
                     (FieldAccessMethod) &DefinedForceBase::getSFPointOfApplication)
};


FieldContainerType DefinedForceBase::_type(
    "DefinedForce",
    "Force",
    NULL,
    (PrototypeCreateF) &DefinedForceBase::createEmpty,
    DefinedForce::initMethod,
    _desc,
    sizeof(_desc));

//OSG_FIELD_CONTAINER_DEF(DefinedForceBase, DefinedForcePtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType &DefinedForceBase::getType(void) 
{
    return _type; 
} 

const FieldContainerType &DefinedForceBase::getType(void) const 
{
    return _type;
} 


FieldContainerPtr DefinedForceBase::shallowCopy(void) const 
{ 
    DefinedForcePtr returnValue; 

    newPtr(returnValue, dynamic_cast<const DefinedForce *>(this)); 

    return returnValue; 
}

UInt32 DefinedForceBase::getContainerSize(void) const 
{ 
    return sizeof(DefinedForce); 
}


#if !defined(OSG_FIXED_MFIELDSYNC)
void DefinedForceBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField)
{
    this->executeSyncImpl((DefinedForceBase *) &other, whichField);
}
#else
void DefinedForceBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField,                                    const SyncInfo       &sInfo     )
{
    this->executeSyncImpl((DefinedForceBase *) &other, whichField, sInfo);
}
void DefinedForceBase::execBeginEdit(const BitVector &whichField, 
                                            UInt32     uiAspect,
                                            UInt32     uiContainerSize) 
{
    this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void DefinedForceBase::onDestroyAspect(UInt32 uiId, UInt32 uiAspect)
{
    Inherited::onDestroyAspect(uiId, uiAspect);

}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning (disable : 383)
#endif

DefinedForceBase::DefinedForceBase(void) :
    _sfForce                  (), 
    _sfPointOfApplication     (), 
    Inherited() 
{
}

#ifdef OSG_WIN32_ICL
#pragma warning (default : 383)
#endif

DefinedForceBase::DefinedForceBase(const DefinedForceBase &source) :
    _sfForce                  (source._sfForce                  ), 
    _sfPointOfApplication     (source._sfPointOfApplication     ), 
    Inherited                 (source)
{
}

/*-------------------------- destructors ----------------------------------*/

DefinedForceBase::~DefinedForceBase(void)
{
}

/*------------------------------ access -----------------------------------*/

UInt32 DefinedForceBase::getBinSize(const BitVector &whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (ForceFieldMask & whichField))
    {
        returnValue += _sfForce.getBinSize();
    }

    if(FieldBits::NoField != (PointOfApplicationFieldMask & whichField))
    {
        returnValue += _sfPointOfApplication.getBinSize();
    }


    return returnValue;
}

void DefinedForceBase::copyToBin(      BinaryDataHandler &pMem,
                                  const BitVector         &whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (ForceFieldMask & whichField))
    {
        _sfForce.copyToBin(pMem);
    }

    if(FieldBits::NoField != (PointOfApplicationFieldMask & whichField))
    {
        _sfPointOfApplication.copyToBin(pMem);
    }


}

void DefinedForceBase::copyFromBin(      BinaryDataHandler &pMem,
                                    const BitVector    &whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (ForceFieldMask & whichField))
    {
        _sfForce.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (PointOfApplicationFieldMask & whichField))
    {
        _sfPointOfApplication.copyFromBin(pMem);
    }


}

#if !defined(OSG_FIXED_MFIELDSYNC)
void DefinedForceBase::executeSyncImpl(      DefinedForceBase *pOther,
                                        const BitVector         &whichField)
{

    Inherited::executeSyncImpl(pOther, whichField);

    if(FieldBits::NoField != (ForceFieldMask & whichField))
        _sfForce.syncWith(pOther->_sfForce);

    if(FieldBits::NoField != (PointOfApplicationFieldMask & whichField))
        _sfPointOfApplication.syncWith(pOther->_sfPointOfApplication);


}
#else
void DefinedForceBase::executeSyncImpl(      DefinedForceBase *pOther,
                                        const BitVector         &whichField,
                                        const SyncInfo          &sInfo      )
{

    Inherited::executeSyncImpl(pOther, whichField, sInfo);

    if(FieldBits::NoField != (ForceFieldMask & whichField))
        _sfForce.syncWith(pOther->_sfForce);

    if(FieldBits::NoField != (PointOfApplicationFieldMask & whichField))
        _sfPointOfApplication.syncWith(pOther->_sfPointOfApplication);



}

void DefinedForceBase::execBeginEditImpl (const BitVector &whichField, 
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
DataType FieldDataTraits<DefinedForcePtr>::_type("DefinedForcePtr", "ForcePtr");
#endif

OSG_DLLEXPORT_SFIELD_DEF1(DefinedForcePtr, );
OSG_DLLEXPORT_MFIELD_DEF1(DefinedForcePtr, );

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
    static Char8 cvsid_hpp       [] = OSGDEFINEDFORCEBASE_HEADER_CVSID;
    static Char8 cvsid_inl       [] = OSGDEFINEDFORCEBASE_INLINE_CVSID;

    static Char8 cvsid_fields_hpp[] = OSGDEFINEDFORCEFIELDS_HEADER_CVSID;
}

