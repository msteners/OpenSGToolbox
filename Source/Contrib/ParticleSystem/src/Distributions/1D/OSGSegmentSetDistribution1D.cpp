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

#include "OSGSegmentSetDistribution1D.h"
#include "OSGRandomPoolManager.h"

OSG_BEGIN_NAMESPACE

// Documentation for this class is emitted in the
// OSGSegmentSetDistribution1DBase.cpp file.
// To modify it, please change the .fcd file (OSGSegmentSetDistribution1D.fcd) and
// regenerate the base file.

/***************************************************************************\
 *                           Class variables                               *
\***************************************************************************/

/***************************************************************************\
 *                           Class methods                                 *
\***************************************************************************/

void SegmentSetDistribution1D::initMethod(InitPhase ePhase)
{
    Inherited::initMethod(ePhase);

    if(ePhase == TypeObject::SystemPost)
    {
    }
}


/***************************************************************************\
 *                           Instance methods                              *
\***************************************************************************/

Real32 SegmentSetDistribution1D::generate(void) const
{
    Real32 PickSegment(RandomPoolManager::getRandomReal32(0.0,1.0));
    Real32 CummLength(0.0);

    for(UInt32 i(0) ; i< getMFSegment()->size() ; ++i)
    {
        CummLength += osgAbs(getSegment(i)[1] - getSegment(i)[0]);
        if(PickSegment < CummLength/getTotalLength())
        {
            return RandomPoolManager::getRandomReal32(getSegment(i)[0],getSegment(i)[1]);
        }
    }

    return 0.0f;
}

/*-------------------------------------------------------------------------*\
 -  private                                                                 -
\*-------------------------------------------------------------------------*/

/*----------------------- constructors & destructors ----------------------*/

SegmentSetDistribution1D::SegmentSetDistribution1D(void) :
    Inherited()
{
}

SegmentSetDistribution1D::SegmentSetDistribution1D(const SegmentSetDistribution1D &source) :
    Inherited(source)
{
}

SegmentSetDistribution1D::~SegmentSetDistribution1D(void)
{
}

/*----------------------------- class specific ----------------------------*/

void SegmentSetDistribution1D::changed(ConstFieldMaskArg whichField, 
                            UInt32            origin,
                            BitVector         details)
{
    Inherited::changed(whichField, origin, details);
}

void SegmentSetDistribution1D::dump(      UInt32    ,
                         const BitVector ) const
{
    SLOG << "Dump SegmentSetDistribution1D NI" << std::endl;
}

OSG_END_NAMESPACE
