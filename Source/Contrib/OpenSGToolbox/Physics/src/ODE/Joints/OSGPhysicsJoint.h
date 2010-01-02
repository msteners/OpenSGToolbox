/*---------------------------------------------------------------------------*\
 *                         OpenSG ToolBox Physics                            *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                          www.vrac.iastate.edu                             *
 *                                                                           *
 *                Authors: Behboud Kalantary, David Kabala                   *
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

#ifndef _OSGPHYSICSJOINT_H_
#define _OSGPHYSICSJOINT_H_
#ifdef __sgi
#pragma once
#endif

#include <OpenSG/OSGConfig.h>
#include "OSGPhysicsDef.h"
#include <ode/ode.h>

#include "OSGPhysicsJointBase.h"

OSG_BEGIN_NAMESPACE

class  OSG_PHYSICSLIB_DLLMAPPING PhysicsJoint : public PhysicsJointBase
{
  private:

    typedef PhysicsJointBase Inherited;

    /*==========================  PUBLIC  =================================*/
  public:

	  /*---------------------------------------------------------------------*/
	  /*! \name                   Class Specific Get Field                    */
	  /*! \{                                                                 */
	  dJointID getJointID(void);
	  /*! \}                                                                 */

	  /*---------------------------------------------------------------------*/
	  /*! \name                   Class Specific                             */
	  /*! \{																*/
	  void setData( void* someData );
	  void* getData(void);
	  Int32 getJointType(void);
	  dBodyID getBody( Int32 );
	  // the raw feedback interface
	  void setFeedback( dJointFeedback* );
	  dJointFeedback* getFeedback(void);
	  /*! \}                                                                 */


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

    // Variables should all be in PhysicsJointBase.
    dJointID _JointID;
    /*---------------------------------------------------------------------*/
    /*! \name                  Constructors                                */
    /*! \{                                                                 */

    PhysicsJoint(void);
    PhysicsJoint(const PhysicsJoint &source);

    /*! \}                                                                 */
	/*---------------------------------------------------------------------*/
	/*! \name                   Class Specific                             */
	/*! \{                                                                 */
	void onCreate(const PhysicsJoint *id = NULL);
	void onDestroy();
    void setJointID(const dJointID &value );
	/*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~PhysicsJoint(void); 

    /*! \}                                                                 */
    
    /*==========================  PRIVATE  ================================*/
  private:

    friend class FieldContainer;
    friend class PhysicsJointBase;

    static void initMethod(void);

    // prohibit default functions (move to 'public' if you need one)

    void operator =(const PhysicsJoint &source);
};

typedef PhysicsJoint *PhysicsJointP;

OSG_END_NAMESPACE

#include "OSGPhysicsJointBase.inl"
#include "OSGPhysicsJoint.inl"

#define OSGPHYSICSJOINT_HEADER_CVSID "@(#)$Id: OSGPhysicsJoint.h,v 1.2 2006/08/19 00:21:46 dirk Exp $"

#endif /* _OSGPHYSICSJOINT_H_ */