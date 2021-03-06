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


#ifndef _OSGDRAGPARTICLEAFFECTORFIELDS_H_
#define _OSGDRAGPARTICLEAFFECTORFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGContribParticleSystemDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class DragParticleAffector;

OSG_GEN_CONTAINERPTR(DragParticleAffector);

/*! \ingroup GrpContribParticleSystemFieldTraits
    \ingroup GrpLibOSGContribParticleSystem
 */
template <>
struct FieldTraits<DragParticleAffector *> :
    public FieldTraitsFCPtrBase<DragParticleAffector *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<DragParticleAffector *>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_CONTRIBPARTICLESYSTEM_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFDragParticleAffectorPtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFDragParticleAffectorPtr"; }
};

template<> inline
const Char8 *FieldTraits<DragParticleAffector *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecDragParticleAffectorPtr"; 
}

template<> inline
const Char8 *FieldTraits<DragParticleAffector *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecDragParticleAffectorPtr"; 
}

template<> inline
const Char8 *FieldTraits<DragParticleAffector *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakDragParticleAffectorPtr"; 
}

template<> inline
const Char8 *FieldTraits<DragParticleAffector *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdDragParticleAffectorPtr"; 
}

template<> inline
const Char8 *FieldTraits<DragParticleAffector *, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecDragParticleAffectorPtr"; 
}

template<> inline
const Char8 *FieldTraits<DragParticleAffector *, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecDragParticleAffectorPtr"; 
}

template<> inline
const Char8 *FieldTraits<DragParticleAffector *, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakDragParticleAffectorPtr"; 
}

template<> inline
const Char8 *FieldTraits<DragParticleAffector *, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdDragParticleAffectorPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpContribParticleSystemFieldSFields */
typedef PointerSField<DragParticleAffector *,
                      RecordedRefCountPolicy  > SFRecDragParticleAffectorPtr;
/*! \ingroup GrpContribParticleSystemFieldSFields */
typedef PointerSField<DragParticleAffector *,
                      UnrecordedRefCountPolicy> SFUnrecDragParticleAffectorPtr;
/*! \ingroup GrpContribParticleSystemFieldSFields */
typedef PointerSField<DragParticleAffector *,
                      WeakRefCountPolicy      > SFWeakDragParticleAffectorPtr;
/*! \ingroup GrpContribParticleSystemFieldSFields */
typedef PointerSField<DragParticleAffector *,
                      NoRefCountPolicy        > SFUncountedDragParticleAffectorPtr;


/*! \ingroup GrpContribParticleSystemFieldMFields */
typedef PointerMField<DragParticleAffector *,
                      RecordedRefCountPolicy  > MFRecDragParticleAffectorPtr;
/*! \ingroup GrpContribParticleSystemFieldMFields */
typedef PointerMField<DragParticleAffector *,
                      UnrecordedRefCountPolicy> MFUnrecDragParticleAffectorPtr;
/*! \ingroup GrpContribParticleSystemFieldMFields */
typedef PointerMField<DragParticleAffector *,
                      WeakRefCountPolicy      > MFWeakDragParticleAffectorPtr;
/*! \ingroup GrpContribParticleSystemFieldMFields */
typedef PointerMField<DragParticleAffector *,
                      NoRefCountPolicy        > MFUncountedDragParticleAffectorPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpContribParticleSystemFieldSFields \ingroup GrpLibOSGContribParticleSystem */
struct SFRecDragParticleAffectorPtr : 
    public PointerSField<DragParticleAffector *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpContribParticleSystemFieldSFields \ingroup GrpLibOSGContribParticleSystem */
struct SFUnrecDragParticleAffectorPtr : 
    public PointerSField<DragParticleAffector *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribParticleSystemFieldSFields \ingroup GrpLibOSGContribParticleSystem */
struct SFWeakDragParticleAffectorPtr :
    public PointerSField<DragParticleAffector *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpContribParticleSystemFieldSFields \ingroup GrpLibOSGContribParticleSystem */
struct SFUncountedDragParticleAffectorPtr :
    public PointerSField<DragParticleAffector *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpContribParticleSystemFieldMFields \ingroup GrpLibOSGContribParticleSystem */
struct MFRecDragParticleAffectorPtr :
    public PointerMField<DragParticleAffector *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpContribParticleSystemFieldMFields \ingroup GrpLibOSGContribParticleSystem */
struct MFUnrecDragParticleAffectorPtr :
    public PointerMField<DragParticleAffector *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribParticleSystemFieldMFields \ingroup GrpLibOSGContribParticleSystem */
struct MFWeakDragParticleAffectorPtr :
    public PointerMField<DragParticleAffector *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpContribParticleSystemFieldMFields \ingroup GrpLibOSGContribParticleSystem */
struct MFUncountedDragParticleAffectorPtr :
    public PointerMField<DragParticleAffector *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGDRAGPARTICLEAFFECTORFIELDS_H_ */
