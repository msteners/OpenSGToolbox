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

#ifndef _OSGDIALOGWINDOWEVENT_H_
#define _OSGDIALOGWINDOWEVENT_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGDialogWindowEventBase.h"

OSG_BEGIN_NAMESPACE

/*! \brief DialogWindowEvent class. See \ref
           PageContribUserInterfaceDialogWindowEvent for a description.
*/

class OSG_CONTRIBUSERINTERFACE_DLLMAPPING DialogWindowEvent : public DialogWindowEventBase
{
  protected:

    /*==========================  PUBLIC  =================================*/

  public:
    enum Options
    {
        DIALOG_OPTION_OK     = 0,
        DIALOG_OPTION_YES    = 1,
        DIALOG_OPTION_NO     = 2 ,
        DIALOG_OPTION_CANCEL = 3 ,
        DIALOG_OPTION_CLOSED = 4
    };

    typedef DialogWindowEventBase Inherited;
    typedef DialogWindowEvent     Self;

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

    static  DialogWindowEventTransitPtr      create( FieldContainerRefPtr Source,
                                                     Time TimeStamp,
                                                     const UInt32& Option,
                                                     const std::string& Input); 

    /*=========================  PROTECTED  ===============================*/

  protected:

    // Variables should all be in DialogWindowEventBase.

    /*---------------------------------------------------------------------*/
    /*! \name                  Constructors                                */
    /*! \{                                                                 */

    DialogWindowEvent(void);
    DialogWindowEvent(const DialogWindowEvent &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~DialogWindowEvent(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                      Init                                    */
    /*! \{                                                                 */

    static void initMethod(InitPhase ePhase);

    /*! \}                                                                 */
    /*==========================  PRIVATE  ================================*/

  private:

    friend class FieldContainer;
    friend class DialogWindowEventBase;

    // prohibit default functions (move to 'public' if you need one)
    void operator =(const DialogWindowEvent &source);
};

typedef DialogWindowEvent *DialogWindowEventP;

OSG_END_NAMESPACE

#include "OSGDialogWindowEventBase.inl"
#include "OSGDialogWindowEvent.inl"

#endif /* _OSGDIALOGWINDOWEVENT_H_ */
