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


#ifndef _OSGBUTTONSELECTEDEVENTFIELDS_H_
#define _OSGBUTTONSELECTEDEVENTFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGContribUserInterfaceDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class ButtonSelectedEvent;

OSG_GEN_CONTAINERPTR(ButtonSelectedEvent);

/*! \ingroup GrpContribUserInterfaceFieldTraits
    \ingroup GrpLibOSGContribUserInterface
 */
template <>
struct FieldTraits<ButtonSelectedEvent *> :
    public FieldTraitsFCPtrBase<ButtonSelectedEvent *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<ButtonSelectedEvent *>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_CONTRIBUSERINTERFACE_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFButtonSelectedEventPtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFButtonSelectedEventPtr"; }
};

template<> inline
const Char8 *FieldTraits<ButtonSelectedEvent *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecButtonSelectedEventPtr"; 
}

template<> inline
const Char8 *FieldTraits<ButtonSelectedEvent *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecButtonSelectedEventPtr"; 
}

template<> inline
const Char8 *FieldTraits<ButtonSelectedEvent *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakButtonSelectedEventPtr"; 
}

template<> inline
const Char8 *FieldTraits<ButtonSelectedEvent *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdButtonSelectedEventPtr"; 
}

template<> inline
const Char8 *FieldTraits<ButtonSelectedEvent *, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecButtonSelectedEventPtr"; 
}

template<> inline
const Char8 *FieldTraits<ButtonSelectedEvent *, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecButtonSelectedEventPtr"; 
}

template<> inline
const Char8 *FieldTraits<ButtonSelectedEvent *, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakButtonSelectedEventPtr"; 
}

template<> inline
const Char8 *FieldTraits<ButtonSelectedEvent *, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdButtonSelectedEventPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<ButtonSelectedEvent *,
                      RecordedRefCountPolicy  > SFRecButtonSelectedEventPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<ButtonSelectedEvent *,
                      UnrecordedRefCountPolicy> SFUnrecButtonSelectedEventPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<ButtonSelectedEvent *,
                      WeakRefCountPolicy      > SFWeakButtonSelectedEventPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<ButtonSelectedEvent *,
                      NoRefCountPolicy        > SFUncountedButtonSelectedEventPtr;


/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<ButtonSelectedEvent *,
                      RecordedRefCountPolicy  > MFRecButtonSelectedEventPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<ButtonSelectedEvent *,
                      UnrecordedRefCountPolicy> MFUnrecButtonSelectedEventPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<ButtonSelectedEvent *,
                      WeakRefCountPolicy      > MFWeakButtonSelectedEventPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<ButtonSelectedEvent *,
                      NoRefCountPolicy        > MFUncountedButtonSelectedEventPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFRecButtonSelectedEventPtr : 
    public PointerSField<ButtonSelectedEvent *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFUnrecButtonSelectedEventPtr : 
    public PointerSField<ButtonSelectedEvent *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFWeakButtonSelectedEventPtr :
    public PointerSField<ButtonSelectedEvent *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFUncountedButtonSelectedEventPtr :
    public PointerSField<ButtonSelectedEvent *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFRecButtonSelectedEventPtr :
    public PointerMField<ButtonSelectedEvent *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFUnrecButtonSelectedEventPtr :
    public PointerMField<ButtonSelectedEvent *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFWeakButtonSelectedEventPtr :
    public PointerMField<ButtonSelectedEvent *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFUncountedButtonSelectedEventPtr :
    public PointerMField<ButtonSelectedEvent *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGBUTTONSELECTEDEVENTFIELDS_H_ */
