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


#ifndef _OSGKEYFRAMEROTATIONSEQUENCEFIELDS_H_
#define _OSGKEYFRAMEROTATIONSEQUENCEFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGDynamicsDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class KeyframeRotationSequence;

OSG_GEN_CONTAINERPTR(KeyframeRotationSequence);

/*! \ingroup GrpDynamicsFieldTraits
    \ingroup GrpLibOSGDynamics
 */
template <>
struct FieldTraits<KeyframeRotationSequence *> :
    public FieldTraitsFCPtrBase<KeyframeRotationSequence *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<KeyframeRotationSequence *>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_DYNAMICS_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFKeyframeRotationSequencePtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFKeyframeRotationSequencePtr"; }
};

template<> inline
const Char8 *FieldTraits<KeyframeRotationSequence *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecKeyframeRotationSequencePtr"; 
}

template<> inline
const Char8 *FieldTraits<KeyframeRotationSequence *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecKeyframeRotationSequencePtr"; 
}

template<> inline
const Char8 *FieldTraits<KeyframeRotationSequence *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakKeyframeRotationSequencePtr"; 
}

template<> inline
const Char8 *FieldTraits<KeyframeRotationSequence *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdKeyframeRotationSequencePtr"; 
}

template<> inline
const Char8 *FieldTraits<KeyframeRotationSequence *, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecKeyframeRotationSequencePtr"; 
}

template<> inline
const Char8 *FieldTraits<KeyframeRotationSequence *, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecKeyframeRotationSequencePtr"; 
}

template<> inline
const Char8 *FieldTraits<KeyframeRotationSequence *, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakKeyframeRotationSequencePtr"; 
}

template<> inline
const Char8 *FieldTraits<KeyframeRotationSequence *, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdKeyframeRotationSequencePtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpDynamicsFieldSFields */
typedef PointerSField<KeyframeRotationSequence *,
                      RecordedRefCountPolicy  > SFRecKeyframeRotationSequencePtr;
/*! \ingroup GrpDynamicsFieldSFields */
typedef PointerSField<KeyframeRotationSequence *,
                      UnrecordedRefCountPolicy> SFUnrecKeyframeRotationSequencePtr;
/*! \ingroup GrpDynamicsFieldSFields */
typedef PointerSField<KeyframeRotationSequence *,
                      WeakRefCountPolicy      > SFWeakKeyframeRotationSequencePtr;
/*! \ingroup GrpDynamicsFieldSFields */
typedef PointerSField<KeyframeRotationSequence *,
                      NoRefCountPolicy        > SFUncountedKeyframeRotationSequencePtr;


/*! \ingroup GrpDynamicsFieldMFields */
typedef PointerMField<KeyframeRotationSequence *,
                      RecordedRefCountPolicy  > MFRecKeyframeRotationSequencePtr;
/*! \ingroup GrpDynamicsFieldMFields */
typedef PointerMField<KeyframeRotationSequence *,
                      UnrecordedRefCountPolicy> MFUnrecKeyframeRotationSequencePtr;
/*! \ingroup GrpDynamicsFieldMFields */
typedef PointerMField<KeyframeRotationSequence *,
                      WeakRefCountPolicy      > MFWeakKeyframeRotationSequencePtr;
/*! \ingroup GrpDynamicsFieldMFields */
typedef PointerMField<KeyframeRotationSequence *,
                      NoRefCountPolicy        > MFUncountedKeyframeRotationSequencePtr;




#else // these are the doxygen hacks

/*! \ingroup GrpDynamicsFieldSFields \ingroup GrpLibOSGDynamics */
struct SFRecKeyframeRotationSequencePtr : 
    public PointerSField<KeyframeRotationSequence *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpDynamicsFieldSFields \ingroup GrpLibOSGDynamics */
struct SFUnrecKeyframeRotationSequencePtr : 
    public PointerSField<KeyframeRotationSequence *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpDynamicsFieldSFields \ingroup GrpLibOSGDynamics */
struct SFWeakKeyframeRotationSequencePtr :
    public PointerSField<KeyframeRotationSequence *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpDynamicsFieldSFields \ingroup GrpLibOSGDynamics */
struct SFUncountedKeyframeRotationSequencePtr :
    public PointerSField<KeyframeRotationSequence *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpDynamicsFieldMFields \ingroup GrpLibOSGDynamics */
struct MFRecKeyframeRotationSequencePtr :
    public PointerMField<KeyframeRotationSequence *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpDynamicsFieldMFields \ingroup GrpLibOSGDynamics */
struct MFUnrecKeyframeRotationSequencePtr :
    public PointerMField<KeyframeRotationSequence *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpDynamicsFieldMFields \ingroup GrpLibOSGDynamics */
struct MFWeakKeyframeRotationSequencePtr :
    public PointerMField<KeyframeRotationSequence *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpDynamicsFieldMFields \ingroup GrpLibOSGDynamics */
struct MFUncountedKeyframeRotationSequencePtr :
    public PointerMField<KeyframeRotationSequence *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGKEYFRAMEROTATIONSEQUENCEFIELDS_H_ */
