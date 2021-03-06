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
 **     class DefaultListComponentGenerator!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &DefaultListComponentGeneratorBase::getClassType(void)
{
    return _type;
}

//! access the numerical type of the class
inline
OSG::UInt32 DefaultListComponentGeneratorBase::getClassTypeId(void)
{
    return _type.getId();
}

inline
OSG::UInt16 DefaultListComponentGeneratorBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/


//! Get the value of the DefaultListComponentGenerator::_sfDrawObjectPrototype field.
inline
Component * DefaultListComponentGeneratorBase::getDrawObjectPrototype(void) const
{
    return _sfDrawObjectPrototype.getValue();
}

//! Set the value of the DefaultListComponentGenerator::_sfDrawObjectPrototype field.
inline
void DefaultListComponentGeneratorBase::setDrawObjectPrototype(Component * const value)
{
    editSField(DrawObjectPrototypeFieldMask);

    _sfDrawObjectPrototype.setValue(value);
}

//! Get the value of the DefaultListComponentGenerator::_sfSelectedBackground field.
inline
Layer * DefaultListComponentGeneratorBase::getSelectedBackground(void) const
{
    return _sfSelectedBackground.getValue();
}

//! Set the value of the DefaultListComponentGenerator::_sfSelectedBackground field.
inline
void DefaultListComponentGeneratorBase::setSelectedBackground(Layer * const value)
{
    editSField(SelectedBackgroundFieldMask);

    _sfSelectedBackground.setValue(value);
}

//! Get the value of the DefaultListComponentGenerator::_sfFocusedBackground field.
inline
Layer * DefaultListComponentGeneratorBase::getFocusedBackground(void) const
{
    return _sfFocusedBackground.getValue();
}

//! Set the value of the DefaultListComponentGenerator::_sfFocusedBackground field.
inline
void DefaultListComponentGeneratorBase::setFocusedBackground(Layer * const value)
{
    editSField(FocusedBackgroundFieldMask);

    _sfFocusedBackground.setValue(value);
}

//! Get the value of the DefaultListComponentGenerator::_sfSelectedForeground field.
inline
Layer * DefaultListComponentGeneratorBase::getSelectedForeground(void) const
{
    return _sfSelectedForeground.getValue();
}

//! Set the value of the DefaultListComponentGenerator::_sfSelectedForeground field.
inline
void DefaultListComponentGeneratorBase::setSelectedForeground(Layer * const value)
{
    editSField(SelectedForegroundFieldMask);

    _sfSelectedForeground.setValue(value);
}

//! Get the value of the DefaultListComponentGenerator::_sfFocusedForeground field.
inline
Layer * DefaultListComponentGeneratorBase::getFocusedForeground(void) const
{
    return _sfFocusedForeground.getValue();
}

//! Set the value of the DefaultListComponentGenerator::_sfFocusedForeground field.
inline
void DefaultListComponentGeneratorBase::setFocusedForeground(Layer * const value)
{
    editSField(FocusedForegroundFieldMask);

    _sfFocusedForeground.setValue(value);
}

//! Get the value of the DefaultListComponentGenerator::_sfSelectedBorder field.
inline
Border * DefaultListComponentGeneratorBase::getSelectedBorder(void) const
{
    return _sfSelectedBorder.getValue();
}

//! Set the value of the DefaultListComponentGenerator::_sfSelectedBorder field.
inline
void DefaultListComponentGeneratorBase::setSelectedBorder(Border * const value)
{
    editSField(SelectedBorderFieldMask);

    _sfSelectedBorder.setValue(value);
}

//! Get the value of the DefaultListComponentGenerator::_sfFocusedBorder field.
inline
Border * DefaultListComponentGeneratorBase::getFocusedBorder(void) const
{
    return _sfFocusedBorder.getValue();
}

//! Set the value of the DefaultListComponentGenerator::_sfFocusedBorder field.
inline
void DefaultListComponentGeneratorBase::setFocusedBorder(Border * const value)
{
    editSField(FocusedBorderFieldMask);

    _sfFocusedBorder.setValue(value);
}
//! Get the value of the DefaultListComponentGenerator::_sfSelectedTextColor field.

inline
Color4f &DefaultListComponentGeneratorBase::editSelectedTextColor(void)
{
    editSField(SelectedTextColorFieldMask);

    return _sfSelectedTextColor.getValue();
}

//! Get the value of the DefaultListComponentGenerator::_sfSelectedTextColor field.
inline
const Color4f &DefaultListComponentGeneratorBase::getSelectedTextColor(void) const
{
    return _sfSelectedTextColor.getValue();
}

//! Set the value of the DefaultListComponentGenerator::_sfSelectedTextColor field.
inline
void DefaultListComponentGeneratorBase::setSelectedTextColor(const Color4f &value)
{
    editSField(SelectedTextColorFieldMask);

    _sfSelectedTextColor.setValue(value);
}
//! Get the value of the DefaultListComponentGenerator::_sfFocusedTextColor field.

inline
Color4f &DefaultListComponentGeneratorBase::editFocusedTextColor(void)
{
    editSField(FocusedTextColorFieldMask);

    return _sfFocusedTextColor.getValue();
}

//! Get the value of the DefaultListComponentGenerator::_sfFocusedTextColor field.
inline
const Color4f &DefaultListComponentGeneratorBase::getFocusedTextColor(void) const
{
    return _sfFocusedTextColor.getValue();
}

//! Set the value of the DefaultListComponentGenerator::_sfFocusedTextColor field.
inline
void DefaultListComponentGeneratorBase::setFocusedTextColor(const Color4f &value)
{
    editSField(FocusedTextColorFieldMask);

    _sfFocusedTextColor.setValue(value);
}
//! Get the value of the DefaultListComponentGenerator::_sfFocusedTextColorHasPriority field.

inline
bool &DefaultListComponentGeneratorBase::editFocusedTextColorHasPriority(void)
{
    editSField(FocusedTextColorHasPriorityFieldMask);

    return _sfFocusedTextColorHasPriority.getValue();
}

//! Get the value of the DefaultListComponentGenerator::_sfFocusedTextColorHasPriority field.
inline
      bool  DefaultListComponentGeneratorBase::getFocusedTextColorHasPriority(void) const
{
    return _sfFocusedTextColorHasPriority.getValue();
}

//! Set the value of the DefaultListComponentGenerator::_sfFocusedTextColorHasPriority field.
inline
void DefaultListComponentGeneratorBase::setFocusedTextColorHasPriority(const bool value)
{
    editSField(FocusedTextColorHasPriorityFieldMask);

    _sfFocusedTextColorHasPriority.setValue(value);
}
//! Get the value of the DefaultListComponentGenerator::_sfFocusedBorderHasPriority field.

inline
bool &DefaultListComponentGeneratorBase::editFocusedBorderHasPriority(void)
{
    editSField(FocusedBorderHasPriorityFieldMask);

    return _sfFocusedBorderHasPriority.getValue();
}

//! Get the value of the DefaultListComponentGenerator::_sfFocusedBorderHasPriority field.
inline
      bool  DefaultListComponentGeneratorBase::getFocusedBorderHasPriority(void) const
{
    return _sfFocusedBorderHasPriority.getValue();
}

//! Set the value of the DefaultListComponentGenerator::_sfFocusedBorderHasPriority field.
inline
void DefaultListComponentGeneratorBase::setFocusedBorderHasPriority(const bool value)
{
    editSField(FocusedBorderHasPriorityFieldMask);

    _sfFocusedBorderHasPriority.setValue(value);
}
//! Get the value of the DefaultListComponentGenerator::_sfFocusedBackgroundHasPriority field.

inline
bool &DefaultListComponentGeneratorBase::editFocusedBackgroundHasPriority(void)
{
    editSField(FocusedBackgroundHasPriorityFieldMask);

    return _sfFocusedBackgroundHasPriority.getValue();
}

//! Get the value of the DefaultListComponentGenerator::_sfFocusedBackgroundHasPriority field.
inline
      bool  DefaultListComponentGeneratorBase::getFocusedBackgroundHasPriority(void) const
{
    return _sfFocusedBackgroundHasPriority.getValue();
}

//! Set the value of the DefaultListComponentGenerator::_sfFocusedBackgroundHasPriority field.
inline
void DefaultListComponentGeneratorBase::setFocusedBackgroundHasPriority(const bool value)
{
    editSField(FocusedBackgroundHasPriorityFieldMask);

    _sfFocusedBackgroundHasPriority.setValue(value);
}


#ifdef OSG_MT_CPTR_ASPECT
inline
void DefaultListComponentGeneratorBase::execSync (      DefaultListComponentGeneratorBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Inherited::execSync(pFrom, whichField, oOffsets, syncMode, uiSyncInfo);

    if(FieldBits::NoField != (DrawObjectPrototypeFieldMask & whichField))
        _sfDrawObjectPrototype.syncWith(pFrom->_sfDrawObjectPrototype);

    if(FieldBits::NoField != (SelectedBackgroundFieldMask & whichField))
        _sfSelectedBackground.syncWith(pFrom->_sfSelectedBackground);

    if(FieldBits::NoField != (FocusedBackgroundFieldMask & whichField))
        _sfFocusedBackground.syncWith(pFrom->_sfFocusedBackground);

    if(FieldBits::NoField != (SelectedForegroundFieldMask & whichField))
        _sfSelectedForeground.syncWith(pFrom->_sfSelectedForeground);

    if(FieldBits::NoField != (FocusedForegroundFieldMask & whichField))
        _sfFocusedForeground.syncWith(pFrom->_sfFocusedForeground);

    if(FieldBits::NoField != (SelectedBorderFieldMask & whichField))
        _sfSelectedBorder.syncWith(pFrom->_sfSelectedBorder);

    if(FieldBits::NoField != (FocusedBorderFieldMask & whichField))
        _sfFocusedBorder.syncWith(pFrom->_sfFocusedBorder);

    if(FieldBits::NoField != (SelectedTextColorFieldMask & whichField))
        _sfSelectedTextColor.syncWith(pFrom->_sfSelectedTextColor);

    if(FieldBits::NoField != (FocusedTextColorFieldMask & whichField))
        _sfFocusedTextColor.syncWith(pFrom->_sfFocusedTextColor);

    if(FieldBits::NoField != (FocusedTextColorHasPriorityFieldMask & whichField))
        _sfFocusedTextColorHasPriority.syncWith(pFrom->_sfFocusedTextColorHasPriority);

    if(FieldBits::NoField != (FocusedBorderHasPriorityFieldMask & whichField))
        _sfFocusedBorderHasPriority.syncWith(pFrom->_sfFocusedBorderHasPriority);

    if(FieldBits::NoField != (FocusedBackgroundHasPriorityFieldMask & whichField))
        _sfFocusedBackgroundHasPriority.syncWith(pFrom->_sfFocusedBackgroundHasPriority);
}
#endif


inline
const Char8 *DefaultListComponentGeneratorBase::getClassname(void)
{
    return "DefaultListComponentGenerator";
}
OSG_GEN_CONTAINERPTR(DefaultListComponentGenerator);

OSG_END_NAMESPACE

