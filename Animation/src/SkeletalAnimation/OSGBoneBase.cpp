/*---------------------------------------------------------------------------*\
 *                       OpenSG ToolBox Animation                            *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                         www.vrac.iastate.edu                              *
 *                                                                           *
 *                          Authors: David Kabala                            *
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
 **     class Bone!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILEBONEINST

#include <stdlib.h>
#include <stdio.h>

#include <OpenSG/OSGConfig.h>

#include "OSGBoneBase.h"
#include "OSGBone.h"


OSG_BEGIN_NAMESPACE

const OSG::BitVector  BoneBase::RotationFieldMask = 
    (TypeTraits<BitVector>::One << BoneBase::RotationFieldId);

const OSG::BitVector  BoneBase::TranslationFieldMask = 
    (TypeTraits<BitVector>::One << BoneBase::TranslationFieldId);

const OSG::BitVector  BoneBase::LengthFieldMask = 
    (TypeTraits<BitVector>::One << BoneBase::LengthFieldId);

const OSG::BitVector  BoneBase::InternalChildrenFieldMask = 
    (TypeTraits<BitVector>::One << BoneBase::InternalChildrenFieldId);

const OSG::BitVector  BoneBase::InternalParentFieldMask = 
    (TypeTraits<BitVector>::One << BoneBase::InternalParentFieldId);

const OSG::BitVector  BoneBase::InternalRelativeTransformationFieldMask = 
    (TypeTraits<BitVector>::One << BoneBase::InternalRelativeTransformationFieldId);

const OSG::BitVector  BoneBase::InternalAbsoluteTransformationFieldMask = 
    (TypeTraits<BitVector>::One << BoneBase::InternalAbsoluteTransformationFieldId);

const OSG::BitVector BoneBase::MTInfluenceMask = 
    (Inherited::MTInfluenceMask) | 
    (static_cast<BitVector>(0x0) << Inherited::NextFieldId); 


// Field descriptions

/*! \var Quaternion      BoneBase::_sfRotation
    
*/
/*! \var Pnt3f           BoneBase::_sfTranslation
    
*/
/*! \var Real32          BoneBase::_sfLength
    
*/
/*! \var BonePtr         BoneBase::_mfInternalChildren
    
*/
/*! \var BonePtr         BoneBase::_sfInternalParent
    
*/
/*! \var Matrix          BoneBase::_sfInternalRelativeTransformation
    
*/
/*! \var Matrix          BoneBase::_sfInternalAbsoluteTransformation
    
*/

//! Bone description

FieldDescription *BoneBase::_desc[] = 
{
    new FieldDescription(SFQuaternion::getClassType(), 
                     "Rotation", 
                     RotationFieldId, RotationFieldMask,
                     false,
                     (FieldAccessMethod) &BoneBase::getSFRotation),
    new FieldDescription(SFPnt3f::getClassType(), 
                     "Translation", 
                     TranslationFieldId, TranslationFieldMask,
                     false,
                     (FieldAccessMethod) &BoneBase::getSFTranslation),
    new FieldDescription(SFReal32::getClassType(), 
                     "Length", 
                     LengthFieldId, LengthFieldMask,
                     false,
                     (FieldAccessMethod) &BoneBase::getSFLength),
    new FieldDescription(MFBonePtr::getClassType(), 
                     "InternalChildren", 
                     InternalChildrenFieldId, InternalChildrenFieldMask,
                     false,
                     (FieldAccessMethod) &BoneBase::getMFInternalChildren),
    new FieldDescription(SFBonePtr::getClassType(), 
                     "InternalParent", 
                     InternalParentFieldId, InternalParentFieldMask,
                     false,
                     (FieldAccessMethod) &BoneBase::getSFInternalParent),
    new FieldDescription(SFMatrix::getClassType(), 
                     "InternalRelativeTransformation", 
                     InternalRelativeTransformationFieldId, InternalRelativeTransformationFieldMask,
                     false,
                     (FieldAccessMethod) &BoneBase::getSFInternalRelativeTransformation),
    new FieldDescription(SFMatrix::getClassType(), 
                     "InternalAbsoluteTransformation", 
                     InternalAbsoluteTransformationFieldId, InternalAbsoluteTransformationFieldMask,
                     false,
                     (FieldAccessMethod) &BoneBase::getSFInternalAbsoluteTransformation)
};


FieldContainerType BoneBase::_type(
    "Bone",
    "AttachmentContainer",
    NULL,
    (PrototypeCreateF) &BoneBase::createEmpty,
    Bone::initMethod,
    _desc,
    sizeof(_desc));

//OSG_FIELD_CONTAINER_DEF(BoneBase, BonePtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType &BoneBase::getType(void) 
{
    return _type; 
} 

const FieldContainerType &BoneBase::getType(void) const 
{
    return _type;
} 


FieldContainerPtr BoneBase::shallowCopy(void) const 
{ 
    BonePtr returnValue; 

    newPtr(returnValue, dynamic_cast<const Bone *>(this)); 

    return returnValue; 
}

UInt32 BoneBase::getContainerSize(void) const 
{ 
    return sizeof(Bone); 
}


#if !defined(OSG_FIXED_MFIELDSYNC)
void BoneBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField)
{
    this->executeSyncImpl((BoneBase *) &other, whichField);
}
#else
void BoneBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField,                                    const SyncInfo       &sInfo     )
{
    this->executeSyncImpl((BoneBase *) &other, whichField, sInfo);
}
void BoneBase::execBeginEdit(const BitVector &whichField, 
                                            UInt32     uiAspect,
                                            UInt32     uiContainerSize) 
{
    this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void BoneBase::onDestroyAspect(UInt32 uiId, UInt32 uiAspect)
{
    Inherited::onDestroyAspect(uiId, uiAspect);

    _mfInternalChildren.terminateShare(uiAspect, this->getContainerSize());
}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning (disable : 383)
#endif

BoneBase::BoneBase(void) :
    _sfRotation               (), 
    _sfTranslation            (), 
    _sfLength                 (),// 
    _mfInternalChildren       (), 
    _sfInternalParent         (), 
    _sfInternalRelativeTransformation(), 
    _sfInternalAbsoluteTransformation(), 
    Inherited() 
{
}

#ifdef OSG_WIN32_ICL
#pragma warning (default : 383)
#endif

BoneBase::BoneBase(const BoneBase &source) :
    _sfRotation               (source._sfRotation               ), 
    _sfTranslation            (source._sfTranslation            ), 
    _sfLength                 (source._sfLength                 ), 
    _mfInternalChildren       (source._mfInternalChildren       ), 
    _sfInternalParent         (source._sfInternalParent         ), 
    _sfInternalRelativeTransformation(source._sfInternalRelativeTransformation), 
    _sfInternalAbsoluteTransformation(source._sfInternalAbsoluteTransformation), 
    Inherited                 (source)
{
}

/*-------------------------- destructors ----------------------------------*/

BoneBase::~BoneBase(void)
{
}

/*------------------------------ access -----------------------------------*/

UInt32 BoneBase::getBinSize(const BitVector &whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (RotationFieldMask & whichField))
    {
        returnValue += _sfRotation.getBinSize();
    }

    if(FieldBits::NoField != (TranslationFieldMask & whichField))
    {
        returnValue += _sfTranslation.getBinSize();
    }

    if(FieldBits::NoField != (LengthFieldMask & whichField))
    {
        returnValue += _sfLength.getBinSize();
    }

    if(FieldBits::NoField != (InternalChildrenFieldMask & whichField))
    {
        returnValue += _mfInternalChildren.getBinSize();
    }

    if(FieldBits::NoField != (InternalParentFieldMask & whichField))
    {
        returnValue += _sfInternalParent.getBinSize();
    }

    if(FieldBits::NoField != (InternalRelativeTransformationFieldMask & whichField))
    {
        returnValue += _sfInternalRelativeTransformation.getBinSize();
    }

    if(FieldBits::NoField != (InternalAbsoluteTransformationFieldMask & whichField))
    {
        returnValue += _sfInternalAbsoluteTransformation.getBinSize();
    }


    return returnValue;
}

void BoneBase::copyToBin(      BinaryDataHandler &pMem,
                                  const BitVector         &whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (RotationFieldMask & whichField))
    {
        _sfRotation.copyToBin(pMem);
    }

    if(FieldBits::NoField != (TranslationFieldMask & whichField))
    {
        _sfTranslation.copyToBin(pMem);
    }

    if(FieldBits::NoField != (LengthFieldMask & whichField))
    {
        _sfLength.copyToBin(pMem);
    }

    if(FieldBits::NoField != (InternalChildrenFieldMask & whichField))
    {
        _mfInternalChildren.copyToBin(pMem);
    }

    if(FieldBits::NoField != (InternalParentFieldMask & whichField))
    {
        _sfInternalParent.copyToBin(pMem);
    }

    if(FieldBits::NoField != (InternalRelativeTransformationFieldMask & whichField))
    {
        _sfInternalRelativeTransformation.copyToBin(pMem);
    }

    if(FieldBits::NoField != (InternalAbsoluteTransformationFieldMask & whichField))
    {
        _sfInternalAbsoluteTransformation.copyToBin(pMem);
    }


}

void BoneBase::copyFromBin(      BinaryDataHandler &pMem,
                                    const BitVector    &whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (RotationFieldMask & whichField))
    {
        _sfRotation.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (TranslationFieldMask & whichField))
    {
        _sfTranslation.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (LengthFieldMask & whichField))
    {
        _sfLength.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (InternalChildrenFieldMask & whichField))
    {
        _mfInternalChildren.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (InternalParentFieldMask & whichField))
    {
        _sfInternalParent.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (InternalRelativeTransformationFieldMask & whichField))
    {
        _sfInternalRelativeTransformation.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (InternalAbsoluteTransformationFieldMask & whichField))
    {
        _sfInternalAbsoluteTransformation.copyFromBin(pMem);
    }


}

#if !defined(OSG_FIXED_MFIELDSYNC)
void BoneBase::executeSyncImpl(      BoneBase *pOther,
                                        const BitVector         &whichField)
{

    Inherited::executeSyncImpl(pOther, whichField);

    if(FieldBits::NoField != (RotationFieldMask & whichField))
        _sfRotation.syncWith(pOther->_sfRotation);

    if(FieldBits::NoField != (TranslationFieldMask & whichField))
        _sfTranslation.syncWith(pOther->_sfTranslation);

    if(FieldBits::NoField != (LengthFieldMask & whichField))
        _sfLength.syncWith(pOther->_sfLength);

    if(FieldBits::NoField != (InternalChildrenFieldMask & whichField))
        _mfInternalChildren.syncWith(pOther->_mfInternalChildren);

    if(FieldBits::NoField != (InternalParentFieldMask & whichField))
        _sfInternalParent.syncWith(pOther->_sfInternalParent);

    if(FieldBits::NoField != (InternalRelativeTransformationFieldMask & whichField))
        _sfInternalRelativeTransformation.syncWith(pOther->_sfInternalRelativeTransformation);

    if(FieldBits::NoField != (InternalAbsoluteTransformationFieldMask & whichField))
        _sfInternalAbsoluteTransformation.syncWith(pOther->_sfInternalAbsoluteTransformation);


}
#else
void BoneBase::executeSyncImpl(      BoneBase *pOther,
                                        const BitVector         &whichField,
                                        const SyncInfo          &sInfo      )
{

    Inherited::executeSyncImpl(pOther, whichField, sInfo);

    if(FieldBits::NoField != (RotationFieldMask & whichField))
        _sfRotation.syncWith(pOther->_sfRotation);

    if(FieldBits::NoField != (TranslationFieldMask & whichField))
        _sfTranslation.syncWith(pOther->_sfTranslation);

    if(FieldBits::NoField != (LengthFieldMask & whichField))
        _sfLength.syncWith(pOther->_sfLength);

    if(FieldBits::NoField != (InternalParentFieldMask & whichField))
        _sfInternalParent.syncWith(pOther->_sfInternalParent);

    if(FieldBits::NoField != (InternalRelativeTransformationFieldMask & whichField))
        _sfInternalRelativeTransformation.syncWith(pOther->_sfInternalRelativeTransformation);

    if(FieldBits::NoField != (InternalAbsoluteTransformationFieldMask & whichField))
        _sfInternalAbsoluteTransformation.syncWith(pOther->_sfInternalAbsoluteTransformation);


    if(FieldBits::NoField != (InternalChildrenFieldMask & whichField))
        _mfInternalChildren.syncWith(pOther->_mfInternalChildren, sInfo);


}

void BoneBase::execBeginEditImpl (const BitVector &whichField, 
                                                 UInt32     uiAspect,
                                                 UInt32     uiContainerSize)
{
    Inherited::execBeginEditImpl(whichField, uiAspect, uiContainerSize);

    if(FieldBits::NoField != (InternalChildrenFieldMask & whichField))
        _mfInternalChildren.beginEdit(uiAspect, uiContainerSize);

}
#endif



OSG_END_NAMESPACE

#include <OpenSG/OSGSFieldTypeDef.inl>
#include <OpenSG/OSGMFieldTypeDef.inl>

OSG_BEGIN_NAMESPACE

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldDataTraits<BonePtr>::_type("BonePtr", "AttachmentContainerPtr");
#endif

OSG_DLLEXPORT_SFIELD_DEF1(BonePtr, OSG_ANIMATIONLIB_DLLTMPLMAPPING);
OSG_DLLEXPORT_MFIELD_DEF1(BonePtr, OSG_ANIMATIONLIB_DLLTMPLMAPPING);


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
    static Char8 cvsid_cpp       [] = "@(#)$Id: FCBaseTemplate_cpp.h,v 1.47 2006/03/17 17:03:19 pdaehne Exp $";
    static Char8 cvsid_hpp       [] = OSGBONEBASE_HEADER_CVSID;
    static Char8 cvsid_inl       [] = OSGBONEBASE_INLINE_CVSID;

    static Char8 cvsid_fields_hpp[] = OSGBONEFIELDS_HEADER_CVSID;
}

OSG_END_NAMESPACE
