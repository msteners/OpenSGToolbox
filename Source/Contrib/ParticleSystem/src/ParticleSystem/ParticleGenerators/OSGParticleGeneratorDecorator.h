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

#ifndef _OSGPARTICLEGENERATORDECORATOR_H_
#define _OSGPARTICLEGENERATORDECORATOR_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGParticleGeneratorDecoratorBase.h"

OSG_BEGIN_NAMESPACE

/*! \brief ParticleGeneratorDecorator class. See \ref
           PageContribParticleSystemParticleGeneratorDecorator for a description.
*/

class OSG_CONTRIBPARTICLESYSTEM_DLLMAPPING ParticleGeneratorDecorator : public ParticleGeneratorDecoratorBase
{
  protected:

    /*==========================  PUBLIC  =================================*/

  public:

    typedef ParticleGeneratorDecoratorBase Inherited;
    typedef ParticleGeneratorDecorator     Self;

    /*---------------------------------------------------------------------*/
    /*! \name                      Sync                                    */
    /*! \{                                                                 */

    virtual void changed(ConstFieldMaskArg whichField,
                         UInt32            origin,
                         BitVector         details    );

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     Output                                   */
    /*! \{                                                                 */

    virtual void dump(      UInt32     uiIndent = 0,
                      const BitVector  bvFlags  = 0) const;

    /*! \}                                                                 */
    /*=========================  PROTECTED  ===============================*/

  protected:

    // Variables should all be in ParticleGeneratorDecoratorBase.

    /*---------------------------------------------------------------------*/
    /*! \name                  Constructors                                */
    /*! \{                                                                 */

    ParticleGeneratorDecorator(void);
    ParticleGeneratorDecorator(const ParticleGeneratorDecorator &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~ParticleGeneratorDecorator(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                      Init                                    */
    /*! \{                                                                 */

    static void initMethod(InitPhase ePhase);

    /*! \}                                                                 */
    /*==========================  PRIVATE  ================================*/

  private:

    friend class FieldContainer;
    friend class ParticleGeneratorDecoratorBase;

    // prohibit default functions (move to 'public' if you need one)
    void operator =(const ParticleGeneratorDecorator &source);
};

typedef ParticleGeneratorDecorator *ParticleGeneratorDecoratorP;

OSG_END_NAMESPACE

#include "OSGParticleGeneratorDecoratorBase.inl"
#include "OSGParticleGeneratorDecorator.inl"

#endif /* _OSGPARTICLEGENERATORDECORATOR_H_ */
