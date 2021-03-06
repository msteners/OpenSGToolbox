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
 **     class RoundedCornerLineBorder!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &RoundedCornerLineBorderBase::getClassType(void)
{
    return _type;
}

//! access the numerical type of the class
inline
OSG::UInt32 RoundedCornerLineBorderBase::getClassTypeId(void)
{
    return _type.getId();
}

inline
OSG::UInt16 RoundedCornerLineBorderBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/

//! Get the value of the RoundedCornerLineBorder::_sfWidth field.

inline
Real32 &RoundedCornerLineBorderBase::editWidth(void)
{
    editSField(WidthFieldMask);

    return _sfWidth.getValue();
}

//! Get the value of the RoundedCornerLineBorder::_sfWidth field.
inline
      Real32  RoundedCornerLineBorderBase::getWidth(void) const
{
    return _sfWidth.getValue();
}

//! Set the value of the RoundedCornerLineBorder::_sfWidth field.
inline
void RoundedCornerLineBorderBase::setWidth(const Real32 value)
{
    editSField(WidthFieldMask);

    _sfWidth.setValue(value);
}
//! Get the value of the RoundedCornerLineBorder::_sfColor field.

inline
Color4f &RoundedCornerLineBorderBase::editColor(void)
{
    editSField(ColorFieldMask);

    return _sfColor.getValue();
}

//! Get the value of the RoundedCornerLineBorder::_sfColor field.
inline
const Color4f &RoundedCornerLineBorderBase::getColor(void) const
{
    return _sfColor.getValue();
}

//! Set the value of the RoundedCornerLineBorder::_sfColor field.
inline
void RoundedCornerLineBorderBase::setColor(const Color4f &value)
{
    editSField(ColorFieldMask);

    _sfColor.setValue(value);
}
//! Get the value of the RoundedCornerLineBorder::_sfCornerRadius field.

inline
Real32 &RoundedCornerLineBorderBase::editCornerRadius(void)
{
    editSField(CornerRadiusFieldMask);

    return _sfCornerRadius.getValue();
}

//! Get the value of the RoundedCornerLineBorder::_sfCornerRadius field.
inline
      Real32  RoundedCornerLineBorderBase::getCornerRadius(void) const
{
    return _sfCornerRadius.getValue();
}

//! Set the value of the RoundedCornerLineBorder::_sfCornerRadius field.
inline
void RoundedCornerLineBorderBase::setCornerRadius(const Real32 value)
{
    editSField(CornerRadiusFieldMask);

    _sfCornerRadius.setValue(value);
}


#ifdef OSG_MT_CPTR_ASPECT
inline
void RoundedCornerLineBorderBase::execSync (      RoundedCornerLineBorderBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Inherited::execSync(pFrom, whichField, oOffsets, syncMode, uiSyncInfo);

    if(FieldBits::NoField != (WidthFieldMask & whichField))
        _sfWidth.syncWith(pFrom->_sfWidth);

    if(FieldBits::NoField != (ColorFieldMask & whichField))
        _sfColor.syncWith(pFrom->_sfColor);

    if(FieldBits::NoField != (CornerRadiusFieldMask & whichField))
        _sfCornerRadius.syncWith(pFrom->_sfCornerRadius);
}
#endif


inline
const Char8 *RoundedCornerLineBorderBase::getClassname(void)
{
    return "RoundedCornerLineBorder";
}
OSG_GEN_CONTAINERPTR(RoundedCornerLineBorder);

OSG_END_NAMESPACE

