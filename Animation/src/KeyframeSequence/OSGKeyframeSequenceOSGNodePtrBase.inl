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
 **     class KeyframeSequenceOSGNodePtr!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <OpenSG/OSGConfig.h>

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &KeyframeSequenceOSGNodePtrBase::getClassType(void)
{
    return _type; 
} 

//! access the numerical type of the class
inline
OSG::UInt32 KeyframeSequenceOSGNodePtrBase::getClassTypeId(void) 
{
    return _type.getId(); 
} 

//! create a new instance of the class
inline
KeyframeSequenceOSGNodePtrPtr KeyframeSequenceOSGNodePtrBase::create(void) 
{
    KeyframeSequenceOSGNodePtrPtr fc; 

    if(getClassType().getPrototype() != OSG::NullFC) 
    {
        fc = KeyframeSequenceOSGNodePtrPtr::dcast(
            getClassType().getPrototype()-> shallowCopy()); 
    }
    
    return fc; 
}

//! create an empty new instance of the class, do not copy the prototype
inline
KeyframeSequenceOSGNodePtrPtr KeyframeSequenceOSGNodePtrBase::createEmpty(void) 
{ 
    KeyframeSequenceOSGNodePtrPtr returnValue; 
    
    newPtr(returnValue); 

    return returnValue; 
}


/*------------------------------ get -----------------------------------*/

//! Get the KeyframeSequenceOSGNodePtr::_mfValues field.
inline
MFNodePtr *KeyframeSequenceOSGNodePtrBase::getMFValues(void)
{
    return &_mfValues;
}



//! Get the value of the \a index element the KeyframeSequenceOSGNodePtr::_mfValues field.
inline
NodePtr &KeyframeSequenceOSGNodePtrBase::getValues(const UInt32 index)
{
    return _mfValues[index];
}

//! Get the KeyframeSequenceOSGNodePtr::_mfValues field.
inline
MFNodePtr &KeyframeSequenceOSGNodePtrBase::getValues(void)
{
    return _mfValues;
}

//! Get the KeyframeSequenceOSGNodePtr::_mfValues field.
inline
const MFNodePtr &KeyframeSequenceOSGNodePtrBase::getValues(void) const
{
    return _mfValues;
}

OSG_END_NAMESPACE

#define OSGKEYFRAMESEQUENCEOSGNODEPTRBASE_INLINE_CVSID "@(#)$Id: FCBaseTemplate_inl.h,v 1.20 2002/12/04 14:22:22 dirk Exp $"
