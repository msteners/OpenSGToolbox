/*---------------------------------------------------------------------------*\
 *                       OpenSG ToolBox Animation                            *
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
 **     class Bone
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGBONEBASE_H_
#define _OSGBONEBASE_H_
#ifdef __sgi
#pragma once
#endif


#include <OpenSG/OSGConfig.h>
#include "OSGAnimationDef.h"

#include <OpenSG/OSGBaseTypes.h>
#include <OpenSG/OSGRefPtr.h>
#include <OpenSG/OSGCoredNodePtr.h>

#include <OpenSG/OSGAttachmentContainer.h> // Parent

#include <OpenSG/OSGQuaternionFields.h> // Rotation type
#include <OpenSG/OSGPnt3fFields.h> // Translation type
#include <OpenSG/OSGReal32Fields.h> // Length type
#include "SkeletalAnimation/OSGBoneFields.h" // InternalChildren type
#include "SkeletalAnimation/OSGBoneFields.h" // InternalParent type
#include <OpenSG/OSGMatrixFields.h> // InternalRelativeTransformation type
#include <OpenSG/OSGMatrixFields.h> // InternalAbsoluteTransformation type

#include "OSGBoneFields.h"

OSG_BEGIN_NAMESPACE

class Bone;
class BinaryDataHandler;

//! \brief Bone Base Class.

class OSG_ANIMATIONLIB_DLLMAPPING BoneBase : public AttachmentContainer
{
  private:

    typedef AttachmentContainer    Inherited;

    /*==========================  PUBLIC  =================================*/
  public:

    typedef BonePtr  Ptr;

    enum
    {
        RotationFieldId                       = Inherited::NextFieldId,
        TranslationFieldId                    = RotationFieldId                       + 1,
        LengthFieldId                         = TranslationFieldId                    + 1,
        InternalChildrenFieldId               = LengthFieldId                         + 1,
        InternalParentFieldId                 = InternalChildrenFieldId               + 1,
        InternalRelativeTransformationFieldId = InternalParentFieldId                 + 1,
        InternalAbsoluteTransformationFieldId = InternalRelativeTransformationFieldId + 1,
        NextFieldId                           = InternalAbsoluteTransformationFieldId + 1
    };

    static const OSG::BitVector RotationFieldMask;
    static const OSG::BitVector TranslationFieldMask;
    static const OSG::BitVector LengthFieldMask;
    static const OSG::BitVector InternalChildrenFieldMask;
    static const OSG::BitVector InternalParentFieldMask;
    static const OSG::BitVector InternalRelativeTransformationFieldMask;
    static const OSG::BitVector InternalAbsoluteTransformationFieldMask;


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

           SFQuaternion        *getSFRotation       (void);
           SFPnt3f             *getSFTranslation    (void);
           SFReal32            *getSFLength         (void);

           Quaternion          &getRotation       (void);
     const Quaternion          &getRotation       (void) const;
           Pnt3f               &getTranslation    (void);
     const Pnt3f               &getTranslation    (void) const;
           Real32              &getLength         (void);
     const Real32              &getLength         (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

     void setRotation       ( const Quaternion &value );
     void setTranslation    ( const Pnt3f &value );
     void setLength         ( const Real32 &value );

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

    static  BonePtr      create          (void); 
    static  BonePtr      createEmpty     (void); 

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

    SFQuaternion        _sfRotation;
    SFPnt3f             _sfTranslation;
    SFReal32            _sfLength;
    MFBonePtr           _mfInternalChildren;
    SFBonePtr           _sfInternalParent;
    SFMatrix            _sfInternalRelativeTransformation;
    SFMatrix            _sfInternalAbsoluteTransformation;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    BoneBase(void);
    BoneBase(const BoneBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~BoneBase(void); 

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Get                                 */
    /*! \{                                                                 */

           MFBonePtr           *getMFInternalChildren(void);
           SFBonePtr           *getSFInternalParent (void);
           SFMatrix            *getSFInternalRelativeTransformation(void);
           SFMatrix            *getSFInternalAbsoluteTransformation(void);

           BonePtr             &getInternalParent (void);
     const BonePtr             &getInternalParent (void) const;
           Matrix              &getInternalRelativeTransformation(void);
     const Matrix              &getInternalRelativeTransformation(void) const;
           Matrix              &getInternalAbsoluteTransformation(void);
     const Matrix              &getInternalAbsoluteTransformation(void) const;
           BonePtr             &getInternalChildren(UInt32 index);
           MFBonePtr           &getInternalChildren(void);
     const MFBonePtr           &getInternalChildren(void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

     void setInternalParent (const BonePtr &value);
     void setInternalRelativeTransformation(const Matrix &value);
     void setInternalAbsoluteTransformation(const Matrix &value);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

#if !defined(OSG_FIXED_MFIELDSYNC)
    void executeSyncImpl(      BoneBase *pOther,
                         const BitVector         &whichField);

    virtual void   executeSync(      FieldContainer    &other,
                               const BitVector         &whichField);
#else
    void executeSyncImpl(      BoneBase *pOther,
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
    void operator =(const BoneBase &source);
};

//---------------------------------------------------------------------------
//   Exported Types
//---------------------------------------------------------------------------


typedef BoneBase *BoneBaseP;

typedef osgIF<BoneBase::isNodeCore,
              CoredNodePtr<Bone>,
              FieldContainer::attempt_to_create_CoredNodePtr_on_non_NodeCore_FC
              >::_IRet BoneNodePtr;

typedef RefPtr<BonePtr> BoneRefPtr;

OSG_END_NAMESPACE

#define OSGBONEBASE_HEADER_CVSID "@(#)$Id: FCBaseTemplate_h.h,v 1.40 2005/07/20 00:10:14 vossg Exp $"

#endif /* _OSGBONEBASE_H_ */