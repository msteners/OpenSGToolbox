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
 **     class Button
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGBUTTONBASE_H_
#define _OSGBUTTONBASE_H_
#ifdef __sgi
#pragma once
#endif


#include <OpenSG/OSGConfig.h>
#include "OSGUserInterfaceDef.h"

#include <OpenSG/OSGBaseTypes.h>
#include <OpenSG/OSGRefPtr.h>
#include <OpenSG/OSGCoredNodePtr.h>

#include "Component/OSGComponent.h" // Parent

#include "Text/OSGUIFont.h" // Font type
#include <OpenSG/OSGStringFields.h> // Text type
#include "Border/OSGBorder.h" // ActiveBorder type
#include "Layer/OSGLayer.h" // ActiveBackground type
#include "Layer/OSGLayer.h" // ActiveForeground type
#include <OpenSG/OSGColor4fFields.h> // ActiveTextColor type
#include <OpenSG/OSGColor4fFields.h> // FocusedTextColor type
#include <OpenSG/OSGColor4fFields.h> // RolloverTextColor type
#include <OpenSG/OSGColor4fFields.h> // DisabledTextColor type
#include <OpenSG/OSGColor4fFields.h> // TextColor type
#include <OpenSG/OSGVec2fFields.h> // Alignment type
#include <OpenSG/OSGBoolFields.h> // EnableActionOnMouseDownTime type
#include <OpenSG/OSGTimeFields.h> // ActionOnMouseDownRate type
#include <OpenSG/OSGVec2fFields.h> // ActiveOffset type
#include "Component/Misc/OSGUIDrawObjectCanvas.h" // DrawObject type
#include "Component/Misc/OSGUIDrawObjectCanvas.h" // ActiveDrawObject type
#include "Component/Misc/OSGUIDrawObjectCanvas.h" // FocusedDrawObject type
#include "Component/Misc/OSGUIDrawObjectCanvas.h" // RolloverDrawObject type
#include "Component/Misc/OSGUIDrawObjectCanvas.h" // DisabledDrawObject type

#include "OSGButtonFields.h"

OSG_BEGIN_NAMESPACE

class Button;
class BinaryDataHandler;

//! \brief Button Base Class.

class OSG_USERINTERFACELIB_DLLMAPPING ButtonBase : public Component
{
  private:

    typedef Component    Inherited;

    /*==========================  PUBLIC  =================================*/
  public:

    typedef ButtonPtr  Ptr;

    enum
    {
        FontFieldId                        = Inherited::NextFieldId,
        TextFieldId                        = FontFieldId                        + 1,
        ActiveBorderFieldId                = TextFieldId                        + 1,
        ActiveBackgroundFieldId            = ActiveBorderFieldId                + 1,
        ActiveForegroundFieldId            = ActiveBackgroundFieldId            + 1,
        ActiveTextColorFieldId             = ActiveForegroundFieldId            + 1,
        FocusedTextColorFieldId            = ActiveTextColorFieldId             + 1,
        RolloverTextColorFieldId           = FocusedTextColorFieldId            + 1,
        DisabledTextColorFieldId           = RolloverTextColorFieldId           + 1,
        TextColorFieldId                   = DisabledTextColorFieldId           + 1,
        AlignmentFieldId                   = TextColorFieldId                   + 1,
        EnableActionOnMouseDownTimeFieldId = AlignmentFieldId                   + 1,
        ActionOnMouseDownRateFieldId       = EnableActionOnMouseDownTimeFieldId + 1,
        ActiveOffsetFieldId                = ActionOnMouseDownRateFieldId       + 1,
        DrawObjectFieldId                  = ActiveOffsetFieldId                + 1,
        ActiveDrawObjectFieldId            = DrawObjectFieldId                  + 1,
        FocusedDrawObjectFieldId           = ActiveDrawObjectFieldId            + 1,
        RolloverDrawObjectFieldId          = FocusedDrawObjectFieldId           + 1,
        DisabledDrawObjectFieldId          = RolloverDrawObjectFieldId          + 1,
        NextFieldId                        = DisabledDrawObjectFieldId          + 1
    };

    static const OSG::BitVector FontFieldMask;
    static const OSG::BitVector TextFieldMask;
    static const OSG::BitVector ActiveBorderFieldMask;
    static const OSG::BitVector ActiveBackgroundFieldMask;
    static const OSG::BitVector ActiveForegroundFieldMask;
    static const OSG::BitVector ActiveTextColorFieldMask;
    static const OSG::BitVector FocusedTextColorFieldMask;
    static const OSG::BitVector RolloverTextColorFieldMask;
    static const OSG::BitVector DisabledTextColorFieldMask;
    static const OSG::BitVector TextColorFieldMask;
    static const OSG::BitVector AlignmentFieldMask;
    static const OSG::BitVector EnableActionOnMouseDownTimeFieldMask;
    static const OSG::BitVector ActionOnMouseDownRateFieldMask;
    static const OSG::BitVector ActiveOffsetFieldMask;
    static const OSG::BitVector DrawObjectFieldMask;
    static const OSG::BitVector ActiveDrawObjectFieldMask;
    static const OSG::BitVector FocusedDrawObjectFieldMask;
    static const OSG::BitVector RolloverDrawObjectFieldMask;
    static const OSG::BitVector DisabledDrawObjectFieldMask;


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

           SFUIFontPtr         *getSFFont           (void);
           SFString            *getSFText           (void);
           SFBorderPtr         *getSFActiveBorder   (void);
           SFLayerPtr          *getSFActiveBackground(void);
           SFLayerPtr          *getSFActiveForeground(void);
           SFColor4f           *getSFActiveTextColor(void);
           SFColor4f           *getSFFocusedTextColor(void);
           SFColor4f           *getSFRolloverTextColor(void);
           SFColor4f           *getSFDisabledTextColor(void);
           SFColor4f           *getSFTextColor      (void);
           SFVec2f             *getSFAlignment      (void);
           SFBool              *getSFEnableActionOnMouseDownTime(void);
           SFTime              *getSFActionOnMouseDownRate(void);
           SFVec2f             *getSFActiveOffset   (void);
           SFUIDrawObjectCanvasPtr *getSFDrawObject     (void);
           SFUIDrawObjectCanvasPtr *getSFActiveDrawObject(void);
           SFUIDrawObjectCanvasPtr *getSFFocusedDrawObject(void);
           SFUIDrawObjectCanvasPtr *getSFRolloverDrawObject(void);
           SFUIDrawObjectCanvasPtr *getSFDisabledDrawObject(void);

           UIFontPtr           &getFont           (void);
     const UIFontPtr           &getFont           (void) const;
           std::string         &getText           (void);
     const std::string         &getText           (void) const;
           BorderPtr           &getActiveBorder   (void);
     const BorderPtr           &getActiveBorder   (void) const;
           LayerPtr            &getActiveBackground(void);
     const LayerPtr            &getActiveBackground(void) const;
           LayerPtr            &getActiveForeground(void);
     const LayerPtr            &getActiveForeground(void) const;
           Color4f             &getActiveTextColor(void);
     const Color4f             &getActiveTextColor(void) const;
           Color4f             &getFocusedTextColor(void);
     const Color4f             &getFocusedTextColor(void) const;
           Color4f             &getRolloverTextColor(void);
     const Color4f             &getRolloverTextColor(void) const;
           Color4f             &getDisabledTextColor(void);
     const Color4f             &getDisabledTextColor(void) const;
           Color4f             &getTextColor      (void);
     const Color4f             &getTextColor      (void) const;
           Vec2f               &getAlignment      (void);
     const Vec2f               &getAlignment      (void) const;
           bool                &getEnableActionOnMouseDownTime(void);
     const bool                &getEnableActionOnMouseDownTime(void) const;
           Time                &getActionOnMouseDownRate(void);
     const Time                &getActionOnMouseDownRate(void) const;
           Vec2f               &getActiveOffset   (void);
     const Vec2f               &getActiveOffset   (void) const;
           UIDrawObjectCanvasPtr &getDrawObject     (void);
     const UIDrawObjectCanvasPtr &getDrawObject     (void) const;
           UIDrawObjectCanvasPtr &getActiveDrawObject(void);
     const UIDrawObjectCanvasPtr &getActiveDrawObject(void) const;
           UIDrawObjectCanvasPtr &getFocusedDrawObject(void);
     const UIDrawObjectCanvasPtr &getFocusedDrawObject(void) const;
           UIDrawObjectCanvasPtr &getRolloverDrawObject(void);
     const UIDrawObjectCanvasPtr &getRolloverDrawObject(void) const;
           UIDrawObjectCanvasPtr &getDisabledDrawObject(void);
     const UIDrawObjectCanvasPtr &getDisabledDrawObject(void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

     void setFont           ( const UIFontPtr &value );
     void setText           ( const std::string &value );
     void setActiveBorder   ( const BorderPtr &value );
     void setActiveBackground( const LayerPtr &value );
     void setActiveForeground( const LayerPtr &value );
     void setActiveTextColor( const Color4f &value );
     void setFocusedTextColor( const Color4f &value );
     void setRolloverTextColor( const Color4f &value );
     void setDisabledTextColor( const Color4f &value );
     void setTextColor      ( const Color4f &value );
     void setAlignment      ( const Vec2f &value );
     void setEnableActionOnMouseDownTime( const bool &value );
     void setActionOnMouseDownRate( const Time &value );
     void setActiveOffset   ( const Vec2f &value );
     void setDrawObject     ( const UIDrawObjectCanvasPtr &value );
     void setActiveDrawObject( const UIDrawObjectCanvasPtr &value );
     void setFocusedDrawObject( const UIDrawObjectCanvasPtr &value );
     void setRolloverDrawObject( const UIDrawObjectCanvasPtr &value );
     void setDisabledDrawObject( const UIDrawObjectCanvasPtr &value );

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

    static  ButtonPtr      create          (void); 
    static  ButtonPtr      createEmpty     (void); 

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

    SFUIFontPtr         _sfFont;
    SFString            _sfText;
    SFBorderPtr         _sfActiveBorder;
    SFLayerPtr          _sfActiveBackground;
    SFLayerPtr          _sfActiveForeground;
    SFColor4f           _sfActiveTextColor;
    SFColor4f           _sfFocusedTextColor;
    SFColor4f           _sfRolloverTextColor;
    SFColor4f           _sfDisabledTextColor;
    SFColor4f           _sfTextColor;
    SFVec2f             _sfAlignment;
    SFBool              _sfEnableActionOnMouseDownTime;
    SFTime              _sfActionOnMouseDownRate;
    SFVec2f             _sfActiveOffset;
    SFUIDrawObjectCanvasPtr   _sfDrawObject;
    SFUIDrawObjectCanvasPtr   _sfActiveDrawObject;
    SFUIDrawObjectCanvasPtr   _sfFocusedDrawObject;
    SFUIDrawObjectCanvasPtr   _sfRolloverDrawObject;
    SFUIDrawObjectCanvasPtr   _sfDisabledDrawObject;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    ButtonBase(void);
    ButtonBase(const ButtonBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~ButtonBase(void); 

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

#if !defined(OSG_FIXED_MFIELDSYNC)
    void executeSyncImpl(      ButtonBase *pOther,
                         const BitVector         &whichField);

    virtual void   executeSync(      FieldContainer    &other,
                               const BitVector         &whichField);
#else
    void executeSyncImpl(      ButtonBase *pOther,
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
    void operator =(const ButtonBase &source);
};

//---------------------------------------------------------------------------
//   Exported Types
//---------------------------------------------------------------------------


typedef ButtonBase *ButtonBaseP;

typedef osgIF<ButtonBase::isNodeCore,
              CoredNodePtr<Button>,
              FieldContainer::attempt_to_create_CoredNodePtr_on_non_NodeCore_FC
              >::_IRet ButtonNodePtr;

typedef RefPtr<ButtonPtr> ButtonRefPtr;

OSG_END_NAMESPACE

#define OSGBUTTONBASE_HEADER_CVSID "@(#)$Id: FCBaseTemplate_h.h,v 1.40 2005/07/20 00:10:14 vossg Exp $"

#endif /* _OSGBUTTONBASE_H_ */
