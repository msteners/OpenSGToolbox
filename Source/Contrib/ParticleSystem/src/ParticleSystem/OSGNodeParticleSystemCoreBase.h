/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
 *                                                                           *
 *                            www.opensg.org                                 *
 *                                                                           *
 *   contact:  David Kabala (djkabala@gmail.com)                             *
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
 **     class NodeParticleSystemCore
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGNODEPARTICLESYSTEMCOREBASE_H_
#define _OSGNODEPARTICLESYSTEMCOREBASE_H_
#ifdef __sgi
#pragma once
#endif


#include "OSGConfig.h"
#include "OSGContribParticleSystemDef.h"

//#include "OSGBaseTypes.h"

#include "OSGGroup.h" // Parent

#include "OSGParticleSystemFields.h"    // System type
#include "OSGNodeFields.h"              // PrototypeNode type
#include "OSGVecFields.h"               // SizeScaling type
#include "OSGSysFields.h"               // NormalSource type

#include "OSGNodeParticleSystemCoreFields.h"

OSG_BEGIN_NAMESPACE

class NodeParticleSystemCore;

//! \brief NodeParticleSystemCore Base Class.

class OSG_CONTRIBPARTICLESYSTEM_DLLMAPPING NodeParticleSystemCoreBase : public Group
{
  public:

    typedef Group Inherited;
    typedef Group ParentContainer;

    typedef Inherited::TypeObject TypeObject;
    typedef TypeObject::InitPhase InitPhase;

    OSG_GEN_INTERNALPTR(NodeParticleSystemCore);

    /*==========================  PUBLIC  =================================*/

  public:

    enum
    {
        SystemFieldId = Inherited::NextFieldId,
        PrototypeNodeFieldId = SystemFieldId + 1,
        SizeScalingFieldId = PrototypeNodeFieldId + 1,
        ParticleNodesFieldId = SizeScalingFieldId + 1,
        NormalSourceFieldId = ParticleNodesFieldId + 1,
        NormalFieldId = NormalSourceFieldId + 1,
        UpSourceFieldId = NormalFieldId + 1,
        UpFieldId = UpSourceFieldId + 1,
        NextFieldId = UpFieldId + 1
    };

    static const OSG::BitVector SystemFieldMask =
        (TypeTraits<BitVector>::One << SystemFieldId);
    static const OSG::BitVector PrototypeNodeFieldMask =
        (TypeTraits<BitVector>::One << PrototypeNodeFieldId);
    static const OSG::BitVector SizeScalingFieldMask =
        (TypeTraits<BitVector>::One << SizeScalingFieldId);
    static const OSG::BitVector ParticleNodesFieldMask =
        (TypeTraits<BitVector>::One << ParticleNodesFieldId);
    static const OSG::BitVector NormalSourceFieldMask =
        (TypeTraits<BitVector>::One << NormalSourceFieldId);
    static const OSG::BitVector NormalFieldMask =
        (TypeTraits<BitVector>::One << NormalFieldId);
    static const OSG::BitVector UpSourceFieldMask =
        (TypeTraits<BitVector>::One << UpSourceFieldId);
    static const OSG::BitVector UpFieldMask =
        (TypeTraits<BitVector>::One << UpFieldId);
    static const OSG::BitVector NextFieldMask =
        (TypeTraits<BitVector>::One << NextFieldId);
        
    typedef SFUnrecParticleSystemPtr SFSystemType;
    typedef SFUnrecNodePtr    SFPrototypeNodeType;
    typedef SFVec3f           SFSizeScalingType;
    typedef MFUnrecNodePtr    MFParticleNodesType;
    typedef SFUInt32          SFNormalSourceType;
    typedef SFVec3f           SFNormalType;
    typedef SFUInt32          SFUpSourceType;
    typedef SFVec3f           SFUpType;

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

            const SFUnrecParticleSystemPtr *getSFSystem         (void) const;
                  SFUnrecParticleSystemPtr *editSFSystem         (void);
            const SFUnrecNodePtr      *getSFPrototypeNode  (void) const;
                  SFUnrecNodePtr      *editSFPrototypeNode  (void);

                  SFVec3f             *editSFSizeScaling    (void);
            const SFVec3f             *getSFSizeScaling     (void) const;

                  SFUInt32            *editSFNormalSource   (void);
            const SFUInt32            *getSFNormalSource    (void) const;

                  SFVec3f             *editSFNormal         (void);
            const SFVec3f             *getSFNormal          (void) const;

                  SFUInt32            *editSFUpSource       (void);
            const SFUInt32            *getSFUpSource        (void) const;

                  SFVec3f             *editSFUp             (void);
            const SFVec3f             *getSFUp              (void) const;


                  ParticleSystem * getSystem         (void) const;

                  Node * getPrototypeNode  (void) const;

                  Vec3f               &editSizeScaling    (void);
            const Vec3f               &getSizeScaling     (void) const;

                  UInt32              &editNormalSource   (void);
                  UInt32               getNormalSource    (void) const;

                  Vec3f               &editNormal         (void);
            const Vec3f               &getNormal          (void) const;

                  UInt32              &editUpSource       (void);
                  UInt32               getUpSource        (void) const;

                  Vec3f               &editUp             (void);
            const Vec3f               &getUp              (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setSystem         (ParticleSystem * const value);
            void setPrototypeNode  (Node * const value);
            void setSizeScaling    (const Vec3f &value);
            void setNormalSource   (const UInt32 value);
            void setNormal         (const Vec3f &value);
            void setUpSource       (const UInt32 value);
            void setUp             (const Vec3f &value);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Ptr Field Set                                 */
    /*! \{                                                                 */

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Ptr MField Set                                */
    /*! \{                                                                 */

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

    static  NodeParticleSystemCoreTransitPtr  create          (void);
    static  NodeParticleSystemCore           *createEmpty     (void);

    static  NodeParticleSystemCoreTransitPtr  createLocal     (
                                               BitVector bFlags = FCLocal::All);

    static  NodeParticleSystemCore            *createEmptyLocal(
                                              BitVector bFlags = FCLocal::All);

    static  NodeParticleSystemCoreTransitPtr  createDependent  (BitVector bFlags);

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

    SFUnrecParticleSystemPtr _sfSystem;
    SFUnrecNodePtr    _sfPrototypeNode;
    SFVec3f           _sfSizeScaling;
    MFUnrecNodePtr    _mfParticleNodes;
    SFUInt32          _sfNormalSource;
    SFVec3f           _sfNormal;
    SFUInt32          _sfUpSource;
    SFVec3f           _sfUp;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    NodeParticleSystemCoreBase(void);
    NodeParticleSystemCoreBase(const NodeParticleSystemCoreBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~NodeParticleSystemCoreBase(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     onCreate                                */
    /*! \{                                                                 */

    void onCreate(const NodeParticleSystemCore *source = NULL);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Generic Field Access                      */
    /*! \{                                                                 */

    GetFieldHandlePtr  getHandleSystem          (void) const;
    EditFieldHandlePtr editHandleSystem         (void);
    GetFieldHandlePtr  getHandlePrototypeNode   (void) const;
    EditFieldHandlePtr editHandlePrototypeNode  (void);
    GetFieldHandlePtr  getHandleSizeScaling     (void) const;
    EditFieldHandlePtr editHandleSizeScaling    (void);
    GetFieldHandlePtr  getHandleParticleNodes   (void) const;
    EditFieldHandlePtr editHandleParticleNodes  (void);
    GetFieldHandlePtr  getHandleNormalSource    (void) const;
    EditFieldHandlePtr editHandleNormalSource   (void);
    GetFieldHandlePtr  getHandleNormal          (void) const;
    EditFieldHandlePtr editHandleNormal         (void);
    GetFieldHandlePtr  getHandleUpSource        (void) const;
    EditFieldHandlePtr editHandleUpSource       (void);
    GetFieldHandlePtr  getHandleUp              (void) const;
    EditFieldHandlePtr editHandleUp             (void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Get                                 */
    /*! \{                                                                 */

            const MFUnrecNodePtr      *getMFParticleNodes   (void) const;
                  MFUnrecNodePtr      *editMFParticleNodes  (void);


                  Node * getParticleNodes  (const UInt32 index) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */


    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Ptr MField Set                                */
    /*! \{                                                                 */

    void pushToParticleNodes           (Node * const value   );
    void assignParticleNodes           (const MFUnrecNodePtr    &value);
    void removeFromParticleNodes (UInt32                uiIndex );
    void removeObjFromParticleNodes(Node * const value   );
    void clearParticleNodes            (void                          );

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

            void execSync (      NodeParticleSystemCoreBase *pFrom,
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
    void operator =(const NodeParticleSystemCoreBase &source);
};

typedef NodeParticleSystemCoreBase *NodeParticleSystemCoreBaseP;

OSG_END_NAMESPACE

#endif /* _OSGNODEPARTICLESYSTEMCOREBASE_H_ */
