/*---------------------------------------------------------------------------*\
 *                     OpenSG ToolBox UserInterface                          *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                         www.vrac.iastate.edu                              *
 *                                                                           *
 *                          Authors: David Kabala                            *
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


#ifndef _OSGCARBONWINDOWEVENTPRODUCERFIELDS_H_
#define _OSGCARBONWINDOWEVENTPRODUCERFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include <OpenSG/OSGConfig.h>

#include <OpenSG/OSGFieldContainerPtr.h>
#include <OpenSG/OSGNodeCoreFieldDataType.h>
#include "OSGInputDef.h"

#include "WindowSystem/OSGWindowEventProducerFields.h"

OSG_BEGIN_NAMESPACE

class CarbonWindowEventProducer;

#if !defined(OSG_DO_DOC)   // created as a dummy class, remove to prevent doubles
//! CarbonWindowEventProducerPtr

typedef FCPtr<WindowEventProducerPtr, CarbonWindowEventProducer> CarbonWindowEventProducerPtr;

#endif

#if !defined(OSG_DO_DOC) || (OSG_DOC_LEVEL >= 3)
/*! \ingroup GrpInputFieldTraits
 */
#if !defined(OSG_DOC_DEV_TRAITS)
/*! \hideinhierarchy */
#endif

template <>
struct FieldDataTraits<CarbonWindowEventProducerPtr> : 
    public FieldTraitsRecurseMapper<CarbonWindowEventProducerPtr, true>
{
    static DataType             _type;                       

    enum                        { StringConvertable = 0x00 };
    enum                        { bHasParent        = 0x01 };

    static DataType   &getType (void) { return _type;        }

    static const char *getSName(void) { return "SFCarbonWindowEventProducerPtr"; }
    static const char *getMName(void) { return "MFCarbonWindowEventProducerPtr"; }
};

#if !defined(OSG_DOC_DEV_TRAITS)
/*! \class  FieldTraitsRecurseMapper<CarbonWindowEventProducerPtr, true>
    \hideinhierarchy
 */
#endif

#endif // !defined(OSG_DO_DOC) || (OSG_DOC_LEVEL >= 3)


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_FIELD_TYPEDEFS)
/*! \ingroup GrpInputFieldSingle */

typedef SField<CarbonWindowEventProducerPtr> SFCarbonWindowEventProducerPtr;
#endif

#ifndef OSG_COMPILECARBONWINDOWEVENTPRODUCERINST
OSG_DLLEXPORT_DECL1(SField, CarbonWindowEventProducerPtr, OSG_INPUTLIB_DLLTMPLMAPPING)
#endif

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_FIELD_TYPEDEFS)
/*! \ingroup GrpInputFieldMulti */

typedef MField<CarbonWindowEventProducerPtr> MFCarbonWindowEventProducerPtr;
#endif

#ifndef OSG_COMPILECARBONWINDOWEVENTPRODUCERINST
OSG_DLLEXPORT_DECL1(MField, CarbonWindowEventProducerPtr, OSG_INPUTLIB_DLLTMPLMAPPING)
#endif

OSG_END_NAMESPACE

#endif /* _OSGCARBONWINDOWEVENTPRODUCERFIELDS_H_ */
