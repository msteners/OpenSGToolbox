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
 **     class LinearPositionalAttribute
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGLINEARPOSITIONALATTRIBUTEBASE_H_
#define _OSGLINEARPOSITIONALATTRIBUTEBASE_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGPhysicsConfig.h"
#include <OpenSG/OSGConfig.h>

#include <OpenSG/OSGBaseTypes.h>
#include <OpenSG/OSGRefPtr.h>
#include <OpenSG/OSGCoredNodePtr.h>

#include "OSGPhysicsObjectAttribute.h" // Parent

#include <OpenSG/OSGPnt3fFields.h> // Position type
#include <OpenSG/OSGVec3fFields.h> // Velocity type
#include <OpenSG/OSGVec3fFields.h> // Acceleration type

#include "OSGLinearPositionalAttributeFields.h"

OSG_BEGIN_NAMESPACE

class LinearPositionalAttribute;
class BinaryDataHandler;

//! \brief LinearPositionalAttribute Base Class.

class OSG_PHYSICS_CLASS_API LinearPositionalAttributeBase : public PhysicsObjectAttribute
{
  private:

    typedef PhysicsObjectAttribute    Inherited;

    /*==========================  PUBLIC  =================================*/
  public:

    typedef LinearPositionalAttributePtr  Ptr;

    enum
    {
        PositionFieldId     = Inherited::NextFieldId,
        VelocityFieldId     = PositionFieldId     + 1,
        AccelerationFieldId = VelocityFieldId     + 1,
        NextFieldId         = AccelerationFieldId + 1
    };

    static const OSG::BitVector PositionFieldMask;
    static const OSG::BitVector VelocityFieldMask;
    static const OSG::BitVector AccelerationFieldMask;


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

           SFPnt3f             *getSFPosition       (void);
           SFVec3f             *getSFVelocity       (void);
           SFVec3f             *getSFAcceleration   (void);

           Pnt3f               &getPosition       (void);
     const Pnt3f               &getPosition       (void) const;
           Vec3f               &getVelocity       (void);
     const Vec3f               &getVelocity       (void) const;
           Vec3f               &getAcceleration   (void);
     const Vec3f               &getAcceleration   (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

     void setPosition       ( const Pnt3f &value );
     void setVelocity       ( const Vec3f &value );
     void setAcceleration   ( const Vec3f &value );

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

    static  LinearPositionalAttributePtr      create          (void); 
    static  LinearPositionalAttributePtr      createEmpty     (void); 

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

    SFPnt3f             _sfPosition;
    SFVec3f             _sfVelocity;
    SFVec3f             _sfAcceleration;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    LinearPositionalAttributeBase(void);
    LinearPositionalAttributeBase(const LinearPositionalAttributeBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~LinearPositionalAttributeBase(void); 

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

#if !defined(OSG_FIXED_MFIELDSYNC)
    void executeSyncImpl(      LinearPositionalAttributeBase *pOther,
                         const BitVector         &whichField);

    virtual void   executeSync(      FieldContainer    &other,
                               const BitVector         &whichField);
#else
    void executeSyncImpl(      LinearPositionalAttributeBase *pOther,
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
    void operator =(const LinearPositionalAttributeBase &source);
};

//---------------------------------------------------------------------------
//   Exported Types
//---------------------------------------------------------------------------


typedef LinearPositionalAttributeBase *LinearPositionalAttributeBaseP;

typedef osgIF<LinearPositionalAttributeBase::isNodeCore,
              CoredNodePtr<LinearPositionalAttribute>,
              FieldContainer::attempt_to_create_CoredNodePtr_on_non_NodeCore_FC
              >::_IRet LinearPositionalAttributeNodePtr;

typedef RefPtr<LinearPositionalAttributePtr> LinearPositionalAttributeRefPtr;

OSG_END_NAMESPACE

#define OSGLINEARPOSITIONALATTRIBUTEBASE_HEADER_CVSID "@(#)$Id: FCBaseTemplate_h.h,v 1.40 2005/07/20 00:10:14 vossg Exp $"

#endif /* _OSGLINEARPOSITIONALATTRIBUTEBASE_H_ */
