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
 **     class ArcUIDrawObject!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &ArcUIDrawObjectBase::getClassType(void)
{
    return _type;
}

//! access the numerical type of the class
inline
OSG::UInt32 ArcUIDrawObjectBase::getClassTypeId(void)
{
    return _type.getId();
}

inline
OSG::UInt16 ArcUIDrawObjectBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/

//! Get the value of the ArcUIDrawObject::_sfCenter field.

inline
Pnt2f &ArcUIDrawObjectBase::editCenter(void)
{
    editSField(CenterFieldMask);

    return _sfCenter.getValue();
}

//! Get the value of the ArcUIDrawObject::_sfCenter field.
inline
const Pnt2f &ArcUIDrawObjectBase::getCenter(void) const
{
    return _sfCenter.getValue();
}

//! Set the value of the ArcUIDrawObject::_sfCenter field.
inline
void ArcUIDrawObjectBase::setCenter(const Pnt2f &value)
{
    editSField(CenterFieldMask);

    _sfCenter.setValue(value);
}
//! Get the value of the ArcUIDrawObject::_sfWidth field.

inline
Real32 &ArcUIDrawObjectBase::editWidth(void)
{
    editSField(WidthFieldMask);

    return _sfWidth.getValue();
}

//! Get the value of the ArcUIDrawObject::_sfWidth field.
inline
      Real32  ArcUIDrawObjectBase::getWidth(void) const
{
    return _sfWidth.getValue();
}

//! Set the value of the ArcUIDrawObject::_sfWidth field.
inline
void ArcUIDrawObjectBase::setWidth(const Real32 value)
{
    editSField(WidthFieldMask);

    _sfWidth.setValue(value);
}
//! Get the value of the ArcUIDrawObject::_sfHeight field.

inline
Real32 &ArcUIDrawObjectBase::editHeight(void)
{
    editSField(HeightFieldMask);

    return _sfHeight.getValue();
}

//! Get the value of the ArcUIDrawObject::_sfHeight field.
inline
      Real32  ArcUIDrawObjectBase::getHeight(void) const
{
    return _sfHeight.getValue();
}

//! Set the value of the ArcUIDrawObject::_sfHeight field.
inline
void ArcUIDrawObjectBase::setHeight(const Real32 value)
{
    editSField(HeightFieldMask);

    _sfHeight.setValue(value);
}
//! Get the value of the ArcUIDrawObject::_sfStartAngleRad field.

inline
Real32 &ArcUIDrawObjectBase::editStartAngleRad(void)
{
    editSField(StartAngleRadFieldMask);

    return _sfStartAngleRad.getValue();
}

//! Get the value of the ArcUIDrawObject::_sfStartAngleRad field.
inline
      Real32  ArcUIDrawObjectBase::getStartAngleRad(void) const
{
    return _sfStartAngleRad.getValue();
}

//! Set the value of the ArcUIDrawObject::_sfStartAngleRad field.
inline
void ArcUIDrawObjectBase::setStartAngleRad(const Real32 value)
{
    editSField(StartAngleRadFieldMask);

    _sfStartAngleRad.setValue(value);
}
//! Get the value of the ArcUIDrawObject::_sfEndAngleRad field.

inline
Real32 &ArcUIDrawObjectBase::editEndAngleRad(void)
{
    editSField(EndAngleRadFieldMask);

    return _sfEndAngleRad.getValue();
}

//! Get the value of the ArcUIDrawObject::_sfEndAngleRad field.
inline
      Real32  ArcUIDrawObjectBase::getEndAngleRad(void) const
{
    return _sfEndAngleRad.getValue();
}

//! Set the value of the ArcUIDrawObject::_sfEndAngleRad field.
inline
void ArcUIDrawObjectBase::setEndAngleRad(const Real32 value)
{
    editSField(EndAngleRadFieldMask);

    _sfEndAngleRad.setValue(value);
}
//! Get the value of the ArcUIDrawObject::_sfSubDivisions field.

inline
UInt16 &ArcUIDrawObjectBase::editSubDivisions(void)
{
    editSField(SubDivisionsFieldMask);

    return _sfSubDivisions.getValue();
}

//! Get the value of the ArcUIDrawObject::_sfSubDivisions field.
inline
      UInt16  ArcUIDrawObjectBase::getSubDivisions(void) const
{
    return _sfSubDivisions.getValue();
}

//! Set the value of the ArcUIDrawObject::_sfSubDivisions field.
inline
void ArcUIDrawObjectBase::setSubDivisions(const UInt16 value)
{
    editSField(SubDivisionsFieldMask);

    _sfSubDivisions.setValue(value);
}
//! Get the value of the ArcUIDrawObject::_sfColor field.

inline
Color4f &ArcUIDrawObjectBase::editColor(void)
{
    editSField(ColorFieldMask);

    return _sfColor.getValue();
}

//! Get the value of the ArcUIDrawObject::_sfColor field.
inline
const Color4f &ArcUIDrawObjectBase::getColor(void) const
{
    return _sfColor.getValue();
}

//! Set the value of the ArcUIDrawObject::_sfColor field.
inline
void ArcUIDrawObjectBase::setColor(const Color4f &value)
{
    editSField(ColorFieldMask);

    _sfColor.setValue(value);
}
//! Get the value of the ArcUIDrawObject::_sfLineWidth field.

inline
Real32 &ArcUIDrawObjectBase::editLineWidth(void)
{
    editSField(LineWidthFieldMask);

    return _sfLineWidth.getValue();
}

//! Get the value of the ArcUIDrawObject::_sfLineWidth field.
inline
      Real32  ArcUIDrawObjectBase::getLineWidth(void) const
{
    return _sfLineWidth.getValue();
}

//! Set the value of the ArcUIDrawObject::_sfLineWidth field.
inline
void ArcUIDrawObjectBase::setLineWidth(const Real32 value)
{
    editSField(LineWidthFieldMask);

    _sfLineWidth.setValue(value);
}
//! Get the value of the ArcUIDrawObject::_sfOpacity field.

inline
Real32 &ArcUIDrawObjectBase::editOpacity(void)
{
    editSField(OpacityFieldMask);

    return _sfOpacity.getValue();
}

//! Get the value of the ArcUIDrawObject::_sfOpacity field.
inline
      Real32  ArcUIDrawObjectBase::getOpacity(void) const
{
    return _sfOpacity.getValue();
}

//! Set the value of the ArcUIDrawObject::_sfOpacity field.
inline
void ArcUIDrawObjectBase::setOpacity(const Real32 value)
{
    editSField(OpacityFieldMask);

    _sfOpacity.setValue(value);
}


#ifdef OSG_MT_CPTR_ASPECT
inline
void ArcUIDrawObjectBase::execSync (      ArcUIDrawObjectBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Inherited::execSync(pFrom, whichField, oOffsets, syncMode, uiSyncInfo);

    if(FieldBits::NoField != (CenterFieldMask & whichField))
        _sfCenter.syncWith(pFrom->_sfCenter);

    if(FieldBits::NoField != (WidthFieldMask & whichField))
        _sfWidth.syncWith(pFrom->_sfWidth);

    if(FieldBits::NoField != (HeightFieldMask & whichField))
        _sfHeight.syncWith(pFrom->_sfHeight);

    if(FieldBits::NoField != (StartAngleRadFieldMask & whichField))
        _sfStartAngleRad.syncWith(pFrom->_sfStartAngleRad);

    if(FieldBits::NoField != (EndAngleRadFieldMask & whichField))
        _sfEndAngleRad.syncWith(pFrom->_sfEndAngleRad);

    if(FieldBits::NoField != (SubDivisionsFieldMask & whichField))
        _sfSubDivisions.syncWith(pFrom->_sfSubDivisions);

    if(FieldBits::NoField != (ColorFieldMask & whichField))
        _sfColor.syncWith(pFrom->_sfColor);

    if(FieldBits::NoField != (LineWidthFieldMask & whichField))
        _sfLineWidth.syncWith(pFrom->_sfLineWidth);

    if(FieldBits::NoField != (OpacityFieldMask & whichField))
        _sfOpacity.syncWith(pFrom->_sfOpacity);
}
#endif


inline
const Char8 *ArcUIDrawObjectBase::getClassname(void)
{
    return "ArcUIDrawObject";
}
OSG_GEN_CONTAINERPTR(ArcUIDrawObject);

OSG_END_NAMESPACE

