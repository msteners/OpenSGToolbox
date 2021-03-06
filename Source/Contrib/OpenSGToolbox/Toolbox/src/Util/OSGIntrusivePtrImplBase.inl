/*---------------------------------------------------------------------------*\
 *                        OpenSG ToolBox Toolbox                             *
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
#include <OpenSG/OSGConfig.h>


namespace boost
{

inline
void intrusive_ptr_add_ref(osg::IntrusivePtrImplBase * p)
{
    ++(p->_ReferenceCount);
}

}

OSG_BEGIN_NAMESPACE

inline
IntrusivePtrImplBase::IntrusivePtrImplBase(void) : _ReferenceCount(0)
{
}

inline
IntrusivePtrImplBase::IntrusivePtrImplBase(const IntrusivePtrImplBase& source) : _ReferenceCount(0)
{
}

inline
void IntrusivePtrImplBase::operator =(const IntrusivePtrImplBase& source)
{
}

OSG_END_NAMESPACE
