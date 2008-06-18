/*---------------------------------------------------------------------------*\
 *                        OpenSG ToolBox Dynamics                            *
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
 **     Do not change this file, changes should be done in the derived      **
 **     class FunctionComponent
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGFUNCTIONCOMPONENTBASE_H_
#define _OSGFUNCTIONCOMPONENTBASE_H_
#ifdef __sgi
#pragma once
#endif


#include <OpenSG/OSGConfig.h>
#include "OSGDynamicsDef.h"

#include <OpenSG/OSGBaseTypes.h>
#include <OpenSG/OSGRefPtr.h>
#include <OpenSG/OSGCoredNodePtr.h>

#include <OpenSG/UserInterface/OSGComponent.h> // Parent

#include "Function/OSGFunctionFields.h" // Function type
#include <OpenSG/UserInterface/OSGUIFont.h> // Font type
#include <OpenSG/OSGColor4fFields.h> // FocusedTextColor type
#include <OpenSG/OSGColor4fFields.h> // RolloverTextColor type
#include <OpenSG/OSGColor4fFields.h> // DisabledTextColor type
#include <OpenSG/OSGColor4fFields.h> // TextColor type

#include "OSGFunctionComponentFields.h"

OSG_BEGIN_NAMESPACE

class FunctionComponent;
class BinaryDataHandler;

//! \brief FunctionComponent Base Class.

class OSG_DYNAMICSLIB_DLLMAPPING FunctionComponentBase : public Component
{
  private:

    typedef Component    Inherited;

    /*==========================  PUBLIC  =================================*/
  public:

    typedef FunctionComponentPtr  Ptr;

    enum
    {
        FunctionFieldId          = Inherited::NextFieldId,
        FontFieldId              = FunctionFieldId          + 1,
        FocusedTextColorFieldId  = FontFieldId              + 1,
        RolloverTextColorFieldId = FocusedTextColorFieldId  + 1,
        DisabledTextColorFieldId = RolloverTextColorFieldId + 1,
        TextColorFieldId         = DisabledTextColorFieldId + 1,
        NextFieldId              = TextColorFieldId         + 1
    };

    static const OSG::BitVector FunctionFieldMask;
    static const OSG::BitVector FontFieldMask;
    static const OSG::BitVector FocusedTextColorFieldMask;
    static const OSG::BitVector RolloverTextColorFieldMask;
    static const OSG::BitVector DisabledTextColorFieldMask;
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

           SFFunctionPtr       *getSFFunction       (void);
           SFUIFontPtr         *getSFFont           (void);
           SFColor4f           *getSFFocusedTextColor(void);
           SFColor4f           *getSFRolloverTextColor(void);
           SFColor4f           *getSFDisabledTextColor(void);
           SFColor4f           *getSFTextColor      (void);

           FunctionPtr         &getFunction       (void);
     const FunctionPtr         &getFunction       (void) const;
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

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

     void setFunction       ( const FunctionPtr &value );
     void setFont           ( const UIFontPtr &value );
     void setFocusedTextColor( const Color4f &value );
     void setRolloverTextColor( const Color4f &value );
     void setDisabledTextColor( const Color4f &value );
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

    static  FunctionComponentPtr      create          (void); 
    static  FunctionComponentPtr      createEmpty     (void); 

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

    SFFunctionPtr       _sfFunction;
    SFUIFontPtr         _sfFont;
    SFColor4f           _sfFocusedTextColor;
    SFColor4f           _sfRolloverTextColor;
    SFColor4f           _sfDisabledTextColor;
    SFColor4f           _sfTextColor;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    FunctionComponentBase(void);
    FunctionComponentBase(const FunctionComponentBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~FunctionComponentBase(void); 

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

#if !defined(OSG_FIXED_MFIELDSYNC)
    void executeSyncImpl(      FunctionComponentBase *pOther,
                         const BitVector         &whichField);

    virtual void   executeSync(      FieldContainer    &other,
                               const BitVector         &whichField);
#else
    void executeSyncImpl(      FunctionComponentBase *pOther,
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
    void operator =(const FunctionComponentBase &source);
};

//---------------------------------------------------------------------------
//   Exported Types
//---------------------------------------------------------------------------


typedef FunctionComponentBase *FunctionComponentBaseP;

typedef osgIF<FunctionComponentBase::isNodeCore,
              CoredNodePtr<FunctionComponent>,
              FieldContainer::attempt_to_create_CoredNodePtr_on_non_NodeCore_FC
              >::_IRet FunctionComponentNodePtr;

typedef RefPtr<FunctionComponentPtr> FunctionComponentRefPtr;

OSG_END_NAMESPACE

#define OSGFUNCTIONCOMPONENTBASE_HEADER_CVSID "@(#)$Id: FCBaseTemplate_h.h,v 1.40 2005/07/20 00:10:14 vossg Exp $"

#endif /* _OSGFUNCTIONCOMPONENTBASE_H_ */
