/*---------------------------------------------------------------------------*\
 *                     OpenSG ToolBox UserInterface                          *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                         www.vrac.iastate.edu                              *
 *                                                                           *
 *   Authors: David Kabala, Alden Peterson, Lee Zaniewski, Jonathan Flory    *
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
 **     Do not change this file, changes should be done in the derived      **
 **     class UIDrawingSurface
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGUIDRAWINGSURFACEBASE_H_
#define _OSGUIDRAWINGSURFACEBASE_H_
#ifdef __sgi
#pragma once
#endif


#include <OpenSG/OSGConfig.h>
#include "OSGUserInterfaceDef.h"

#include <OpenSG/OSGBaseTypes.h>
#include <OpenSG/OSGRefPtr.h>
#include <OpenSG/OSGCoredNodePtr.h>

#include <OpenSG/OSGFieldContainer.h> // Parent

#include "Component/Container/Window/OSGInternalWindowFields.h" // InternalWindows type
#include "Component/Container/Window/OSGInternalWindowFields.h" // FocusedWindow type
#include <OpenSG/Input/OSGWindowEventProducer.h> // EventProducer type
#include "Graphics/OSGGraphics.h" // Graphics type
#include "UIDrawingSurface/OSGUIDrawingSurfaceMouseTransformFunctorFields.h" // MouseTransformFunctor type
#include <OpenSG/OSGVec2sFields.h> // Size type

#include "OSGUIDrawingSurfaceFields.h"

OSG_BEGIN_NAMESPACE

class UIDrawingSurface;
class BinaryDataHandler;

//! \brief UIDrawingSurface Base Class.

class OSG_USERINTERFACELIB_DLLMAPPING UIDrawingSurfaceBase : public FieldContainer
{
  private:

    typedef FieldContainer    Inherited;

    /*==========================  PUBLIC  =================================*/
  public:

    typedef UIDrawingSurfacePtr  Ptr;

    enum
    {
        InternalWindowsFieldId       = Inherited::NextFieldId,
        FocusedWindowFieldId         = InternalWindowsFieldId       + 1,
        EventProducerFieldId         = FocusedWindowFieldId         + 1,
        GraphicsFieldId              = EventProducerFieldId         + 1,
        MouseTransformFunctorFieldId = GraphicsFieldId              + 1,
        SizeFieldId                  = MouseTransformFunctorFieldId + 1,
        NextFieldId                  = SizeFieldId                  + 1
    };

    static const OSG::BitVector InternalWindowsFieldMask;
    static const OSG::BitVector FocusedWindowFieldMask;
    static const OSG::BitVector EventProducerFieldMask;
    static const OSG::BitVector GraphicsFieldMask;
    static const OSG::BitVector MouseTransformFunctorFieldMask;
    static const OSG::BitVector SizeFieldMask;


    static const OSG::BitVector MTInfluenceMask;

    /*---------------------------------------------------------------------*/
    /*! \name                    Class Get                                 */
    /*! \{                                                                 */

    static        FieldContainerType &getClassType    (void); 
    static        UInt32              getClassTypeId  (void); 

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                FieldContainer Get                            */
    /*! \{                                                                 */

    virtual       FieldContainerType &getType  (void); 
    virtual const FieldContainerType &getType  (void) const; 

    virtual       UInt32              getContainerSize(void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Get                                 */
    /*! \{                                                                 */

           MFInternalWindowPtr *getMFInternalWindows(void);
           SFInternalWindowPtr *getSFFocusedWindow  (void);
           SFWindowEventProducerPtr *getSFEventProducer  (void);
           SFGraphicsPtr       *getSFGraphics       (void);
           SFUIDrawingSurfaceMouseTransformFunctorPtr *getSFMouseTransformFunctor(void);
           SFVec2s             *getSFSize           (void);

           InternalWindowPtr   &getFocusedWindow  (void);
     const InternalWindowPtr   &getFocusedWindow  (void) const;
           WindowEventProducerPtr &getEventProducer  (void);
     const WindowEventProducerPtr &getEventProducer  (void) const;
           GraphicsPtr         &getGraphics       (void);
     const GraphicsPtr         &getGraphics       (void) const;
           UIDrawingSurfaceMouseTransformFunctorPtr &getMouseTransformFunctor(void);
     const UIDrawingSurfaceMouseTransformFunctorPtr &getMouseTransformFunctor(void) const;
           Vec2s               &getSize           (void);
     const Vec2s               &getSize           (void) const;
           InternalWindowPtr   &getInternalWindows(const UInt32 index);
           MFInternalWindowPtr &getInternalWindows(void);
     const MFInternalWindowPtr &getInternalWindows(void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

     void setFocusedWindow  ( const InternalWindowPtr &value );
     void setEventProducer  ( const WindowEventProducerPtr &value );
     void setGraphics       ( const GraphicsPtr &value );
     void setMouseTransformFunctor( const UIDrawingSurfaceMouseTransformFunctorPtr &value );
     void setSize           ( const Vec2s &value );

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Binary Access                              */
    /*! \{                                                                 */

    virtual UInt32 getBinSize (const BitVector         &whichField);
    virtual void   copyToBin  (      BinaryDataHandler &pMem,
                               const BitVector         &whichField);
    virtual void   copyFromBin(      BinaryDataHandler &pMem,
                               const BitVector         &whichField);


    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Construction                               */
    /*! \{                                                                 */

    static  UIDrawingSurfacePtr      create          (void); 
    static  UIDrawingSurfacePtr      createEmpty     (void); 

    /*! \}                                                                 */

    /*---------------------------------------------------------------------*/
    /*! \name                       Copy                                   */
    /*! \{                                                                 */

    virtual FieldContainerPtr     shallowCopy     (void) const; 

    /*! \}                                                                 */
    /*=========================  PROTECTED  ===============================*/
  protected:

    /*---------------------------------------------------------------------*/
    /*! \name                      Fields                                  */
    /*! \{                                                                 */

    MFInternalWindowPtr   _mfInternalWindows;
    SFInternalWindowPtr   _sfFocusedWindow;
    SFWindowEventProducerPtr   _sfEventProducer;
    SFGraphicsPtr       _sfGraphics;
    SFUIDrawingSurfaceMouseTransformFunctorPtr   _sfMouseTransformFunctor;
    SFVec2s             _sfSize;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    UIDrawingSurfaceBase(void);
    UIDrawingSurfaceBase(const UIDrawingSurfaceBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~UIDrawingSurfaceBase(void); 

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

#if !defined(OSG_FIXED_MFIELDSYNC)
    void executeSyncImpl(      UIDrawingSurfaceBase *pOther,
                         const BitVector         &whichField);

    virtual void   executeSync(      FieldContainer    &other,
                               const BitVector         &whichField);
#else
    void executeSyncImpl(      UIDrawingSurfaceBase *pOther,
                         const BitVector         &whichField,
                         const SyncInfo          &sInfo     );

    virtual void   executeSync(      FieldContainer    &other,
                               const BitVector         &whichField,
                               const SyncInfo          &sInfo);

    virtual void execBeginEdit     (const BitVector &whichField,
                                          UInt32     uiAspect,
                                          UInt32     uiContainerSize);

            void execBeginEditImpl (const BitVector &whichField,
                                          UInt32     uiAspect,
                                          UInt32     uiContainerSize);

    virtual void onDestroyAspect(UInt32 uiId, UInt32 uiAspect);
#endif

    /*! \}                                                                 */
    /*==========================  PRIVATE  ================================*/
  private:

    friend class FieldContainer;

    static FieldDescription   *_desc[];
    static FieldContainerType  _type;


    // prohibit default functions (move to 'public' if you need one)
    void operator =(const UIDrawingSurfaceBase &source);
};

//---------------------------------------------------------------------------
//   Exported Types
//---------------------------------------------------------------------------


typedef UIDrawingSurfaceBase *UIDrawingSurfaceBaseP;

typedef osgIF<UIDrawingSurfaceBase::isNodeCore,
              CoredNodePtr<UIDrawingSurface>,
              FieldContainer::attempt_to_create_CoredNodePtr_on_non_NodeCore_FC
              >::_IRet UIDrawingSurfaceNodePtr;

typedef RefPtr<UIDrawingSurfacePtr> UIDrawingSurfaceRefPtr;

OSG_END_NAMESPACE

#define OSGUIDRAWINGSURFACEBASE_HEADER_CVSID "@(#)$Id: FCBaseTemplate_h.h,v 1.40 2005/07/20 00:10:14 vossg Exp $"

#endif /* _OSGUIDRAWINGSURFACEBASE_H_ */
