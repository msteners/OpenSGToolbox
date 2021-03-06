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


#ifndef _OSGSINEWAVEPARTICLEAFFECTORFIELDS_H_
#define _OSGSINEWAVEPARTICLEAFFECTORFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGContribParticleSystemDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class SineWaveParticleAffector;

OSG_GEN_CONTAINERPTR(SineWaveParticleAffector);

/*! \ingroup GrpContribParticleSystemFieldTraits
    \ingroup GrpLibOSGContribParticleSystem
 */
template <>
struct FieldTraits<SineWaveParticleAffector *> :
    public FieldTraitsFCPtrBase<SineWaveParticleAffector *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<SineWaveParticleAffector *>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_CONTRIBPARTICLESYSTEM_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFSineWaveParticleAffectorPtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFSineWaveParticleAffectorPtr"; }
};

template<> inline
const Char8 *FieldTraits<SineWaveParticleAffector *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecSineWaveParticleAffectorPtr"; 
}

template<> inline
const Char8 *FieldTraits<SineWaveParticleAffector *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecSineWaveParticleAffectorPtr"; 
}

template<> inline
const Char8 *FieldTraits<SineWaveParticleAffector *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakSineWaveParticleAffectorPtr"; 
}

template<> inline
const Char8 *FieldTraits<SineWaveParticleAffector *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdSineWaveParticleAffectorPtr"; 
}

template<> inline
const Char8 *FieldTraits<SineWaveParticleAffector *, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecSineWaveParticleAffectorPtr"; 
}

template<> inline
const Char8 *FieldTraits<SineWaveParticleAffector *, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecSineWaveParticleAffectorPtr"; 
}

template<> inline
const Char8 *FieldTraits<SineWaveParticleAffector *, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakSineWaveParticleAffectorPtr"; 
}

template<> inline
const Char8 *FieldTraits<SineWaveParticleAffector *, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdSineWaveParticleAffectorPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpContribParticleSystemFieldSFields */
typedef PointerSField<SineWaveParticleAffector *,
                      RecordedRefCountPolicy  > SFRecSineWaveParticleAffectorPtr;
/*! \ingroup GrpContribParticleSystemFieldSFields */
typedef PointerSField<SineWaveParticleAffector *,
                      UnrecordedRefCountPolicy> SFUnrecSineWaveParticleAffectorPtr;
/*! \ingroup GrpContribParticleSystemFieldSFields */
typedef PointerSField<SineWaveParticleAffector *,
                      WeakRefCountPolicy      > SFWeakSineWaveParticleAffectorPtr;
/*! \ingroup GrpContribParticleSystemFieldSFields */
typedef PointerSField<SineWaveParticleAffector *,
                      NoRefCountPolicy        > SFUncountedSineWaveParticleAffectorPtr;


/*! \ingroup GrpContribParticleSystemFieldMFields */
typedef PointerMField<SineWaveParticleAffector *,
                      RecordedRefCountPolicy  > MFRecSineWaveParticleAffectorPtr;
/*! \ingroup GrpContribParticleSystemFieldMFields */
typedef PointerMField<SineWaveParticleAffector *,
                      UnrecordedRefCountPolicy> MFUnrecSineWaveParticleAffectorPtr;
/*! \ingroup GrpContribParticleSystemFieldMFields */
typedef PointerMField<SineWaveParticleAffector *,
                      WeakRefCountPolicy      > MFWeakSineWaveParticleAffectorPtr;
/*! \ingroup GrpContribParticleSystemFieldMFields */
typedef PointerMField<SineWaveParticleAffector *,
                      NoRefCountPolicy        > MFUncountedSineWaveParticleAffectorPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpContribParticleSystemFieldSFields \ingroup GrpLibOSGContribParticleSystem */
struct SFRecSineWaveParticleAffectorPtr : 
    public PointerSField<SineWaveParticleAffector *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpContribParticleSystemFieldSFields \ingroup GrpLibOSGContribParticleSystem */
struct SFUnrecSineWaveParticleAffectorPtr : 
    public PointerSField<SineWaveParticleAffector *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribParticleSystemFieldSFields \ingroup GrpLibOSGContribParticleSystem */
struct SFWeakSineWaveParticleAffectorPtr :
    public PointerSField<SineWaveParticleAffector *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpContribParticleSystemFieldSFields \ingroup GrpLibOSGContribParticleSystem */
struct SFUncountedSineWaveParticleAffectorPtr :
    public PointerSField<SineWaveParticleAffector *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpContribParticleSystemFieldMFields \ingroup GrpLibOSGContribParticleSystem */
struct MFRecSineWaveParticleAffectorPtr :
    public PointerMField<SineWaveParticleAffector *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpContribParticleSystemFieldMFields \ingroup GrpLibOSGContribParticleSystem */
struct MFUnrecSineWaveParticleAffectorPtr :
    public PointerMField<SineWaveParticleAffector *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribParticleSystemFieldMFields \ingroup GrpLibOSGContribParticleSystem */
struct MFWeakSineWaveParticleAffectorPtr :
    public PointerMField<SineWaveParticleAffector *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpContribParticleSystemFieldMFields \ingroup GrpLibOSGContribParticleSystem */
struct MFUncountedSineWaveParticleAffectorPtr :
    public PointerMField<SineWaveParticleAffector *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGSINEWAVEPARTICLEAFFECTORFIELDS_H_ */
