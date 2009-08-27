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
 **     Do not change this file, changes should be done in the derived      **
 **     class UIFont
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGUIFONTBASE_H_
#define _OSGUIFONTBASE_H_
#ifdef __sgi
#pragma once
#endif


#include <OpenSG/OSGConfig.h>
#include "OSGUserInterfaceDef.h"

#include <OpenSG/OSGBaseTypes.h>
#include <OpenSG/OSGRefPtr.h>
#include <OpenSG/OSGCoredNodePtr.h>

#include <OpenSG/OSGFieldContainer.h> // Parent

#include <OpenSG/OSGStringFields.h> // Family type
#include <OpenSG/OSGUInt32Fields.h> // GlyphPixelSize type
#include <OpenSG/OSGUInt32Fields.h> // Size type
#include <OpenSG/OSGUInt32Fields.h> // Gap type
#include <OpenSG/OSGUInt32Fields.h> // TextureWidth type
#include <OpenSG/OSGUInt32Fields.h> // Style type
#include <OpenSG/OSGBoolFields.h> // AntiAliasing type
#include <OpenSG/OSGTextureChunkFields.h> // Texture type

#include "OSGUIFontFields.h"

OSG_BEGIN_NAMESPACE

class UIFont;
class BinaryDataHandler;

//! \brief UIFont Base Class.

class OSG_USERINTERFACELIB_DLLMAPPING UIFontBase : public FieldContainer
{
  private:

    typedef FieldContainer    Inherited;

    /*==========================  PUBLIC  =================================*/
  public:

    typedef UIFontPtr  Ptr;

    enum
    {
        FamilyFieldId         = Inherited::NextFieldId,
        GlyphPixelSizeFieldId = FamilyFieldId         + 1,
        SizeFieldId           = GlyphPixelSizeFieldId + 1,
        GapFieldId            = SizeFieldId           + 1,
        TextureWidthFieldId   = GapFieldId            + 1,
        StyleFieldId          = TextureWidthFieldId   + 1,
        AntiAliasingFieldId   = StyleFieldId          + 1,
        TextureFieldId        = AntiAliasingFieldId   + 1,
        NextFieldId           = TextureFieldId        + 1
    };

    static const OSG::BitVector FamilyFieldMask;
    static const OSG::BitVector GlyphPixelSizeFieldMask;
    static const OSG::BitVector SizeFieldMask;
    static const OSG::BitVector GapFieldMask;
    static const OSG::BitVector TextureWidthFieldMask;
    static const OSG::BitVector StyleFieldMask;
    static const OSG::BitVector AntiAliasingFieldMask;
    static const OSG::BitVector TextureFieldMask;


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


           SFString            *editSFFamily         (void);
     const SFString            *getSFFamily         (void) const;
#ifndef OSG_2_PREP
           SFString            *getSFFamily         (void);
#endif

           SFUInt32            *editSFGlyphPixelSize (void);
     const SFUInt32            *getSFGlyphPixelSize (void) const;
#ifndef OSG_2_PREP
           SFUInt32            *getSFGlyphPixelSize (void);
#endif

           SFUInt32            *editSFSize           (void);
     const SFUInt32            *getSFSize           (void) const;
#ifndef OSG_2_PREP
           SFUInt32            *getSFSize           (void);
#endif

           SFUInt32            *editSFGap            (void);
     const SFUInt32            *getSFGap            (void) const;
#ifndef OSG_2_PREP
           SFUInt32            *getSFGap            (void);
#endif

           SFUInt32            *editSFTextureWidth   (void);
     const SFUInt32            *getSFTextureWidth   (void) const;
#ifndef OSG_2_PREP
           SFUInt32            *getSFTextureWidth   (void);
#endif

           SFUInt32            *editSFStyle          (void);
     const SFUInt32            *getSFStyle          (void) const;
#ifndef OSG_2_PREP
           SFUInt32            *getSFStyle          (void);
#endif

           SFBool              *editSFAntiAliasing   (void);
     const SFBool              *getSFAntiAliasing   (void) const;
#ifndef OSG_2_PREP
           SFBool              *getSFAntiAliasing   (void);
#endif

           SFTextureChunkPtr   *editSFTexture        (void);
     const SFTextureChunkPtr   *getSFTexture        (void) const;
#ifndef OSG_2_PREP
           SFTextureChunkPtr   *getSFTexture        (void);
#endif


           std::string         &editFamily         (void);
     const std::string         &getFamily         (void) const;
#ifndef OSG_2_PREP
           std::string         &getFamily         (void);
#endif

           UInt32              &editGlyphPixelSize (void);
     const UInt32              &getGlyphPixelSize (void) const;
#ifndef OSG_2_PREP
           UInt32              &getGlyphPixelSize (void);
#endif

           UInt32              &editSize           (void);
     const UInt32              &getSize           (void) const;
#ifndef OSG_2_PREP
           UInt32              &getSize           (void);
#endif

           UInt32              &editGap            (void);
     const UInt32              &getGap            (void) const;
#ifndef OSG_2_PREP
           UInt32              &getGap            (void);
#endif

           UInt32              &editTextureWidth   (void);
     const UInt32              &getTextureWidth   (void) const;
#ifndef OSG_2_PREP
           UInt32              &getTextureWidth   (void);
#endif

           UInt32              &editStyle          (void);
     const UInt32              &getStyle          (void) const;
#ifndef OSG_2_PREP
           UInt32              &getStyle          (void);
#endif

           bool                &editAntiAliasing   (void);
     const bool                &getAntiAliasing   (void) const;
#ifndef OSG_2_PREP
           bool                &getAntiAliasing   (void);
#endif

           TextureChunkPtr     &editTexture        (void);
     const TextureChunkPtr     &getTexture        (void) const;
#ifndef OSG_2_PREP
           TextureChunkPtr     &getTexture        (void);
#endif

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

     void setFamily         ( const std::string &value );
     void setGlyphPixelSize ( const UInt32 &value );
     void setSize           ( const UInt32 &value );
     void setGap            ( const UInt32 &value );
     void setTextureWidth   ( const UInt32 &value );
     void setStyle          ( const UInt32 &value );
     void setAntiAliasing   ( const bool &value );
     void setTexture        ( const TextureChunkPtr &value );

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

    static  UIFontPtr      create          (void); 
    static  UIFontPtr      createEmpty     (void); 

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

    SFString            _sfFamily;
    SFUInt32            _sfGlyphPixelSize;
    SFUInt32            _sfSize;
    SFUInt32            _sfGap;
    SFUInt32            _sfTextureWidth;
    SFUInt32            _sfStyle;
    SFBool              _sfAntiAliasing;
    SFTextureChunkPtr   _sfTexture;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    UIFontBase(void);
    UIFontBase(const UIFontBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~UIFontBase(void); 

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

#if !defined(OSG_FIXED_MFIELDSYNC)
    void executeSyncImpl(      UIFontBase *pOther,
                         const BitVector         &whichField);

    virtual void   executeSync(      FieldContainer    &other,
                               const BitVector         &whichField);
#else
    void executeSyncImpl(      UIFontBase *pOther,
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
    void operator =(const UIFontBase &source);
};

//---------------------------------------------------------------------------
//   Exported Types
//---------------------------------------------------------------------------


typedef UIFontBase *UIFontBaseP;

typedef osgIF<UIFontBase::isNodeCore,
              CoredNodePtr<UIFont>,
              FieldContainer::attempt_to_create_CoredNodePtr_on_non_NodeCore_FC
              >::_IRet UIFontNodePtr;

typedef RefPtr<UIFontPtr> UIFontRefPtr;

OSG_END_NAMESPACE

#endif /* _OSGUIFONTBASE_H_ */
