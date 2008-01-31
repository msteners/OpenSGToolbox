/*---------------------------------------------------------------------------*\
 *                     OpenSG ToolBox UserInterface                          *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                         www.vrac.iastate.edu                              *
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

//---------------------------------------------------------------------------
//  Includes
//---------------------------------------------------------------------------

#include <stdlib.h>
#include <stdio.h>

#define OSG_COMPILEUSERINTERFACELIB

#include <OpenSG/OSGConfig.h>

#include "OSGListComponentGenerator.h"
#include "Component/List/OSGList.h"

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class osg::ListComponentGenerator
A UI List ComponentGenerator. 
*/

/***************************************************************************\
 *                           Class variables                               *
\***************************************************************************/

/***************************************************************************\
 *                           Class methods                                 *
\***************************************************************************/

void ListComponentGenerator::initMethod (void)
{
}


/***************************************************************************\
 *                           Instance methods                              *
\***************************************************************************/

ComponentPtr ListComponentGenerator::getComponent(ComponentPtr Parent, SharedFieldPtr Value, Int32 PrimaryAxisIndex, Int32 SecondaryAxisIndex, bool IsSelected, bool HasFocus)
{
    if(Parent->getType().isDerivedFrom(List::getClassType()))
    {
        return getListComponent(List::Ptr::dcast(Parent), Value, PrimaryAxisIndex, IsSelected, HasFocus);
    }
    else
    {
        return getListComponent(NullFC, Value, PrimaryAxisIndex, IsSelected, HasFocus);
    }
}

/*-------------------------------------------------------------------------*\
 -  private                                                                 -
\*-------------------------------------------------------------------------*/

/*----------------------- constructors & destructors ----------------------*/

ListComponentGenerator::ListComponentGenerator(void) :
    Inherited()
{
}

ListComponentGenerator::ListComponentGenerator(const ListComponentGenerator &source) :
    Inherited(source)
{
}

ListComponentGenerator::~ListComponentGenerator(void)
{
}

/*----------------------------- class specific ----------------------------*/

void ListComponentGenerator::changed(BitVector whichField, UInt32 origin)
{
    Inherited::changed(whichField, origin);
}

void ListComponentGenerator::dump(      UInt32    , 
                         const BitVector ) const
{
    SLOG << "Dump ListComponentGenerator NI" << std::endl;
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
    static Char8 cvsid_cpp       [] = "@(#)$Id: FCTemplate_cpp.h,v 1.20 2006/03/16 17:01:53 dirk Exp $";
    static Char8 cvsid_hpp       [] = OSGLISTCOMPONENTGENERATORBASE_HEADER_CVSID;
    static Char8 cvsid_inl       [] = OSGLISTCOMPONENTGENERATORBASE_INLINE_CVSID;

    static Char8 cvsid_fields_hpp[] = OSGLISTCOMPONENTGENERATORFIELDS_HEADER_CVSID;
}

#ifdef __sgi
#pragma reset woff 1174
#endif

OSG_END_NAMESPACE

