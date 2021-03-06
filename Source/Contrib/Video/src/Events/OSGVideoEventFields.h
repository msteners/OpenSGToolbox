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


#ifndef _OSGVIDEOEVENTFIELDS_H_
#define _OSGVIDEOEVENTFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGContribVideoDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class VideoEvent;

OSG_GEN_CONTAINERPTR(VideoEvent);

/*! \ingroup GrpContribVideoFieldTraits
    \ingroup GrpLibOSGContribVideo
 */
template <>
struct FieldTraits<VideoEvent *> :
    public FieldTraitsFCPtrBase<VideoEvent *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<VideoEvent *>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_CONTRIBVIDEO_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFVideoEventPtr"; }
};

template<> inline
const Char8 *FieldTraits<VideoEvent *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecVideoEventPtr"; 
}

template<> inline
const Char8 *FieldTraits<VideoEvent *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecVideoEventPtr"; 
}

template<> inline
const Char8 *FieldTraits<VideoEvent *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakVideoEventPtr"; 
}

template<> inline
const Char8 *FieldTraits<VideoEvent *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdVideoEventPtr"; 
}



#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpContribVideoFieldSFields */
typedef PointerSField<VideoEvent *,
                      RecordedRefCountPolicy  > SFRecVideoEventPtr;
/*! \ingroup GrpContribVideoFieldSFields */
typedef PointerSField<VideoEvent *,
                      UnrecordedRefCountPolicy> SFUnrecVideoEventPtr;
/*! \ingroup GrpContribVideoFieldSFields */
typedef PointerSField<VideoEvent *,
                      WeakRefCountPolicy      > SFWeakVideoEventPtr;
/*! \ingroup GrpContribVideoFieldSFields */
typedef PointerSField<VideoEvent *,
                      NoRefCountPolicy        > SFUncountedVideoEventPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpContribVideoFieldSFields \ingroup GrpLibOSGContribVideo */
struct SFRecVideoEventPtr : 
    public PointerSField<VideoEvent *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpContribVideoFieldSFields \ingroup GrpLibOSGContribVideo */
struct SFUnrecVideoEventPtr : 
    public PointerSField<VideoEvent *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribVideoFieldSFields \ingroup GrpLibOSGContribVideo */
struct SFWeakVideoEventPtr :
    public PointerSField<VideoEvent *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpContribVideoFieldSFields \ingroup GrpLibOSGContribVideo */
struct SFUncountedVideoEventPtr :
    public PointerSField<VideoEvent *,
                         NoRefCountPolicy> {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGVIDEOEVENTFIELDS_H_ */
