/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
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
 **     class DiscDistribution2D!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &DiscDistribution2DBase::getClassType(void)
{
    return _type;
}

//! access the numerical type of the class
inline
OSG::UInt32 DiscDistribution2DBase::getClassTypeId(void)
{
    return _type.getId();
}

inline
OSG::UInt16 DiscDistribution2DBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/

//! Get the value of the DiscDistribution2D::_sfCenter field.

inline
Pnt2f &DiscDistribution2DBase::editCenter(void)
{
    editSField(CenterFieldMask);

    return _sfCenter.getValue();
}

//! Get the value of the DiscDistribution2D::_sfCenter field.
inline
const Pnt2f &DiscDistribution2DBase::getCenter(void) const
{
    return _sfCenter.getValue();
}

//! Set the value of the DiscDistribution2D::_sfCenter field.
inline
void DiscDistribution2DBase::setCenter(const Pnt2f &value)
{
    editSField(CenterFieldMask);

    _sfCenter.setValue(value);
}
//! Get the value of the DiscDistribution2D::_sfMinRadius field.

inline
Real32 &DiscDistribution2DBase::editMinRadius(void)
{
    editSField(MinRadiusFieldMask);

    return _sfMinRadius.getValue();
}

//! Get the value of the DiscDistribution2D::_sfMinRadius field.
inline
      Real32  DiscDistribution2DBase::getMinRadius(void) const
{
    return _sfMinRadius.getValue();
}

//! Set the value of the DiscDistribution2D::_sfMinRadius field.
inline
void DiscDistribution2DBase::setMinRadius(const Real32 value)
{
    editSField(MinRadiusFieldMask);

    _sfMinRadius.setValue(value);
}
//! Get the value of the DiscDistribution2D::_sfMaxRadius field.

inline
Real32 &DiscDistribution2DBase::editMaxRadius(void)
{
    editSField(MaxRadiusFieldMask);

    return _sfMaxRadius.getValue();
}

//! Get the value of the DiscDistribution2D::_sfMaxRadius field.
inline
      Real32  DiscDistribution2DBase::getMaxRadius(void) const
{
    return _sfMaxRadius.getValue();
}

//! Set the value of the DiscDistribution2D::_sfMaxRadius field.
inline
void DiscDistribution2DBase::setMaxRadius(const Real32 value)
{
    editSField(MaxRadiusFieldMask);

    _sfMaxRadius.setValue(value);
}
//! Get the value of the DiscDistribution2D::_sfMinTheta field.

inline
Real32 &DiscDistribution2DBase::editMinTheta(void)
{
    editSField(MinThetaFieldMask);

    return _sfMinTheta.getValue();
}

//! Get the value of the DiscDistribution2D::_sfMinTheta field.
inline
      Real32  DiscDistribution2DBase::getMinTheta(void) const
{
    return _sfMinTheta.getValue();
}

//! Set the value of the DiscDistribution2D::_sfMinTheta field.
inline
void DiscDistribution2DBase::setMinTheta(const Real32 value)
{
    editSField(MinThetaFieldMask);

    _sfMinTheta.setValue(value);
}
//! Get the value of the DiscDistribution2D::_sfMaxTheta field.

inline
Real32 &DiscDistribution2DBase::editMaxTheta(void)
{
    editSField(MaxThetaFieldMask);

    return _sfMaxTheta.getValue();
}

//! Get the value of the DiscDistribution2D::_sfMaxTheta field.
inline
      Real32  DiscDistribution2DBase::getMaxTheta(void) const
{
    return _sfMaxTheta.getValue();
}

//! Set the value of the DiscDistribution2D::_sfMaxTheta field.
inline
void DiscDistribution2DBase::setMaxTheta(const Real32 value)
{
    editSField(MaxThetaFieldMask);

    _sfMaxTheta.setValue(value);
}
//! Get the value of the DiscDistribution2D::_sfSurfaceOrEdge field.

inline
UInt32 &DiscDistribution2DBase::editSurfaceOrEdge(void)
{
    editSField(SurfaceOrEdgeFieldMask);

    return _sfSurfaceOrEdge.getValue();
}

//! Get the value of the DiscDistribution2D::_sfSurfaceOrEdge field.
inline
      UInt32  DiscDistribution2DBase::getSurfaceOrEdge(void) const
{
    return _sfSurfaceOrEdge.getValue();
}

//! Set the value of the DiscDistribution2D::_sfSurfaceOrEdge field.
inline
void DiscDistribution2DBase::setSurfaceOrEdge(const UInt32 value)
{
    editSField(SurfaceOrEdgeFieldMask);

    _sfSurfaceOrEdge.setValue(value);
}


#ifdef OSG_MT_CPTR_ASPECT
inline
void DiscDistribution2DBase::execSync (      DiscDistribution2DBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Inherited::execSync(pFrom, whichField, oOffsets, syncMode, uiSyncInfo);

    if(FieldBits::NoField != (CenterFieldMask & whichField))
        _sfCenter.syncWith(pFrom->_sfCenter);

    if(FieldBits::NoField != (MinRadiusFieldMask & whichField))
        _sfMinRadius.syncWith(pFrom->_sfMinRadius);

    if(FieldBits::NoField != (MaxRadiusFieldMask & whichField))
        _sfMaxRadius.syncWith(pFrom->_sfMaxRadius);

    if(FieldBits::NoField != (MinThetaFieldMask & whichField))
        _sfMinTheta.syncWith(pFrom->_sfMinTheta);

    if(FieldBits::NoField != (MaxThetaFieldMask & whichField))
        _sfMaxTheta.syncWith(pFrom->_sfMaxTheta);

    if(FieldBits::NoField != (SurfaceOrEdgeFieldMask & whichField))
        _sfSurfaceOrEdge.syncWith(pFrom->_sfSurfaceOrEdge);
}
#endif


inline
const Char8 *DiscDistribution2DBase::getClassname(void)
{
    return "DiscDistribution2D";
}


OSG_GEN_CONTAINERPTR(DiscDistribution2D);

OSG_END_NAMESPACE
