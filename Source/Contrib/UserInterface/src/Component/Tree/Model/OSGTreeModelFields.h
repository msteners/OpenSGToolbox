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

/*****************************************************************************\
 *****************************************************************************
 **                                                                         **
 **                  This file is automatically generated.                  **
 **                                                                         **
 **          Any changes made to this file WILL be lost when it is          **
 **           regenerated, which can become necessary at any time.          **
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGTREEMODELFIELDS_H_
#define _OSGTREEMODELFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGContribUserInterfaceDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class TreeModel;

OSG_GEN_CONTAINERPTR(TreeModel);

/*! \ingroup GrpContribUserInterfaceFieldTraits
    \ingroup GrpLibOSGContribUserInterface
 */
template <>
struct FieldTraits<TreeModel *> :
    public FieldTraitsFCPtrBase<TreeModel *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<TreeModel *>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_CONTRIBUSERINTERFACE_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFTreeModelPtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFTreeModelPtr"; }
};

template<> inline
const Char8 *FieldTraits<TreeModel *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecTreeModelPtr"; 
}

template<> inline
const Char8 *FieldTraits<TreeModel *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecTreeModelPtr"; 
}

template<> inline
const Char8 *FieldTraits<TreeModel *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakTreeModelPtr"; 
}

template<> inline
const Char8 *FieldTraits<TreeModel *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdTreeModelPtr"; 
}

template<> inline
const Char8 *FieldTraits<TreeModel *, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecTreeModelPtr"; 
}

template<> inline
const Char8 *FieldTraits<TreeModel *, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecTreeModelPtr"; 
}

template<> inline
const Char8 *FieldTraits<TreeModel *, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakTreeModelPtr"; 
}

template<> inline
const Char8 *FieldTraits<TreeModel *, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdTreeModelPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<TreeModel *,
                      RecordedRefCountPolicy  > SFRecTreeModelPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<TreeModel *,
                      UnrecordedRefCountPolicy> SFUnrecTreeModelPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<TreeModel *,
                      WeakRefCountPolicy      > SFWeakTreeModelPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<TreeModel *,
                      NoRefCountPolicy        > SFUncountedTreeModelPtr;


/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<TreeModel *,
                      RecordedRefCountPolicy  > MFRecTreeModelPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<TreeModel *,
                      UnrecordedRefCountPolicy> MFUnrecTreeModelPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<TreeModel *,
                      WeakRefCountPolicy      > MFWeakTreeModelPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<TreeModel *,
                      NoRefCountPolicy        > MFUncountedTreeModelPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFRecTreeModelPtr : 
    public PointerSField<TreeModel *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFUnrecTreeModelPtr : 
    public PointerSField<TreeModel *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFWeakTreeModelPtr :
    public PointerSField<TreeModel *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFUncountedTreeModelPtr :
    public PointerSField<TreeModel *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFRecTreeModelPtr :
    public PointerMField<TreeModel *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFUnrecTreeModelPtr :
    public PointerMField<TreeModel *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFWeakTreeModelPtr :
    public PointerMField<TreeModel *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFUncountedTreeModelPtr :
    public PointerMField<TreeModel *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGTREEMODELFIELDS_H_ */
