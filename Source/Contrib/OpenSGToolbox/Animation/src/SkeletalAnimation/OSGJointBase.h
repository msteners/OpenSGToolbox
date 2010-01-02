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
 **     class Joint
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGJOINTBASE_H_
#define _OSGJOINTBASE_H_
#ifdef __sgi
#pragma once
#endif


#include <OpenSG/OSGConfig.h>
#include "OSGAnimationDef.h"

#include <OpenSG/OSGBaseTypes.h>
#include <OpenSG/OSGRefPtr.h>
#include <OpenSG/OSGCoredNodePtr.h>

#include <OpenSG/OSGAttachmentContainer.h> // Parent

#include <OpenSG/OSGMatrixFields.h> // RelativeTransformation type
#include <OpenSG/OSGMatrixFields.h> // BindRelativeTransformation type
#include "OSGJointFields.h" // ChildJoints type
#include "OSGJointFields.h" // ParentJoint type
#include "SkeletalAnimation/OSGSkeletonFields.h" // ParentSkeleton type
#include <OpenSG/OSGBoolFields.h> // UseParentTranslation type

#include "OSGJointFields.h"

OSG_BEGIN_NAMESPACE

class Joint;
class BinaryDataHandler;

//! \brief Joint Base Class.

class OSG_ANIMATIONLIB_DLLMAPPING JointBase : public AttachmentContainer
{
  private:

    typedef AttachmentContainer    Inherited;

    /*==========================  PUBLIC  =================================*/
  public:

    typedef JointPtr  Ptr;

    enum
    {
        RelativeTransformationFieldId     = Inherited::NextFieldId,
        BindRelativeTransformationFieldId = RelativeTransformationFieldId     + 1,
        ChildJointsFieldId                = BindRelativeTransformationFieldId + 1,
        ParentJointFieldId                = ChildJointsFieldId                + 1,
        ParentSkeletonFieldId             = ParentJointFieldId                + 1,
        UseParentTranslationFieldId       = ParentSkeletonFieldId             + 1,
        NextFieldId                       = UseParentTranslationFieldId       + 1
    };

    static const OSG::BitVector RelativeTransformationFieldMask;
    static const OSG::BitVector BindRelativeTransformationFieldMask;
    static const OSG::BitVector ChildJointsFieldMask;
    static const OSG::BitVector ParentJointFieldMask;
    static const OSG::BitVector ParentSkeletonFieldMask;
    static const OSG::BitVector UseParentTranslationFieldMask;


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

           SFMatrix            *getSFRelativeTransformation(void);
           SFMatrix            *getSFBindRelativeTransformation(void);
           MFJointPtr          *getMFChildJoints    (void);
           SFJointPtr          *getSFParentJoint    (void);
           SFSkeletonPtr       *getSFParentSkeleton (void);
           SFBool              *getSFUseParentTranslation(void);

           Matrix              &getRelativeTransformation(void);
     const Matrix              &getRelativeTransformation(void) const;
           Matrix              &getBindRelativeTransformation(void);
     const Matrix              &getBindRelativeTransformation(void) const;
           JointPtr            &getParentJoint    (void);
     const JointPtr            &getParentJoint    (void) const;
           SkeletonPtr         &getParentSkeleton (void);
     const SkeletonPtr         &getParentSkeleton (void) const;
           bool                &getUseParentTranslation(void);
     const bool                &getUseParentTranslation(void) const;
           JointPtr            &getChildJoints    (const UInt32 index);
           MFJointPtr          &getChildJoints    (void);
     const MFJointPtr          &getChildJoints    (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

     void setRelativeTransformation( const Matrix &value );
     void setBindRelativeTransformation( const Matrix &value );
     void setParentJoint    ( const JointPtr &value );
     void setParentSkeleton ( const SkeletonPtr &value );
     void setUseParentTranslation( const bool &value );

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

    static  JointPtr      create          (void); 
    static  JointPtr      createEmpty     (void); 

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

    SFMatrix            _sfRelativeTransformation;
    SFMatrix            _sfBindRelativeTransformation;
    MFJointPtr          _mfChildJoints;
    SFJointPtr          _sfParentJoint;
    SFSkeletonPtr       _sfParentSkeleton;
    SFBool              _sfUseParentTranslation;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    JointBase(void);
    JointBase(const JointBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~JointBase(void); 

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

#if !defined(OSG_FIXED_MFIELDSYNC)
    void executeSyncImpl(      JointBase *pOther,
                         const BitVector         &whichField);

    virtual void   executeSync(      FieldContainer    &other,
                               const BitVector         &whichField);
#else
    void executeSyncImpl(      JointBase *pOther,
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
    void operator =(const JointBase &source);
};

//---------------------------------------------------------------------------
//   Exported Types
//---------------------------------------------------------------------------


typedef JointBase *JointBaseP;

typedef osgIF<JointBase::isNodeCore,
              CoredNodePtr<Joint>,
              FieldContainer::attempt_to_create_CoredNodePtr_on_non_NodeCore_FC
              >::_IRet JointNodePtr;

typedef RefPtr<JointPtr> JointRefPtr;

OSG_END_NAMESPACE

#define OSGJOINTBASE_HEADER_CVSID "@(#)$Id: FCBaseTemplate_h.h,v 1.40 2005/07/20 00:10:14 vossg Exp $"

#endif /* _OSGJOINTBASE_H_ */

