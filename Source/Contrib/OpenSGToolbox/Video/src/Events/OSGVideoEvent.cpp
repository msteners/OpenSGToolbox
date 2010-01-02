/*---------------------------------------------------------------------------*\
 *                     OpenSG ToolBox UserInterface                          *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                         www.vrac.iastate.edu                              *
 *                                                                           *
 *                          Authors: David Kabala                            *
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

#define OSG_COMPILEANIMATIONLIB

#include <OpenSG/OSGConfig.h>

#include "OSGVideoEvent.h"

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class osg::VideoEvent

*/

/***************************************************************************\
 *                           Class variables                               *
\***************************************************************************/

/***************************************************************************\
 *                           Class methods                                 *
\***************************************************************************/

void VideoEvent::initMethod (void)
{
}

VideoEventPtr VideoEvent::create(  FieldContainerPtr Source,
                                        Time TimeStamp)
{
    VideoEventPtr TheEvent = VideoEvent::createEmpty();

    TheEvent->setSource(Source);
    TheEvent->setTimeStamp(TimeStamp);

    return TheEvent;
}

/***************************************************************************\
 *                           Instance methods                              *
\***************************************************************************/

/*-------------------------------------------------------------------------*\
 -  private                                                                 -
\*-------------------------------------------------------------------------*/

/*----------------------- constructors & destructors ----------------------*/

VideoEvent::VideoEvent(void) :
    Inherited()
{
}

VideoEvent::VideoEvent(const VideoEvent &source) :
    Inherited(source)
{
}

VideoEvent::~VideoEvent(void)
{
}

/*----------------------------- class specific ----------------------------*/

void VideoEvent::changed(BitVector whichField, UInt32 origin)
{
    Inherited::changed(whichField, origin);
}

void VideoEvent::dump(      UInt32    , 
                         const BitVector ) const
{
    SLOG << "Dump VideoEvent NI" << std::endl;
}


OSG_END_NAMESPACE
