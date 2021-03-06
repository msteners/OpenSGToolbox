/*---------------------------------------------------------------------------*\
 *                     OpenSG ToolBox UserInterface                          *
 *                                                                           *
 *                                                                           *
 *                                                                           *
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

/*****************************************************************************\
 *****************************************************************************
 **                                                                         **
 **                  This file is automatically generated.                  **
 **                                                                         **
 **          Any changes made to this file WILL be lost when it is          **
 **           regenerated, which can become necessary at any time.          **
 **                                                                         **
 **     Do not change this file, changes should be done in the derived      **
 **     class WindowEventProducer!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <OpenSG/OSGConfig.h>

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &WindowEventProducerBase::getClassType(void)
{
    return _type; 
} 

//! access the numerical type of the class
inline
OSG::UInt32 WindowEventProducerBase::getClassTypeId(void) 
{
    return _type.getId(); 
} 

//! access the producer type of the class
inline
const EventProducerType &WindowEventProducerBase::getProducerClassType(void)
{
    return _producerType;
}

//! access the producer type id of the class
inline
UInt32 WindowEventProducerBase::getProducerClassTypeId(void)
{
    return _producerType.getId();
}


/*------------------------------ get -----------------------------------*/

//! Get the WindowEventProducer::_sfWindow field.
inline
const SFWindowPtr *WindowEventProducerBase::getSFWindow(void) const
{
    return &_sfWindow;
}

//! Get the WindowEventProducer::_sfWindow field.
inline
SFWindowPtr *WindowEventProducerBase::editSFWindow(void)
{
    return &_sfWindow;
}

//! Get the WindowEventProducer::_sfEnabled field.
inline
const SFBool *WindowEventProducerBase::getSFEnabled(void) const
{
    return &_sfEnabled;
}

//! Get the WindowEventProducer::_sfEnabled field.
inline
SFBool *WindowEventProducerBase::editSFEnabled(void)
{
    return &_sfEnabled;
}

//! Get the WindowEventProducer::_sfUseCallbackForDraw field.
inline
const SFBool *WindowEventProducerBase::getSFUseCallbackForDraw(void) const
{
    return &_sfUseCallbackForDraw;
}

//! Get the WindowEventProducer::_sfUseCallbackForDraw field.
inline
SFBool *WindowEventProducerBase::editSFUseCallbackForDraw(void)
{
    return &_sfUseCallbackForDraw;
}

//! Get the WindowEventProducer::_sfUseCallbackForReshape field.
inline
const SFBool *WindowEventProducerBase::getSFUseCallbackForReshape(void) const
{
    return &_sfUseCallbackForReshape;
}

//! Get the WindowEventProducer::_sfUseCallbackForReshape field.
inline
SFBool *WindowEventProducerBase::editSFUseCallbackForReshape(void)
{
    return &_sfUseCallbackForReshape;
}

//! Get the WindowEventProducer::_sfLastUpdateTime field.
inline
const SFTime *WindowEventProducerBase::getSFLastUpdateTime(void) const
{
    return &_sfLastUpdateTime;
}

//! Get the WindowEventProducer::_sfLastUpdateTime field.
inline
SFTime *WindowEventProducerBase::editSFLastUpdateTime(void)
{
    return &_sfLastUpdateTime;
}

//! Get the WindowEventProducer::_sfIcon field.
inline
const SFImagePtr *WindowEventProducerBase::getSFIcon(void) const
{
    return &_sfIcon;
}

//! Get the WindowEventProducer::_sfIcon field.
inline
SFImagePtr *WindowEventProducerBase::editSFIcon(void)
{
    return &_sfIcon;
}

//! Get the WindowEventProducer::_sfLockCursor field.
inline
const SFBool *WindowEventProducerBase::getSFLockCursor(void) const
{
    return &_sfLockCursor;
}

//! Get the WindowEventProducer::_sfLockCursor field.
inline
SFBool *WindowEventProducerBase::editSFLockCursor(void)
{
    return &_sfLockCursor;
}


//! Get the value of the WindowEventProducer::_sfWindow field.
inline
WindowPtr &WindowEventProducerBase::editWindow(void)
{
    return _sfWindow.getValue();
}

//! Get the value of the WindowEventProducer::_sfWindow field.
inline
const WindowPtr &WindowEventProducerBase::getWindow(void) const
{
    return _sfWindow.getValue();
}

//! Set the value of the WindowEventProducer::_sfWindow field.
inline
void WindowEventProducerBase::setWindow(const WindowPtr &value)
{
    _sfWindow.setValue(value);
}

//! Get the value of the WindowEventProducer::_sfEnabled field.
inline
bool &WindowEventProducerBase::editEnabled(void)
{
    return _sfEnabled.getValue();
}

//! Get the value of the WindowEventProducer::_sfEnabled field.
inline
const bool &WindowEventProducerBase::getEnabled(void) const
{
    return _sfEnabled.getValue();
}

//! Set the value of the WindowEventProducer::_sfEnabled field.
inline
void WindowEventProducerBase::setEnabled(const bool &value)
{
    _sfEnabled.setValue(value);
}

//! Get the value of the WindowEventProducer::_sfUseCallbackForDraw field.
inline
bool &WindowEventProducerBase::editUseCallbackForDraw(void)
{
    return _sfUseCallbackForDraw.getValue();
}

//! Get the value of the WindowEventProducer::_sfUseCallbackForDraw field.
inline
const bool &WindowEventProducerBase::getUseCallbackForDraw(void) const
{
    return _sfUseCallbackForDraw.getValue();
}

//! Set the value of the WindowEventProducer::_sfUseCallbackForDraw field.
inline
void WindowEventProducerBase::setUseCallbackForDraw(const bool &value)
{
    _sfUseCallbackForDraw.setValue(value);
}

//! Get the value of the WindowEventProducer::_sfUseCallbackForReshape field.
inline
bool &WindowEventProducerBase::editUseCallbackForReshape(void)
{
    return _sfUseCallbackForReshape.getValue();
}

//! Get the value of the WindowEventProducer::_sfUseCallbackForReshape field.
inline
const bool &WindowEventProducerBase::getUseCallbackForReshape(void) const
{
    return _sfUseCallbackForReshape.getValue();
}

//! Set the value of the WindowEventProducer::_sfUseCallbackForReshape field.
inline
void WindowEventProducerBase::setUseCallbackForReshape(const bool &value)
{
    _sfUseCallbackForReshape.setValue(value);
}

//! Get the value of the WindowEventProducer::_sfLastUpdateTime field.
inline
Time &WindowEventProducerBase::editLastUpdateTime(void)
{
    return _sfLastUpdateTime.getValue();
}

//! Get the value of the WindowEventProducer::_sfLastUpdateTime field.
inline
const Time &WindowEventProducerBase::getLastUpdateTime(void) const
{
    return _sfLastUpdateTime.getValue();
}

//! Set the value of the WindowEventProducer::_sfLastUpdateTime field.
inline
void WindowEventProducerBase::setLastUpdateTime(const Time &value)
{
    _sfLastUpdateTime.setValue(value);
}

//! Get the value of the WindowEventProducer::_sfIcon field.
inline
ImagePtr &WindowEventProducerBase::editIcon(void)
{
    return _sfIcon.getValue();
}

//! Get the value of the WindowEventProducer::_sfIcon field.
inline
const ImagePtr &WindowEventProducerBase::getIcon(void) const
{
    return _sfIcon.getValue();
}

//! Set the value of the WindowEventProducer::_sfIcon field.
inline
void WindowEventProducerBase::setIcon(const ImagePtr &value)
{
    _sfIcon.setValue(value);
}

//! Get the value of the WindowEventProducer::_sfLockCursor field.
inline
bool &WindowEventProducerBase::editLockCursor(void)
{
    return _sfLockCursor.getValue();
}

//! Get the value of the WindowEventProducer::_sfLockCursor field.
inline
const bool &WindowEventProducerBase::getLockCursor(void) const
{
    return _sfLockCursor.getValue();
}

//! Set the value of the WindowEventProducer::_sfLockCursor field.
inline
void WindowEventProducerBase::setLockCursor(const bool &value)
{
    _sfLockCursor.setValue(value);
}



inline
EventConnection WindowEventProducerBase::attachActivity(ActivityPtr TheActivity, UInt32 ProducedEventId)
{
    return _Producer.attachActivity(TheActivity, ProducedEventId);
}

inline
bool WindowEventProducerBase::isActivityAttached(ActivityPtr TheActivity, UInt32 ProducedEventId) const
{
    return _Producer.isActivityAttached(TheActivity, ProducedEventId);
}

inline
UInt32 WindowEventProducerBase::getNumActivitiesAttached(UInt32 ProducedEventId) const
{
    return _Producer.getNumActivitiesAttached(ProducedEventId);
}

inline
ActivityPtr WindowEventProducerBase::getAttachedActivity(UInt32 ProducedEventId, UInt32 ActivityIndex) const
{
    return _Producer.getAttachedActivity(ProducedEventId,ActivityIndex);
}

inline
void WindowEventProducerBase::detachActivity(ActivityPtr TheActivity, UInt32 ProducedEventId)
{
    _Producer.detachActivity(TheActivity, ProducedEventId);
}

inline
UInt32 WindowEventProducerBase::getNumProducedEvents(void) const
{
    return _Producer.getNumProducedEvents();
}

inline
const MethodDescription *WindowEventProducerBase::getProducedEventDescription(const Char8 *ProducedEventName) const
{
    return _Producer.getProducedEventDescription(ProducedEventName);
}

inline
const MethodDescription *WindowEventProducerBase::getProducedEventDescription(UInt32 ProducedEventId) const
{
    return _Producer.getProducedEventDescription(ProducedEventId);
}

inline
UInt32 WindowEventProducerBase::getProducedEventId(const Char8 *ProducedEventName) const
{
    return _Producer.getProducedEventId(ProducedEventName);
}

inline
SFEventProducerPtr *WindowEventProducerBase::editSFEventProducer(void)
{
    return &_sfEventProducer;
}

//! Get the value of the WindowEventProducer::_sfEventProducer field.
inline
EventProducerPtr &WindowEventProducerBase::editEventProducer(void)
{
    return _sfEventProducer.getValue();
}

OSG_END_NAMESPACE
