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

#ifndef _OSGDEFAULTINVENTORYLISTCOMPONENTGENERATOR_H_
#define _OSGDEFAULTINVENTORYLISTCOMPONENTGENERATOR_H_
#ifdef __sgi
#pragma once
#endif

#include <OpenSG/OSGConfig.h>

#include "OSGDefaultInventoryListComponentGeneratorBase.h"

OSG_BEGIN_NAMESPACE

/*! \brief DefaultInventoryListComponentGenerator class. See \ref 
           PageGameDefaultInventoryListComponentGenerator for a description.
*/

class OSG_GAMELIB_DLLMAPPING DefaultInventoryListComponentGenerator : public DefaultInventoryListComponentGeneratorBase
{
  private:

    typedef DefaultInventoryListComponentGeneratorBase Inherited;

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
    /*=========================  PROTECTED  ===============================*/
  protected:

    // Variables should all be in DefaultInventoryListComponentGeneratorBase.

    /*---------------------------------------------------------------------*/
    /*! \name                  Constructors                                */
    /*! \{                                                                 */

    DefaultInventoryListComponentGenerator(void);
    DefaultInventoryListComponentGenerator(const DefaultInventoryListComponentGenerator &source);

	virtual ComponentPtr getListComponent(ListPtr Parent, const boost::any& Value, UInt32 Index, bool IsSelected, bool HasFocus);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~DefaultInventoryListComponentGenerator(void); 

    /*! \}                                                                 */
    
    /*==========================  PRIVATE  ================================*/
  private:

    friend class FieldContainer;
    friend class DefaultInventoryListComponentGeneratorBase;

    static void initMethod(void);

    // prohibit default functions (move to 'public' if you need one)

    void operator =(const DefaultInventoryListComponentGenerator &source);
};

typedef DefaultInventoryListComponentGenerator *DefaultInventoryListComponentGeneratorP;

OSG_END_NAMESPACE

#include "OSGDefaultInventoryListComponentGeneratorBase.inl"
#include "OSGDefaultInventoryListComponentGenerator.inl"

#define OSGDEFAULTINVENTORYLISTCOMPONENTGENERATOR_HEADER_CVSID "@(#)$Id: FCTemplate_h.h,v 1.23 2005/03/05 11:27:26 dirk Exp $"

#endif /* _OSGDEFAULTINVENTORYLISTCOMPONENTGENERATOR_H_ */
