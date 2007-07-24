/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2002 by the OpenSG Forum                 *
 *                                                                           *
 *                            www.opensg.org                                 *
 *                                                                           *
 *   contact: dirk@opensg.org, gerrit.voss@vossg.org, jbehr@zgdv.de          *
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
 **     class ImageComponent
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGIMAGECOMPONENTBASE_H_
#define _OSGIMAGECOMPONENTBASE_H_
#ifdef __sgi
#pragma once
#endif


#include <OpenSG/OSGConfig.h>
#include "OSGUserInterfaceDef.h"

#include <OpenSG/OSGBaseTypes.h>
#include <OpenSG/OSGRefPtr.h>
#include <OpenSG/OSGCoredNodePtr.h>

#include "OSGComponent.h" // Parent

#include <OpenSG/OSGTextureChunkFields.h> // Texture type
#include <OpenSG/OSGUInt32Fields.h> // Scale type
#include <OpenSG/OSGVec2sFields.h> // ScaleAbsoluteSize type
#include <OpenSG/OSGReal32Fields.h> // VerticalAlignment type
#include <OpenSG/OSGReal32Fields.h> // HorizontalAlignment type

#include "OSGImageComponentFields.h"

OSG_BEGIN_NAMESPACE

class ImageComponent;
class BinaryDataHandler;

//! \brief ImageComponent Base Class.

class OSG_USERINTERFACELIB_DLLMAPPING ImageComponentBase : public Component
{
  private:

    typedef Component    Inherited;

    /*==========================  PUBLIC  =================================*/
  public:

    typedef ImageComponentPtr  Ptr;

    enum
    {
        TextureFieldId             = Inherited::NextFieldId,
        ScaleFieldId               = TextureFieldId             + 1,
        ScaleAbsoluteSizeFieldId   = ScaleFieldId               + 1,
        VerticalAlignmentFieldId   = ScaleAbsoluteSizeFieldId   + 1,
        HorizontalAlignmentFieldId = VerticalAlignmentFieldId   + 1,
        NextFieldId                = HorizontalAlignmentFieldId + 1
    };

    static const OSG::BitVector TextureFieldMask;
    static const OSG::BitVector ScaleFieldMask;
    static const OSG::BitVector ScaleAbsoluteSizeFieldMask;
    static const OSG::BitVector VerticalAlignmentFieldMask;
    static const OSG::BitVector HorizontalAlignmentFieldMask;


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

           SFTextureChunkPtr   *getSFTexture        (void);
           SFUInt32            *getSFScale          (void);
           SFVec2s             *getSFScaleAbsoluteSize(void);
           SFReal32            *getSFVerticalAlignment(void);
           SFReal32            *getSFHorizontalAlignment(void);

           TextureChunkPtr     &getTexture        (void);
     const TextureChunkPtr     &getTexture        (void) const;
           UInt32              &getScale          (void);
     const UInt32              &getScale          (void) const;
           Vec2s               &getScaleAbsoluteSize(void);
     const Vec2s               &getScaleAbsoluteSize(void) const;
           Real32              &getVerticalAlignment(void);
     const Real32              &getVerticalAlignment(void) const;
           Real32              &getHorizontalAlignment(void);
     const Real32              &getHorizontalAlignment(void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

     void setTexture        ( const TextureChunkPtr &value );
     void setScale          ( const UInt32 &value );
     void setScaleAbsoluteSize( const Vec2s &value );
     void setVerticalAlignment( const Real32 &value );
     void setHorizontalAlignment( const Real32 &value );

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

    static  ImageComponentPtr      create          (void); 
    static  ImageComponentPtr      createEmpty     (void); 

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

    SFTextureChunkPtr   _sfTexture;
    SFUInt32            _sfScale;
    SFVec2s             _sfScaleAbsoluteSize;
    SFReal32            _sfVerticalAlignment;
    SFReal32            _sfHorizontalAlignment;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    ImageComponentBase(void);
    ImageComponentBase(const ImageComponentBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~ImageComponentBase(void); 

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

#if !defined(OSG_FIXED_MFIELDSYNC)
    void executeSyncImpl(      ImageComponentBase *pOther,
                         const BitVector         &whichField);

    virtual void   executeSync(      FieldContainer    &other,
                               const BitVector         &whichField);
#else
    void executeSyncImpl(      ImageComponentBase *pOther,
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
    void operator =(const ImageComponentBase &source);
};

//---------------------------------------------------------------------------
//   Exported Types
//---------------------------------------------------------------------------


typedef ImageComponentBase *ImageComponentBaseP;

typedef osgIF<ImageComponentBase::isNodeCore,
              CoredNodePtr<ImageComponent>,
              FieldContainer::attempt_to_create_CoredNodePtr_on_non_NodeCore_FC
              >::_IRet ImageComponentNodePtr;

typedef RefPtr<ImageComponentPtr> ImageComponentRefPtr;

OSG_END_NAMESPACE

#define OSGIMAGECOMPONENTBASE_HEADER_CVSID "@(#)$Id: FCBaseTemplate_h.h,v 1.40 2005/07/20 00:10:14 vossg Exp $"

#endif /* _OSGIMAGECOMPONENTBASE_H_ */
