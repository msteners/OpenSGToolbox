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
 **     class ToolTip
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGTOOLTIPBASE_H_
#define _OSGTOOLTIPBASE_H_
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
#include "Component/OSGComponentFields.h" // TippedComponent type
#include <OpenSG/OSGStringFields.h> // Text type
#include <OpenSG/OSGVec2fFields.h> // Alignment type
#include <OpenSG/OSGColor4fFields.h> // TextColor type

#include "OSGToolTipFields.h"

OSG_BEGIN_NAMESPACE

class ToolTip;
class BinaryDataHandler;

//! \brief ToolTip Base Class.

class OSG_USERINTERFACELIB_DLLMAPPING ToolTipBase : public Component
{
  private:

    typedef Component    Inherited;

    /*==========================  PUBLIC  =================================*/
  public:

    typedef ToolTipPtr  Ptr;

    enum
    {
        FontFieldId            = Inherited::NextFieldId,
        TippedComponentFieldId = FontFieldId            + 1,
        TextFieldId            = TippedComponentFieldId + 1,
        AlignmentFieldId       = TextFieldId            + 1,
        TextColorFieldId       = AlignmentFieldId       + 1,
        NextFieldId            = TextColorFieldId       + 1
    };

    static const OSG::BitVector FontFieldMask;
    static const OSG::BitVector TippedComponentFieldMask;
    static const OSG::BitVector TextFieldMask;
    static const OSG::BitVector AlignmentFieldMask;
    static const OSG::BitVector TextColorFieldMask;


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
           SFComponentPtr      *getSFTippedComponent(void);
           SFString            *getSFText           (void);
           SFVec2f             *getSFAlignment      (void);
           SFColor4f           *getSFTextColor      (void);

           UIFontPtr           &getFont           (void);
     const UIFontPtr           &getFont           (void) const;
           ComponentPtr        &getTippedComponent(void);
     const ComponentPtr        &getTippedComponent(void) const;
           std::string         &getText           (void);
     const std::string         &getText           (void) const;
           Vec2f               &getAlignment      (void);
     const Vec2f               &getAlignment      (void) const;
           Color4f             &getTextColor      (void);
     const Color4f             &getTextColor      (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

     void setFont           ( const UIFontPtr &value );
     void setTippedComponent( const ComponentPtr &value );
     void setText           ( const std::string &value );
     void setAlignment      ( const Vec2f &value );
     void setTextColor      ( const Color4f &value );

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

    static  ToolTipPtr      create          (void); 
    static  ToolTipPtr      createEmpty     (void); 

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
    SFComponentPtr      _sfTippedComponent;
    SFString            _sfText;
    SFVec2f             _sfAlignment;
    SFColor4f           _sfTextColor;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    ToolTipBase(void);
    ToolTipBase(const ToolTipBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~ToolTipBase(void); 

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

#if !defined(OSG_FIXED_MFIELDSYNC)
    void executeSyncImpl(      ToolTipBase *pOther,
                         const BitVector         &whichField);

    virtual void   executeSync(      FieldContainer    &other,
                               const BitVector         &whichField);
#else
    void executeSyncImpl(      ToolTipBase *pOther,
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
    void operator =(const ToolTipBase &source);
};

//---------------------------------------------------------------------------
//   Exported Types
//---------------------------------------------------------------------------


typedef ToolTipBase *ToolTipBaseP;

typedef osgIF<ToolTipBase::isNodeCore,
              CoredNodePtr<ToolTip>,
              FieldContainer::attempt_to_create_CoredNodePtr_on_non_NodeCore_FC
              >::_IRet ToolTipNodePtr;

typedef RefPtr<ToolTipPtr> ToolTipRefPtr;

OSG_END_NAMESPACE

#define OSGTOOLTIPBASE_HEADER_CVSID "@(#)$Id: FCBaseTemplate_h.h,v 1.40 2005/07/20 00:10:14 vossg Exp $"

#endif /* _OSGTOOLTIPBASE_H_ */
