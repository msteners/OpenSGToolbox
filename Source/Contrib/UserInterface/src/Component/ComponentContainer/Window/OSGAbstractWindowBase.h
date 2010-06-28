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
 **     Do not change this file, changes should be done in the derived      **
 **     class AbstractWindow
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGABSTRACTWINDOWBASE_H_
#define _OSGABSTRACTWINDOWBASE_H_
#ifdef __sgi
#pragma once
#endif


#include "OSGConfig.h"
#include "OSGContribUserInterfaceDef.h"

//#include "OSGBaseTypes.h"

#include "OSGComponentContainer.h" // Parent

#include "OSGUIDrawingSurfaceFields.h"  // DrawingSurface type
#include "OSGSysFields.h"               // Closable type
#include "OSGBaseFields.h"              // Title type
#include "OSGUIDrawObjectCanvasFields.h" // DesktopIcon type
#include "OSGVecFields.h"               // AlignmentInDrawingSurface type

#include "OSGAbstractWindowFields.h"

//Event Producer Headers
#include "OSGEventProducer.h"
#include "OSGEventProducerType.h"
#include "OSGMethodDescription.h"

OSG_BEGIN_NAMESPACE

class AbstractWindow;

//! \brief AbstractWindow Base Class.

class OSG_CONTRIBUSERINTERFACE_DLLMAPPING AbstractWindowBase : public ComponentContainer
{
  public:

    typedef ComponentContainer Inherited;
    typedef ComponentContainer ParentContainer;

    typedef Inherited::TypeObject TypeObject;
    typedef TypeObject::InitPhase InitPhase;

    OSG_GEN_INTERNALPTR(AbstractWindow);

    /*==========================  PUBLIC  =================================*/

  public:

    enum
    {
        DrawingSurfaceFieldId = Inherited::NextFieldId,
        ClosableFieldId = DrawingSurfaceFieldId + 1,
        IconableFieldId = ClosableFieldId + 1,
        MaximizableFieldId = IconableFieldId + 1,
        IsClosedFieldId = MaximizableFieldId + 1,
        IsIconFieldId = IsClosedFieldId + 1,
        IsMaximizedFieldId = IsIconFieldId + 1,
        ResizableFieldId = IsMaximizedFieldId + 1,
        IsSelectedFieldId = ResizableFieldId + 1,
        TitleFieldId = IsSelectedFieldId + 1,
        DesktopIconFieldId = TitleFieldId + 1,
        ModalFieldId = DesktopIconFieldId + 1,
        AllwaysOnTopFieldId = ModalFieldId + 1,
        DrawTitlebarFieldId = AllwaysOnTopFieldId + 1,
        DrawDecorationsFieldId = DrawTitlebarFieldId + 1,
        LockInputFieldId = DrawDecorationsFieldId + 1,
        AlignmentInDrawingSurfaceFieldId = LockInputFieldId + 1,
        ScalingInDrawingSurfaceFieldId = AlignmentInDrawingSurfaceFieldId + 1,
        ResizeModifyCursorWidthFieldId = ScalingInDrawingSurfaceFieldId + 1,
        NextFieldId = ResizeModifyCursorWidthFieldId + 1
    };

    static const OSG::BitVector DrawingSurfaceFieldMask =
        (TypeTraits<BitVector>::One << DrawingSurfaceFieldId);
    static const OSG::BitVector ClosableFieldMask =
        (TypeTraits<BitVector>::One << ClosableFieldId);
    static const OSG::BitVector IconableFieldMask =
        (TypeTraits<BitVector>::One << IconableFieldId);
    static const OSG::BitVector MaximizableFieldMask =
        (TypeTraits<BitVector>::One << MaximizableFieldId);
    static const OSG::BitVector IsClosedFieldMask =
        (TypeTraits<BitVector>::One << IsClosedFieldId);
    static const OSG::BitVector IsIconFieldMask =
        (TypeTraits<BitVector>::One << IsIconFieldId);
    static const OSG::BitVector IsMaximizedFieldMask =
        (TypeTraits<BitVector>::One << IsMaximizedFieldId);
    static const OSG::BitVector ResizableFieldMask =
        (TypeTraits<BitVector>::One << ResizableFieldId);
    static const OSG::BitVector IsSelectedFieldMask =
        (TypeTraits<BitVector>::One << IsSelectedFieldId);
    static const OSG::BitVector TitleFieldMask =
        (TypeTraits<BitVector>::One << TitleFieldId);
    static const OSG::BitVector DesktopIconFieldMask =
        (TypeTraits<BitVector>::One << DesktopIconFieldId);
    static const OSG::BitVector ModalFieldMask =
        (TypeTraits<BitVector>::One << ModalFieldId);
    static const OSG::BitVector AllwaysOnTopFieldMask =
        (TypeTraits<BitVector>::One << AllwaysOnTopFieldId);
    static const OSG::BitVector DrawTitlebarFieldMask =
        (TypeTraits<BitVector>::One << DrawTitlebarFieldId);
    static const OSG::BitVector DrawDecorationsFieldMask =
        (TypeTraits<BitVector>::One << DrawDecorationsFieldId);
    static const OSG::BitVector LockInputFieldMask =
        (TypeTraits<BitVector>::One << LockInputFieldId);
    static const OSG::BitVector AlignmentInDrawingSurfaceFieldMask =
        (TypeTraits<BitVector>::One << AlignmentInDrawingSurfaceFieldId);
    static const OSG::BitVector ScalingInDrawingSurfaceFieldMask =
        (TypeTraits<BitVector>::One << ScalingInDrawingSurfaceFieldId);
    static const OSG::BitVector ResizeModifyCursorWidthFieldMask =
        (TypeTraits<BitVector>::One << ResizeModifyCursorWidthFieldId);
    static const OSG::BitVector NextFieldMask =
        (TypeTraits<BitVector>::One << NextFieldId);
        
    typedef SFUnrecUIDrawingSurfacePtr SFDrawingSurfaceType;
    typedef SFBool            SFClosableType;
    typedef SFBool            SFIconableType;
    typedef SFBool            SFMaximizableType;
    typedef SFBool            SFIsClosedType;
    typedef SFBool            SFIsIconType;
    typedef SFBool            SFIsMaximizedType;
    typedef SFBool            SFResizableType;
    typedef SFBool            SFIsSelectedType;
    typedef SFString          SFTitleType;
    typedef SFUnrecUIDrawObjectCanvasPtr SFDesktopIconType;
    typedef SFBool            SFModalType;
    typedef SFBool            SFAllwaysOnTopType;
    typedef SFBool            SFDrawTitlebarType;
    typedef SFBool            SFDrawDecorationsType;
    typedef SFBool            SFLockInputType;
    typedef SFVec2f           SFAlignmentInDrawingSurfaceType;
    typedef SFVec2f           SFScalingInDrawingSurfaceType;
    typedef SFUInt32          SFResizeModifyCursorWidthType;

    enum
    {
        WindowOpenedMethodId = Inherited::NextProducedMethodId,
        WindowClosingMethodId = WindowOpenedMethodId + 1,
        WindowClosedMethodId = WindowClosingMethodId + 1,
        WindowIconifiedMethodId = WindowClosedMethodId + 1,
        WindowDeiconifiedMethodId = WindowIconifiedMethodId + 1,
        WindowActivatedMethodId = WindowDeiconifiedMethodId + 1,
        WindowDeactivatedMethodId = WindowActivatedMethodId + 1,
        WindowEnteredMethodId = WindowDeactivatedMethodId + 1,
        WindowExitedMethodId = WindowEnteredMethodId + 1,
        NextProducedMethodId = WindowExitedMethodId + 1
    };

    /*---------------------------------------------------------------------*/
    /*! \name                    Class Get                                 */
    /*! \{                                                                 */

    static FieldContainerType &getClassType   (void);
    static UInt32              getClassTypeId (void);
    static UInt16              getClassGroupId(void);
    static const  EventProducerType  &getProducerClassType  (void);
    static        UInt32              getProducerClassTypeId(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                FieldContainer Get                            */
    /*! \{                                                                 */

    virtual       FieldContainerType &getType         (void);
    virtual const FieldContainerType &getType         (void) const;

    virtual       UInt32              getContainerSize(void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Get                                 */
    /*! \{                                                                 */

            const SFUnrecUIDrawingSurfacePtr *getSFDrawingSurface (void) const;
                  SFUnrecUIDrawingSurfacePtr *editSFDrawingSurface (void);

                  SFBool              *editSFClosable       (void);
            const SFBool              *getSFClosable        (void) const;

                  SFBool              *editSFIconable       (void);
            const SFBool              *getSFIconable        (void) const;

                  SFBool              *editSFMaximizable    (void);
            const SFBool              *getSFMaximizable     (void) const;

                  SFBool              *editSFIsClosed       (void);
            const SFBool              *getSFIsClosed        (void) const;

                  SFBool              *editSFIsIcon         (void);
            const SFBool              *getSFIsIcon          (void) const;

                  SFBool              *editSFIsMaximized    (void);
            const SFBool              *getSFIsMaximized     (void) const;

                  SFBool              *editSFResizable      (void);
            const SFBool              *getSFResizable       (void) const;

                  SFBool              *editSFIsSelected     (void);
            const SFBool              *getSFIsSelected      (void) const;

                  SFString            *editSFTitle          (void);
            const SFString            *getSFTitle           (void) const;
            const SFUnrecUIDrawObjectCanvasPtr *getSFDesktopIcon    (void) const;
                  SFUnrecUIDrawObjectCanvasPtr *editSFDesktopIcon    (void);

                  SFBool              *editSFModal          (void);
            const SFBool              *getSFModal           (void) const;

                  SFBool              *editSFAllwaysOnTop   (void);
            const SFBool              *getSFAllwaysOnTop    (void) const;

                  SFBool              *editSFDrawTitlebar   (void);
            const SFBool              *getSFDrawTitlebar    (void) const;

                  SFBool              *editSFDrawDecorations(void);
            const SFBool              *getSFDrawDecorations (void) const;

                  SFBool              *editSFLockInput      (void);
            const SFBool              *getSFLockInput       (void) const;

                  SFVec2f             *editSFAlignmentInDrawingSurface(void);
            const SFVec2f             *getSFAlignmentInDrawingSurface (void) const;

                  SFVec2f             *editSFScalingInDrawingSurface(void);
            const SFVec2f             *getSFScalingInDrawingSurface (void) const;

                  SFUInt32            *editSFResizeModifyCursorWidth(void);
            const SFUInt32            *getSFResizeModifyCursorWidth (void) const;


                  UIDrawingSurface * getDrawingSurface (void) const;

                  bool                &editClosable       (void);
                  bool                 getClosable        (void) const;

                  bool                &editIconable       (void);
                  bool                 getIconable        (void) const;

                  bool                &editMaximizable    (void);
                  bool                 getMaximizable     (void) const;

                  bool                &editIsClosed       (void);
                  bool                 getIsClosed        (void) const;

                  bool                &editIsIcon         (void);
                  bool                 getIsIcon          (void) const;

                  bool                &editIsMaximized    (void);
                  bool                 getIsMaximized     (void) const;

                  bool                &editResizable      (void);
                  bool                 getResizable       (void) const;

                  bool                &editIsSelected     (void);
                  bool                 getIsSelected      (void) const;

                  std::string         &editTitle          (void);
            const std::string         &getTitle           (void) const;

                  UIDrawObjectCanvas * getDesktopIcon    (void) const;

                  bool                &editModal          (void);
                  bool                 getModal           (void) const;

                  bool                &editAllwaysOnTop   (void);
                  bool                 getAllwaysOnTop    (void) const;

                  bool                &editDrawTitlebar   (void);
                  bool                 getDrawTitlebar    (void) const;

                  bool                &editDrawDecorations(void);
                  bool                 getDrawDecorations (void) const;

                  bool                &editLockInput      (void);
                  bool                 getLockInput       (void) const;

                  Vec2f               &editAlignmentInDrawingSurface(void);
            const Vec2f               &getAlignmentInDrawingSurface (void) const;

                  Vec2f               &editScalingInDrawingSurface(void);
            const Vec2f               &getScalingInDrawingSurface (void) const;

                  UInt32              &editResizeModifyCursorWidth(void);
                  UInt32               getResizeModifyCursorWidth (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setDrawingSurface (UIDrawingSurface * const value);
            void setClosable       (const bool value);
            void setIconable       (const bool value);
            void setMaximizable    (const bool value);
            void setIsClosed       (const bool value);
            void setIsIcon         (const bool value);
            void setIsMaximized    (const bool value);
            void setResizable      (const bool value);
            void setIsSelected     (const bool value);
            void setTitle          (const std::string &value);
            void setDesktopIcon    (UIDrawObjectCanvas * const value);
            void setModal          (const bool value);
            void setAllwaysOnTop   (const bool value);
            void setDrawTitlebar   (const bool value);
            void setDrawDecorations(const bool value);
            void setLockInput      (const bool value);
            void setAlignmentInDrawingSurface(const Vec2f &value);
            void setScalingInDrawingSurface(const Vec2f &value);
            void setResizeModifyCursorWidth(const UInt32 value);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Ptr Field Set                                 */
    /*! \{                                                                 */

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Ptr MField Set                                */
    /*! \{                                                                 */

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Binary Access                              */
    /*! \{                                                                 */

    virtual UInt32 getBinSize (ConstFieldMaskArg  whichField);
    virtual void   copyToBin  (BinaryDataHandler &pMem,
                               ConstFieldMaskArg  whichField);
    virtual void   copyFromBin(BinaryDataHandler &pMem,
                               ConstFieldMaskArg  whichField);


    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Method Produced Get                           */
    /*! \{                                                                 */

    virtual const EventProducerType &getProducerType(void) const; 


    /*! \}                                                                 */
    /*=========================  PROTECTED  ===============================*/

  protected:

    static TypeObject _type;

    static       void   classDescInserter(TypeObject &oType);
    static const Char8 *getClassname     (void             );

    /*---------------------------------------------------------------------*/
    /*! \name                      Fields                                  */
    /*! \{                                                                 */

    SFUnrecUIDrawingSurfacePtr _sfDrawingSurface;
    SFBool            _sfClosable;
    SFBool            _sfIconable;
    SFBool            _sfMaximizable;
    SFBool            _sfIsClosed;
    SFBool            _sfIsIcon;
    SFBool            _sfIsMaximized;
    SFBool            _sfResizable;
    SFBool            _sfIsSelected;
    SFString          _sfTitle;
    SFUnrecUIDrawObjectCanvasPtr _sfDesktopIcon;
    SFBool            _sfModal;
    SFBool            _sfAllwaysOnTop;
    SFBool            _sfDrawTitlebar;
    SFBool            _sfDrawDecorations;
    SFBool            _sfLockInput;
    SFVec2f           _sfAlignmentInDrawingSurface;
    SFVec2f           _sfScalingInDrawingSurface;
    SFUInt32          _sfResizeModifyCursorWidth;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    AbstractWindowBase(void);
    AbstractWindowBase(const AbstractWindowBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~AbstractWindowBase(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     onCreate                                */
    /*! \{                                                                 */

    void onCreate(const AbstractWindow *source = NULL);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Generic Field Access                      */
    /*! \{                                                                 */

    GetFieldHandlePtr  getHandleDrawingSurface  (void) const;
    EditFieldHandlePtr editHandleDrawingSurface (void);
    GetFieldHandlePtr  getHandleClosable        (void) const;
    EditFieldHandlePtr editHandleClosable       (void);
    GetFieldHandlePtr  getHandleIconable        (void) const;
    EditFieldHandlePtr editHandleIconable       (void);
    GetFieldHandlePtr  getHandleMaximizable     (void) const;
    EditFieldHandlePtr editHandleMaximizable    (void);
    GetFieldHandlePtr  getHandleIsClosed        (void) const;
    EditFieldHandlePtr editHandleIsClosed       (void);
    GetFieldHandlePtr  getHandleIsIcon          (void) const;
    EditFieldHandlePtr editHandleIsIcon         (void);
    GetFieldHandlePtr  getHandleIsMaximized     (void) const;
    EditFieldHandlePtr editHandleIsMaximized    (void);
    GetFieldHandlePtr  getHandleResizable       (void) const;
    EditFieldHandlePtr editHandleResizable      (void);
    GetFieldHandlePtr  getHandleIsSelected      (void) const;
    EditFieldHandlePtr editHandleIsSelected     (void);
    GetFieldHandlePtr  getHandleTitle           (void) const;
    EditFieldHandlePtr editHandleTitle          (void);
    GetFieldHandlePtr  getHandleDesktopIcon     (void) const;
    EditFieldHandlePtr editHandleDesktopIcon    (void);
    GetFieldHandlePtr  getHandleModal           (void) const;
    EditFieldHandlePtr editHandleModal          (void);
    GetFieldHandlePtr  getHandleAllwaysOnTop    (void) const;
    EditFieldHandlePtr editHandleAllwaysOnTop   (void);
    GetFieldHandlePtr  getHandleDrawTitlebar    (void) const;
    EditFieldHandlePtr editHandleDrawTitlebar   (void);
    GetFieldHandlePtr  getHandleDrawDecorations (void) const;
    EditFieldHandlePtr editHandleDrawDecorations(void);
    GetFieldHandlePtr  getHandleLockInput       (void) const;
    EditFieldHandlePtr editHandleLockInput      (void);
    GetFieldHandlePtr  getHandleAlignmentInDrawingSurface (void) const;
    EditFieldHandlePtr editHandleAlignmentInDrawingSurface(void);
    GetFieldHandlePtr  getHandleScalingInDrawingSurface (void) const;
    EditFieldHandlePtr editHandleScalingInDrawingSurface(void);
    GetFieldHandlePtr  getHandleResizeModifyCursorWidth (void) const;
    EditFieldHandlePtr editHandleResizeModifyCursorWidth(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

#ifdef OSG_MT_CPTR_ASPECT
    virtual void execSyncV(      FieldContainer    &oFrom,
                                 ConstFieldMaskArg  whichField,
                                 AspectOffsetStore &oOffsets,
                                 ConstFieldMaskArg  syncMode  ,
                           const UInt32             uiSyncInfo);

            void execSync (      AbstractWindowBase *pFrom,
                                 ConstFieldMaskArg  whichField,
                                 AspectOffsetStore &oOffsets,
                                 ConstFieldMaskArg  syncMode  ,
                           const UInt32             uiSyncInfo);
#endif

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Edit                                   */
    /*! \{                                                                 */

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     Aspect Create                            */
    /*! \{                                                                 */

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Edit                                   */
    /*! \{                                                                 */
    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

    virtual void resolveLinks(void);

    /*! \}                                                                 */
    /*==========================  PRIVATE  ================================*/

  private:
    /*---------------------------------------------------------------------*/
    static MethodDescription   *_methodDesc[];
    static EventProducerType _producerType;


    // prohibit default functions (move to 'public' if you need one)
    void operator =(const AbstractWindowBase &source);
};

typedef AbstractWindowBase *AbstractWindowBaseP;

OSG_END_NAMESPACE

#endif /* _OSGABSTRACTWINDOWBASE_H_ */
