/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
 *                                                                           *
 *                            www.opensg.org                                 *
 *                                                                           *
 *   contact:  David Kabala (djkabala@gmail.com), Daniel Guilliams           *
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


#ifndef _OSGDISTANCEKILLPARTICLEAFFECTORFIELDS_H_
#define _OSGDISTANCEKILLPARTICLEAFFECTORFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGContribParticleSystemDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class DistanceKillParticleAffector;

OSG_GEN_CONTAINERPTR(DistanceKillParticleAffector);

/*! \ingroup GrpContribParticleSystemFieldTraits
    \ingroup GrpLibOSGContribParticleSystem
 */
template <>
struct FieldTraits<DistanceKillParticleAffector *> :
    public FieldTraitsFCPtrBase<DistanceKillParticleAffector *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<DistanceKillParticleAffector *>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_CONTRIBPARTICLESYSTEM_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFDistanceKillParticleAffectorPtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFDistanceKillParticleAffectorPtr"; }
};

template<> inline
const Char8 *FieldTraits<DistanceKillParticleAffector *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecDistanceKillParticleAffectorPtr"; 
}

template<> inline
const Char8 *FieldTraits<DistanceKillParticleAffector *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecDistanceKillParticleAffectorPtr"; 
}

template<> inline
const Char8 *FieldTraits<DistanceKillParticleAffector *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakDistanceKillParticleAffectorPtr"; 
}

template<> inline
const Char8 *FieldTraits<DistanceKillParticleAffector *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdDistanceKillParticleAffectorPtr"; 
}

template<> inline
const Char8 *FieldTraits<DistanceKillParticleAffector *, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecDistanceKillParticleAffectorPtr"; 
}

template<> inline
const Char8 *FieldTraits<DistanceKillParticleAffector *, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecDistanceKillParticleAffectorPtr"; 
}

template<> inline
const Char8 *FieldTraits<DistanceKillParticleAffector *, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakDistanceKillParticleAffectorPtr"; 
}

template<> inline
const Char8 *FieldTraits<DistanceKillParticleAffector *, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdDistanceKillParticleAffectorPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpContribParticleSystemFieldSFields */
typedef PointerSField<DistanceKillParticleAffector *,
                      RecordedRefCountPolicy  > SFRecDistanceKillParticleAffectorPtr;
/*! \ingroup GrpContribParticleSystemFieldSFields */
typedef PointerSField<DistanceKillParticleAffector *,
                      UnrecordedRefCountPolicy> SFUnrecDistanceKillParticleAffectorPtr;
/*! \ingroup GrpContribParticleSystemFieldSFields */
typedef PointerSField<DistanceKillParticleAffector *,
                      WeakRefCountPolicy      > SFWeakDistanceKillParticleAffectorPtr;
/*! \ingroup GrpContribParticleSystemFieldSFields */
typedef PointerSField<DistanceKillParticleAffector *,
                      NoRefCountPolicy        > SFUncountedDistanceKillParticleAffectorPtr;


/*! \ingroup GrpContribParticleSystemFieldMFields */
typedef PointerMField<DistanceKillParticleAffector *,
                      RecordedRefCountPolicy  > MFRecDistanceKillParticleAffectorPtr;
/*! \ingroup GrpContribParticleSystemFieldMFields */
typedef PointerMField<DistanceKillParticleAffector *,
                      UnrecordedRefCountPolicy> MFUnrecDistanceKillParticleAffectorPtr;
/*! \ingroup GrpContribParticleSystemFieldMFields */
typedef PointerMField<DistanceKillParticleAffector *,
                      WeakRefCountPolicy      > MFWeakDistanceKillParticleAffectorPtr;
/*! \ingroup GrpContribParticleSystemFieldMFields */
typedef PointerMField<DistanceKillParticleAffector *,
                      NoRefCountPolicy        > MFUncountedDistanceKillParticleAffectorPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpContribParticleSystemFieldSFields \ingroup GrpLibOSGContribParticleSystem */
struct SFRecDistanceKillParticleAffectorPtr : 
    public PointerSField<DistanceKillParticleAffector *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpContribParticleSystemFieldSFields \ingroup GrpLibOSGContribParticleSystem */
struct SFUnrecDistanceKillParticleAffectorPtr : 
    public PointerSField<DistanceKillParticleAffector *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribParticleSystemFieldSFields \ingroup GrpLibOSGContribParticleSystem */
struct SFWeakDistanceKillParticleAffectorPtr :
    public PointerSField<DistanceKillParticleAffector *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpContribParticleSystemFieldSFields \ingroup GrpLibOSGContribParticleSystem */
struct SFUncountedDistanceKillParticleAffectorPtr :
    public PointerSField<DistanceKillParticleAffector *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpContribParticleSystemFieldMFields \ingroup GrpLibOSGContribParticleSystem */
struct MFRecDistanceKillParticleAffectorPtr :
    public PointerMField<DistanceKillParticleAffector *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpContribParticleSystemFieldMFields \ingroup GrpLibOSGContribParticleSystem */
struct MFUnrecDistanceKillParticleAffectorPtr :
    public PointerMField<DistanceKillParticleAffector *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribParticleSystemFieldMFields \ingroup GrpLibOSGContribParticleSystem */
struct MFWeakDistanceKillParticleAffectorPtr :
    public PointerMField<DistanceKillParticleAffector *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpContribParticleSystemFieldMFields \ingroup GrpLibOSGContribParticleSystem */
struct MFUncountedDistanceKillParticleAffectorPtr :
    public PointerMField<DistanceKillParticleAffector *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGDISTANCEKILLPARTICLEAFFECTORFIELDS_H_ */
