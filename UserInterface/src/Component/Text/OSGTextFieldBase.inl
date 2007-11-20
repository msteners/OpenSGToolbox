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
 **     class TextField!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <OpenSG/OSGConfig.h>

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &TextFieldBase::getClassType(void)
{
    return _type; 
} 

//! access the numerical type of the class
inline
OSG::UInt32 TextFieldBase::getClassTypeId(void) 
{
    return _type.getId(); 
} 

//! create a new instance of the class
inline
TextFieldPtr TextFieldBase::create(void) 
{
    TextFieldPtr fc; 

    if(getClassType().getPrototype() != OSG::NullFC) 
    {
        fc = TextFieldPtr::dcast(
            getClassType().getPrototype()-> shallowCopy()); 
    }
    
    return fc; 
}

//! create an empty new instance of the class, do not copy the prototype
inline
TextFieldPtr TextFieldBase::createEmpty(void) 
{ 
    TextFieldPtr returnValue; 
    
    newPtr(returnValue); 

    return returnValue; 
}


/*------------------------------ get -----------------------------------*/

//! Get the TextField::_sfHorizontalAlignment field.
inline
SFReal32 *TextFieldBase::getSFHorizontalAlignment(void)
{
    return &_sfHorizontalAlignment;
}

//! Get the TextField::_sfVerticalAlignment field.
inline
SFReal32 *TextFieldBase::getSFVerticalAlignment(void)
{
    return &_sfVerticalAlignment;
}


//! Get the value of the TextField::_sfHorizontalAlignment field.
inline
Real32 &TextFieldBase::getHorizontalAlignment(void)
{
    return _sfHorizontalAlignment.getValue();
}

//! Get the value of the TextField::_sfHorizontalAlignment field.
inline
const Real32 &TextFieldBase::getHorizontalAlignment(void) const
{
    return _sfHorizontalAlignment.getValue();
}

//! Set the value of the TextField::_sfHorizontalAlignment field.
inline
void TextFieldBase::setHorizontalAlignment(const Real32 &value)
{
    _sfHorizontalAlignment.setValue(value);
}

//! Get the value of the TextField::_sfVerticalAlignment field.
inline
Real32 &TextFieldBase::getVerticalAlignment(void)
{
    return _sfVerticalAlignment.getValue();
}

//! Get the value of the TextField::_sfVerticalAlignment field.
inline
const Real32 &TextFieldBase::getVerticalAlignment(void) const
{
    return _sfVerticalAlignment.getValue();
}

//! Set the value of the TextField::_sfVerticalAlignment field.
inline
void TextFieldBase::setVerticalAlignment(const Real32 &value)
{
    _sfVerticalAlignment.setValue(value);
}


OSG_END_NAMESPACE

#define OSGTEXTFIELDBASE_INLINE_CVSID "@(#)$Id: FCBaseTemplate_inl.h,v 1.20 2002/12/04 14:22:22 dirk Exp $"

