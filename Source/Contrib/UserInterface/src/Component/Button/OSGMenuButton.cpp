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

//---------------------------------------------------------------------------
//  Includes
//---------------------------------------------------------------------------

#include <cstdlib>
#include <cstdio>

#include <OSGConfig.h>

#include "OSGMenuButton.h"
#include "OSGListGeneratedPopupMenu.h"
#include "OSGInternalWindow.h"
#include "OSGListModel.h"
#include "OSGUIDrawUtils.h"
#include "OSGMenuItem.h"

#include <boost/bind.hpp>

OSG_BEGIN_NAMESPACE

// Documentation for this class is emitted in the
// OSGMenuButtonBase.cpp file.
// To modify it, please change the .fcd file (OSGMenuButton.fcd) and
// regenerate the base file.

/***************************************************************************\
 *                           Class variables                               *
\***************************************************************************/

/***************************************************************************\
 *                           Class methods                                 *
\***************************************************************************/

void MenuButton::initMethod(InitPhase ePhase)
{
    Inherited::initMethod(ePhase);

    if(ePhase == TypeObject::SystemPost)
    {
    }
}


/***************************************************************************\
 *                           Instance methods                              *
\***************************************************************************/

EventConnection MenuButton::addMenuActionListener(ActionListenerPtr Listener)
{
    _MenuActionListeners.insert(Listener);
    return EventConnection(
                           boost::bind(&MenuButton::isMenuActionListenerAttached, this, Listener),
                           boost::bind(&MenuButton::removeMenuActionListener, this, Listener));
}

void MenuButton::hidePopup(void)
{
    if(getMenuButtonPopupMenu()->getVisible())
    {
        getMenuButtonPopupMenu()->cancel();
    }
}

void MenuButton::showPopup(void)
{
    if(!getMenuButtonPopupMenu()->getVisible())
    {
        Pnt2f BorderTopLeft, BorderBottomRight;
        getBounds(BorderTopLeft, BorderBottomRight);

        getMenuButtonPopupMenu()->setInvoker(ComponentRefPtr(this));
        getMenuButtonPopupMenu()->setVisible(true);
        getMenuButtonPopupMenu()->setPosition(ComponentToFrame(BorderTopLeft + Vec2f(0,BorderBottomRight.y()), ComponentRefPtr(this)));
        getMenuButtonPopupMenu()->setSelection(-1);

        getParentWindow()->pushToActivePopupMenus(getMenuButtonPopupMenu());
    }
}


void MenuButton::removeMenuActionListener(ActionListenerPtr Listener)
{
    MenuActionListenerSetItor EraseIter(_MenuActionListeners.find(Listener));
    if(EraseIter != _MenuActionListeners.end())
    {
        _MenuActionListeners.erase(EraseIter);
    }
}

Int32 MenuButton::getSelectionIndex(void) const
{
    if(getMenuButtonPopupMenu() != NULL)
    {
        return getMenuButtonPopupMenu()->getSelectionIndex();
    }
    else
    {
        return -1;
    }
}

boost::any MenuButton::getSelectionValue(void) const
{
    if(getMenuButtonPopupMenu() != NULL &&
       getModel() != NULL &&
       getMenuButtonPopupMenu()->getSelectionIndex() >= 0 &&
       getMenuButtonPopupMenu()->getSelectionIndex() < getModel()->getSize())
    {
        return getModel()->getElementAt(getMenuButtonPopupMenu()->getSelectionIndex());
    }
    else
    {
        return boost::any();
    }
}

/*-------------------------------------------------------------------------*\
 -  private                                                                 -
\*-------------------------------------------------------------------------*/

void MenuButton::updatePopupMenuConnections(void)
{
    if(getMenuButtonPopupMenu() != NULL)
    {
        for(UInt32 i(0) ; i<getMenuButtonPopupMenu()->getNumItems() ; ++i)
        {
            getMenuButtonPopupMenu()->getItem(i)->addActionListener(&_MenuButtonEventsListener);
        }
    }
}

void MenuButton::produceMenuActionPerformed(void)
{
    const ActionEventUnrecPtr e = ActionEvent::create(MenuButtonRefPtr(this), getTimeStamp());
	MenuActionListenerSet Listeners(_MenuActionListeners);
    for(MenuActionListenerSetConstItor SetItor(Listeners.begin()) ; SetItor != Listeners.end() ; ++SetItor)
    {
	    (*SetItor)->actionPerformed(e);
    }
   _Producer.produceEvent(MenuActionPerformedMethodId,e);
}

void MenuButton::onCreate(const MenuButton *Id)
{
	Inherited::onCreate(Id);

    ListGeneratedPopupMenuUnrecPtr Menu(ListGeneratedPopupMenu::create());
    setMenuButtonPopupMenu(Menu);
}

void MenuButton::onDestroy()
{
}

/*----------------------- constructors & destructors ----------------------*/

MenuButton::MenuButton(void) :
    Inherited(),
    _MenuButtonEventsListener(this)
{
}

MenuButton::MenuButton(const MenuButton &source) :
    Inherited(source),
    _MenuButtonEventsListener(this)
{
}

MenuButton::~MenuButton(void)
{
}

/*----------------------------- class specific ----------------------------*/

void MenuButton::changed(ConstFieldMaskArg whichField, 
                            UInt32            origin,
                            BitVector         details)
{
    Inherited::changed(whichField, origin, details);

	if((whichField & MenuButtonPopupMenuFieldMask) &&
		getMenuButtonPopupMenu() != NULL)
	{
		getMenuButtonPopupMenu()->addPopupMenuListener(&_MenuButtonEventsListener);
        updatePopupMenuConnections();
	}

    if(whichField & ModelFieldMask)
    {
        if(getModel() != NULL &&
           getMenuButtonPopupMenu()->getModel() != getModel())
        {
            getMenuButtonPopupMenu()->setModel(getModel());
        }
    }

	if(((whichField & CellGeneratorFieldMask) ||
		(whichField & MenuButtonPopupMenuFieldMask)) &&
		getCellGenerator() != NULL &&
        getMenuButtonPopupMenu()->getCellGenerator() != getCellGenerator())
    {
        getMenuButtonPopupMenu()->setCellGenerator(getCellGenerator());
    }

	if((whichField & SelectedFieldMask))
    {
        if(getSelected())
        {
            showPopup();
        }
        else
        {
            hidePopup();
        }
    }
}

void MenuButton::dump(      UInt32    ,
                         const BitVector ) const
{
    SLOG << "Dump MenuButton NI" << std::endl;
}

void MenuButton::MenuButtonEventsListener::popupMenuCanceled(const PopupMenuEventUnrecPtr e)
{
        _MenuButton->setSelected(false);
}

void MenuButton::MenuButtonEventsListener::popupMenuWillBecomeInvisible(const PopupMenuEventUnrecPtr e)
{
        _MenuButton->setSelected(false);
}

void MenuButton::MenuButtonEventsListener::popupMenuWillBecomeVisible(const PopupMenuEventUnrecPtr e)
{
}

void MenuButton::MenuButtonEventsListener::popupMenuContentsChanged(const PopupMenuEventUnrecPtr e)
{
    _MenuButton->updatePopupMenuConnections();
}

void MenuButton::MenuButtonEventsListener::actionPerformed(const ActionEventUnrecPtr e)
{
    _MenuButton->produceMenuActionPerformed();
}

OSG_END_NAMESPACE
