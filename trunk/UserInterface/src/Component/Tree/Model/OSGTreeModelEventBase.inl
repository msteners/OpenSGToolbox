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
 **     class TreeModelEvent!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <OpenSG/OSGConfig.h>

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &TreeModelEventBase::getClassType(void)
{
    return _type; 
} 

//! access the numerical type of the class
inline
OSG::UInt32 TreeModelEventBase::getClassTypeId(void) 
{
    return _type.getId(); 
} 

//! create a new instance of the class
inline
TreeModelEventPtr TreeModelEventBase::create(void) 
{
    TreeModelEventPtr fc; 

    if(getClassType().getPrototype() != OSG::NullFC) 
    {
        fc = TreeModelEventPtr::dcast(
            getClassType().getPrototype()-> shallowCopy()); 
    }
    
    return fc; 
}

//! create an empty new instance of the class, do not copy the prototype
inline
TreeModelEventPtr TreeModelEventBase::createEmpty(void) 
{ 
    TreeModelEventPtr returnValue; 
    
    newPtr(returnValue); 

    return returnValue; 
}


/*------------------------------ get -----------------------------------*/

//! Get the TreeModelEvent::_mfChildIndices field.
inline
const MFUInt32 *TreeModelEventBase::getMFChildIndices(void) const
{
    return &_mfChildIndices;
}

//! Get the TreeModelEvent::_mfChildIndices field.
inline
MFUInt32 *TreeModelEventBase::editMFChildIndices(void)
{
    return &_mfChildIndices;
}



//! Get the value of the \a index element the TreeModelEvent::_mfChildIndices field.
inline
UInt32 &TreeModelEventBase::editChildIndices(const UInt32 index)
{
    return _mfChildIndices[index];
}

//! Get the value of the \a index element the TreeModelEvent::_mfChildIndices field.
inline
const UInt32 &TreeModelEventBase::getChildIndices(const UInt32 index) const
{
    return _mfChildIndices[index];
}

#ifndef OSG_2_PREP
//! Get the TreeModelEvent::_mfChildIndices field.
inline
MFUInt32 &TreeModelEventBase::getChildIndices(void)
{
    return _mfChildIndices;
}

//! Get the TreeModelEvent::_mfChildIndices field.
inline
const MFUInt32 &TreeModelEventBase::getChildIndices(void) const
{
    return _mfChildIndices;
}

#endif
OSG_END_NAMESPACE
