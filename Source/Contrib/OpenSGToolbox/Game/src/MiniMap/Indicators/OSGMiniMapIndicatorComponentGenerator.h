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

#ifndef _OSGMINIMAPINDICATORCOMPONENTGENERATOR_H_
#define _OSGMINIMAPINDICATORCOMPONENTGENERATOR_H_
#ifdef __sgi
#pragma once
#endif

#include <OpenSG/OSGConfig.h>
#include "OSGGameDef.h"

#include "OSGMiniMapIndicatorComponentGeneratorBase.h"
#include "MiniMap/OSGMiniMap.h"

OSG_BEGIN_NAMESPACE

/*! \brief MiniMapIndicatorComponentGenerator class. See \ref 
           PageGameMiniMapIndicatorComponentGenerator for a description.
*/

class OSG_GAMELIB_DLLMAPPING MiniMapIndicatorComponentGenerator : public MiniMapIndicatorComponentGeneratorBase
{
  private:

    typedef MiniMapIndicatorComponentGeneratorBase Inherited;

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
	virtual ComponentPtr getComponent(ComponentPtr Parent, const boost::any & Value, Int32 PrimaryAxisIndex, Int32 SecondaryAxisIndex, bool IsSelected, bool HasFocus);

	virtual ComponentPtr getMiniMapComponent(MiniMapPtr Parent, bool IsSelected, bool HasFocus) = 0;
    /*=========================  PROTECTED  ===============================*/
  protected:

    // Variables should all be in MiniMapIndicatorComponentGeneratorBase.

    /*---------------------------------------------------------------------*/
    /*! \name                  Constructors                                */
    /*! \{                                                                 */

    MiniMapIndicatorComponentGenerator(void);
    MiniMapIndicatorComponentGenerator(const MiniMapIndicatorComponentGenerator &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~MiniMapIndicatorComponentGenerator(void); 

    /*! \}                                                                 */
    
    /*==========================  PRIVATE  ================================*/
  private:

    friend class FieldContainer;
    friend class MiniMapIndicatorComponentGeneratorBase;

    static void initMethod(void);

    // prohibit default functions (move to 'public' if you need one)

    void operator =(const MiniMapIndicatorComponentGenerator &source);
};

typedef MiniMapIndicatorComponentGenerator *MiniMapIndicatorComponentGeneratorP;

OSG_END_NAMESPACE

#include "OSGMiniMapIndicatorComponentGeneratorBase.inl"
#include "OSGMiniMapIndicatorComponentGenerator.inl"

#define OSGMINIMAPINDICATORCOMPONENTGENERATOR_HEADER_CVSID "@(#)$Id: FCTemplate_h.h,v 1.23 2005/03/05 11:27:26 dirk Exp $"

#endif /* _OSGMINIMAPINDICATORCOMPONENTGENERATOR_H_ */
