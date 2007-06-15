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
 **     class MassAttribute!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILEMASSATTRIBUTEINST

#include <stdlib.h>
#include <stdio.h>

#include <OpenSG/OSGConfig.h>

#include "OSGMassAttributeBase.h"
#include "OSGMassAttribute.h"


OSG_USING_NAMESPACE

const OSG::BitVector  MassAttributeBase::MassFieldMask = 
    (TypeTraits<BitVector>::One << MassAttributeBase::MassFieldId);

const OSG::BitVector  MassAttributeBase::CenterOfMassFieldMask = 
    (TypeTraits<BitVector>::One << MassAttributeBase::CenterOfMassFieldId);

const OSG::BitVector MassAttributeBase::MTInfluenceMask = 
    (Inherited::MTInfluenceMask) | 
    (static_cast<BitVector>(0x0) << Inherited::NextFieldId); 


// Field descriptions

/*! \var Real32          MassAttributeBase::_sfMass
    
*/
/*! \var Pnt3f           MassAttributeBase::_sfCenterOfMass
    
*/

//! MassAttribute description

FieldDescription *MassAttributeBase::_desc[] = 
{
    new FieldDescription(SFReal32::getClassType(), 
                     "Mass", 
                     MassFieldId, MassFieldMask,
                     false,
                     (FieldAccessMethod) &MassAttributeBase::getSFMass),
    new FieldDescription(SFPnt3f::getClassType(), 
                     "CenterOfMass", 
                     CenterOfMassFieldId, CenterOfMassFieldMask,
                     false,
                     (FieldAccessMethod) &MassAttributeBase::getSFCenterOfMass)
};


FieldContainerType MassAttributeBase::_type(
    "MassAttribute",
    "PhysicsObjectAttribute",
    NULL,
    (PrototypeCreateF) &MassAttributeBase::createEmpty,
    MassAttribute::initMethod,
    _desc,
    sizeof(_desc));

//OSG_FIELD_CONTAINER_DEF(MassAttributeBase, MassAttributePtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType &MassAttributeBase::getType(void) 
{
    return _type; 
} 

const FieldContainerType &MassAttributeBase::getType(void) const 
{
    return _type;
} 


FieldContainerPtr MassAttributeBase::shallowCopy(void) const 
{ 
    MassAttributePtr returnValue; 

    newPtr(returnValue, dynamic_cast<const MassAttribute *>(this)); 

    return returnValue; 
}

UInt32 MassAttributeBase::getContainerSize(void) const 
{ 
    return sizeof(MassAttribute); 
}


#if !defined(OSG_FIXED_MFIELDSYNC)
void MassAttributeBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField)
{
    this->executeSyncImpl((MassAttributeBase *) &other, whichField);
}
#else
void MassAttributeBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField,                                    const SyncInfo       &sInfo     )
{
    this->executeSyncImpl((MassAttributeBase *) &other, whichField, sInfo);
}
void MassAttributeBase::execBeginEdit(const BitVector &whichField, 
                                            UInt32     uiAspect,
                                            UInt32     uiContainerSize) 
{
    this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void MassAttributeBase::onDestroyAspect(UInt32 uiId, UInt32 uiAspect)
{
    Inherited::onDestroyAspect(uiId, uiAspect);

}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning (disable : 383)
#endif

MassAttributeBase::MassAttributeBase(void) :
    _sfMass                   (), 
    _sfCenterOfMass           (), 
    Inherited() 
{
}

#ifdef OSG_WIN32_ICL
#pragma warning (default : 383)
#endif

MassAttributeBase::MassAttributeBase(const MassAttributeBase &source) :
    _sfMass                   (source._sfMass                   ), 
    _sfCenterOfMass           (source._sfCenterOfMass           ), 
    Inherited                 (source)
{
}

/*-------------------------- destructors ----------------------------------*/

MassAttributeBase::~MassAttributeBase(void)
{
}

/*------------------------------ access -----------------------------------*/

UInt32 MassAttributeBase::getBinSize(const BitVector &whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (MassFieldMask & whichField))
    {
        returnValue += _sfMass.getBinSize();
    }

    if(FieldBits::NoField != (CenterOfMassFieldMask & whichField))
    {
        returnValue += _sfCenterOfMass.getBinSize();
    }


    return returnValue;
}

void MassAttributeBase::copyToBin(      BinaryDataHandler &pMem,
                                  const BitVector         &whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (MassFieldMask & whichField))
    {
        _sfMass.copyToBin(pMem);
    }

    if(FieldBits::NoField != (CenterOfMassFieldMask & whichField))
    {
        _sfCenterOfMass.copyToBin(pMem);
    }


}

void MassAttributeBase::copyFromBin(      BinaryDataHandler &pMem,
                                    const BitVector    &whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (MassFieldMask & whichField))
    {
        _sfMass.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (CenterOfMassFieldMask & whichField))
    {
        _sfCenterOfMass.copyFromBin(pMem);
    }


}

#if !defined(OSG_FIXED_MFIELDSYNC)
void MassAttributeBase::executeSyncImpl(      MassAttributeBase *pOther,
                                        const BitVector         &whichField)
{

    Inherited::executeSyncImpl(pOther, whichField);

    if(FieldBits::NoField != (MassFieldMask & whichField))
        _sfMass.syncWith(pOther->_sfMass);

    if(FieldBits::NoField != (CenterOfMassFieldMask & whichField))
        _sfCenterOfMass.syncWith(pOther->_sfCenterOfMass);


}
#else
void MassAttributeBase::executeSyncImpl(      MassAttributeBase *pOther,
                                        const BitVector         &whichField,
                                        const SyncInfo          &sInfo      )
{

    Inherited::executeSyncImpl(pOther, whichField, sInfo);

    if(FieldBits::NoField != (MassFieldMask & whichField))
        _sfMass.syncWith(pOther->_sfMass);

    if(FieldBits::NoField != (CenterOfMassFieldMask & whichField))
        _sfCenterOfMass.syncWith(pOther->_sfCenterOfMass);



}

void MassAttributeBase::execBeginEditImpl (const BitVector &whichField, 
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
DataType FieldDataTraits<MassAttributePtr>::_type("MassAttributePtr", "PhysicsObjectAttributePtr");
#endif

OSG_DLLEXPORT_SFIELD_DEF1(MassAttributePtr, );
OSG_DLLEXPORT_MFIELD_DEF1(MassAttributePtr, );

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
    static Char8 cvsid_hpp       [] = OSGMASSATTRIBUTEBASE_HEADER_CVSID;
    static Char8 cvsid_inl       [] = OSGMASSATTRIBUTEBASE_INLINE_CVSID;

    static Char8 cvsid_fields_hpp[] = OSGMASSATTRIBUTEFIELDS_HEADER_CVSID;
}

