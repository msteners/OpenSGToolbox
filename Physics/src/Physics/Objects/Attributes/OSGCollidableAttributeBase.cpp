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
 **     class CollidableAttribute!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILECOLLIDABLEATTRIBUTEINST

#include <stdlib.h>
#include <stdio.h>

#include <OpenSG/OSGConfig.h>

#include "OSGCollidableAttributeBase.h"
#include "OSGCollidableAttribute.h"


OSG_USING_NAMESPACE

const OSG::BitVector  CollidableAttributeBase::CollisionGeometryFieldMask = 
    (TypeTraits<BitVector>::One << CollidableAttributeBase::CollisionGeometryFieldId);

const OSG::BitVector CollidableAttributeBase::MTInfluenceMask = 
    (Inherited::MTInfluenceMask) | 
    (static_cast<BitVector>(0x0) << Inherited::NextFieldId); 


// Field descriptions

/*! \var NodePtr         CollidableAttributeBase::_sfCollisionGeometry
    
*/

//! CollidableAttribute description

FieldDescription *CollidableAttributeBase::_desc[] = 
{
    new FieldDescription(SFNodePtr::getClassType(), 
                     "CollisionGeometry", 
                     CollisionGeometryFieldId, CollisionGeometryFieldMask,
                     false,
                     (FieldAccessMethod) &CollidableAttributeBase::getSFCollisionGeometry)
};


FieldContainerType CollidableAttributeBase::_type(
    "CollidableAttribute",
    "PhysicsObjectAttribute",
    NULL,
    (PrototypeCreateF) &CollidableAttributeBase::createEmpty,
    CollidableAttribute::initMethod,
    _desc,
    sizeof(_desc));

//OSG_FIELD_CONTAINER_DEF(CollidableAttributeBase, CollidableAttributePtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType &CollidableAttributeBase::getType(void) 
{
    return _type; 
} 

const FieldContainerType &CollidableAttributeBase::getType(void) const 
{
    return _type;
} 


FieldContainerPtr CollidableAttributeBase::shallowCopy(void) const 
{ 
    CollidableAttributePtr returnValue; 

    newPtr(returnValue, dynamic_cast<const CollidableAttribute *>(this)); 

    return returnValue; 
}

UInt32 CollidableAttributeBase::getContainerSize(void) const 
{ 
    return sizeof(CollidableAttribute); 
}


#if !defined(OSG_FIXED_MFIELDSYNC)
void CollidableAttributeBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField)
{
    this->executeSyncImpl((CollidableAttributeBase *) &other, whichField);
}
#else
void CollidableAttributeBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField,                                    const SyncInfo       &sInfo     )
{
    this->executeSyncImpl((CollidableAttributeBase *) &other, whichField, sInfo);
}
void CollidableAttributeBase::execBeginEdit(const BitVector &whichField, 
                                            UInt32     uiAspect,
                                            UInt32     uiContainerSize) 
{
    this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void CollidableAttributeBase::onDestroyAspect(UInt32 uiId, UInt32 uiAspect)
{
    Inherited::onDestroyAspect(uiId, uiAspect);

}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning (disable : 383)
#endif

CollidableAttributeBase::CollidableAttributeBase(void) :
    _sfCollisionGeometry      (), 
    Inherited() 
{
}

#ifdef OSG_WIN32_ICL
#pragma warning (default : 383)
#endif

CollidableAttributeBase::CollidableAttributeBase(const CollidableAttributeBase &source) :
    _sfCollisionGeometry      (source._sfCollisionGeometry      ), 
    Inherited                 (source)
{
}

/*-------------------------- destructors ----------------------------------*/

CollidableAttributeBase::~CollidableAttributeBase(void)
{
}

/*------------------------------ access -----------------------------------*/

UInt32 CollidableAttributeBase::getBinSize(const BitVector &whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (CollisionGeometryFieldMask & whichField))
    {
        returnValue += _sfCollisionGeometry.getBinSize();
    }


    return returnValue;
}

void CollidableAttributeBase::copyToBin(      BinaryDataHandler &pMem,
                                  const BitVector         &whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (CollisionGeometryFieldMask & whichField))
    {
        _sfCollisionGeometry.copyToBin(pMem);
    }


}

void CollidableAttributeBase::copyFromBin(      BinaryDataHandler &pMem,
                                    const BitVector    &whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (CollisionGeometryFieldMask & whichField))
    {
        _sfCollisionGeometry.copyFromBin(pMem);
    }


}

#if !defined(OSG_FIXED_MFIELDSYNC)
void CollidableAttributeBase::executeSyncImpl(      CollidableAttributeBase *pOther,
                                        const BitVector         &whichField)
{

    Inherited::executeSyncImpl(pOther, whichField);

    if(FieldBits::NoField != (CollisionGeometryFieldMask & whichField))
        _sfCollisionGeometry.syncWith(pOther->_sfCollisionGeometry);


}
#else
void CollidableAttributeBase::executeSyncImpl(      CollidableAttributeBase *pOther,
                                        const BitVector         &whichField,
                                        const SyncInfo          &sInfo      )
{

    Inherited::executeSyncImpl(pOther, whichField, sInfo);

    if(FieldBits::NoField != (CollisionGeometryFieldMask & whichField))
        _sfCollisionGeometry.syncWith(pOther->_sfCollisionGeometry);



}

void CollidableAttributeBase::execBeginEditImpl (const BitVector &whichField, 
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
DataType FieldDataTraits<CollidableAttributePtr>::_type("CollidableAttributePtr", "PhysicsObjectAttributePtr");
#endif

OSG_DLLEXPORT_SFIELD_DEF1(CollidableAttributePtr, );
OSG_DLLEXPORT_MFIELD_DEF1(CollidableAttributePtr, );

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
    static Char8 cvsid_hpp       [] = OSGCOLLIDABLEATTRIBUTEBASE_HEADER_CVSID;
    static Char8 cvsid_inl       [] = OSGCOLLIDABLEATTRIBUTEBASE_INLINE_CVSID;

    static Char8 cvsid_fields_hpp[] = OSGCOLLIDABLEATTRIBUTEFIELDS_HEADER_CVSID;
}

