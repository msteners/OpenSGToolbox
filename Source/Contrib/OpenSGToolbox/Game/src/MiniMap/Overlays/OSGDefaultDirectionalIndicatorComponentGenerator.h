/*---------------------------------------------------------------------------*\
 *                        OpenSG ToolBox Game                                *
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

#ifndef _OSGDEFAULTDIRECTIONALINDICATORCOMPONENTGENERATOR_H_
#define _OSGDEFAULTDIRECTIONALINDICATORCOMPONENTGENERATOR_H_
#ifdef __sgi
#pragma once
#endif

#include <OpenSG/OSGConfig.h>
#include "OSGGameDef.h"

#include "OSGDefaultDirectionalIndicatorComponentGeneratorBase.h"

OSG_BEGIN_NAMESPACE

/*! \brief DefaultDirectionalIndicatorComponentGenerator class. See \ref 
           PageGameDefaultDirectionalIndicatorComponentGenerator for a description.
*/

class OSG_GAMELIB_DLLMAPPING DefaultDirectionalIndicatorComponentGenerator : public DefaultDirectionalIndicatorComponentGeneratorBase
{
  private:

    typedef DefaultDirectionalIndicatorComponentGeneratorBase Inherited;

    /*==========================  PUBLIC  =================================*/
  public:

    /*---------------------------------------------------------------------*/
    /*! \name                      Sync                                    */
    /*! \{                                                                 */

    virtual void changed(BitVector  whichField, 
                         UInt32     origin    );

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     Output                                   */
    /*! \{                                                                 */

    virtual void dump(      UInt32     uiIndent = 0, 
                      const BitVector  bvFlags  = 0) const;

    /*! \}                                                                 */
    virtual ComponentPtr getDirectionalComponent(MiniMapPtr Parent, MiniMapIndicatorPtr TheIndicator,const Vec3f& Direction, bool IsSelected);
    /*=========================  PROTECTED  ===============================*/
  protected:

    // Variables should all be in DefaultDirectionalIndicatorComponentGeneratorBase.

    /*---------------------------------------------------------------------*/
    /*! \name                  Constructors                                */
    /*! \{                                                                 */

    DefaultDirectionalIndicatorComponentGenerator(void);
    DefaultDirectionalIndicatorComponentGenerator(const DefaultDirectionalIndicatorComponentGenerator &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~DefaultDirectionalIndicatorComponentGenerator(void); 

    /*! \}                                                                 */
    
    /*==========================  PRIVATE  ================================*/
  private:

    friend class FieldContainer;
    friend class DefaultDirectionalIndicatorComponentGeneratorBase;

    static void initMethod(void);

    // prohibit default functions (move to 'public' if you need one)

    void operator =(const DefaultDirectionalIndicatorComponentGenerator &source);
};

typedef DefaultDirectionalIndicatorComponentGenerator *DefaultDirectionalIndicatorComponentGeneratorP;

OSG_END_NAMESPACE

#include "OSGDefaultDirectionalIndicatorComponentGeneratorBase.inl"
#include "OSGDefaultDirectionalIndicatorComponentGenerator.inl"

#define OSGDEFAULTDIRECTIONALINDICATORCOMPONENTGENERATOR_HEADER_CVSID "@(#)$Id: FCTemplate_h.h,v 1.23 2005/03/05 11:27:26 dirk Exp $"

#endif /* _OSGDEFAULTDIRECTIONALINDICATORCOMPONENTGENERATOR_H_ */
