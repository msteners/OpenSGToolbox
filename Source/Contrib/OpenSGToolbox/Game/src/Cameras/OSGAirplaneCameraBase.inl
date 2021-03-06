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
 **     class AirplaneCamera!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <OpenSG/OSGConfig.h>

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &AirplaneCameraBase::getClassType(void)
{
    return _type; 
} 

//! access the numerical type of the class
inline
OSG::UInt32 AirplaneCameraBase::getClassTypeId(void) 
{
    return _type.getId(); 
} 

//! create a new instance of the class
inline
AirplaneCameraPtr AirplaneCameraBase::create(void) 
{
    AirplaneCameraPtr fc; 

    if(getClassType().getPrototype() != OSG::NullFC) 
    {
        fc = AirplaneCameraPtr::dcast(
            getClassType().getPrototype()-> shallowCopy()); 
    }
    
    return fc; 
}

//! create an empty new instance of the class, do not copy the prototype
inline
AirplaneCameraPtr AirplaneCameraBase::createEmpty(void) 
{ 
    AirplaneCameraPtr returnValue; 
    
    newPtr(returnValue); 

    return returnValue; 
}


/*------------------------------ get -----------------------------------*/

//! Get the AirplaneCamera::_sfRoll field.
inline
SFReal32 *AirplaneCameraBase::getSFRoll(void)
{
    return &_sfRoll;
}

//! Get the AirplaneCamera::_sfPitch field.
inline
SFReal32 *AirplaneCameraBase::getSFPitch(void)
{
    return &_sfPitch;
}

//! Get the AirplaneCamera::_sfYaw field.
inline
SFReal32 *AirplaneCameraBase::getSFYaw(void)
{
    return &_sfYaw;
}

//! Get the AirplaneCamera::_sfPosition field.
inline
SFPnt3f *AirplaneCameraBase::getSFPosition(void)
{
    return &_sfPosition;
}


//! Get the value of the AirplaneCamera::_sfRoll field.
inline
Real32 &AirplaneCameraBase::getRoll(void)
{
    return _sfRoll.getValue();
}

//! Get the value of the AirplaneCamera::_sfRoll field.
inline
const Real32 &AirplaneCameraBase::getRoll(void) const
{
    return _sfRoll.getValue();
}

//! Set the value of the AirplaneCamera::_sfRoll field.
inline
void AirplaneCameraBase::setRoll(const Real32 &value)
{
    _sfRoll.setValue(value);
}

//! Get the value of the AirplaneCamera::_sfPitch field.
inline
Real32 &AirplaneCameraBase::getPitch(void)
{
    return _sfPitch.getValue();
}

//! Get the value of the AirplaneCamera::_sfPitch field.
inline
const Real32 &AirplaneCameraBase::getPitch(void) const
{
    return _sfPitch.getValue();
}

//! Set the value of the AirplaneCamera::_sfPitch field.
inline
void AirplaneCameraBase::setPitch(const Real32 &value)
{
    _sfPitch.setValue(value);
}

//! Get the value of the AirplaneCamera::_sfYaw field.
inline
Real32 &AirplaneCameraBase::getYaw(void)
{
    return _sfYaw.getValue();
}

//! Get the value of the AirplaneCamera::_sfYaw field.
inline
const Real32 &AirplaneCameraBase::getYaw(void) const
{
    return _sfYaw.getValue();
}

//! Set the value of the AirplaneCamera::_sfYaw field.
inline
void AirplaneCameraBase::setYaw(const Real32 &value)
{
    _sfYaw.setValue(value);
}

//! Get the value of the AirplaneCamera::_sfPosition field.
inline
Pnt3f &AirplaneCameraBase::getPosition(void)
{
    return _sfPosition.getValue();
}

//! Get the value of the AirplaneCamera::_sfPosition field.
inline
const Pnt3f &AirplaneCameraBase::getPosition(void) const
{
    return _sfPosition.getValue();
}

//! Set the value of the AirplaneCamera::_sfPosition field.
inline
void AirplaneCameraBase::setPosition(const Pnt3f &value)
{
    _sfPosition.setValue(value);
}


OSG_END_NAMESPACE

#define OSGAIRPLANECAMERABASE_INLINE_CVSID "@(#)$Id: FCBaseTemplate_inl.h,v 1.20 2002/12/04 14:22:22 dirk Exp $"

