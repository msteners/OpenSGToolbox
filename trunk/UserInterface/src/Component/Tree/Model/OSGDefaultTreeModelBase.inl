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
 **     class DefaultTreeModel!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <OpenSG/OSGConfig.h>

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &DefaultTreeModelBase::getClassType(void)
{
    return _type; 
} 

//! access the numerical type of the class
inline
OSG::UInt32 DefaultTreeModelBase::getClassTypeId(void) 
{
    return _type.getId(); 
} 

//! create a new instance of the class
inline
DefaultTreeModelPtr DefaultTreeModelBase::create(void) 
{
    DefaultTreeModelPtr fc; 

    if(getClassType().getPrototype() != OSG::NullFC) 
    {
        fc = DefaultTreeModelPtr::dcast(
            getClassType().getPrototype()-> shallowCopy()); 
    }
    
    return fc; 
}

//! create an empty new instance of the class, do not copy the prototype
inline
DefaultTreeModelPtr DefaultTreeModelBase::createEmpty(void) 
{ 
    DefaultTreeModelPtr returnValue; 
    
    newPtr(returnValue); 

    return returnValue; 
}


/*------------------------------ get -----------------------------------*/

//! Get the DefaultTreeModel::_sfInternalRoot field.
inline
const SFModelTreeNodePtr *DefaultTreeModelBase::getSFInternalRoot(void) const
{
    return &_sfInternalRoot;
}

//! Get the DefaultTreeModel::_sfInternalRoot field.
inline
SFModelTreeNodePtr *DefaultTreeModelBase::editSFInternalRoot(void)
{
    return &_sfInternalRoot;
}

#ifndef OSG_2_PREP
//! Get the DefaultTreeModel::_sfInternalRoot field.
inline
SFModelTreeNodePtr *DefaultTreeModelBase::getSFInternalRoot(void)
{
    return &_sfInternalRoot;
}
#endif

//! Get the DefaultTreeModel::_sfAskAllowsChilren field.
inline
const SFBool *DefaultTreeModelBase::getSFAskAllowsChilren(void) const
{
    return &_sfAskAllowsChilren;
}

//! Get the DefaultTreeModel::_sfAskAllowsChilren field.
inline
SFBool *DefaultTreeModelBase::editSFAskAllowsChilren(void)
{
    return &_sfAskAllowsChilren;
}

#ifndef OSG_2_PREP
//! Get the DefaultTreeModel::_sfAskAllowsChilren field.
inline
SFBool *DefaultTreeModelBase::getSFAskAllowsChilren(void)
{
    return &_sfAskAllowsChilren;
}
#endif


//! Get the value of the DefaultTreeModel::_sfInternalRoot field.
inline
ModelTreeNodePtr &DefaultTreeModelBase::editInternalRoot(void)
{
    return _sfInternalRoot.getValue();
}

//! Get the value of the DefaultTreeModel::_sfInternalRoot field.
inline
const ModelTreeNodePtr &DefaultTreeModelBase::getInternalRoot(void) const
{
    return _sfInternalRoot.getValue();
}

#ifndef OSG_2_PREP
//! Get the value of the DefaultTreeModel::_sfInternalRoot field.
inline
ModelTreeNodePtr &DefaultTreeModelBase::getInternalRoot(void)
{
    return _sfInternalRoot.getValue();
}
#endif

//! Set the value of the DefaultTreeModel::_sfInternalRoot field.
inline
void DefaultTreeModelBase::setInternalRoot(const ModelTreeNodePtr &value)
{
    _sfInternalRoot.setValue(value);
}

//! Get the value of the DefaultTreeModel::_sfAskAllowsChilren field.
inline
bool &DefaultTreeModelBase::editAskAllowsChilren(void)
{
    return _sfAskAllowsChilren.getValue();
}

//! Get the value of the DefaultTreeModel::_sfAskAllowsChilren field.
inline
const bool &DefaultTreeModelBase::getAskAllowsChilren(void) const
{
    return _sfAskAllowsChilren.getValue();
}

#ifndef OSG_2_PREP
//! Get the value of the DefaultTreeModel::_sfAskAllowsChilren field.
inline
bool &DefaultTreeModelBase::getAskAllowsChilren(void)
{
    return _sfAskAllowsChilren.getValue();
}
#endif

//! Set the value of the DefaultTreeModel::_sfAskAllowsChilren field.
inline
void DefaultTreeModelBase::setAskAllowsChilren(const bool &value)
{
    _sfAskAllowsChilren.setValue(value);
}


OSG_END_NAMESPACE

