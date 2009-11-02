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
 **     class CollisionParticleSystemAffector
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGCOLLISIONPARTICLESYSTEMAFFECTORBASE_H_
#define _OSGCOLLISIONPARTICLESYSTEMAFFECTORBASE_H_
#ifdef __sgi
#pragma once
#endif


#include <OpenSG/OSGConfig.h>
#include "OSGParticleSystemDef.h"

#include <OpenSG/OSGBaseTypes.h>
#include <OpenSG/OSGRefPtr.h>
#include <OpenSG/OSGCoredNodePtr.h>

#include "OSGParticleSystemAffector.h" // Parent

#include <OpenSG/OSGReal32Fields.h> // CollisionDistance type
#include "ParticleSystem/OSGParticleSystemFields.h" // SecondaryCollisionSystems type

#include "OSGCollisionParticleSystemAffectorFields.h"
#include <OpenSG/Toolbox/OSGEventProducer.h>
#include <OpenSG/Toolbox/OSGEventProducerType.h>
#include <OpenSG/Toolbox/OSGMethodDescription.h>
#include <OpenSG/Toolbox/OSGEventProducerPtrType.h>

OSG_BEGIN_NAMESPACE

class CollisionParticleSystemAffector;
class BinaryDataHandler;

//! \brief CollisionParticleSystemAffector Base Class.

class OSG_PARTICLESYSTEMLIB_DLLMAPPING CollisionParticleSystemAffectorBase : public ParticleSystemAffector
{
  private:

    typedef ParticleSystemAffector    Inherited;

    /*==========================  PUBLIC  =================================*/
  public:

    typedef CollisionParticleSystemAffectorPtr  Ptr;

    enum
    {
        CollisionDistanceFieldId         = Inherited::NextFieldId,
        SecondaryCollisionSystemsFieldId = CollisionDistanceFieldId         + 1,
        EventProducerFieldId             = SecondaryCollisionSystemsFieldId + 1,
        NextFieldId                      = EventProducerFieldId             + 1
    };

    static const OSG::BitVector CollisionDistanceFieldMask;
    static const OSG::BitVector SecondaryCollisionSystemsFieldMask;
    static const OSG::BitVector EventProducerFieldMask;


    enum
    {
        ParticleCollisionMethodId = 1,
        NextMethodId              = ParticleCollisionMethodId + 1
    };



    static const OSG::BitVector MTInfluenceMask;

    /*---------------------------------------------------------------------*/
    /*! \name                    Class Get                                 */
    /*! \{                                                                 */

    static        FieldContainerType &getClassType    (void); 
    static        UInt32              getClassTypeId  (void); 
    static const  EventProducerType  &getProducerClassType  (void); 
    static        UInt32              getProducerClassTypeId(void); 

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


           SFReal32            *editSFCollisionDistance(void);
     const SFReal32            *getSFCollisionDistance(void) const;

           MFParticleSystemPtr *editMFSecondaryCollisionSystems(void);
     const MFParticleSystemPtr *getMFSecondaryCollisionSystems(void) const;


           Real32              &editCollisionDistance(void);
     const Real32              &getCollisionDistance(void) const;

           ParticleSystemPtr   &editSecondaryCollisionSystems(const UInt32 index);
     const ParticleSystemPtr   &getSecondaryCollisionSystems(const UInt32 index) const;
#ifndef OSG_2_PREP
           MFParticleSystemPtr &getSecondaryCollisionSystems(void);
     const MFParticleSystemPtr &getSecondaryCollisionSystems(void) const;
#endif

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

     void setCollisionDistance( const Real32 &value );

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Method Produced Get                           */
    /*! \{                                                                 */

    virtual const EventProducerType &getProducerType(void) const; 
    EventConnection attachActivity(ActivityPtr TheActivity, UInt32 ProducedEventId);
    bool isActivityAttached(ActivityPtr TheActivity, UInt32 ProducedEventId) const;
    UInt32 getNumActivitiesAttached(UInt32 ProducedEventId) const;
    ActivityPtr getAttachedActivity(UInt32 ProducedEventId, UInt32 ActivityIndex) const;
    void detachActivity(ActivityPtr TheActivity, UInt32 ProducedEventId);
    UInt32 getNumProducedEvents(void) const;
    const MethodDescription *getProducedEventDescription(const Char8 *ProducedEventName) const;
    const MethodDescription *getProducedEventDescription(UInt32 ProducedEventId) const;
    UInt32 getProducedEventId(const Char8 *ProducedEventName) const;

    SFEventProducerPtr *editSFEventProducer(void);
    EventProducerPtr &editEventProducer(void);

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

    static  CollisionParticleSystemAffectorPtr      create          (void); 
    static  CollisionParticleSystemAffectorPtr      createEmpty     (void); 

    /*! \}                                                                 */

    /*---------------------------------------------------------------------*/
    /*! \name                       Copy                                   */
    /*! \{                                                                 */

    virtual FieldContainerPtr     shallowCopy     (void) const; 

    /*! \}                                                                 */
    /*=========================  PROTECTED  ===============================*/
  protected:
    EventProducer _Producer;


    /*---------------------------------------------------------------------*/
    /*! \name                      Fields                                  */
    /*! \{                                                                 */

    SFReal32            _sfCollisionDistance;
    MFParticleSystemPtr   _mfSecondaryCollisionSystems;

    /*! \}                                                                 */
    SFEventProducerPtr _sfEventProducer;
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    CollisionParticleSystemAffectorBase(void);
    CollisionParticleSystemAffectorBase(const CollisionParticleSystemAffectorBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~CollisionParticleSystemAffectorBase(void); 

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

#if !defined(OSG_FIXED_MFIELDSYNC)
    void executeSyncImpl(      CollisionParticleSystemAffectorBase *pOther,
                         const BitVector         &whichField);

    virtual void   executeSync(      FieldContainer    &other,
                               const BitVector         &whichField);
#else
    void executeSyncImpl(      CollisionParticleSystemAffectorBase *pOther,
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

    static MethodDescription   *_methodDesc[];
    static EventProducerType _producerType;

    static FieldDescription   *_desc[];
    static FieldContainerType  _type;


    // prohibit default functions (move to 'public' if you need one)
    void operator =(const CollisionParticleSystemAffectorBase &source);
};

//---------------------------------------------------------------------------
//   Exported Types
//---------------------------------------------------------------------------


typedef CollisionParticleSystemAffectorBase *CollisionParticleSystemAffectorBaseP;

typedef osgIF<CollisionParticleSystemAffectorBase::isNodeCore,
              CoredNodePtr<CollisionParticleSystemAffector>,
              FieldContainer::attempt_to_create_CoredNodePtr_on_non_NodeCore_FC
              >::_IRet CollisionParticleSystemAffectorNodePtr;

typedef RefPtr<CollisionParticleSystemAffectorPtr> CollisionParticleSystemAffectorRefPtr;

OSG_END_NAMESPACE

#endif /* _OSGCOLLISIONPARTICLESYSTEMAFFECTORBASE_H_ */
