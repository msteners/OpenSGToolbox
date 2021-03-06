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


#ifndef _OSGUNIFORMPARTICLEAFFECTORFIELDS_H_
#define _OSGUNIFORMPARTICLEAFFECTORFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGContribParticleSystemDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class UniformParticleAffector;

OSG_GEN_CONTAINERPTR(UniformParticleAffector);

/*! \ingroup GrpContribParticleSystemFieldTraits
    \ingroup GrpLibOSGContribParticleSystem
 */
template <>
struct FieldTraits<UniformParticleAffector *> :
    public FieldTraitsFCPtrBase<UniformParticleAffector *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<UniformParticleAffector *>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_CONTRIBPARTICLESYSTEM_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFUniformParticleAffectorPtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFUniformParticleAffectorPtr"; }
};

template<> inline
const Char8 *FieldTraits<UniformParticleAffector *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecUniformParticleAffectorPtr"; 
}

template<> inline
const Char8 *FieldTraits<UniformParticleAffector *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecUniformParticleAffectorPtr"; 
}

template<> inline
const Char8 *FieldTraits<UniformParticleAffector *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakUniformParticleAffectorPtr"; 
}

template<> inline
const Char8 *FieldTraits<UniformParticleAffector *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdUniformParticleAffectorPtr"; 
}

template<> inline
const Char8 *FieldTraits<UniformParticleAffector *, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecUniformParticleAffectorPtr"; 
}

template<> inline
const Char8 *FieldTraits<UniformParticleAffector *, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecUniformParticleAffectorPtr"; 
}

template<> inline
const Char8 *FieldTraits<UniformParticleAffector *, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakUniformParticleAffectorPtr"; 
}

template<> inline
const Char8 *FieldTraits<UniformParticleAffector *, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdUniformParticleAffectorPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpContribParticleSystemFieldSFields */
typedef PointerSField<UniformParticleAffector *,
                      RecordedRefCountPolicy  > SFRecUniformParticleAffectorPtr;
/*! \ingroup GrpContribParticleSystemFieldSFields */
typedef PointerSField<UniformParticleAffector *,
                      UnrecordedRefCountPolicy> SFUnrecUniformParticleAffectorPtr;
/*! \ingroup GrpContribParticleSystemFieldSFields */
typedef PointerSField<UniformParticleAffector *,
                      WeakRefCountPolicy      > SFWeakUniformParticleAffectorPtr;
/*! \ingroup GrpContribParticleSystemFieldSFields */
typedef PointerSField<UniformParticleAffector *,
                      NoRefCountPolicy        > SFUncountedUniformParticleAffectorPtr;


/*! \ingroup GrpContribParticleSystemFieldMFields */
typedef PointerMField<UniformParticleAffector *,
                      RecordedRefCountPolicy  > MFRecUniformParticleAffectorPtr;
/*! \ingroup GrpContribParticleSystemFieldMFields */
typedef PointerMField<UniformParticleAffector *,
                      UnrecordedRefCountPolicy> MFUnrecUniformParticleAffectorPtr;
/*! \ingroup GrpContribParticleSystemFieldMFields */
typedef PointerMField<UniformParticleAffector *,
                      WeakRefCountPolicy      > MFWeakUniformParticleAffectorPtr;
/*! \ingroup GrpContribParticleSystemFieldMFields */
typedef PointerMField<UniformParticleAffector *,
                      NoRefCountPolicy        > MFUncountedUniformParticleAffectorPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpContribParticleSystemFieldSFields \ingroup GrpLibOSGContribParticleSystem */
struct SFRecUniformParticleAffectorPtr : 
    public PointerSField<UniformParticleAffector *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpContribParticleSystemFieldSFields \ingroup GrpLibOSGContribParticleSystem */
struct SFUnrecUniformParticleAffectorPtr : 
    public PointerSField<UniformParticleAffector *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribParticleSystemFieldSFields \ingroup GrpLibOSGContribParticleSystem */
struct SFWeakUniformParticleAffectorPtr :
    public PointerSField<UniformParticleAffector *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpContribParticleSystemFieldSFields \ingroup GrpLibOSGContribParticleSystem */
struct SFUncountedUniformParticleAffectorPtr :
    public PointerSField<UniformParticleAffector *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpContribParticleSystemFieldMFields \ingroup GrpLibOSGContribParticleSystem */
struct MFRecUniformParticleAffectorPtr :
    public PointerMField<UniformParticleAffector *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpContribParticleSystemFieldMFields \ingroup GrpLibOSGContribParticleSystem */
struct MFUnrecUniformParticleAffectorPtr :
    public PointerMField<UniformParticleAffector *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribParticleSystemFieldMFields \ingroup GrpLibOSGContribParticleSystem */
struct MFWeakUniformParticleAffectorPtr :
    public PointerMField<UniformParticleAffector *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpContribParticleSystemFieldMFields \ingroup GrpLibOSGContribParticleSystem */
struct MFUncountedUniformParticleAffectorPtr :
    public PointerMField<UniformParticleAffector *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGUNIFORMPARTICLEAFFECTORFIELDS_H_ */
