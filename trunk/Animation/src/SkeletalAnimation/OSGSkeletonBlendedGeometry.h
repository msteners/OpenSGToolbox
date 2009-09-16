/*---------------------------------------------------------------------------*\
 *                       OpenSG ToolBox Animation                            *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                         www.vrac.iastate.edu                              *
 *                                                                           *
 *                   Authors: David Kabala, John Morales                     *
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

#ifndef _OSGSKELETONBLENDEDGEOMETRY_H_
#define _OSGSKELETONBLENDEDGEOMETRY_H_
#ifdef __sgi
#pragma once
#endif

#include <OpenSG/OSGConfig.h>
#include "OSGAnimationDef.h"

#include "OSGSkeletonBlendedGeometryBase.h"
#include "Events/OSGSkeletonListener.h"
#include <OpenSG/Toolbox/OSGEventConnection.h>

OSG_BEGIN_NAMESPACE

/*! \brief SkeletonBlendedGeometry class. See \ref 
           PageAnimationSkeletonBlendedGeometry for a description.
*/

class OSG_ANIMATIONLIB_DLLMAPPING SkeletonBlendedGeometry : public SkeletonBlendedGeometryBase, public SkeletonListener
{
  private:

    typedef SkeletonBlendedGeometryBase Inherited;

    /*==========================  PUBLIC  =================================*/
  public:
	  enum BlendMode{BLEND_RIGID =0, BLEND_SMOOTH =1};
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

    /**************************************************************************//**
     * @fn	void addJointBlending(const UInt32& PositionIndex,
     * 		const JointPtr TheJoint, const Real32& BlendAmount)
     * 
     * @brief	Attaches a point in the mesh to a joint with the given blend weight
     * 
     * @param	PositionIndex	Index of the point to be attached.
     * @param	TheJoint		The joint to which the point is being attached.
     * @param	BlendAmount		The blend weight.
    *****************************************************************************/
    void addJointBlending(const UInt32& PositionIndex, const JointPtr TheJoint, const Real32& BlendAmount);

    /**************************************************************************//**
     * @fn	void addSkeleton(SkeletonPtr TheSkeleton)
     * 
     * @brief	Adds a skeleton to the blended geometry.
     * 
     * @param	TheSkeleton	The Skeleton to be added. 
    *****************************************************************************/
    void addSkeleton(SkeletonPtr TheSkeleton);

    /**************************************************************************//**
     * @fn	void subSkeleton(SkeletonPtr TheSkeleton)
     * 
     * @brief	Removes a skeleton from the blended geometry.
     * 
     * @param	TheSkeleton	The skeleton to be removed.
    *****************************************************************************/
    void subSkeleton(SkeletonPtr TheSkeleton);

    /**************************************************************************//**
     * @fn	UInt32 numSkeletons(void) const
     * 
     * @brief	Returns the number of skeletons attached to the blended geometry.
     * 
     * @return	The total number of skeletons. 
    *****************************************************************************/
    UInt32 numSkeletons(void) const;

    /**************************************************************************//**
     * @fn	void subSkeleton(UInt32 Index)
     * 
     * @brief	Removes a skeleton from the blended geometry.
     * 
     * @param	Index	Index of the skeleton to be removed. 
    *****************************************************************************/
    void subSkeleton(UInt32 Index);

   /**************************************************************************//**
    * @fn	virtual void changed(const SkeletonEvent& e)
    * 
    * @brief	Called when the skeleton changes. Tells all attached geometries
	*			to update their positions.
    * 
    * @param	e	The SkeletonEvent. 
   *****************************************************************************/
   virtual void changed(const SkeletonEvent& e);
    /*=========================  PROTECTED  ===============================*/
  protected:

    // Variables should all be in SkeletonBlendedGeometryBase.

    /*---------------------------------------------------------------------*/
    /*! \name                  Constructors                                */
    /*! \{                                                                 */

    SkeletonBlendedGeometry(void);
    SkeletonBlendedGeometry(const SkeletonBlendedGeometry &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~SkeletonBlendedGeometry(void); 

    /*! \}                                                                 */

	/**************************************************************************//**
	 * @fn	void calculatePositions(void)
	 * 
	 * @brief	Calculates the positions of the attached meshes based on the
	 *			current positions of the attached skeletons.
	*****************************************************************************/
	void calculatePositions(void);
    
    /*==========================  PRIVATE  ================================*/
  private:

    friend class FieldContainer;
    friend class SkeletonBlendedGeometryBase;

    static void initMethod(void);

    // prohibit default functions (move to 'public' if you need one)

    void operator =(const SkeletonBlendedGeometry &source);

	std::vector<EventConnection> _SkeletonListenerConnections;
};

typedef SkeletonBlendedGeometry *SkeletonBlendedGeometryP;

OSG_END_NAMESPACE

#include "OSGSkeletonBlendedGeometryBase.inl"
#include "OSGSkeletonBlendedGeometry.inl"

#define OSGSKELETONBLENDEDGEOMETRY_HEADER_CVSID "@(#)$Id: FCTemplate_h.h,v 1.23 2005/03/05 11:27:26 dirk Exp $"

#endif /* _OSGSKELETONBLENDEDGEOMETRY_H_ */


