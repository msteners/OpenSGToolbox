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
 **     class ProgressBar!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &ProgressBarBase::getClassType(void)
{
    return _type;
}

//! access the numerical type of the class
inline
OSG::UInt32 ProgressBarBase::getClassTypeId(void)
{
    return _type.getId();
}

inline
OSG::UInt16 ProgressBarBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/

//! Get the value of the ProgressBar::_sfIndeterminate field.

inline
bool &ProgressBarBase::editIndeterminate(void)
{
    editSField(IndeterminateFieldMask);

    return _sfIndeterminate.getValue();
}

//! Get the value of the ProgressBar::_sfIndeterminate field.
inline
      bool  ProgressBarBase::getIndeterminate(void) const
{
    return _sfIndeterminate.getValue();
}

//! Set the value of the ProgressBar::_sfIndeterminate field.
inline
void ProgressBarBase::setIndeterminate(const bool value)
{
    editSField(IndeterminateFieldMask);

    _sfIndeterminate.setValue(value);
}
//! Get the value of the ProgressBar::_sfIndeterminateBarMoveRate field.

inline
Real32 &ProgressBarBase::editIndeterminateBarMoveRate(void)
{
    editSField(IndeterminateBarMoveRateFieldMask);

    return _sfIndeterminateBarMoveRate.getValue();
}

//! Get the value of the ProgressBar::_sfIndeterminateBarMoveRate field.
inline
      Real32  ProgressBarBase::getIndeterminateBarMoveRate(void) const
{
    return _sfIndeterminateBarMoveRate.getValue();
}

//! Set the value of the ProgressBar::_sfIndeterminateBarMoveRate field.
inline
void ProgressBarBase::setIndeterminateBarMoveRate(const Real32 value)
{
    editSField(IndeterminateBarMoveRateFieldMask);

    _sfIndeterminateBarMoveRate.setValue(value);
}
//! Get the value of the ProgressBar::_sfIndeterminateBarSize field.

inline
Real32 &ProgressBarBase::editIndeterminateBarSize(void)
{
    editSField(IndeterminateBarSizeFieldMask);

    return _sfIndeterminateBarSize.getValue();
}

//! Get the value of the ProgressBar::_sfIndeterminateBarSize field.
inline
      Real32  ProgressBarBase::getIndeterminateBarSize(void) const
{
    return _sfIndeterminateBarSize.getValue();
}

//! Set the value of the ProgressBar::_sfIndeterminateBarSize field.
inline
void ProgressBarBase::setIndeterminateBarSize(const Real32 value)
{
    editSField(IndeterminateBarSizeFieldMask);

    _sfIndeterminateBarSize.setValue(value);
}
//! Get the value of the ProgressBar::_sfEnableProgressString field.

inline
bool &ProgressBarBase::editEnableProgressString(void)
{
    editSField(EnableProgressStringFieldMask);

    return _sfEnableProgressString.getValue();
}

//! Get the value of the ProgressBar::_sfEnableProgressString field.
inline
      bool  ProgressBarBase::getEnableProgressString(void) const
{
    return _sfEnableProgressString.getValue();
}

//! Set the value of the ProgressBar::_sfEnableProgressString field.
inline
void ProgressBarBase::setEnableProgressString(const bool value)
{
    editSField(EnableProgressStringFieldMask);

    _sfEnableProgressString.setValue(value);
}
//! Get the value of the ProgressBar::_sfProgressString field.

inline
std::string &ProgressBarBase::editProgressString(void)
{
    editSField(ProgressStringFieldMask);

    return _sfProgressString.getValue();
}

//! Get the value of the ProgressBar::_sfProgressString field.
inline
const std::string &ProgressBarBase::getProgressString(void) const
{
    return _sfProgressString.getValue();
}

//! Set the value of the ProgressBar::_sfProgressString field.
inline
void ProgressBarBase::setProgressString(const std::string &value)
{
    editSField(ProgressStringFieldMask);

    _sfProgressString.setValue(value);
}
//! Get the value of the ProgressBar::_sfAlignment field.

inline
Vec2f &ProgressBarBase::editAlignment(void)
{
    editSField(AlignmentFieldMask);

    return _sfAlignment.getValue();
}

//! Get the value of the ProgressBar::_sfAlignment field.
inline
const Vec2f &ProgressBarBase::getAlignment(void) const
{
    return _sfAlignment.getValue();
}

//! Set the value of the ProgressBar::_sfAlignment field.
inline
void ProgressBarBase::setAlignment(const Vec2f &value)
{
    editSField(AlignmentFieldMask);

    _sfAlignment.setValue(value);
}

//! Get the value of the ProgressBar::_sfFont field.
inline
UIFont * ProgressBarBase::getFont(void) const
{
    return _sfFont.getValue();
}

//! Set the value of the ProgressBar::_sfFont field.
inline
void ProgressBarBase::setFont(UIFont * const value)
{
    editSField(FontFieldMask);

    _sfFont.setValue(value);
}
//! Get the value of the ProgressBar::_sfFocusedTextColor field.

inline
Color4f &ProgressBarBase::editFocusedTextColor(void)
{
    editSField(FocusedTextColorFieldMask);

    return _sfFocusedTextColor.getValue();
}

//! Get the value of the ProgressBar::_sfFocusedTextColor field.
inline
const Color4f &ProgressBarBase::getFocusedTextColor(void) const
{
    return _sfFocusedTextColor.getValue();
}

//! Set the value of the ProgressBar::_sfFocusedTextColor field.
inline
void ProgressBarBase::setFocusedTextColor(const Color4f &value)
{
    editSField(FocusedTextColorFieldMask);

    _sfFocusedTextColor.setValue(value);
}
//! Get the value of the ProgressBar::_sfRolloverTextColor field.

inline
Color4f &ProgressBarBase::editRolloverTextColor(void)
{
    editSField(RolloverTextColorFieldMask);

    return _sfRolloverTextColor.getValue();
}

//! Get the value of the ProgressBar::_sfRolloverTextColor field.
inline
const Color4f &ProgressBarBase::getRolloverTextColor(void) const
{
    return _sfRolloverTextColor.getValue();
}

//! Set the value of the ProgressBar::_sfRolloverTextColor field.
inline
void ProgressBarBase::setRolloverTextColor(const Color4f &value)
{
    editSField(RolloverTextColorFieldMask);

    _sfRolloverTextColor.setValue(value);
}
//! Get the value of the ProgressBar::_sfDisabledTextColor field.

inline
Color4f &ProgressBarBase::editDisabledTextColor(void)
{
    editSField(DisabledTextColorFieldMask);

    return _sfDisabledTextColor.getValue();
}

//! Get the value of the ProgressBar::_sfDisabledTextColor field.
inline
const Color4f &ProgressBarBase::getDisabledTextColor(void) const
{
    return _sfDisabledTextColor.getValue();
}

//! Set the value of the ProgressBar::_sfDisabledTextColor field.
inline
void ProgressBarBase::setDisabledTextColor(const Color4f &value)
{
    editSField(DisabledTextColorFieldMask);

    _sfDisabledTextColor.setValue(value);
}
//! Get the value of the ProgressBar::_sfTextColor field.

inline
Color4f &ProgressBarBase::editTextColor(void)
{
    editSField(TextColorFieldMask);

    return _sfTextColor.getValue();
}

//! Get the value of the ProgressBar::_sfTextColor field.
inline
const Color4f &ProgressBarBase::getTextColor(void) const
{
    return _sfTextColor.getValue();
}

//! Set the value of the ProgressBar::_sfTextColor field.
inline
void ProgressBarBase::setTextColor(const Color4f &value)
{
    editSField(TextColorFieldMask);

    _sfTextColor.setValue(value);
}
//! Get the value of the ProgressBar::_sfOrientation field.

inline
UInt32 &ProgressBarBase::editOrientation(void)
{
    editSField(OrientationFieldMask);

    return _sfOrientation.getValue();
}

//! Get the value of the ProgressBar::_sfOrientation field.
inline
      UInt32  ProgressBarBase::getOrientation(void) const
{
    return _sfOrientation.getValue();
}

//! Set the value of the ProgressBar::_sfOrientation field.
inline
void ProgressBarBase::setOrientation(const UInt32 value)
{
    editSField(OrientationFieldMask);

    _sfOrientation.setValue(value);
}

//! Get the value of the ProgressBar::_sfDrawObject field.
inline
UIDrawObjectCanvas * ProgressBarBase::getDrawObject(void) const
{
    return _sfDrawObject.getValue();
}

//! Set the value of the ProgressBar::_sfDrawObject field.
inline
void ProgressBarBase::setDrawObject(UIDrawObjectCanvas * const value)
{
    editSField(DrawObjectFieldMask);

    _sfDrawObject.setValue(value);
}

//! Get the value of the ProgressBar::_sfFocusedDrawObject field.
inline
UIDrawObjectCanvas * ProgressBarBase::getFocusedDrawObject(void) const
{
    return _sfFocusedDrawObject.getValue();
}

//! Set the value of the ProgressBar::_sfFocusedDrawObject field.
inline
void ProgressBarBase::setFocusedDrawObject(UIDrawObjectCanvas * const value)
{
    editSField(FocusedDrawObjectFieldMask);

    _sfFocusedDrawObject.setValue(value);
}

//! Get the value of the ProgressBar::_sfRolloverDrawObject field.
inline
UIDrawObjectCanvas * ProgressBarBase::getRolloverDrawObject(void) const
{
    return _sfRolloverDrawObject.getValue();
}

//! Set the value of the ProgressBar::_sfRolloverDrawObject field.
inline
void ProgressBarBase::setRolloverDrawObject(UIDrawObjectCanvas * const value)
{
    editSField(RolloverDrawObjectFieldMask);

    _sfRolloverDrawObject.setValue(value);
}

//! Get the value of the ProgressBar::_sfDisabledDrawObject field.
inline
UIDrawObjectCanvas * ProgressBarBase::getDisabledDrawObject(void) const
{
    return _sfDisabledDrawObject.getValue();
}

//! Set the value of the ProgressBar::_sfDisabledDrawObject field.
inline
void ProgressBarBase::setDisabledDrawObject(UIDrawObjectCanvas * const value)
{
    editSField(DisabledDrawObjectFieldMask);

    _sfDisabledDrawObject.setValue(value);
}

//! Get the value of the ProgressBar::_sfRangeModel field.
inline
BoundedRangeModel * ProgressBarBase::getRangeModel(void) const
{
    return _sfRangeModel.getValue();
}

//! Set the value of the ProgressBar::_sfRangeModel field.
inline
void ProgressBarBase::setRangeModel(BoundedRangeModel * const value)
{
    editSField(RangeModelFieldMask);

    _sfRangeModel.setValue(value);
}


#ifdef OSG_MT_CPTR_ASPECT
inline
void ProgressBarBase::execSync (      ProgressBarBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Inherited::execSync(pFrom, whichField, oOffsets, syncMode, uiSyncInfo);

    if(FieldBits::NoField != (IndeterminateFieldMask & whichField))
        _sfIndeterminate.syncWith(pFrom->_sfIndeterminate);

    if(FieldBits::NoField != (IndeterminateBarMoveRateFieldMask & whichField))
        _sfIndeterminateBarMoveRate.syncWith(pFrom->_sfIndeterminateBarMoveRate);

    if(FieldBits::NoField != (IndeterminateBarSizeFieldMask & whichField))
        _sfIndeterminateBarSize.syncWith(pFrom->_sfIndeterminateBarSize);

    if(FieldBits::NoField != (EnableProgressStringFieldMask & whichField))
        _sfEnableProgressString.syncWith(pFrom->_sfEnableProgressString);

    if(FieldBits::NoField != (ProgressStringFieldMask & whichField))
        _sfProgressString.syncWith(pFrom->_sfProgressString);

    if(FieldBits::NoField != (AlignmentFieldMask & whichField))
        _sfAlignment.syncWith(pFrom->_sfAlignment);

    if(FieldBits::NoField != (FontFieldMask & whichField))
        _sfFont.syncWith(pFrom->_sfFont);

    if(FieldBits::NoField != (FocusedTextColorFieldMask & whichField))
        _sfFocusedTextColor.syncWith(pFrom->_sfFocusedTextColor);

    if(FieldBits::NoField != (RolloverTextColorFieldMask & whichField))
        _sfRolloverTextColor.syncWith(pFrom->_sfRolloverTextColor);

    if(FieldBits::NoField != (DisabledTextColorFieldMask & whichField))
        _sfDisabledTextColor.syncWith(pFrom->_sfDisabledTextColor);

    if(FieldBits::NoField != (TextColorFieldMask & whichField))
        _sfTextColor.syncWith(pFrom->_sfTextColor);

    if(FieldBits::NoField != (OrientationFieldMask & whichField))
        _sfOrientation.syncWith(pFrom->_sfOrientation);

    if(FieldBits::NoField != (DrawObjectFieldMask & whichField))
        _sfDrawObject.syncWith(pFrom->_sfDrawObject);

    if(FieldBits::NoField != (FocusedDrawObjectFieldMask & whichField))
        _sfFocusedDrawObject.syncWith(pFrom->_sfFocusedDrawObject);

    if(FieldBits::NoField != (RolloverDrawObjectFieldMask & whichField))
        _sfRolloverDrawObject.syncWith(pFrom->_sfRolloverDrawObject);

    if(FieldBits::NoField != (DisabledDrawObjectFieldMask & whichField))
        _sfDisabledDrawObject.syncWith(pFrom->_sfDisabledDrawObject);

    if(FieldBits::NoField != (RangeModelFieldMask & whichField))
        _sfRangeModel.syncWith(pFrom->_sfRangeModel);
}
#endif


inline
const Char8 *ProgressBarBase::getClassname(void)
{
    return "ProgressBar";
}
OSG_GEN_CONTAINERPTR(ProgressBar);

OSG_END_NAMESPACE

