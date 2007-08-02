/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2002 by the OpenSG Forum                 *
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
 **     class UIForeground!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <OpenSG/OSGConfig.h>
#include "OSGUserInterfaceDef.h"
#include "UIDrawingSurface/OSGUIDrawingSurface.h"

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &UIForegroundBase::getClassType(void)
{
    return _type; 
} 

//! access the numerical type of the class
inline
OSG::UInt32 UIForegroundBase::getClassTypeId(void) 
{
    return _type.getId(); 
} 

//! create a new instance of the class
inline
UIForegroundPtr UIForegroundBase::create(void) 
{
    UIForegroundPtr fc; 

    if(getClassType().getPrototype() != OSG::NullFC) 
    {
        fc = UIForegroundPtr::dcast(
            getClassType().getPrototype()-> shallowCopy()); 
    }
    
    return fc; 
}

//! create an empty new instance of the class, do not copy the prototype
inline
UIForegroundPtr UIForegroundBase::createEmpty(void) 
{ 
    UIForegroundPtr returnValue; 
    
    newPtr(returnValue); 

    return returnValue; 
}


/*------------------------------ get -----------------------------------*/

//! Get the UIForeground::_sfDrawingSurface field.
inline
SFUIDrawingSurfacePtr *UIForegroundBase::getSFDrawingSurface(void)
{
    return &_sfDrawingSurface;
}

//! Get the UIForeground::_sfFramePositionOffset field.
inline
SFVec2s *UIForegroundBase::getSFFramePositionOffset(void)
{
    return &_sfFramePositionOffset;
}

//! Get the UIForeground::_sfFrameBounds field.
inline
SFVec2f *UIForegroundBase::getSFFrameBounds(void)
{
    return &_sfFrameBounds;
}

//! Get the UIForeground::_sfVerticalAlignment field.
inline
SFUInt32 *UIForegroundBase::getSFVerticalAlignment(void)
{
    return &_sfVerticalAlignment;
}

//! Get the UIForeground::_sfHorizontalAlignment field.
inline
SFUInt32 *UIForegroundBase::getSFHorizontalAlignment(void)
{
    return &_sfHorizontalAlignment;
}

//! Get the UIForeground::_sfMouseTransformFunctor field.
inline
SFUIForegroundMouseTransformFunctorPtr *UIForegroundBase::getSFMouseTransformFunctor(void)
{
    return &_sfMouseTransformFunctor;
}


//! Get the value of the UIForeground::_sfDrawingSurface field.
inline
UIDrawingSurfacePtr &UIForegroundBase::getDrawingSurface(void)
{
    return _sfDrawingSurface.getValue();
}

//! Get the value of the UIForeground::_sfDrawingSurface field.
inline
const UIDrawingSurfacePtr &UIForegroundBase::getDrawingSurface(void) const
{
    return _sfDrawingSurface.getValue();
}

//! Set the value of the UIForeground::_sfDrawingSurface field.
inline
void UIForegroundBase::setDrawingSurface(const UIDrawingSurfacePtr &value)
{
	if(getDrawingSurface() != NullFC)
	{
		getDrawingSurface()->removeMouseTransformFunctor(getMouseTransformFunctor());
	}
    _sfDrawingSurface.setValue(value);
	if(getDrawingSurface() != NullFC)
	{
		getDrawingSurface()->addMouseTransformFunctor(getMouseTransformFunctor());
	}
}

//! Get the value of the UIForeground::_sfFramePositionOffset field.
inline
Vec2s &UIForegroundBase::getFramePositionOffset(void)
{
    return _sfFramePositionOffset.getValue();
}

//! Get the value of the UIForeground::_sfFramePositionOffset field.
inline
const Vec2s &UIForegroundBase::getFramePositionOffset(void) const
{
    return _sfFramePositionOffset.getValue();
}

//! Set the value of the UIForeground::_sfFramePositionOffset field.
inline
void UIForegroundBase::setFramePositionOffset(const Vec2s &value)
{
    _sfFramePositionOffset.setValue(value);
}

//! Get the value of the UIForeground::_sfFrameBounds field.
inline
Vec2f &UIForegroundBase::getFrameBounds(void)
{
    return _sfFrameBounds.getValue();
}

//! Get the value of the UIForeground::_sfFrameBounds field.
inline
const Vec2f &UIForegroundBase::getFrameBounds(void) const
{
    return _sfFrameBounds.getValue();
}

//! Set the value of the UIForeground::_sfFrameBounds field.
inline
void UIForegroundBase::setFrameBounds(const Vec2f &value)
{
    _sfFrameBounds.setValue(value);
}

//! Get the value of the UIForeground::_sfVerticalAlignment field.
inline
UInt32 &UIForegroundBase::getVerticalAlignment(void)
{
    return _sfVerticalAlignment.getValue();
}

//! Get the value of the UIForeground::_sfVerticalAlignment field.
inline
const UInt32 &UIForegroundBase::getVerticalAlignment(void) const
{
    return _sfVerticalAlignment.getValue();
}

//! Set the value of the UIForeground::_sfVerticalAlignment field.
inline
void UIForegroundBase::setVerticalAlignment(const UInt32 &value)
{
    _sfVerticalAlignment.setValue(value);
}

//! Get the value of the UIForeground::_sfHorizontalAlignment field.
inline
UInt32 &UIForegroundBase::getHorizontalAlignment(void)
{
    return _sfHorizontalAlignment.getValue();
}

//! Get the value of the UIForeground::_sfHorizontalAlignment field.
inline
const UInt32 &UIForegroundBase::getHorizontalAlignment(void) const
{
    return _sfHorizontalAlignment.getValue();
}

//! Set the value of the UIForeground::_sfHorizontalAlignment field.
inline
void UIForegroundBase::setHorizontalAlignment(const UInt32 &value)
{
    _sfHorizontalAlignment.setValue(value);
}

//! Get the value of the UIForeground::_sfMouseTransformFunctor field.
inline
UIForegroundMouseTransformFunctorPtr &UIForegroundBase::getMouseTransformFunctor(void)
{
    return _sfMouseTransformFunctor.getValue();
}

//! Get the value of the UIForeground::_sfMouseTransformFunctor field.
inline
const UIForegroundMouseTransformFunctorPtr &UIForegroundBase::getMouseTransformFunctor(void) const
{
    return _sfMouseTransformFunctor.getValue();
}

//! Set the value of the UIForeground::_sfMouseTransformFunctor field.
inline
void UIForegroundBase::setMouseTransformFunctor(const UIForegroundMouseTransformFunctorPtr &value)
{
    _sfMouseTransformFunctor.setValue(value);
}


OSG_END_NAMESPACE

#define OSGUIFOREGROUNDBASE_INLINE_CVSID "@(#)$Id: FCBaseTemplate_inl.h,v 1.20 2002/12/04 14:22:22 dirk Exp $"

