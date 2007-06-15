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
 **     class RocketForce!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <OpenSG/OSGConfig.h>

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &RocketForceBase::getClassType(void)
{
    return _type; 
} 

//! access the numerical type of the class
inline
OSG::UInt32 RocketForceBase::getClassTypeId(void) 
{
    return _type.getId(); 
} 

//! create a new instance of the class
inline
RocketForcePtr RocketForceBase::create(void) 
{
    RocketForcePtr fc; 

    if(getClassType().getPrototype() != OSG::NullFC) 
    {
        fc = RocketForcePtr::dcast(
            getClassType().getPrototype()-> shallowCopy()); 
    }
    
    return fc; 
}

//! create an empty new instance of the class, do not copy the prototype
inline
RocketForcePtr RocketForceBase::createEmpty(void) 
{ 
    RocketForcePtr returnValue; 
    
    newPtr(returnValue); 

    return returnValue; 
}


/*------------------------------ get -----------------------------------*/

//! Get the RocketForce::_sfFuel field.
inline
SFReal32 *RocketForceBase::getSFFuel(void)
{
    return &_sfFuel;
}

//! Get the RocketForce::_sfDirection field.
inline
SFVec3f *RocketForceBase::getSFDirection(void)
{
    return &_sfDirection;
}

//! Get the RocketForce::_sfPointOfApplication field.
inline
SFPnt3f *RocketForceBase::getSFPointOfApplication(void)
{
    return &_sfPointOfApplication;
}


//! Get the value of the RocketForce::_sfFuel field.
inline
Real32 &RocketForceBase::getFuel(void)
{
    return _sfFuel.getValue();
}

//! Get the value of the RocketForce::_sfFuel field.
inline
const Real32 &RocketForceBase::getFuel(void) const
{
    return _sfFuel.getValue();
}

//! Set the value of the RocketForce::_sfFuel field.
inline
void RocketForceBase::setFuel(const Real32 &value)
{
    _sfFuel.setValue(value);
}

//! Get the value of the RocketForce::_sfDirection field.
inline
Vec3f &RocketForceBase::getDirection(void)
{
    return _sfDirection.getValue();
}

//! Get the value of the RocketForce::_sfDirection field.
inline
const Vec3f &RocketForceBase::getDirection(void) const
{
    return _sfDirection.getValue();
}

//! Set the value of the RocketForce::_sfDirection field.
inline
void RocketForceBase::setDirection(const Vec3f &value)
{
    _sfDirection.setValue(value);
}

//! Get the value of the RocketForce::_sfPointOfApplication field.
inline
Pnt3f &RocketForceBase::getPointOfApplication(void)
{
    return _sfPointOfApplication.getValue();
}

//! Get the value of the RocketForce::_sfPointOfApplication field.
inline
const Pnt3f &RocketForceBase::getPointOfApplication(void) const
{
    return _sfPointOfApplication.getValue();
}

//! Set the value of the RocketForce::_sfPointOfApplication field.
inline
void RocketForceBase::setPointOfApplication(const Pnt3f &value)
{
    _sfPointOfApplication.setValue(value);
}


OSG_END_NAMESPACE

#define OSGROCKETFORCEBASE_INLINE_CVSID "@(#)$Id: FCBaseTemplate_inl.h,v 1.20 2002/12/04 14:22:22 dirk Exp $"

