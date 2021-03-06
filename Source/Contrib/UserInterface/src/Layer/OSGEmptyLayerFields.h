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


#ifndef _OSGEMPTYLAYERFIELDS_H_
#define _OSGEMPTYLAYERFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGContribUserInterfaceDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class EmptyLayer;

OSG_GEN_CONTAINERPTR(EmptyLayer);

/*! \ingroup GrpContribUserInterfaceFieldTraits
    \ingroup GrpLibOSGContribUserInterface
 */
template <>
struct FieldTraits<EmptyLayer *> :
    public FieldTraitsFCPtrBase<EmptyLayer *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<EmptyLayer *>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_CONTRIBUSERINTERFACE_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFEmptyLayerPtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFEmptyLayerPtr"; }
};

template<> inline
const Char8 *FieldTraits<EmptyLayer *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecEmptyLayerPtr"; 
}

template<> inline
const Char8 *FieldTraits<EmptyLayer *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecEmptyLayerPtr"; 
}

template<> inline
const Char8 *FieldTraits<EmptyLayer *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakEmptyLayerPtr"; 
}

template<> inline
const Char8 *FieldTraits<EmptyLayer *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdEmptyLayerPtr"; 
}

template<> inline
const Char8 *FieldTraits<EmptyLayer *, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecEmptyLayerPtr"; 
}

template<> inline
const Char8 *FieldTraits<EmptyLayer *, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecEmptyLayerPtr"; 
}

template<> inline
const Char8 *FieldTraits<EmptyLayer *, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakEmptyLayerPtr"; 
}

template<> inline
const Char8 *FieldTraits<EmptyLayer *, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdEmptyLayerPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<EmptyLayer *,
                      RecordedRefCountPolicy  > SFRecEmptyLayerPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<EmptyLayer *,
                      UnrecordedRefCountPolicy> SFUnrecEmptyLayerPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<EmptyLayer *,
                      WeakRefCountPolicy      > SFWeakEmptyLayerPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<EmptyLayer *,
                      NoRefCountPolicy        > SFUncountedEmptyLayerPtr;


/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<EmptyLayer *,
                      RecordedRefCountPolicy  > MFRecEmptyLayerPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<EmptyLayer *,
                      UnrecordedRefCountPolicy> MFUnrecEmptyLayerPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<EmptyLayer *,
                      WeakRefCountPolicy      > MFWeakEmptyLayerPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<EmptyLayer *,
                      NoRefCountPolicy        > MFUncountedEmptyLayerPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFRecEmptyLayerPtr : 
    public PointerSField<EmptyLayer *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFUnrecEmptyLayerPtr : 
    public PointerSField<EmptyLayer *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFWeakEmptyLayerPtr :
    public PointerSField<EmptyLayer *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFUncountedEmptyLayerPtr :
    public PointerSField<EmptyLayer *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFRecEmptyLayerPtr :
    public PointerMField<EmptyLayer *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFUnrecEmptyLayerPtr :
    public PointerMField<EmptyLayer *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFWeakEmptyLayerPtr :
    public PointerMField<EmptyLayer *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFUncountedEmptyLayerPtr :
    public PointerMField<EmptyLayer *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGEMPTYLAYERFIELDS_H_ */
