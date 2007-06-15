/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2002 by the OpenSG Forum                 *
 *                                                                           *
 *                            www.opensg.org                                 *
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

//---------------------------------------------------------------------------
//  Includes
//---------------------------------------------------------------------------

#include <stdlib.h>
#include <stdio.h>

#include <OpenSG/OSGConfig.h>

#include "OSGBoyancyForce.h"
#include "Physics/Objects/Attributes/OSGVolumeAttribute.h"

OSG_USING_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class osg::BoyancyForce

*/

/***************************************************************************\
 *                           Class variables                               *
\***************************************************************************/

/***************************************************************************\
 *                           Class methods                                 *
\***************************************************************************/

void BoyancyForce::initMethod (void)
{
}

 bool BoyancyForce::updateForce(osg::AttachmentMap& Attributes, osg::Vec3f& Force, osg::Vec3f& Torque)
 {
    AttachmentMap::iterator fcI = Attributes.find( 
       osg::VolumeAttribute::getClassType().getGroupId() );
    //Check for all of the Requirements
    
    if(getFluid() == NullFC ||            //Is Fluid defined
       getGravitationalForce() == NullFC || //Is Gravitational Force Defined
       fcI == Attributes.end() //Is Volume Attribute of the object defined
       )
    {
       SWARNING << "BoyancyForce: Not all the requirements are defined."  << std::endl;
       Force.setValue(Vec3f(0.0f,0.0f,0.0f));
       Torque.setValue(Vec3f(0.0f,0.0f,0.0f));
       return false;
    }
    
    VolumeAttributePtr VolumeAttrib = osg::VolumeAttribute::Ptr::dcast( (*fcI).second );
    Vec3f GravityDir = getGravitationalForce()->getAcceleration();
    GravityDir.normalize();

    //Calculate the force
    Force = getFluid()->getDensity() * VolumeAttrib->getVolume() * GravityDir;
    
    //Torque
    Torque = Vec3f(VolumeAttrib->getCenterOfVolume()).cross(Force);

    return false;
 }

/***************************************************************************\
 *                           Instance methods                              *
\***************************************************************************/

/*-------------------------------------------------------------------------*\
 -  private                                                                 -
\*-------------------------------------------------------------------------*/

/*----------------------- constructors & destructors ----------------------*/

BoyancyForce::BoyancyForce(void) :
    Inherited()
{
}

BoyancyForce::BoyancyForce(const BoyancyForce &source) :
    Inherited(source)
{
}

BoyancyForce::~BoyancyForce(void)
{
}

/*----------------------------- class specific ----------------------------*/

void BoyancyForce::changed(BitVector whichField, UInt32 origin)
{
    Inherited::changed(whichField, origin);
}

void BoyancyForce::dump(      UInt32    , 
                         const BitVector ) const
{
    SLOG << "Dump BoyancyForce NI" << std::endl;
}


/*------------------------------------------------------------------------*/
/*                              cvs id's                                  */

#ifdef OSG_SGI_CC
#pragma set woff 1174
#endif

#ifdef OSG_LINUX_ICC
#pragma warning( disable : 177 )
#endif

namespace
{
    static Char8 cvsid_cpp       [] = "@(#)$Id: FCTemplate_cpp.h,v 1.19 2003/05/05 10:05:28 dirk Exp $";
    static Char8 cvsid_hpp       [] = OSGBOYANCYFORCEBASE_HEADER_CVSID;
    static Char8 cvsid_inl       [] = OSGBOYANCYFORCEBASE_INLINE_CVSID;

    static Char8 cvsid_fields_hpp[] = OSGBOYANCYFORCEFIELDS_HEADER_CVSID;
}

#ifdef __sgi
#pragma reset woff 1174
#endif

