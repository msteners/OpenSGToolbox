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

#ifndef _OSGMOUSEEVENT_H_
#define _OSGMOUSEEVENT_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGMouseEventBase.h"
#include "OSGViewport.h"            // FieldContainer type

OSG_BEGIN_NAMESPACE

/*! \brief MouseEvent class. See \ref
           PageSystemMouseEvent for a description.
*/

class OSG_SYSTEM_DLLMAPPING MouseEvent : public MouseEventBase
{
  protected:

    /*==========================  PUBLIC  =================================*/

  public:
     enum MouseButton {
         BUTTON1   = 0,
         BUTTON2   = 1,
         BUTTON3   = 2 ,
         BUTTON4   = 3 ,
         BUTTON5   = 4 ,
         BUTTON6   = 5 ,
         BUTTON7   = 6 ,
         BUTTON8   = 7 ,
         BUTTON9   = 8 ,
         BUTTON10  = 9 ,
         NO_BUTTON = 100
     };

    typedef MouseEventBase Inherited;
    typedef MouseEvent     Self;

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
    Pnt2f getLocationOnScreen(void) const;
    Real32 getX(void) const;
    Real32 getXOnScreen(void) const;
    Real32 getY(void) const;
    Real32 getYOnScreen(void) const;

    static  MouseEventTransitPtr      create(  FieldContainerUnrecPtr Source,
                                                Time TimeStamp,
                                                UInt16 Button,
                                                UInt16 ClickCount,
                                                Pnt2f Location,
                                                ViewportUnrecPtr TheViewport,
                                                Vec2f Delta = Vec2f(0.0f,0.0f)); 
    /*=========================  PROTECTED  ===============================*/

  protected:

    // Variables should all be in MouseEventBase.

    /*---------------------------------------------------------------------*/
    /*! \name                  Constructors                                */
    /*! \{                                                                 */

    MouseEvent(void);
    MouseEvent(const MouseEvent &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~MouseEvent(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                      Init                                    */
    /*! \{                                                                 */

    static void initMethod(InitPhase ePhase);

    /*! \}                                                                 */
    /*==========================  PRIVATE  ================================*/

  private:

    friend class FieldContainer;
    friend class MouseEventBase;

    // prohibit default functions (move to 'public' if you need one)
    void operator =(const MouseEvent &source);
};

typedef MouseEvent *MouseEventP;

OSG_END_NAMESPACE

#include "OSGMouseEventBase.inl"
#include "OSGMouseEvent.inl"

#endif /* _OSGMOUSEEVENT_H_ */
