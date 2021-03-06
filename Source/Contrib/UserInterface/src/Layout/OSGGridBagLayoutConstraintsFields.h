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


#ifndef _OSGGRIDBAGLAYOUTCONSTRAINTSFIELDS_H_
#define _OSGGRIDBAGLAYOUTCONSTRAINTSFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGContribUserInterfaceDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class GridBagLayoutConstraints;

OSG_GEN_CONTAINERPTR(GridBagLayoutConstraints);

/*! \ingroup GrpContribUserInterfaceFieldTraits
    \ingroup GrpLibOSGContribUserInterface
 */
template <>
struct FieldTraits<GridBagLayoutConstraints *> :
    public FieldTraitsFCPtrBase<GridBagLayoutConstraints *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<GridBagLayoutConstraints *>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_CONTRIBUSERINTERFACE_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFGridBagLayoutConstraintsPtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFGridBagLayoutConstraintsPtr"; }
};

template<> inline
const Char8 *FieldTraits<GridBagLayoutConstraints *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecGridBagLayoutConstraintsPtr"; 
}

template<> inline
const Char8 *FieldTraits<GridBagLayoutConstraints *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecGridBagLayoutConstraintsPtr"; 
}

template<> inline
const Char8 *FieldTraits<GridBagLayoutConstraints *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakGridBagLayoutConstraintsPtr"; 
}

template<> inline
const Char8 *FieldTraits<GridBagLayoutConstraints *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdGridBagLayoutConstraintsPtr"; 
}

template<> inline
const Char8 *FieldTraits<GridBagLayoutConstraints *, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecGridBagLayoutConstraintsPtr"; 
}

template<> inline
const Char8 *FieldTraits<GridBagLayoutConstraints *, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecGridBagLayoutConstraintsPtr"; 
}

template<> inline
const Char8 *FieldTraits<GridBagLayoutConstraints *, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakGridBagLayoutConstraintsPtr"; 
}

template<> inline
const Char8 *FieldTraits<GridBagLayoutConstraints *, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdGridBagLayoutConstraintsPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<GridBagLayoutConstraints *,
                      RecordedRefCountPolicy  > SFRecGridBagLayoutConstraintsPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<GridBagLayoutConstraints *,
                      UnrecordedRefCountPolicy> SFUnrecGridBagLayoutConstraintsPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<GridBagLayoutConstraints *,
                      WeakRefCountPolicy      > SFWeakGridBagLayoutConstraintsPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<GridBagLayoutConstraints *,
                      NoRefCountPolicy        > SFUncountedGridBagLayoutConstraintsPtr;


/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<GridBagLayoutConstraints *,
                      RecordedRefCountPolicy  > MFRecGridBagLayoutConstraintsPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<GridBagLayoutConstraints *,
                      UnrecordedRefCountPolicy> MFUnrecGridBagLayoutConstraintsPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<GridBagLayoutConstraints *,
                      WeakRefCountPolicy      > MFWeakGridBagLayoutConstraintsPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<GridBagLayoutConstraints *,
                      NoRefCountPolicy        > MFUncountedGridBagLayoutConstraintsPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFRecGridBagLayoutConstraintsPtr : 
    public PointerSField<GridBagLayoutConstraints *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFUnrecGridBagLayoutConstraintsPtr : 
    public PointerSField<GridBagLayoutConstraints *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFWeakGridBagLayoutConstraintsPtr :
    public PointerSField<GridBagLayoutConstraints *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFUncountedGridBagLayoutConstraintsPtr :
    public PointerSField<GridBagLayoutConstraints *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFRecGridBagLayoutConstraintsPtr :
    public PointerMField<GridBagLayoutConstraints *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFUnrecGridBagLayoutConstraintsPtr :
    public PointerMField<GridBagLayoutConstraints *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFWeakGridBagLayoutConstraintsPtr :
    public PointerMField<GridBagLayoutConstraints *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFUncountedGridBagLayoutConstraintsPtr :
    public PointerMField<GridBagLayoutConstraints *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGGRIDBAGLAYOUTCONSTRAINTSFIELDS_H_ */
