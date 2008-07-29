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
 **     class ProgressBar
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGPROGRESSBARBASE_H_
#define _OSGPROGRESSBARBASE_H_
#ifdef __sgi
#pragma once
#endif


#include <OpenSG/OSGConfig.h>
#include "OSGUserInterfaceDef.h"

#include <OpenSG/OSGBaseTypes.h>
#include <OpenSG/OSGRefPtr.h>
#include <OpenSG/OSGCoredNodePtr.h>

#include "Component/OSGComponent.h" // Parent

#include <OpenSG/OSGBoolFields.h> // Indeterminate type
#include <OpenSG/OSGReal32Fields.h> // IndeterminateBarMoveRate type
#include <OpenSG/OSGReal32Fields.h> // IndeterminateBarSize type
#include <OpenSG/OSGBoolFields.h> // EnableProgressString type
#include <OpenSG/OSGStringFields.h> // ProgressString type
#include <OpenSG/OSGVec2fFields.h> // Alignment type
#include "Text/OSGUIFont.h" // Font type
#include <OpenSG/OSGColor4fFields.h> // FocusedTextColor type
#include <OpenSG/OSGColor4fFields.h> // RolloverTextColor type
#include <OpenSG/OSGColor4fFields.h> // DisabledTextColor type
#include <OpenSG/OSGColor4fFields.h> // TextColor type
#include <OpenSG/OSGUInt32Fields.h> // Orientation type
#include "Component/Misc/OSGUIDrawObjectCanvas.h" // DrawObject type
#include "Component/Misc/OSGUIDrawObjectCanvas.h" // FocusedDrawObject type
#include "Component/Misc/OSGUIDrawObjectCanvas.h" // RolloverDrawObject type
#include "Component/Misc/OSGUIDrawObjectCanvas.h" // DisabledDrawObject type

#include "OSGProgressBarFields.h"

OSG_BEGIN_NAMESPACE

class ProgressBar;
class BinaryDataHandler;

//! \brief ProgressBar Base Class.

class OSG_USERINTERFACELIB_DLLMAPPING ProgressBarBase : public Component
{
  private:

    typedef Component    Inherited;

    /*==========================  PUBLIC  =================================*/
  public:

    typedef ProgressBarPtr  Ptr;

    enum
    {
        IndeterminateFieldId            = Inherited::NextFieldId,
        IndeterminateBarMoveRateFieldId = IndeterminateFieldId            + 1,
        IndeterminateBarSizeFieldId     = IndeterminateBarMoveRateFieldId + 1,
        EnableProgressStringFieldId     = IndeterminateBarSizeFieldId     + 1,
        ProgressStringFieldId           = EnableProgressStringFieldId     + 1,
        AlignmentFieldId                = ProgressStringFieldId           + 1,
        FontFieldId                     = AlignmentFieldId                + 1,
        FocusedTextColorFieldId         = FontFieldId                     + 1,
        RolloverTextColorFieldId        = FocusedTextColorFieldId         + 1,
        DisabledTextColorFieldId        = RolloverTextColorFieldId        + 1,
        TextColorFieldId                = DisabledTextColorFieldId        + 1,
        OrientationFieldId              = TextColorFieldId                + 1,
        DrawObjectFieldId               = OrientationFieldId              + 1,
        FocusedDrawObjectFieldId        = DrawObjectFieldId               + 1,
        RolloverDrawObjectFieldId       = FocusedDrawObjectFieldId        + 1,
        DisabledDrawObjectFieldId       = RolloverDrawObjectFieldId       + 1,
        NextFieldId                     = DisabledDrawObjectFieldId       + 1
    };

    static const OSG::BitVector IndeterminateFieldMask;
    static const OSG::BitVector IndeterminateBarMoveRateFieldMask;
    static const OSG::BitVector IndeterminateBarSizeFieldMask;
    static const OSG::BitVector EnableProgressStringFieldMask;
    static const OSG::BitVector ProgressStringFieldMask;
    static const OSG::BitVector AlignmentFieldMask;
    static const OSG::BitVector FontFieldMask;
    static const OSG::BitVector FocusedTextColorFieldMask;
    static const OSG::BitVector RolloverTextColorFieldMask;
    static const OSG::BitVector DisabledTextColorFieldMask;
    static const OSG::BitVector TextColorFieldMask;
    static const OSG::BitVector OrientationFieldMask;
    static const OSG::BitVector DrawObjectFieldMask;
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

           SFBool              *getSFIndeterminate  (void);
           SFReal32            *getSFIndeterminateBarMoveRate(void);
           SFReal32            *getSFIndeterminateBarSize(void);
           SFBool              *getSFEnableProgressString(void);
           SFString            *getSFProgressString (void);
           SFVec2f             *getSFAlignment      (void);
           SFUIFontPtr         *getSFFont           (void);
           SFColor4f           *getSFFocusedTextColor(void);
           SFColor4f           *getSFRolloverTextColor(void);
           SFColor4f           *getSFDisabledTextColor(void);
           SFColor4f           *getSFTextColor      (void);
           SFUInt32            *getSFOrientation    (void);
           SFUIDrawObjectCanvasPtr *getSFDrawObject     (void);
           SFUIDrawObjectCanvasPtr *getSFFocusedDrawObject(void);
           SFUIDrawObjectCanvasPtr *getSFRolloverDrawObject(void);
           SFUIDrawObjectCanvasPtr *getSFDisabledDrawObject(void);

           bool                &getIndeterminate  (void);
     const bool                &getIndeterminate  (void) const;
           Real32              &getIndeterminateBarMoveRate(void);
     const Real32              &getIndeterminateBarMoveRate(void) const;
           Real32              &getIndeterminateBarSize(void);
     const Real32              &getIndeterminateBarSize(void) const;
           bool                &getEnableProgressString(void);
     const bool                &getEnableProgressString(void) const;
           std::string         &getProgressString (void);
     const std::string         &getProgressString (void) const;
           Vec2f               &getAlignment      (void);
     const Vec2f               &getAlignment      (void) const;
           UIFontPtr           &getFont           (void);
     const UIFontPtr           &getFont           (void) const;
           Color4f             &getFocusedTextColor(void);
     const Color4f             &getFocusedTextColor(void) const;
           Color4f             &getRolloverTextColor(void);
     const Color4f             &getRolloverTextColor(void) const;
           Color4f             &getDisabledTextColor(void);
     const Color4f             &getDisabledTextColor(void) const;
           Color4f             &getTextColor      (void);
     const Color4f             &getTextColor      (void) const;
           UInt32              &getOrientation    (void);
     const UInt32              &getOrientation    (void) const;
           UIDrawObjectCanvasPtr &getDrawObject     (void);
     const UIDrawObjectCanvasPtr &getDrawObject     (void) const;
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

     void setIndeterminate  ( const bool &value );
     void setIndeterminateBarMoveRate( const Real32 &value );
     void setIndeterminateBarSize( const Real32 &value );
     void setEnableProgressString( const bool &value );
     void setProgressString ( const std::string &value );
     void setAlignment      ( const Vec2f &value );
     void setFont           ( const UIFontPtr &value );
     void setFocusedTextColor( const Color4f &value );
     void setRolloverTextColor( const Color4f &value );
     void setDisabledTextColor( const Color4f &value );
     void setTextColor      ( const Color4f &value );
     void setOrientation    ( const UInt32 &value );
     void setDrawObject     ( const UIDrawObjectCanvasPtr &value );
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

    static  ProgressBarPtr      create          (void); 
    static  ProgressBarPtr      createEmpty     (void); 

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

    SFBool              _sfIndeterminate;
    SFReal32            _sfIndeterminateBarMoveRate;
    SFReal32            _sfIndeterminateBarSize;
    SFBool              _sfEnableProgressString;
    SFString            _sfProgressString;
    SFVec2f             _sfAlignment;
    SFUIFontPtr         _sfFont;
    SFColor4f           _sfFocusedTextColor;
    SFColor4f           _sfRolloverTextColor;
    SFColor4f           _sfDisabledTextColor;
    SFColor4f           _sfTextColor;
    SFUInt32            _sfOrientation;
    SFUIDrawObjectCanvasPtr   _sfDrawObject;
    SFUIDrawObjectCanvasPtr   _sfFocusedDrawObject;
    SFUIDrawObjectCanvasPtr   _sfRolloverDrawObject;
    SFUIDrawObjectCanvasPtr   _sfDisabledDrawObject;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    ProgressBarBase(void);
    ProgressBarBase(const ProgressBarBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~ProgressBarBase(void); 

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

#if !defined(OSG_FIXED_MFIELDSYNC)
    void executeSyncImpl(      ProgressBarBase *pOther,
                         const BitVector         &whichField);

    virtual void   executeSync(      FieldContainer    &other,
                               const BitVector         &whichField);
#else
    void executeSyncImpl(      ProgressBarBase *pOther,
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
    void operator =(const ProgressBarBase &source);
};

//---------------------------------------------------------------------------
//   Exported Types
//---------------------------------------------------------------------------


typedef ProgressBarBase *ProgressBarBaseP;

typedef osgIF<ProgressBarBase::isNodeCore,
              CoredNodePtr<ProgressBar>,
              FieldContainer::attempt_to_create_CoredNodePtr_on_non_NodeCore_FC
              >::_IRet ProgressBarNodePtr;

typedef RefPtr<ProgressBarPtr> ProgressBarRefPtr;

OSG_END_NAMESPACE

#define OSGPROGRESSBARBASE_HEADER_CVSID "@(#)$Id: FCBaseTemplate_h.h,v 1.40 2005/07/20 00:10:14 vossg Exp $"

#endif /* _OSGPROGRESSBARBASE_H_ */
