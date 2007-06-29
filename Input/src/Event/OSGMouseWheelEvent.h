/*---------------------------------------------------------------------------*\
 *                            OpenSGToolbox                                  *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *   contact: dkabala@vrac.iastate.edu                                       *
 *                                                                           *
\*---------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------*\
 *                                License                                    *
 *                                                                           *
 * This library is free software; you can redistribute it and/or modify it   *
 * under the terms of the GNU Library General Public License as published    *
 * by the Free Software Foundation, version 3.                               *
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
#ifndef _OSGMOUSEWHEELEVENT_H_
#define _OSGMOUSEWHEELEVENT_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGInputConfig.h"

#include "Event/OSGEvent.h"

OSG_BEGIN_NAMESPACE

class OSG_INPUT_CLASS_API MouseWheelEvent : public Event
{
    /*=========================  PUBLIC  ===============================*/
  public:
    enum ScrollType {UNIT_SCROLL = 1, BLOCK_SCROLL};

    Int32 getWheelRotation(void) const;
    Int32 getScrollAmount(void) const;
    Int32 getUnitsToScroll(void) const;
    ScrollType getScrollType(void) const;
    
    MouseWheelEvent(FieldContainerPtr Source, Time TimeStamp, Int32 WheelRotation, ScrollType TheScrollType);
  private:
    ScrollType _ScrollType;
    Int32      _WheelRotation;
    
};

OSG_END_NAMESPACE

#include "OSGMouseWheelEvent.inl"

#endif /* _OSGEVENT_H_ */