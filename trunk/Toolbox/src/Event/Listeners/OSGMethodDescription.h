/*---------------------------------------------------------------------------*\
 *                            OpenSGToolbox                                  *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                         www.vrac.iastate.edu                              *
 *                                                                           *
 *   Authors: David Kabala                                                   *
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

#ifndef _OSGMETHODDESCRIPTIONIMPL_H_
#define _OSGMETHODDESCRIPTIONIMPL_H_

#include <OpenSG/OSGConfig.h>
#include "OSGToolboxDef.h"

#include <OpenSG/OSGBaseTypes.h>
#include <OpenSG/OSGTypeBase.h>
#include <OpenSG/OSGIDString.h>
#include <boost/function.hpp>
#include <vector>
#include "Event/OSGEvent.h"

OSG_BEGIN_NAMESPACE

typedef boost::function<void ( const EventPtr )> FunctorAccessMethod;

//---------------------------------------------------------------------------
//   Class         
//---------------------------------------------------------------------------

/*! \ingroup GrpSystemFieldContainer
 */

class OSG_TOOLBOXLIB_DLLMAPPING MethodDescription
{
    /*==========================  PUBLIC  =================================*/

  public :

    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

     MethodDescription(const Char8                  *szName,
                      const UInt32                  uiMethodId,
                      const TypeBase                &EventArgumentType,
                            FunctorAccessMethod     fAccessFunctor);

    MethodDescription(const MethodDescription &source                     );

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructor                                 */
    /*! \{                                                                 */

    virtual ~MethodDescription(void); 

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                      Get                                     */
    /*! \{                                                                 */

    const Char8        *getCName       (void                ) const;
    const IDString     &getName        (void                ) const;

          UInt32     getMethodId       (void                ) const;

    const TypeBase& getEventArgumentType   (void                ) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                      Set                                     */
    /*! \{                                                                 */

    void                setAccessFunctor     (FunctorAccessMethod fAccessFunctor);
    FunctorAccessMethod getAccessFunctor     (void                              );
    void                setMethodId          (UInt32 uiMethodId                 );
    bool                isValid(void)  const;


    /*! \}                                                                 */
    /*=========================  PROTECTED  ===============================*/
  protected:

    /*---------------------------------------------------------------------*/
    /*! \name                      Member                                  */
    /*! \{                                                                 */

      IDString               _szName;
      UInt32                 _MethodId;
      const TypeBase&  _EventArgumentType;

    FunctorAccessMethod      _fAccessFunctor;

    /*! \}                                                                 */
    /*==========================  PRIVATE  ================================*/
  private:

    friend class Listener;
    friend class ListenerPtr;

    /*!\brief prohibit default function (move to 'public' if needed) */
    void operator =(const MethodDescription &source);
};

OSG_END_NAMESPACE

#include "OSGMethodDescription.inl"

#endif /* _OSGMETHODDESCRIPTIONIMPL_H_ */
