/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
 *                                                                           *
 *                            www.opensg.org                                 *
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

//---------------------------------------------------------------------------
//  Includes
//---------------------------------------------------------------------------

#include <cstdlib>
#include <cstdio>

#include <OSGConfig.h>

#include "OSGListComponentGenerator.h"
#include "OSGList.h"

OSG_BEGIN_NAMESPACE

// Documentation for this class is emitted in the
// OSGListComponentGeneratorBase.cpp file.
// To modify it, please change the .fcd file (OSGListComponentGenerator.fcd) and
// regenerate the base file.

/***************************************************************************\
 *                           Class variables                               *
\***************************************************************************/

/***************************************************************************\
 *                           Class methods                                 *
\***************************************************************************/

void ListComponentGenerator::initMethod(InitPhase ePhase)
{
    Inherited::initMethod(ePhase);

    if(ePhase == TypeObject::SystemPost)
    {
    }
}


/***************************************************************************\
 *                           Instance methods                              *
\***************************************************************************/

ComponentRefPtr ListComponentGenerator::getComponent(ComponentRefPtr Parent, const boost::any& Value, Int32 PrimaryAxisIndex, Int32 SecondaryAxisIndex, bool IsSelected, bool HasFocus)
{
    if(Parent->getType().isDerivedFrom(List::getClassType()))
    {
        return getListComponent(dynamic_pointer_cast<List>(Parent), Value, PrimaryAxisIndex, IsSelected, HasFocus);
    }
    else
    {
        return getListComponent(NULL, Value, PrimaryAxisIndex, IsSelected, HasFocus);
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

void ListComponentGenerator::changed(ConstFieldMaskArg whichField, 
                            UInt32            origin,
                            BitVector         details)
{
    Inherited::changed(whichField, origin, details);
}

void ListComponentGenerator::dump(      UInt32    ,
                         const BitVector ) const
{
    SLOG << "Dump ListComponentGenerator NI" << std::endl;
}

OSG_END_NAMESPACE
