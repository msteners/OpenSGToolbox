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
 **     class DialogHierarchy
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGDIALOGHIERARCHYBASE_H_
#define _OSGDIALOGHIERARCHYBASE_H_
#ifdef __sgi
#pragma once
#endif


#include <OpenSG/OSGConfig.h>
#include "OSGGameDef.h"

#include <OpenSG/OSGBaseTypes.h>
#include <OpenSG/OSGRefPtr.h>
#include <OpenSG/OSGCoredNodePtr.h>

#include <OpenSG/OSGAttachmentContainer.h> // Parent

#include "Dialog/OSGDialogFields.h" // RootDialog type
#include "Dialog/OSGDialogFields.h" // CurrentDialog type
#include "Dialog/OSGDialogFields.h" // CurrentDialogResponses type
#include <OpenSG/OSGBoolFields.h> // DualNodeStyle type

#include "OSGDialogHierarchyFields.h"
#include <OpenSG/Toolbox/OSGEventProducer.h>
#include <OpenSG/Toolbox/OSGEventProducerType.h>
#include <OpenSG/Toolbox/OSGMethodDescription.h>
#include <OpenSG/Toolbox/OSGEventProducerPtrType.h>

OSG_BEGIN_NAMESPACE

class DialogHierarchy;
class BinaryDataHandler;

//! \brief DialogHierarchy Base Class.

class OSG_GAMELIB_DLLMAPPING DialogHierarchyBase : public AttachmentContainer
{
  private:

    typedef AttachmentContainer    Inherited;

    /*==========================  PUBLIC  =================================*/
  public:

    typedef DialogHierarchyPtr  Ptr;

    enum
    {
        RootDialogFieldId             = Inherited::NextFieldId,
        CurrentDialogFieldId          = RootDialogFieldId             + 1,
        CurrentDialogResponsesFieldId = CurrentDialogFieldId          + 1,
        DualNodeStyleFieldId          = CurrentDialogResponsesFieldId + 1,
        EventProducerFieldId          = DualNodeStyleFieldId          + 1,
        NextFieldId                   = EventProducerFieldId          + 1
    };

    static const OSG::BitVector RootDialogFieldMask;
    static const OSG::BitVector CurrentDialogFieldMask;
    static const OSG::BitVector CurrentDialogResponsesFieldMask;
    static const OSG::BitVector DualNodeStyleFieldMask;
    static const OSG::BitVector EventProducerFieldMask;


    enum
    {
        NewDialogStartedMethodId       = 1,
        DialogEndedMethodId            = NewDialogStartedMethodId       + 1,
        DialogResponseSelectedMethodId = DialogEndedMethodId            + 1,
        DialogResponsesReadyMethodId   = DialogResponseSelectedMethodId + 1,
        TerminatedMethodId             = DialogResponsesReadyMethodId   + 1,
        NextMethodId                   = TerminatedMethodId             + 1
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


           SFDialogPtr         *editSFRootDialog     (void);
     const SFDialogPtr         *getSFRootDialog     (void) const;

           SFDialogPtr         *editSFCurrentDialog  (void);
     const SFDialogPtr         *getSFCurrentDialog  (void) const;

           MFDialogPtr         *editMFCurrentDialogResponses(void);
     const MFDialogPtr         *getMFCurrentDialogResponses(void) const;

           SFBool              *editSFDualNodeStyle  (void);
     const SFBool              *getSFDualNodeStyle  (void) const;


           DialogPtr           &editRootDialog     (void);
     const DialogPtr           &getRootDialog     (void) const;

           DialogPtr           &editCurrentDialog  (void);
     const DialogPtr           &getCurrentDialog  (void) const;

           bool                &editDualNodeStyle  (void);
     const bool                &getDualNodeStyle  (void) const;

           DialogPtr           &editCurrentDialogResponses(const UInt32 index);
     const DialogPtr           &getCurrentDialogResponses(const UInt32 index) const;
#ifndef OSG_2_PREP
           MFDialogPtr         &getCurrentDialogResponses(void);
     const MFDialogPtr         &getCurrentDialogResponses(void) const;
#endif

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

     void setRootDialog     ( const DialogPtr &value );
     void setCurrentDialog  ( const DialogPtr &value );
     void setDualNodeStyle  ( const bool &value );

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

    static  DialogHierarchyPtr      create          (void); 
    static  DialogHierarchyPtr      createEmpty     (void); 

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

    SFDialogPtr         _sfRootDialog;
    SFDialogPtr         _sfCurrentDialog;
    MFDialogPtr         _mfCurrentDialogResponses;
    SFBool              _sfDualNodeStyle;

    /*! \}                                                                 */
    SFEventProducerPtr _sfEventProducer;
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    DialogHierarchyBase(void);
    DialogHierarchyBase(const DialogHierarchyBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~DialogHierarchyBase(void); 

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

#if !defined(OSG_FIXED_MFIELDSYNC)
    void executeSyncImpl(      DialogHierarchyBase *pOther,
                         const BitVector         &whichField);

    virtual void   executeSync(      FieldContainer    &other,
                               const BitVector         &whichField);
#else
    void executeSyncImpl(      DialogHierarchyBase *pOther,
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
    void operator =(const DialogHierarchyBase &source);
};

//---------------------------------------------------------------------------
//   Exported Types
//---------------------------------------------------------------------------


typedef DialogHierarchyBase *DialogHierarchyBaseP;

typedef osgIF<DialogHierarchyBase::isNodeCore,
              CoredNodePtr<DialogHierarchy>,
              FieldContainer::attempt_to_create_CoredNodePtr_on_non_NodeCore_FC
              >::_IRet DialogHierarchyNodePtr;

typedef RefPtr<DialogHierarchyPtr> DialogHierarchyRefPtr;

OSG_END_NAMESPACE

#endif /* _OSGDIALOGHIERARCHYBASE_H_ */
