/*---------------------------------------------------------------------------*\
 *                     OpenSG ToolBox UserInterface                          *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *   Authors: David Kabala, Alden Peterson, Lee Zaniewski, Jonathan Flory    *
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
 **     class Titlebar!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <OpenSG/OSGConfig.h>

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &TitlebarBase::getClassType(void)
{
    return _type; 
} 

//! access the numerical type of the class
inline
OSG::UInt32 TitlebarBase::getClassTypeId(void) 
{
    return _type.getId(); 
} 

//! create a new instance of the class
inline
TitlebarPtr TitlebarBase::create(void) 
{
    TitlebarPtr fc; 

    if(getClassType().getPrototype() != OSG::NullFC) 
    {
        fc = TitlebarPtr::dcast(
            getClassType().getPrototype()-> shallowCopy()); 
    }
    
    return fc; 
}

//! create an empty new instance of the class, do not copy the prototype
inline
TitlebarPtr TitlebarBase::createEmpty(void) 
{ 
    TitlebarPtr returnValue; 
    
    newPtr(returnValue); 

    return returnValue; 
}


/*------------------------------ get -----------------------------------*/

//! Get the Titlebar::_sfIconifyButton field.
inline
SFButtonPtr *TitlebarBase::getSFIconifyButton(void)
{
    return &_sfIconifyButton;
}

//! Get the Titlebar::_sfMaximizeButton field.
inline
SFButtonPtr *TitlebarBase::getSFMaximizeButton(void)
{
    return &_sfMaximizeButton;
}

//! Get the Titlebar::_sfCloseButton field.
inline
SFButtonPtr *TitlebarBase::getSFCloseButton(void)
{
    return &_sfCloseButton;
}

//! Get the Titlebar::_sfTitleLabel field.
inline
SFLabelPtr *TitlebarBase::getSFTitleLabel(void)
{
    return &_sfTitleLabel;
}

//! Get the Titlebar::_sfFrameIcon field.
inline
SFUIDrawObjectCanvasPtr *TitlebarBase::getSFFrameIcon(void)
{
    return &_sfFrameIcon;
}

//! Get the Titlebar::_sfDrawClose field.
inline
SFBool *TitlebarBase::getSFDrawClose(void)
{
    return &_sfDrawClose;
}

//! Get the Titlebar::_sfDrawMaximize field.
inline
SFBool *TitlebarBase::getSFDrawMaximize(void)
{
    return &_sfDrawMaximize;
}

//! Get the Titlebar::_sfDrawIconify field.
inline
SFBool *TitlebarBase::getSFDrawIconify(void)
{
    return &_sfDrawIconify;
}


//! Get the value of the Titlebar::_sfIconifyButton field.
inline
ButtonPtr &TitlebarBase::getIconifyButton(void)
{
    return _sfIconifyButton.getValue();
}

//! Get the value of the Titlebar::_sfIconifyButton field.
inline
const ButtonPtr &TitlebarBase::getIconifyButton(void) const
{
    return _sfIconifyButton.getValue();
}

//! Set the value of the Titlebar::_sfIconifyButton field.
inline
void TitlebarBase::setIconifyButton(const ButtonPtr &value)
{
    _sfIconifyButton.setValue(value);
}

//! Get the value of the Titlebar::_sfMaximizeButton field.
inline
ButtonPtr &TitlebarBase::getMaximizeButton(void)
{
    return _sfMaximizeButton.getValue();
}

//! Get the value of the Titlebar::_sfMaximizeButton field.
inline
const ButtonPtr &TitlebarBase::getMaximizeButton(void) const
{
    return _sfMaximizeButton.getValue();
}

//! Set the value of the Titlebar::_sfMaximizeButton field.
inline
void TitlebarBase::setMaximizeButton(const ButtonPtr &value)
{
    _sfMaximizeButton.setValue(value);
}

//! Get the value of the Titlebar::_sfCloseButton field.
inline
ButtonPtr &TitlebarBase::getCloseButton(void)
{
    return _sfCloseButton.getValue();
}

//! Get the value of the Titlebar::_sfCloseButton field.
inline
const ButtonPtr &TitlebarBase::getCloseButton(void) const
{
    return _sfCloseButton.getValue();
}

//! Set the value of the Titlebar::_sfCloseButton field.
inline
void TitlebarBase::setCloseButton(const ButtonPtr &value)
{
    _sfCloseButton.setValue(value);
}

//! Get the value of the Titlebar::_sfTitleLabel field.
inline
LabelPtr &TitlebarBase::getTitleLabel(void)
{
    return _sfTitleLabel.getValue();
}

//! Get the value of the Titlebar::_sfTitleLabel field.
inline
const LabelPtr &TitlebarBase::getTitleLabel(void) const
{
    return _sfTitleLabel.getValue();
}

//! Set the value of the Titlebar::_sfTitleLabel field.
inline
void TitlebarBase::setTitleLabel(const LabelPtr &value)
{
    _sfTitleLabel.setValue(value);
}

//! Get the value of the Titlebar::_sfFrameIcon field.
inline
UIDrawObjectCanvasPtr &TitlebarBase::getFrameIcon(void)
{
    return _sfFrameIcon.getValue();
}

//! Get the value of the Titlebar::_sfFrameIcon field.
inline
const UIDrawObjectCanvasPtr &TitlebarBase::getFrameIcon(void) const
{
    return _sfFrameIcon.getValue();
}

//! Set the value of the Titlebar::_sfFrameIcon field.
inline
void TitlebarBase::setFrameIcon(const UIDrawObjectCanvasPtr &value)
{
    _sfFrameIcon.setValue(value);
}

//! Get the value of the Titlebar::_sfDrawClose field.
inline
bool &TitlebarBase::getDrawClose(void)
{
    return _sfDrawClose.getValue();
}

//! Get the value of the Titlebar::_sfDrawClose field.
inline
const bool &TitlebarBase::getDrawClose(void) const
{
    return _sfDrawClose.getValue();
}

//! Set the value of the Titlebar::_sfDrawClose field.
inline
void TitlebarBase::setDrawClose(const bool &value)
{
    _sfDrawClose.setValue(value);
}

//! Get the value of the Titlebar::_sfDrawMaximize field.
inline
bool &TitlebarBase::getDrawMaximize(void)
{
    return _sfDrawMaximize.getValue();
}

//! Get the value of the Titlebar::_sfDrawMaximize field.
inline
const bool &TitlebarBase::getDrawMaximize(void) const
{
    return _sfDrawMaximize.getValue();
}

//! Set the value of the Titlebar::_sfDrawMaximize field.
inline
void TitlebarBase::setDrawMaximize(const bool &value)
{
    _sfDrawMaximize.setValue(value);
}

//! Get the value of the Titlebar::_sfDrawIconify field.
inline
bool &TitlebarBase::getDrawIconify(void)
{
    return _sfDrawIconify.getValue();
}

//! Get the value of the Titlebar::_sfDrawIconify field.
inline
const bool &TitlebarBase::getDrawIconify(void) const
{
    return _sfDrawIconify.getValue();
}

//! Set the value of the Titlebar::_sfDrawIconify field.
inline
void TitlebarBase::setDrawIconify(const bool &value)
{
    _sfDrawIconify.setValue(value);
}


OSG_END_NAMESPACE

#define OSGTITLEBARBASE_INLINE_CVSID "@(#)$Id: FCBaseTemplate_inl.h,v 1.20 2002/12/04 14:22:22 dirk Exp $"

