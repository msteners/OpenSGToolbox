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

#include "OSGListGeneratedPopupMenu.h"
#include "OSGMenuItem.h"
#include "OSGComponentMenuItem.h"
#include "OSGListModel.h" // Model type
#include "OSGComponentGenerator.h" // CellGenerator type
#include "OSGStringUtils.h" // CellGenerator type

OSG_BEGIN_NAMESPACE

// Documentation for this class is emitted in the
// OSGListGeneratedPopupMenuBase.cpp file.
// To modify it, please change the .fcd file (OSGListGeneratedPopupMenu.fcd) and
// regenerate the base file.

/***************************************************************************\
 *                           Class variables                               *
\***************************************************************************/

/***************************************************************************\
 *                           Class methods                                 *
\***************************************************************************/

void ListGeneratedPopupMenu::initMethod(InitPhase ePhase)
{
    Inherited::initMethod(ePhase);

    if(ePhase == TypeObject::SystemPost)
    {
    }
}


/***************************************************************************\
 *                           Instance methods                              *
\***************************************************************************/

void ListGeneratedPopupMenu::addItem(MenuItemRefPtr Item)
{
	//Do Nothing
}

void ListGeneratedPopupMenu::addItem(MenuItemRefPtr Item, const UInt32& Index)
{
	//Do Nothing
}

void ListGeneratedPopupMenu::removeItem(MenuItemRefPtr Item)
{
	//Do Nothing
}

void ListGeneratedPopupMenu::removeItem(const UInt32& Index)
{
	//Do Nothing
}

void ListGeneratedPopupMenu::removeAllItems(void)
{
	//Do Nothing
}

MenuItem* ListGeneratedPopupMenu::getItem(const UInt32& Index)
{
	if(getModel() != NULL && Index < getMFChildren()->size())
	{
		return dynamic_cast<MenuItem*>(getChildren(Index));
	}
	else
	{
		return NULL;
	}
}

UInt32 ListGeneratedPopupMenu::getNumItems(void) const
{
	if(getModel() != NULL)
	{
		return getModel()->getSize();
	}
	else
	{
		return 0;
	}
}

void ListGeneratedPopupMenu::updateMenuItems(void)
{
    clearChildren();

    if(getModel() != NULL)// && )
    {
        MenuItemRefPtr Item;
        for(Int32 i(0) ; i<getModel()->getSize() ; ++i)
        {
            if(getCellGenerator() != NULL)
            {
                Item = ComponentMenuItem::create();
                ComponentRefPtr TheComponent = getCellGenerator()->getComponent(ListGeneratedPopupMenuRefPtr(this), getModel()->getElementAt(i), i, 0, false, false);

                TheComponent->setBackgrounds(NULL);


                dynamic_pointer_cast<ComponentMenuItem>(Item)->setComponent(TheComponent);
            }
            else
            {
                //Generate the Menu Item
                Item = MenuItem::create();
                std::string TheText;
                try
                {
                    TheText = lexical_cast(getModel()->getElementAt(i));
                }
                catch (boost::bad_lexical_cast &)
                {
                    //Could not convert to a string
                }
                dynamic_pointer_cast<MenuItem>(Item)->setText(TheText);
            }
            pushToChildren(Item);
        }
    }
    producePopupMenuContentsChanged(PopupMenuEvent::create(PopupMenuRefPtr(this), getSystemTime()));
}

/*-------------------------------------------------------------------------*\
 -  private                                                                 -
\*-------------------------------------------------------------------------*/

/*----------------------- constructors & destructors ----------------------*/

ListGeneratedPopupMenu::ListGeneratedPopupMenu(void) :
    Inherited(),
		_ModelListener(this)
{
}

ListGeneratedPopupMenu::ListGeneratedPopupMenu(const ListGeneratedPopupMenu &source) :
    Inherited(source),
		_ModelListener(this)
{
}

ListGeneratedPopupMenu::~ListGeneratedPopupMenu(void)
{
}

/*----------------------------- class specific ----------------------------*/

void ListGeneratedPopupMenu::changed(ConstFieldMaskArg whichField, 
                            UInt32            origin,
                            BitVector         details)
{
    Inherited::changed(whichField, origin, details);
	
	if(whichField & ModelFieldMask)
	{
		if(getModel() != NULL)
		{
			getModel()->addListDataListener(&_ModelListener);
		}
	}

	if((whichField & ModelFieldMask) ||
	   (whichField & CellGeneratorFieldMask))
	{
		updateMenuItems();
	}
}

void ListGeneratedPopupMenu::dump(      UInt32    ,
                         const BitVector ) const
{
    SLOG << "Dump ListGeneratedPopupMenu NI" << std::endl;
}

void ListGeneratedPopupMenu::ModelListener::contentsChanged(const ListDataEventUnrecPtr e)
{
	_ListGeneratedPopupMenu->updateMenuItems();
}

void ListGeneratedPopupMenu::ModelListener::intervalAdded(const ListDataEventUnrecPtr e)
{
	_ListGeneratedPopupMenu->updateMenuItems();
}

void ListGeneratedPopupMenu::ModelListener::intervalRemoved(const ListDataEventUnrecPtr e)
{
	_ListGeneratedPopupMenu->updateMenuItems();
}

OSG_END_NAMESPACE
