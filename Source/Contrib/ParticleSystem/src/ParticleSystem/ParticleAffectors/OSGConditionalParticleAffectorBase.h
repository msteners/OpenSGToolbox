/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
 *                                                                           *
 *                            www.opensg.org                                 *
 *                                                                           *
 *   contact:  David Kabala (djkabala@gmail.com), Daniel Guilliams           *
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
 **     class ConditionalParticleAffector
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGCONDITIONALPARTICLEAFFECTORBASE_H_
#define _OSGCONDITIONALPARTICLEAFFECTORBASE_H_
#ifdef __sgi
#pragma once
#endif


#include "OSGConfig.h"
#include "OSGContribParticleSystemDef.h"

//#include "OSGBaseTypes.h"

#include "OSGParticleAffector.h" // Parent

#include "OSGBaseFields.h"              // ConditionalAttribute type
#include "OSGSysFields.h"               // ConditionalOperator type
#include "OSGParticleAffectorFields.h"  // Affectors type

#include "OSGConditionalParticleAffectorFields.h"

OSG_BEGIN_NAMESPACE

class ConditionalParticleAffector;

//! \brief ConditionalParticleAffector Base Class.

class OSG_CONTRIBPARTICLESYSTEM_DLLMAPPING ConditionalParticleAffectorBase : public ParticleAffector
{
  public:

    typedef ParticleAffector Inherited;
    typedef ParticleAffector ParentContainer;

    typedef Inherited::TypeObject TypeObject;
    typedef TypeObject::InitPhase InitPhase;

    OSG_GEN_INTERNALPTR(ConditionalParticleAffector);

    /*==========================  PUBLIC  =================================*/

  public:

    enum
    {
        ConditionalAttributeFieldId = Inherited::NextFieldId,
        ConditionalOperatorFieldId = ConditionalAttributeFieldId + 1,
        ConditionalValueFieldId = ConditionalOperatorFieldId + 1,
        AffectorsFieldId = ConditionalValueFieldId + 1,
        NextFieldId = AffectorsFieldId + 1
    };

    static const OSG::BitVector ConditionalAttributeFieldMask =
        (TypeTraits<BitVector>::One << ConditionalAttributeFieldId);
    static const OSG::BitVector ConditionalOperatorFieldMask =
        (TypeTraits<BitVector>::One << ConditionalOperatorFieldId);
    static const OSG::BitVector ConditionalValueFieldMask =
        (TypeTraits<BitVector>::One << ConditionalValueFieldId);
    static const OSG::BitVector AffectorsFieldMask =
        (TypeTraits<BitVector>::One << AffectorsFieldId);
    static const OSG::BitVector NextFieldMask =
        (TypeTraits<BitVector>::One << NextFieldId);
        
    typedef SFString          SFConditionalAttributeType;
    typedef SFUInt8           SFConditionalOperatorType;
    typedef SFUInt32          SFConditionalValueType;
    typedef MFUnrecParticleAffectorPtr MFAffectorsType;

    /*---------------------------------------------------------------------*/
    /*! \name                    Class Get                                 */
    /*! \{                                                                 */

    static FieldContainerType &getClassType   (void);
    static UInt32              getClassTypeId (void);
    static UInt16              getClassGroupId(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                FieldContainer Get                            */
    /*! \{                                                                 */

    virtual       FieldContainerType &getType         (void);
    virtual const FieldContainerType &getType         (void) const;

    virtual       UInt32              getContainerSize(void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Get                                 */
    /*! \{                                                                 */


                  SFString            *editSFConditionalAttribute(void);
            const SFString            *getSFConditionalAttribute (void) const;

                  SFUInt8             *editSFConditionalOperator(void);
            const SFUInt8             *getSFConditionalOperator (void) const;

                  SFUInt32            *editSFConditionalValue(void);
            const SFUInt32            *getSFConditionalValue (void) const;
            const MFUnrecParticleAffectorPtr *getMFAffectors      (void) const;
                  MFUnrecParticleAffectorPtr *editMFAffectors      (void);


                  std::string         &editConditionalAttribute(void);
            const std::string         &getConditionalAttribute (void) const;

                  UInt8               &editConditionalOperator(void);
                  UInt8                getConditionalOperator (void) const;

                  UInt32              &editConditionalValue(void);
                  UInt32               getConditionalValue (void) const;

                  ParticleAffector * getAffectors      (const UInt32 index) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setConditionalAttribute(const std::string &value);
            void setConditionalOperator(const UInt8 value);
            void setConditionalValue(const UInt32 value);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Ptr Field Set                                 */
    /*! \{                                                                 */

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Ptr MField Set                                */
    /*! \{                                                                 */

    void pushToAffectors           (ParticleAffector * const value   );
    void assignAffectors          (const MFUnrecParticleAffectorPtr &value);
    void removeFromAffectors (UInt32               uiIndex );
    void removeObjFromAffectors(ParticleAffector * const value   );
    void clearAffectors             (void                         );

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Binary Access                              */
    /*! \{                                                                 */

    virtual UInt32 getBinSize (ConstFieldMaskArg  whichField);
    virtual void   copyToBin  (BinaryDataHandler &pMem,
                               ConstFieldMaskArg  whichField);
    virtual void   copyFromBin(BinaryDataHandler &pMem,
                               ConstFieldMaskArg  whichField);


    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Construction                               */
    /*! \{                                                                 */

    static  ConditionalParticleAffectorTransitPtr  create          (void);
    static  ConditionalParticleAffector           *createEmpty     (void);

    static  ConditionalParticleAffectorTransitPtr  createLocal     (
                                               BitVector bFlags = FCLocal::All);

    static  ConditionalParticleAffector            *createEmptyLocal(
                                              BitVector bFlags = FCLocal::All);

    static  ConditionalParticleAffectorTransitPtr  createDependent  (BitVector bFlags);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Copy                                   */
    /*! \{                                                                 */

    virtual FieldContainerTransitPtr shallowCopy     (void) const;
    virtual FieldContainerTransitPtr shallowCopyLocal(
                                       BitVector bFlags = FCLocal::All) const;
    virtual FieldContainerTransitPtr shallowCopyDependent(
                                                      BitVector bFlags) const;

    /*! \}                                                                 */
    /*=========================  PROTECTED  ===============================*/

  protected:

    static TypeObject _type;

    static       void   classDescInserter(TypeObject &oType);
    static const Char8 *getClassname     (void             );

    /*---------------------------------------------------------------------*/
    /*! \name                      Fields                                  */
    /*! \{                                                                 */

    SFString          _sfConditionalAttribute;
    SFUInt8           _sfConditionalOperator;
    SFUInt32          _sfConditionalValue;
    MFUnrecParticleAffectorPtr _mfAffectors;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    ConditionalParticleAffectorBase(void);
    ConditionalParticleAffectorBase(const ConditionalParticleAffectorBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~ConditionalParticleAffectorBase(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     onCreate                                */
    /*! \{                                                                 */

    void onCreate(const ConditionalParticleAffector *source = NULL);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Generic Field Access                      */
    /*! \{                                                                 */

    GetFieldHandlePtr  getHandleConditionalAttribute (void) const;
    EditFieldHandlePtr editHandleConditionalAttribute(void);
    GetFieldHandlePtr  getHandleConditionalOperator (void) const;
    EditFieldHandlePtr editHandleConditionalOperator(void);
    GetFieldHandlePtr  getHandleConditionalValue (void) const;
    EditFieldHandlePtr editHandleConditionalValue(void);
    GetFieldHandlePtr  getHandleAffectors       (void) const;
    EditFieldHandlePtr editHandleAffectors      (void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

#ifdef OSG_MT_CPTR_ASPECT
    virtual void execSyncV(      FieldContainer    &oFrom,
                                 ConstFieldMaskArg  whichField,
                                 AspectOffsetStore &oOffsets,
                                 ConstFieldMaskArg  syncMode  ,
                           const UInt32             uiSyncInfo);

            void execSync (      ConditionalParticleAffectorBase *pFrom,
                                 ConstFieldMaskArg  whichField,
                                 AspectOffsetStore &oOffsets,
                                 ConstFieldMaskArg  syncMode  ,
                           const UInt32             uiSyncInfo);
#endif

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Edit                                   */
    /*! \{                                                                 */

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     Aspect Create                            */
    /*! \{                                                                 */

#ifdef OSG_MT_CPTR_ASPECT
    virtual FieldContainer *createAspectCopy(
                                    const FieldContainer *pRefAspect) const;
#endif

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Edit                                   */
    /*! \{                                                                 */
    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

    virtual void resolveLinks(void);

    /*! \}                                                                 */
    /*==========================  PRIVATE  ================================*/

  private:
    /*---------------------------------------------------------------------*/

    // prohibit default functions (move to 'public' if you need one)
    void operator =(const ConditionalParticleAffectorBase &source);
};

typedef ConditionalParticleAffectorBase *ConditionalParticleAffectorBaseP;

OSG_END_NAMESPACE

#endif /* _OSGCONDITIONALPARTICLEAFFECTORBASE_H_ */
