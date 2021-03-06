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


#ifndef _OSGFMODSOUNDFIELDS_H_
#define _OSGFMODSOUNDFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGContribSoundDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class FModSound;

OSG_GEN_CONTAINERPTR(FModSound);

/*! \ingroup GrpContribSoundFieldTraits
    \ingroup GrpLibOSGContribSound
 */
template <>
struct FieldTraits<FModSound *> :
    public FieldTraitsFCPtrBase<FModSound *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<FModSound *>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_CONTRIBSOUND_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFFModSoundPtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFFModSoundPtr"; }
};

template<> inline
const Char8 *FieldTraits<FModSound *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecFModSoundPtr"; 
}

template<> inline
const Char8 *FieldTraits<FModSound *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecFModSoundPtr"; 
}

template<> inline
const Char8 *FieldTraits<FModSound *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakFModSoundPtr"; 
}

template<> inline
const Char8 *FieldTraits<FModSound *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdFModSoundPtr"; 
}

template<> inline
const Char8 *FieldTraits<FModSound *, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecFModSoundPtr"; 
}

template<> inline
const Char8 *FieldTraits<FModSound *, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecFModSoundPtr"; 
}

template<> inline
const Char8 *FieldTraits<FModSound *, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakFModSoundPtr"; 
}

template<> inline
const Char8 *FieldTraits<FModSound *, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdFModSoundPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpContribSoundFieldSFields */
typedef PointerSField<FModSound *,
                      RecordedRefCountPolicy  > SFRecFModSoundPtr;
/*! \ingroup GrpContribSoundFieldSFields */
typedef PointerSField<FModSound *,
                      UnrecordedRefCountPolicy> SFUnrecFModSoundPtr;
/*! \ingroup GrpContribSoundFieldSFields */
typedef PointerSField<FModSound *,
                      WeakRefCountPolicy      > SFWeakFModSoundPtr;
/*! \ingroup GrpContribSoundFieldSFields */
typedef PointerSField<FModSound *,
                      NoRefCountPolicy        > SFUncountedFModSoundPtr;


/*! \ingroup GrpContribSoundFieldMFields */
typedef PointerMField<FModSound *,
                      RecordedRefCountPolicy  > MFRecFModSoundPtr;
/*! \ingroup GrpContribSoundFieldMFields */
typedef PointerMField<FModSound *,
                      UnrecordedRefCountPolicy> MFUnrecFModSoundPtr;
/*! \ingroup GrpContribSoundFieldMFields */
typedef PointerMField<FModSound *,
                      WeakRefCountPolicy      > MFWeakFModSoundPtr;
/*! \ingroup GrpContribSoundFieldMFields */
typedef PointerMField<FModSound *,
                      NoRefCountPolicy        > MFUncountedFModSoundPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpContribSoundFieldSFields \ingroup GrpLibOSGContribSound */
struct SFRecFModSoundPtr : 
    public PointerSField<FModSound *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpContribSoundFieldSFields \ingroup GrpLibOSGContribSound */
struct SFUnrecFModSoundPtr : 
    public PointerSField<FModSound *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribSoundFieldSFields \ingroup GrpLibOSGContribSound */
struct SFWeakFModSoundPtr :
    public PointerSField<FModSound *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpContribSoundFieldSFields \ingroup GrpLibOSGContribSound */
struct SFUncountedFModSoundPtr :
    public PointerSField<FModSound *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpContribSoundFieldMFields \ingroup GrpLibOSGContribSound */
struct MFRecFModSoundPtr :
    public PointerMField<FModSound *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpContribSoundFieldMFields \ingroup GrpLibOSGContribSound */
struct MFUnrecFModSoundPtr :
    public PointerMField<FModSound *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribSoundFieldMFields \ingroup GrpLibOSGContribSound */
struct MFWeakFModSoundPtr :
    public PointerMField<FModSound *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpContribSoundFieldMFields \ingroup GrpLibOSGContribSound */
struct MFUncountedFModSoundPtr :
    public PointerMField<FModSound *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGFMODSOUNDFIELDS_H_ */
