/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
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

//---------------------------------------------------------------------------
//  Includes
//---------------------------------------------------------------------------

OSG_BEGIN_NAMESPACE

inline
bool Spinner::isChangeListenerAttached(ChangeListenerPtr l) const
{
    return _Model->isChangeListenerAttached(l);
}

inline
void Spinner::removeChangeListener(ChangeListenerPtr l)
{
    if(_Model)
    {
        _Model->removeChangeListener(l);
    }
}

inline
void Spinner::commitEdit(void)
{
    //TODO: Implement
}

inline
SpinnerModelPtr Spinner::getModel(void) const
{
    return _Model;
}

inline
boost::any Spinner::getNextValue(void)
{
    return _Model->getNextValue();
}

inline
boost::any Spinner::getPreviousValue(void)
{
    return _Model->getPreviousValue();
}

inline
boost::any Spinner::getValue(void)
{
    return _Model->getValue();
}

inline
void Spinner::setValue(const boost::any& value)
{
    _Model->setValue(value);
}

inline
Spinner::NextButtonActionListener::NextButtonActionListener(SpinnerRefPtr TheSpinner) :
   _Spinner(TheSpinner)
{
}

inline
Spinner::PreviousButtonActionListener::PreviousButtonActionListener(SpinnerRefPtr TheSpinner) :
   _Spinner(TheSpinner)
{
}

OSG_END_NAMESPACE
