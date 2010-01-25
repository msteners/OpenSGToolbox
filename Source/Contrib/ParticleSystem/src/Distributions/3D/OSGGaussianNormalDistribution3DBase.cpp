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
 **     class GaussianNormalDistribution3D!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include "OSGConfig.h"




#include "OSGGaussianNormalDistribution3DBase.h"
#include "OSGGaussianNormalDistribution3D.h"

#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::GaussianNormalDistribution3D
    An GaussianNormaDistribution2D.
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var Pnt3f           GaussianNormalDistribution3DBase::_sfMean
    
*/

/*! \var Real32          GaussianNormalDistribution3DBase::_sfStandardDeviationX
    
*/

/*! \var Real32          GaussianNormalDistribution3DBase::_sfStandardDeviationY
    
*/

/*! \var Real32          GaussianNormalDistribution3DBase::_sfStandardDeviationZ
    
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<GaussianNormalDistribution3D *>::_type("GaussianNormalDistribution3DPtr", "Distribution3DPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(GaussianNormalDistribution3D *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           GaussianNormalDistribution3D *,
                           0);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           GaussianNormalDistribution3D *,
                           0);

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void GaussianNormalDistribution3DBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFPnt3f::Description(
        SFPnt3f::getClassType(),
        "Mean",
        "",
        MeanFieldId, MeanFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&GaussianNormalDistribution3D::editHandleMean),
        static_cast<FieldGetMethodSig >(&GaussianNormalDistribution3D::getHandleMean));

    oType.addInitialDesc(pDesc);


    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "StandardDeviationX",
        "",
        StandardDeviationXFieldId, StandardDeviationXFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&GaussianNormalDistribution3D::editHandleStandardDeviationX),
        static_cast<FieldGetMethodSig >(&GaussianNormalDistribution3D::getHandleStandardDeviationX));

    oType.addInitialDesc(pDesc);


    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "StandardDeviationY",
        "",
        StandardDeviationYFieldId, StandardDeviationYFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&GaussianNormalDistribution3D::editHandleStandardDeviationY),
        static_cast<FieldGetMethodSig >(&GaussianNormalDistribution3D::getHandleStandardDeviationY));

    oType.addInitialDesc(pDesc);


    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "StandardDeviationZ",
        "",
        StandardDeviationZFieldId, StandardDeviationZFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&GaussianNormalDistribution3D::editHandleStandardDeviationZ),
        static_cast<FieldGetMethodSig >(&GaussianNormalDistribution3D::getHandleStandardDeviationZ));

    oType.addInitialDesc(pDesc);

}


GaussianNormalDistribution3DBase::TypeObject GaussianNormalDistribution3DBase::_type(
    GaussianNormalDistribution3DBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    reinterpret_cast<PrototypeCreateF>(&GaussianNormalDistribution3DBase::createEmptyLocal),
    GaussianNormalDistribution3D::initMethod,
    GaussianNormalDistribution3D::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&GaussianNormalDistribution3D::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"GaussianNormalDistribution3D\"\n"
    "\tparent=\"Distribution3D\"\n"
    "    library=\"ContribParticleSystem\"\n"
    "    pointerfieldtypes=\"both\"\n"
    "\tstructure=\"concrete\"\n"
    "    systemcomponent=\"true\"\n"
    "    parentsystemcomponent=\"true\"\n"
    "    decoratable=\"false\"\n"
    "    useLocalIncludes=\"false\"\n"
    "    isNodeCore=\"false\"\n"
    "    authors=\"David Kabala (djkabala@gmail.com)                             \"\n"
    ">\n"
    "An GaussianNormaDistribution2D.\n"
    "\t<Field\n"
    "\t\tname=\"Mean\"\n"
    "\t\ttype=\"Pnt3f\"\n"
    "        category=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"0.0,0.0,0.0\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"StandardDeviationX\"\n"
    "\t\ttype=\"Real32\"\n"
    "        category=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"1.0\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"StandardDeviationY\"\n"
    "\t\ttype=\"Real32\"\n"
    "        category=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"1.0\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"StandardDeviationZ\"\n"
    "\t\ttype=\"Real32\"\n"
    "        category=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"1.0\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    "An GaussianNormaDistribution2D.\n"
    );


/*------------------------------ get -----------------------------------*/

FieldContainerType &GaussianNormalDistribution3DBase::getType(void)
{
    return _type;
}

const FieldContainerType &GaussianNormalDistribution3DBase::getType(void) const
{
    return _type;
}

UInt32 GaussianNormalDistribution3DBase::getContainerSize(void) const
{
    return sizeof(GaussianNormalDistribution3D);
}

/*------------------------- decorator get ------------------------------*/


SFPnt3f *GaussianNormalDistribution3DBase::editSFMean(void)
{
    editSField(MeanFieldMask);

    return &_sfMean;
}

const SFPnt3f *GaussianNormalDistribution3DBase::getSFMean(void) const
{
    return &_sfMean;
}


SFReal32 *GaussianNormalDistribution3DBase::editSFStandardDeviationX(void)
{
    editSField(StandardDeviationXFieldMask);

    return &_sfStandardDeviationX;
}

const SFReal32 *GaussianNormalDistribution3DBase::getSFStandardDeviationX(void) const
{
    return &_sfStandardDeviationX;
}


SFReal32 *GaussianNormalDistribution3DBase::editSFStandardDeviationY(void)
{
    editSField(StandardDeviationYFieldMask);

    return &_sfStandardDeviationY;
}

const SFReal32 *GaussianNormalDistribution3DBase::getSFStandardDeviationY(void) const
{
    return &_sfStandardDeviationY;
}


SFReal32 *GaussianNormalDistribution3DBase::editSFStandardDeviationZ(void)
{
    editSField(StandardDeviationZFieldMask);

    return &_sfStandardDeviationZ;
}

const SFReal32 *GaussianNormalDistribution3DBase::getSFStandardDeviationZ(void) const
{
    return &_sfStandardDeviationZ;
}






/*------------------------------ access -----------------------------------*/

UInt32 GaussianNormalDistribution3DBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (MeanFieldMask & whichField))
    {
        returnValue += _sfMean.getBinSize();
    }
    if(FieldBits::NoField != (StandardDeviationXFieldMask & whichField))
    {
        returnValue += _sfStandardDeviationX.getBinSize();
    }
    if(FieldBits::NoField != (StandardDeviationYFieldMask & whichField))
    {
        returnValue += _sfStandardDeviationY.getBinSize();
    }
    if(FieldBits::NoField != (StandardDeviationZFieldMask & whichField))
    {
        returnValue += _sfStandardDeviationZ.getBinSize();
    }

    return returnValue;
}

void GaussianNormalDistribution3DBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (MeanFieldMask & whichField))
    {
        _sfMean.copyToBin(pMem);
    }
    if(FieldBits::NoField != (StandardDeviationXFieldMask & whichField))
    {
        _sfStandardDeviationX.copyToBin(pMem);
    }
    if(FieldBits::NoField != (StandardDeviationYFieldMask & whichField))
    {
        _sfStandardDeviationY.copyToBin(pMem);
    }
    if(FieldBits::NoField != (StandardDeviationZFieldMask & whichField))
    {
        _sfStandardDeviationZ.copyToBin(pMem);
    }
}

void GaussianNormalDistribution3DBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (MeanFieldMask & whichField))
    {
        _sfMean.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (StandardDeviationXFieldMask & whichField))
    {
        _sfStandardDeviationX.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (StandardDeviationYFieldMask & whichField))
    {
        _sfStandardDeviationY.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (StandardDeviationZFieldMask & whichField))
    {
        _sfStandardDeviationZ.copyFromBin(pMem);
    }
}

//! create a new instance of the class
GaussianNormalDistribution3DTransitPtr GaussianNormalDistribution3DBase::createLocal(BitVector bFlags)
{
    GaussianNormalDistribution3DTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<GaussianNormalDistribution3D>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
GaussianNormalDistribution3DTransitPtr GaussianNormalDistribution3DBase::createDependent(BitVector bFlags)
{
    GaussianNormalDistribution3DTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<GaussianNormalDistribution3D>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
GaussianNormalDistribution3DTransitPtr GaussianNormalDistribution3DBase::create(void)
{
    GaussianNormalDistribution3DTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<GaussianNormalDistribution3D>(tmpPtr);
    }

    return fc;
}

GaussianNormalDistribution3D *GaussianNormalDistribution3DBase::createEmptyLocal(BitVector bFlags)
{
    GaussianNormalDistribution3D *returnValue;

    newPtr<GaussianNormalDistribution3D>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
GaussianNormalDistribution3D *GaussianNormalDistribution3DBase::createEmpty(void)
{
    GaussianNormalDistribution3D *returnValue;

    newPtr<GaussianNormalDistribution3D>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr GaussianNormalDistribution3DBase::shallowCopyLocal(
    BitVector bFlags) const
{
    GaussianNormalDistribution3D *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const GaussianNormalDistribution3D *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr GaussianNormalDistribution3DBase::shallowCopyDependent(
    BitVector bFlags) const
{
    GaussianNormalDistribution3D *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const GaussianNormalDistribution3D *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr GaussianNormalDistribution3DBase::shallowCopy(void) const
{
    GaussianNormalDistribution3D *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const GaussianNormalDistribution3D *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

GaussianNormalDistribution3DBase::GaussianNormalDistribution3DBase(void) :
    Inherited(),
    _sfMean                   (Pnt3f(0.0,0.0,0.0)),
    _sfStandardDeviationX     (Real32(1.0)),
    _sfStandardDeviationY     (Real32(1.0)),
    _sfStandardDeviationZ     (Real32(1.0))
{
}

GaussianNormalDistribution3DBase::GaussianNormalDistribution3DBase(const GaussianNormalDistribution3DBase &source) :
    Inherited(source),
    _sfMean                   (source._sfMean                   ),
    _sfStandardDeviationX     (source._sfStandardDeviationX     ),
    _sfStandardDeviationY     (source._sfStandardDeviationY     ),
    _sfStandardDeviationZ     (source._sfStandardDeviationZ     )
{
}


/*-------------------------- destructors ----------------------------------*/

GaussianNormalDistribution3DBase::~GaussianNormalDistribution3DBase(void)
{
}


GetFieldHandlePtr GaussianNormalDistribution3DBase::getHandleMean            (void) const
{
    SFPnt3f::GetHandlePtr returnValue(
        new  SFPnt3f::GetHandle(
             &_sfMean,
             this->getType().getFieldDesc(MeanFieldId),
             const_cast<GaussianNormalDistribution3DBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr GaussianNormalDistribution3DBase::editHandleMean           (void)
{
    SFPnt3f::EditHandlePtr returnValue(
        new  SFPnt3f::EditHandle(
             &_sfMean,
             this->getType().getFieldDesc(MeanFieldId),
             this));


    editSField(MeanFieldMask);

    return returnValue;
}

GetFieldHandlePtr GaussianNormalDistribution3DBase::getHandleStandardDeviationX (void) const
{
    SFReal32::GetHandlePtr returnValue(
        new  SFReal32::GetHandle(
             &_sfStandardDeviationX,
             this->getType().getFieldDesc(StandardDeviationXFieldId),
             const_cast<GaussianNormalDistribution3DBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr GaussianNormalDistribution3DBase::editHandleStandardDeviationX(void)
{
    SFReal32::EditHandlePtr returnValue(
        new  SFReal32::EditHandle(
             &_sfStandardDeviationX,
             this->getType().getFieldDesc(StandardDeviationXFieldId),
             this));


    editSField(StandardDeviationXFieldMask);

    return returnValue;
}

GetFieldHandlePtr GaussianNormalDistribution3DBase::getHandleStandardDeviationY (void) const
{
    SFReal32::GetHandlePtr returnValue(
        new  SFReal32::GetHandle(
             &_sfStandardDeviationY,
             this->getType().getFieldDesc(StandardDeviationYFieldId),
             const_cast<GaussianNormalDistribution3DBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr GaussianNormalDistribution3DBase::editHandleStandardDeviationY(void)
{
    SFReal32::EditHandlePtr returnValue(
        new  SFReal32::EditHandle(
             &_sfStandardDeviationY,
             this->getType().getFieldDesc(StandardDeviationYFieldId),
             this));


    editSField(StandardDeviationYFieldMask);

    return returnValue;
}

GetFieldHandlePtr GaussianNormalDistribution3DBase::getHandleStandardDeviationZ (void) const
{
    SFReal32::GetHandlePtr returnValue(
        new  SFReal32::GetHandle(
             &_sfStandardDeviationZ,
             this->getType().getFieldDesc(StandardDeviationZFieldId),
             const_cast<GaussianNormalDistribution3DBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr GaussianNormalDistribution3DBase::editHandleStandardDeviationZ(void)
{
    SFReal32::EditHandlePtr returnValue(
        new  SFReal32::EditHandle(
             &_sfStandardDeviationZ,
             this->getType().getFieldDesc(StandardDeviationZFieldId),
             this));


    editSField(StandardDeviationZFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void GaussianNormalDistribution3DBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    GaussianNormalDistribution3D *pThis = static_cast<GaussianNormalDistribution3D *>(this);

    pThis->execSync(static_cast<GaussianNormalDistribution3D *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *GaussianNormalDistribution3DBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    GaussianNormalDistribution3D *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const GaussianNormalDistribution3D *>(pRefAspect),
                  dynamic_cast<const GaussianNormalDistribution3D *>(this));

    return returnValue;
}
#endif

void GaussianNormalDistribution3DBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


OSG_END_NAMESPACE