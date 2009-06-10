/*---------------------------------------------------------------------------*\
 *                         OpenSG ToolBox Physics                            *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                          www.vrac.iastate.edu                             *
 *                                                                           *
 *                Authors: Behboud Kalantary, David Kabala                   *
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
 **     class PhysicsGeom
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGPHYSICSGEOMBASE_H_
#define _OSGPHYSICSGEOMBASE_H_
#ifdef __sgi
#pragma once
#endif


#include <OpenSG/OSGConfig.h>
#include "OSGPhysicsDef.h"

#include <OpenSG/OSGBaseTypes.h>
#include <OpenSG/OSGRefPtr.h>
#include <OpenSG/OSGCoredNodePtr.h>

#include <OpenSG/OSGAttachment.h> // Parent

#include "ODE/OSGPhysicsBodyFields.h" // Body type
#include <OpenSG/OSGVec3fFields.h> // Position type
#include <OpenSG/OSGMatrixFields.h> // Rotation type
#include <OpenSG/OSGQuaternionFields.h> // Quaternion type
#include <OpenSG/OSGVec3fFields.h> // OffsetPosition type
#include <OpenSG/OSGMatrixFields.h> // OffsetRotation type
#include <OpenSG/OSGQuaternionFields.h> // OffsetQuaternion type
#include <OpenSG/OSGUInt64Fields.h> // CategoryBits type
#include <OpenSG/OSGUInt64Fields.h> // CollideBits type
#include "ODE/Spaces/OSGPhysicsSpaceFields.h" // Space type
#include <OpenSG/OSGBoolFields.h> // Enable type

#include "OSGPhysicsGeomFields.h"

OSG_BEGIN_NAMESPACE

class PhysicsGeom;
class BinaryDataHandler;

//! \brief PhysicsGeom Base Class.

class OSG_PHYSICSLIB_DLLMAPPING PhysicsGeomBase : public Attachment
{
  private:

    typedef Attachment    Inherited;

    /*==========================  PUBLIC  =================================*/
  public:

    typedef PhysicsGeomPtr  Ptr;

    enum
    {
        BodyFieldId             = Inherited::NextFieldId,
        PositionFieldId         = BodyFieldId             + 1,
        RotationFieldId         = PositionFieldId         + 1,
        QuaternionFieldId       = RotationFieldId         + 1,
        OffsetPositionFieldId   = QuaternionFieldId       + 1,
        OffsetRotationFieldId   = OffsetPositionFieldId   + 1,
        OffsetQuaternionFieldId = OffsetRotationFieldId   + 1,
        CategoryBitsFieldId     = OffsetQuaternionFieldId + 1,
        CollideBitsFieldId      = CategoryBitsFieldId     + 1,
        SpaceFieldId            = CollideBitsFieldId      + 1,
        EnableFieldId           = SpaceFieldId            + 1,
        NextFieldId             = EnableFieldId           + 1
    };

    static const OSG::BitVector BodyFieldMask;
    static const OSG::BitVector PositionFieldMask;
    static const OSG::BitVector RotationFieldMask;
    static const OSG::BitVector QuaternionFieldMask;
    static const OSG::BitVector OffsetPositionFieldMask;
    static const OSG::BitVector OffsetRotationFieldMask;
    static const OSG::BitVector OffsetQuaternionFieldMask;
    static const OSG::BitVector CategoryBitsFieldMask;
    static const OSG::BitVector CollideBitsFieldMask;
    static const OSG::BitVector SpaceFieldMask;
    static const OSG::BitVector EnableFieldMask;


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

           SFPhysicsBodyPtr    *getSFBody           (void);
           SFVec3f             *getSFPosition       (void);
           SFMatrix            *getSFRotation       (void);
           SFQuaternion        *getSFQuaternion     (void);
           SFVec3f             *getSFOffsetPosition (void);
           SFMatrix            *getSFOffsetRotation (void);
           SFQuaternion        *getSFOffsetQuaternion(void);
           SFUInt64            *getSFCategoryBits   (void);
           SFUInt64            *getSFCollideBits    (void);
           SFPhysicsSpacePtr   *getSFSpace          (void);
           SFBool              *getSFEnable         (void);

           PhysicsBodyPtr      &getBody           (void);
     const PhysicsBodyPtr      &getBody           (void) const;
           Vec3f               &getPosition       (void);
     const Vec3f               &getPosition       (void) const;
           Matrix              &getRotation       (void);
     const Matrix              &getRotation       (void) const;
           Quaternion          &getQuaternion     (void);
     const Quaternion          &getQuaternion     (void) const;
           Vec3f               &getOffsetPosition (void);
     const Vec3f               &getOffsetPosition (void) const;
           Matrix              &getOffsetRotation (void);
     const Matrix              &getOffsetRotation (void) const;
           Quaternion          &getOffsetQuaternion(void);
     const Quaternion          &getOffsetQuaternion(void) const;
           UInt64              &getCategoryBits   (void);
     const UInt64              &getCategoryBits   (void) const;
           UInt64              &getCollideBits    (void);
     const UInt64              &getCollideBits    (void) const;
           PhysicsSpacePtr     &getSpace          (void);
     const PhysicsSpacePtr     &getSpace          (void) const;
           bool                &getEnable         (void);
     const bool                &getEnable         (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

     void setBody           ( const PhysicsBodyPtr &value );
     void setPosition       ( const Vec3f &value );
     void setRotation       ( const Matrix &value );
     void setQuaternion     ( const Quaternion &value );
     void setOffsetPosition ( const Vec3f &value );
     void setOffsetRotation ( const Matrix &value );
     void setOffsetQuaternion( const Quaternion &value );
     void setCategoryBits   ( const UInt64 &value );
     void setCollideBits    ( const UInt64 &value );
     void setSpace          ( const PhysicsSpacePtr &value );
     void setEnable         ( const bool &value );

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
    /*=========================  PROTECTED  ===============================*/
  protected:

    /*---------------------------------------------------------------------*/
    /*! \name                      Fields                                  */
    /*! \{                                                                 */

    SFPhysicsBodyPtr    _sfBody;
    SFVec3f             _sfPosition;
    SFMatrix            _sfRotation;
    SFQuaternion        _sfQuaternion;
    SFVec3f             _sfOffsetPosition;
    SFMatrix            _sfOffsetRotation;
    SFQuaternion        _sfOffsetQuaternion;
    SFUInt64            _sfCategoryBits;
    SFUInt64            _sfCollideBits;
    SFPhysicsSpacePtr   _sfSpace;
    SFBool              _sfEnable;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    PhysicsGeomBase(void);
    PhysicsGeomBase(const PhysicsGeomBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~PhysicsGeomBase(void); 

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

#if !defined(OSG_FIXED_MFIELDSYNC)
    void executeSyncImpl(      PhysicsGeomBase *pOther,
                         const BitVector         &whichField);

    virtual void   executeSync(      FieldContainer    &other,
                               const BitVector         &whichField);
#else
    void executeSyncImpl(      PhysicsGeomBase *pOther,
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
    void operator =(const PhysicsGeomBase &source);
};

//---------------------------------------------------------------------------
//   Exported Types
//---------------------------------------------------------------------------


typedef PhysicsGeomBase *PhysicsGeomBaseP;

typedef osgIF<PhysicsGeomBase::isNodeCore,
              CoredNodePtr<PhysicsGeom>,
              FieldContainer::attempt_to_create_CoredNodePtr_on_non_NodeCore_FC
              >::_IRet PhysicsGeomNodePtr;

typedef RefPtr<PhysicsGeomPtr> PhysicsGeomRefPtr;

OSG_END_NAMESPACE

#define OSGPHYSICSGEOMBASE_HEADER_CVSID "@(#)$Id: FCBaseTemplate_h.h,v 1.40 2005/07/20 00:10:14 vossg Exp $"

#endif /* _OSGPHYSICSGEOMBASE_H_ */