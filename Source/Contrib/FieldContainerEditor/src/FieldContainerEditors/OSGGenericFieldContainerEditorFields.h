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


#ifndef _OSGGENERICFIELDCONTAINEREDITORFIELDS_H_
#define _OSGGENERICFIELDCONTAINEREDITORFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGContribFieldContainerEditorDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class GenericFieldContainerEditor;

OSG_GEN_CONTAINERPTR(GenericFieldContainerEditor);

/*! \ingroup GrpContribFieldContainerEditorFieldTraits
    \ingroup GrpLibOSGContribFieldContainerEditor
 */
template <>
struct FieldTraits<GenericFieldContainerEditor *> :
    public FieldTraitsFCPtrBase<GenericFieldContainerEditor *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<GenericFieldContainerEditor *>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_CONTRIBFIELDCONTAINEREDITOR_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFGenericFieldContainerEditorPtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFGenericFieldContainerEditorPtr"; }
};

template<> inline
const Char8 *FieldTraits<GenericFieldContainerEditor *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecGenericFieldContainerEditorPtr"; 
}

template<> inline
const Char8 *FieldTraits<GenericFieldContainerEditor *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecGenericFieldContainerEditorPtr"; 
}

template<> inline
const Char8 *FieldTraits<GenericFieldContainerEditor *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakGenericFieldContainerEditorPtr"; 
}

template<> inline
const Char8 *FieldTraits<GenericFieldContainerEditor *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdGenericFieldContainerEditorPtr"; 
}

template<> inline
const Char8 *FieldTraits<GenericFieldContainerEditor *, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecGenericFieldContainerEditorPtr"; 
}

template<> inline
const Char8 *FieldTraits<GenericFieldContainerEditor *, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecGenericFieldContainerEditorPtr"; 
}

template<> inline
const Char8 *FieldTraits<GenericFieldContainerEditor *, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakGenericFieldContainerEditorPtr"; 
}

template<> inline
const Char8 *FieldTraits<GenericFieldContainerEditor *, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdGenericFieldContainerEditorPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpContribFieldContainerEditorFieldSFields */
typedef PointerSField<GenericFieldContainerEditor *,
                      RecordedRefCountPolicy  > SFRecGenericFieldContainerEditorPtr;
/*! \ingroup GrpContribFieldContainerEditorFieldSFields */
typedef PointerSField<GenericFieldContainerEditor *,
                      UnrecordedRefCountPolicy> SFUnrecGenericFieldContainerEditorPtr;
/*! \ingroup GrpContribFieldContainerEditorFieldSFields */
typedef PointerSField<GenericFieldContainerEditor *,
                      WeakRefCountPolicy      > SFWeakGenericFieldContainerEditorPtr;
/*! \ingroup GrpContribFieldContainerEditorFieldSFields */
typedef PointerSField<GenericFieldContainerEditor *,
                      NoRefCountPolicy        > SFUncountedGenericFieldContainerEditorPtr;


/*! \ingroup GrpContribFieldContainerEditorFieldMFields */
typedef PointerMField<GenericFieldContainerEditor *,
                      RecordedRefCountPolicy  > MFRecGenericFieldContainerEditorPtr;
/*! \ingroup GrpContribFieldContainerEditorFieldMFields */
typedef PointerMField<GenericFieldContainerEditor *,
                      UnrecordedRefCountPolicy> MFUnrecGenericFieldContainerEditorPtr;
/*! \ingroup GrpContribFieldContainerEditorFieldMFields */
typedef PointerMField<GenericFieldContainerEditor *,
                      WeakRefCountPolicy      > MFWeakGenericFieldContainerEditorPtr;
/*! \ingroup GrpContribFieldContainerEditorFieldMFields */
typedef PointerMField<GenericFieldContainerEditor *,
                      NoRefCountPolicy        > MFUncountedGenericFieldContainerEditorPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpContribFieldContainerEditorFieldSFields \ingroup GrpLibOSGContribFieldContainerEditor */
struct SFRecGenericFieldContainerEditorPtr : 
    public PointerSField<GenericFieldContainerEditor *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpContribFieldContainerEditorFieldSFields \ingroup GrpLibOSGContribFieldContainerEditor */
struct SFUnrecGenericFieldContainerEditorPtr : 
    public PointerSField<GenericFieldContainerEditor *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribFieldContainerEditorFieldSFields \ingroup GrpLibOSGContribFieldContainerEditor */
struct SFWeakGenericFieldContainerEditorPtr :
    public PointerSField<GenericFieldContainerEditor *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpContribFieldContainerEditorFieldSFields \ingroup GrpLibOSGContribFieldContainerEditor */
struct SFUncountedGenericFieldContainerEditorPtr :
    public PointerSField<GenericFieldContainerEditor *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpContribFieldContainerEditorFieldMFields \ingroup GrpLibOSGContribFieldContainerEditor */
struct MFRecGenericFieldContainerEditorPtr :
    public PointerMField<GenericFieldContainerEditor *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpContribFieldContainerEditorFieldMFields \ingroup GrpLibOSGContribFieldContainerEditor */
struct MFUnrecGenericFieldContainerEditorPtr :
    public PointerMField<GenericFieldContainerEditor *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribFieldContainerEditorFieldMFields \ingroup GrpLibOSGContribFieldContainerEditor */
struct MFWeakGenericFieldContainerEditorPtr :
    public PointerMField<GenericFieldContainerEditor *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpContribFieldContainerEditorFieldMFields \ingroup GrpLibOSGContribFieldContainerEditor */
struct MFUncountedGenericFieldContainerEditorPtr :
    public PointerMField<GenericFieldContainerEditor *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGGENERICFIELDCONTAINEREDITORFIELDS_H_ */
