/*---------------------------------------------------------------------------*\
 *                        OpenSG ToolBox Toolbox                             *
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
 **     class HeightmapGeometry!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILEHEIGHTMAPGEOMETRYINST

#include <stdlib.h>
#include <stdio.h>

#include <OpenSG/OSGConfig.h>

#include "OSGHeightmapGeometryBase.h"
#include "OSGHeightmapGeometry.h"


OSG_BEGIN_NAMESPACE

const OSG::BitVector  HeightmapGeometryBase::HeightImageFieldMask = 
    (TypeTraits<BitVector>::One << HeightmapGeometryBase::HeightImageFieldId);

const OSG::BitVector  HeightmapGeometryBase::DimensionsFieldMask = 
    (TypeTraits<BitVector>::One << HeightmapGeometryBase::DimensionsFieldId);

const OSG::BitVector  HeightmapGeometryBase::ScaleFieldMask = 
    (TypeTraits<BitVector>::One << HeightmapGeometryBase::ScaleFieldId);

const OSG::BitVector  HeightmapGeometryBase::OffsetFieldMask = 
    (TypeTraits<BitVector>::One << HeightmapGeometryBase::OffsetFieldId);

const OSG::BitVector  HeightmapGeometryBase::SegmentsFieldMask = 
    (TypeTraits<BitVector>::One << HeightmapGeometryBase::SegmentsFieldId);

const OSG::BitVector HeightmapGeometryBase::MTInfluenceMask = 
    (Inherited::MTInfluenceMask) | 
    (static_cast<BitVector>(0x0) << Inherited::NextFieldId); 


// Field descriptions

/*! \var ImagePtr        HeightmapGeometryBase::_sfHeightImage
    The Image to create the heightfield from.
*/
/*! \var Vec2f           HeightmapGeometryBase::_sfDimensions
    The world space heightfield dimensions on the geom's local X and Z axes
*/
/*! \var Real32          HeightmapGeometryBase::_sfScale
    The vertical sample height multiplier, a uniform scale applied to all raw height data
*/
/*! \var Real32          HeightmapGeometryBase::_sfOffset
    The vertical sample offset, added to the scaled height data
*/
/*! \var Vec2f           HeightmapGeometryBase::_sfSegments
    The number of segments to create along the width and length
*/

//! HeightmapGeometry description

FieldDescription *HeightmapGeometryBase::_desc[] = 
{
    new FieldDescription(SFImagePtr::getClassType(), 
                     "HeightImage", 
                     HeightImageFieldId, HeightImageFieldMask,
                     false,
                     (FieldAccessMethod) &HeightmapGeometryBase::getSFHeightImage),
    new FieldDescription(SFVec2f::getClassType(), 
                     "Dimensions", 
                     DimensionsFieldId, DimensionsFieldMask,
                     false,
                     (FieldAccessMethod) &HeightmapGeometryBase::getSFDimensions),
    new FieldDescription(SFReal32::getClassType(), 
                     "Scale", 
                     ScaleFieldId, ScaleFieldMask,
                     false,
                     (FieldAccessMethod) &HeightmapGeometryBase::getSFScale),
    new FieldDescription(SFReal32::getClassType(), 
                     "Offset", 
                     OffsetFieldId, OffsetFieldMask,
                     false,
                     (FieldAccessMethod) &HeightmapGeometryBase::getSFOffset),
    new FieldDescription(SFVec2f::getClassType(), 
                     "Segments", 
                     SegmentsFieldId, SegmentsFieldMask,
                     false,
                     (FieldAccessMethod) &HeightmapGeometryBase::getSFSegments)
};


FieldContainerType HeightmapGeometryBase::_type(
    "HeightmapGeometry",
    "Geometry",
    NULL,
    (PrototypeCreateF) &HeightmapGeometryBase::createEmpty,
    HeightmapGeometry::initMethod,
    _desc,
    sizeof(_desc));

//OSG_FIELD_CONTAINER_DEF(HeightmapGeometryBase, HeightmapGeometryPtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType &HeightmapGeometryBase::getType(void) 
{
    return _type; 
} 

const FieldContainerType &HeightmapGeometryBase::getType(void) const 
{
    return _type;
} 


FieldContainerPtr HeightmapGeometryBase::shallowCopy(void) const 
{ 
    HeightmapGeometryPtr returnValue; 

    newPtr(returnValue, dynamic_cast<const HeightmapGeometry *>(this)); 

    return returnValue; 
}

UInt32 HeightmapGeometryBase::getContainerSize(void) const 
{ 
    return sizeof(HeightmapGeometry); 
}


#if !defined(OSG_FIXED_MFIELDSYNC)
void HeightmapGeometryBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField)
{
    this->executeSyncImpl((HeightmapGeometryBase *) &other, whichField);
}
#else
void HeightmapGeometryBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField,                                    const SyncInfo       &sInfo     )
{
    this->executeSyncImpl((HeightmapGeometryBase *) &other, whichField, sInfo);
}
void HeightmapGeometryBase::execBeginEdit(const BitVector &whichField, 
                                            UInt32     uiAspect,
                                            UInt32     uiContainerSize) 
{
    this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void HeightmapGeometryBase::onDestroyAspect(UInt32 uiId, UInt32 uiAspect)
{
    Inherited::onDestroyAspect(uiId, uiAspect);

}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning (disable : 383)
#endif

HeightmapGeometryBase::HeightmapGeometryBase(void) :
    _sfHeightImage            (ImagePtr(NullFC)), 
    _sfDimensions             (Vec2f(100.0f,100.0f)), 
    _sfScale                  (Real32(1.0f)), 
    _sfOffset                 (Real32(0.0f)), 
    _sfSegments               (Vec2f(10.0,10.0)), 
    Inherited() 
{
}

#ifdef OSG_WIN32_ICL
#pragma warning (default : 383)
#endif

HeightmapGeometryBase::HeightmapGeometryBase(const HeightmapGeometryBase &source) :
    _sfHeightImage            (source._sfHeightImage            ), 
    _sfDimensions             (source._sfDimensions             ), 
    _sfScale                  (source._sfScale                  ), 
    _sfOffset                 (source._sfOffset                 ), 
    _sfSegments               (source._sfSegments               ), 
    Inherited                 (source)
{
}

/*-------------------------- destructors ----------------------------------*/

HeightmapGeometryBase::~HeightmapGeometryBase(void)
{
}

/*------------------------------ access -----------------------------------*/

UInt32 HeightmapGeometryBase::getBinSize(const BitVector &whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (HeightImageFieldMask & whichField))
    {
        returnValue += _sfHeightImage.getBinSize();
    }

    if(FieldBits::NoField != (DimensionsFieldMask & whichField))
    {
        returnValue += _sfDimensions.getBinSize();
    }

    if(FieldBits::NoField != (ScaleFieldMask & whichField))
    {
        returnValue += _sfScale.getBinSize();
    }

    if(FieldBits::NoField != (OffsetFieldMask & whichField))
    {
        returnValue += _sfOffset.getBinSize();
    }

    if(FieldBits::NoField != (SegmentsFieldMask & whichField))
    {
        returnValue += _sfSegments.getBinSize();
    }


    return returnValue;
}

void HeightmapGeometryBase::copyToBin(      BinaryDataHandler &pMem,
                                  const BitVector         &whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (HeightImageFieldMask & whichField))
    {
        _sfHeightImage.copyToBin(pMem);
    }

    if(FieldBits::NoField != (DimensionsFieldMask & whichField))
    {
        _sfDimensions.copyToBin(pMem);
    }

    if(FieldBits::NoField != (ScaleFieldMask & whichField))
    {
        _sfScale.copyToBin(pMem);
    }

    if(FieldBits::NoField != (OffsetFieldMask & whichField))
    {
        _sfOffset.copyToBin(pMem);
    }

    if(FieldBits::NoField != (SegmentsFieldMask & whichField))
    {
        _sfSegments.copyToBin(pMem);
    }


}

void HeightmapGeometryBase::copyFromBin(      BinaryDataHandler &pMem,
                                    const BitVector    &whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (HeightImageFieldMask & whichField))
    {
        _sfHeightImage.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (DimensionsFieldMask & whichField))
    {
        _sfDimensions.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (ScaleFieldMask & whichField))
    {
        _sfScale.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (OffsetFieldMask & whichField))
    {
        _sfOffset.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (SegmentsFieldMask & whichField))
    {
        _sfSegments.copyFromBin(pMem);
    }


}

#if !defined(OSG_FIXED_MFIELDSYNC)
void HeightmapGeometryBase::executeSyncImpl(      HeightmapGeometryBase *pOther,
                                        const BitVector         &whichField)
{

    Inherited::executeSyncImpl(pOther, whichField);

    if(FieldBits::NoField != (HeightImageFieldMask & whichField))
        _sfHeightImage.syncWith(pOther->_sfHeightImage);

    if(FieldBits::NoField != (DimensionsFieldMask & whichField))
        _sfDimensions.syncWith(pOther->_sfDimensions);

    if(FieldBits::NoField != (ScaleFieldMask & whichField))
        _sfScale.syncWith(pOther->_sfScale);

    if(FieldBits::NoField != (OffsetFieldMask & whichField))
        _sfOffset.syncWith(pOther->_sfOffset);

    if(FieldBits::NoField != (SegmentsFieldMask & whichField))
        _sfSegments.syncWith(pOther->_sfSegments);


}
#else
void HeightmapGeometryBase::executeSyncImpl(      HeightmapGeometryBase *pOther,
                                        const BitVector         &whichField,
                                        const SyncInfo          &sInfo      )
{

    Inherited::executeSyncImpl(pOther, whichField, sInfo);

    if(FieldBits::NoField != (HeightImageFieldMask & whichField))
        _sfHeightImage.syncWith(pOther->_sfHeightImage);

    if(FieldBits::NoField != (DimensionsFieldMask & whichField))
        _sfDimensions.syncWith(pOther->_sfDimensions);

    if(FieldBits::NoField != (ScaleFieldMask & whichField))
        _sfScale.syncWith(pOther->_sfScale);

    if(FieldBits::NoField != (OffsetFieldMask & whichField))
        _sfOffset.syncWith(pOther->_sfOffset);

    if(FieldBits::NoField != (SegmentsFieldMask & whichField))
        _sfSegments.syncWith(pOther->_sfSegments);



}

void HeightmapGeometryBase::execBeginEditImpl (const BitVector &whichField, 
                                                 UInt32     uiAspect,
                                                 UInt32     uiContainerSize)
{
    Inherited::execBeginEditImpl(whichField, uiAspect, uiContainerSize);

}
#endif



OSG_END_NAMESPACE

#include <OpenSG/OSGSFieldTypeDef.inl>
#include <OpenSG/OSGMFieldTypeDef.inl>

OSG_BEGIN_NAMESPACE

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldDataTraits<HeightmapGeometryPtr>::_type("HeightmapGeometryPtr", "GeometryPtr");
#endif

OSG_DLLEXPORT_SFIELD_DEF1(HeightmapGeometryPtr, OSG_TOOLBOXLIB_DLLTMPLMAPPING);
OSG_DLLEXPORT_MFIELD_DEF1(HeightmapGeometryPtr, OSG_TOOLBOXLIB_DLLTMPLMAPPING);


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
    static Char8 cvsid_hpp       [] = OSGHEIGHTMAPGEOMETRYBASE_HEADER_CVSID;
    static Char8 cvsid_inl       [] = OSGHEIGHTMAPGEOMETRYBASE_INLINE_CVSID;

    static Char8 cvsid_fields_hpp[] = OSGHEIGHTMAPGEOMETRYFIELDS_HEADER_CVSID;
}

OSG_END_NAMESPACE

