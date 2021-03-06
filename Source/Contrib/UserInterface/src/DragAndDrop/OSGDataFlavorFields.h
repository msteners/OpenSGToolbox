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


#ifndef _OSGDATAFLAVORFIELDS_H_
#define _OSGDATAFLAVORFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGContribUserInterfaceDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class DataFlavor;

OSG_GEN_CONTAINERPTR(DataFlavor);

/*! \ingroup GrpContribUserInterfaceFieldTraits
    \ingroup GrpLibOSGContribUserInterface
 */
template <>
struct FieldTraits<DataFlavor *> :
    public FieldTraitsFCPtrBase<DataFlavor *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<DataFlavor *>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_CONTRIBUSERINTERFACE_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFDataFlavorPtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFDataFlavorPtr"; }
};

template<> inline
const Char8 *FieldTraits<DataFlavor *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecDataFlavorPtr"; 
}

template<> inline
const Char8 *FieldTraits<DataFlavor *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecDataFlavorPtr"; 
}

template<> inline
const Char8 *FieldTraits<DataFlavor *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakDataFlavorPtr"; 
}

template<> inline
const Char8 *FieldTraits<DataFlavor *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdDataFlavorPtr"; 
}

template<> inline
const Char8 *FieldTraits<DataFlavor *, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecDataFlavorPtr"; 
}

template<> inline
const Char8 *FieldTraits<DataFlavor *, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecDataFlavorPtr"; 
}

template<> inline
const Char8 *FieldTraits<DataFlavor *, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakDataFlavorPtr"; 
}

template<> inline
const Char8 *FieldTraits<DataFlavor *, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdDataFlavorPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<DataFlavor *,
                      RecordedRefCountPolicy  > SFRecDataFlavorPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<DataFlavor *,
                      UnrecordedRefCountPolicy> SFUnrecDataFlavorPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<DataFlavor *,
                      WeakRefCountPolicy      > SFWeakDataFlavorPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<DataFlavor *,
                      NoRefCountPolicy        > SFUncountedDataFlavorPtr;


/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<DataFlavor *,
                      RecordedRefCountPolicy  > MFRecDataFlavorPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<DataFlavor *,
                      UnrecordedRefCountPolicy> MFUnrecDataFlavorPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<DataFlavor *,
                      WeakRefCountPolicy      > MFWeakDataFlavorPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<DataFlavor *,
                      NoRefCountPolicy        > MFUncountedDataFlavorPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFRecDataFlavorPtr : 
    public PointerSField<DataFlavor *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFUnrecDataFlavorPtr : 
    public PointerSField<DataFlavor *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFWeakDataFlavorPtr :
    public PointerSField<DataFlavor *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFUncountedDataFlavorPtr :
    public PointerSField<DataFlavor *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFRecDataFlavorPtr :
    public PointerMField<DataFlavor *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFUnrecDataFlavorPtr :
    public PointerMField<DataFlavor *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFWeakDataFlavorPtr :
    public PointerMField<DataFlavor *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFUncountedDataFlavorPtr :
    public PointerMField<DataFlavor *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGDATAFLAVORFIELDS_H_ */
