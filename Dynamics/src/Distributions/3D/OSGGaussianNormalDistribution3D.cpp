/*---------------------------------------------------------------------------*\
 *                     OpenSG ToolBox UserInterface                          *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                         www.vrac.iastate.edu                              *
 *                                                                           *
 *   Authors: David Kabala, Alden Peterson, Lee Zaniewski, Jonathan Flory    *
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

//---------------------------------------------------------------------------
//  Includes
//---------------------------------------------------------------------------

#include <stdlib.h>
#include <stdio.h>

#include <OpenSG/OSGConfig.h>

#include "OSGGaussianNormalDistribution3D.h"
#include <OpenSG/Toolbox/OSGRandomPoolManager.h>

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class osg::GaussianNormalDistribution3D
An GaussianNormalDistribution2D. 	
*/

/***************************************************************************\
 *                           Class variables                               *
\***************************************************************************/

/***************************************************************************\
 *                           Class methods                                 *
\***************************************************************************/

void GaussianNormalDistribution3D::initMethod (void)
{
}


/***************************************************************************\
 *                           Instance methods                              *
\***************************************************************************/


FunctionIOTypeVector GaussianNormalDistribution3D::getOutputTypes(FunctionIOTypeVector& InputTypes) const
{
    FunctionIOTypeVector OutputTypes;
    OutputTypes.push_back(OSG_FUNC_INST_FUNCTIONIOTYPE(0,OSG_GAUSSIANNORMAL3D_DIST_OUTPUTPARAMETERS));
    return OutputTypes;
}

FunctionIOTypeVector GaussianNormalDistribution3D::getInputTypes(FunctionIOTypeVector& OutputTypes) const
{
    FunctionIOTypeVector InputTypes;
    return InputTypes;
}

Pnt3f GaussianNormalDistribution3D::generate(void)
{
    //Use the Box-Muller method for generating 3 normally distributed values
    Real32 X(osgsqrt(-2.0f * osglog(1.0f - RandomPoolManager::getRandomReal32(0.0,1.0)))* osgcos(6.283185f * RandomPoolManager::getRandomReal32(0.0,1.0))*getStandardDeviationX() + getMean().x());

    Real32 Y(osgsqrt(-2.0f * osglog(1.0f - RandomPoolManager::getRandomReal32(0.0,1.0)))* osgcos(6.283185f * RandomPoolManager::getRandomReal32(0.0,1.0))*getStandardDeviationY() + getMean().y());
    
    Real32 Z(osgsqrt(-2.0f * osglog(1.0f - RandomPoolManager::getRandomReal32(0.0,1.0)))* osgcos(6.283185f * RandomPoolManager::getRandomReal32(0.0,1.0))*getStandardDeviationZ() + getMean().z());
    
    return Pnt3f(X, Y,Z);
}

FunctionIOParameterVector GaussianNormalDistribution3D::evaluate(FunctionIOParameterVector& InputParameters)
{
    //The Input Paremeters must be the correct number
    if(InputParameters.size() != OSG_FUNC_IOPARAMETERARRAY_SIZE(OSG_GAUSSIANNORMAL3D_DIST_INPUTPARAMETERS))
    {
        throw FunctionInputException();
    }
    FunctionIOParameterVector ResultVector;
    ResultVector.reserve(OSG_FUNC_IOPARAMETERARRAY_SIZE(OSG_GAUSSIANNORMAL3D_DIST_OUTPUTPARAMETERS));
    ResultVector.push_back(OSG_FUNC_INST_FUNCTIONIOPARAMETER(0,OSG_GAUSSIANNORMAL3D_DIST_OUTPUTPARAMETERS, generate()));

    return ResultVector;
}
/*-------------------------------------------------------------------------*\
 -  private                                                                 -
\*-------------------------------------------------------------------------*/

/*----------------------- constructors & destructors ----------------------*/

GaussianNormalDistribution3D::GaussianNormalDistribution3D(void) :
    Inherited()
{
}

GaussianNormalDistribution3D::GaussianNormalDistribution3D(const GaussianNormalDistribution3D &source) :
    Inherited(source)
{
}

GaussianNormalDistribution3D::~GaussianNormalDistribution3D(void)
{
}

/*----------------------------- class specific ----------------------------*/

void GaussianNormalDistribution3D::changed(BitVector whichField, UInt32 origin)
{
    Inherited::changed(whichField, origin);
}

void GaussianNormalDistribution3D::dump(      UInt32    , 
                         const BitVector ) const
{
    SLOG << "Dump GaussianNormalDistribution3D NI" << std::endl;
}


/*------------------------------------------------------------------------*/
/*                              cvs id's                                  */

#ifdef OSG_SGI_CC
#pragma set woff 1174
#endif

#ifdef OSG_LINUX_ICC
#pragma warning( disable : 177 )
#endif

namespace
{
    static Char8 cvsid_cpp       [] = "@(#)$Id: FCTemplate_cpp.h,v 1.20 2006/03/16 17:01:53 dirk Exp $";
    static Char8 cvsid_hpp       [] = OSGGAUSSIANNORMALDISTRIBUTION3DBASE_HEADER_CVSID;
    static Char8 cvsid_inl       [] = OSGGAUSSIANNORMALDISTRIBUTION3DBASE_INLINE_CVSID;

    static Char8 cvsid_fields_hpp[] = OSGGAUSSIANNORMALDISTRIBUTION3DFIELDS_HEADER_CVSID;
}

#ifdef __sgi
#pragma reset woff 1174
#endif

OSG_END_NAMESPACE

