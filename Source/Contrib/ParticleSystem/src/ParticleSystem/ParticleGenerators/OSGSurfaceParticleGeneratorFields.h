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


#ifndef _OSGSURFACEPARTICLEGENERATORFIELDS_H_
#define _OSGSURFACEPARTICLEGENERATORFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGContribParticleSystemDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class SurfaceParticleGenerator;

OSG_GEN_CONTAINERPTR(SurfaceParticleGenerator);

/*! \ingroup GrpContribParticleSystemFieldTraits
    \ingroup GrpLibOSGContribParticleSystem
 */
template <>
struct FieldTraits<SurfaceParticleGenerator *> :
    public FieldTraitsFCPtrBase<SurfaceParticleGenerator *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<SurfaceParticleGenerator *>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_CONTRIBPARTICLESYSTEM_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFSurfaceParticleGeneratorPtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFSurfaceParticleGeneratorPtr"; }
};

template<> inline
const Char8 *FieldTraits<SurfaceParticleGenerator *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecSurfaceParticleGeneratorPtr"; 
}

template<> inline
const Char8 *FieldTraits<SurfaceParticleGenerator *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecSurfaceParticleGeneratorPtr"; 
}

template<> inline
const Char8 *FieldTraits<SurfaceParticleGenerator *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakSurfaceParticleGeneratorPtr"; 
}

template<> inline
const Char8 *FieldTraits<SurfaceParticleGenerator *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdSurfaceParticleGeneratorPtr"; 
}

template<> inline
const Char8 *FieldTraits<SurfaceParticleGenerator *, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecSurfaceParticleGeneratorPtr"; 
}

template<> inline
const Char8 *FieldTraits<SurfaceParticleGenerator *, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecSurfaceParticleGeneratorPtr"; 
}

template<> inline
const Char8 *FieldTraits<SurfaceParticleGenerator *, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakSurfaceParticleGeneratorPtr"; 
}

template<> inline
const Char8 *FieldTraits<SurfaceParticleGenerator *, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdSurfaceParticleGeneratorPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpContribParticleSystemFieldSFields */
typedef PointerSField<SurfaceParticleGenerator *,
                      RecordedRefCountPolicy  > SFRecSurfaceParticleGeneratorPtr;
/*! \ingroup GrpContribParticleSystemFieldSFields */
typedef PointerSField<SurfaceParticleGenerator *,
                      UnrecordedRefCountPolicy> SFUnrecSurfaceParticleGeneratorPtr;
/*! \ingroup GrpContribParticleSystemFieldSFields */
typedef PointerSField<SurfaceParticleGenerator *,
                      WeakRefCountPolicy      > SFWeakSurfaceParticleGeneratorPtr;
/*! \ingroup GrpContribParticleSystemFieldSFields */
typedef PointerSField<SurfaceParticleGenerator *,
                      NoRefCountPolicy        > SFUncountedSurfaceParticleGeneratorPtr;


/*! \ingroup GrpContribParticleSystemFieldMFields */
typedef PointerMField<SurfaceParticleGenerator *,
                      RecordedRefCountPolicy  > MFRecSurfaceParticleGeneratorPtr;
/*! \ingroup GrpContribParticleSystemFieldMFields */
typedef PointerMField<SurfaceParticleGenerator *,
                      UnrecordedRefCountPolicy> MFUnrecSurfaceParticleGeneratorPtr;
/*! \ingroup GrpContribParticleSystemFieldMFields */
typedef PointerMField<SurfaceParticleGenerator *,
                      WeakRefCountPolicy      > MFWeakSurfaceParticleGeneratorPtr;
/*! \ingroup GrpContribParticleSystemFieldMFields */
typedef PointerMField<SurfaceParticleGenerator *,
                      NoRefCountPolicy        > MFUncountedSurfaceParticleGeneratorPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpContribParticleSystemFieldSFields \ingroup GrpLibOSGContribParticleSystem */
struct SFRecSurfaceParticleGeneratorPtr : 
    public PointerSField<SurfaceParticleGenerator *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpContribParticleSystemFieldSFields \ingroup GrpLibOSGContribParticleSystem */
struct SFUnrecSurfaceParticleGeneratorPtr : 
    public PointerSField<SurfaceParticleGenerator *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribParticleSystemFieldSFields \ingroup GrpLibOSGContribParticleSystem */
struct SFWeakSurfaceParticleGeneratorPtr :
    public PointerSField<SurfaceParticleGenerator *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpContribParticleSystemFieldSFields \ingroup GrpLibOSGContribParticleSystem */
struct SFUncountedSurfaceParticleGeneratorPtr :
    public PointerSField<SurfaceParticleGenerator *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpContribParticleSystemFieldMFields \ingroup GrpLibOSGContribParticleSystem */
struct MFRecSurfaceParticleGeneratorPtr :
    public PointerMField<SurfaceParticleGenerator *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpContribParticleSystemFieldMFields \ingroup GrpLibOSGContribParticleSystem */
struct MFUnrecSurfaceParticleGeneratorPtr :
    public PointerMField<SurfaceParticleGenerator *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribParticleSystemFieldMFields \ingroup GrpLibOSGContribParticleSystem */
struct MFWeakSurfaceParticleGeneratorPtr :
    public PointerMField<SurfaceParticleGenerator *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpContribParticleSystemFieldMFields \ingroup GrpLibOSGContribParticleSystem */
struct MFUncountedSurfaceParticleGeneratorPtr :
    public PointerMField<SurfaceParticleGenerator *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGSURFACEPARTICLEGENERATORFIELDS_H_ */
