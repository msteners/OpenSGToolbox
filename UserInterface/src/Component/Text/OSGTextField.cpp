/*---------------------------------------------------------------------------*\
 *                     OpenSG ToolBox UserInterface                          *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                         www.vrac.iastate.edu                              *
 *                                                                           *
 *   Authors: David Kabala, Alden Peterson, Lee Zaniewski, Jonathan Flory    *
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

#include <stdlib.h>
#include <stdio.h>

#define OSG_COMPILEUSERINTERFACELIB

#include <OpenSG/OSGConfig.h>
#include "Util/OSGUIDrawUtils.h"

#include "Graphics/UIDrawObjects/OSGLineUIDrawObject.h"

#include "OSGTextField.h"


#include "Component/Container/Window/OSGInternalWindow.h"
#include "UIDrawingSurface/OSGUIDrawingSurface.h"
#include <OpenSG/Input/OSGWindowEventProducer.h>
#include <OpenSG/Input/OSGStringUtils.h>

#include "LookAndFeel/OSGLookAndFeelManager.h"

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class osg::TextField
A UI TextField 
*/

/***************************************************************************\
 *                           Class variables                               *
\***************************************************************************/

/***************************************************************************\
 *                           Class methods                                 *
\***************************************************************************/

void TextField::initMethod (void)
{
}


/***************************************************************************\
 *                           Instance methods                              *
\***************************************************************************/

std::string TextField::getDrawnText(void) const
{
	return getText();
}

void TextField::drawInternal(const GraphicsPtr TheGraphics) const
{
    Pnt2s TopLeft, BottomRight;
    Pnt2s TempPos;
    getInsideBorderBounds(TopLeft, BottomRight);
    TempPos = calculateAlignment(TopLeft, BottomRight-TopLeft, getFont()->getBounds(getDrawnText()), getVerticalAlignment(), getHorizontalAlignment());
    
    //Text Color
    Color4f TextColor = getDrawnTextColor();
    if(getDrawnText() != "" && getFont() != NullFC)
    {

	    if(_TextSelectionStart >= _TextSelectionEnd)
	    {
	        TheGraphics->drawText(TempPos, getDrawnText(), getFont(), TextColor, getOpacity());
	    }
	    else
	    {
            //Draw Text Befor the Selection
		    TheGraphics->drawText(TempPos, getDrawnText().substr(0, _TextSelectionStart), getFont(), TextColor, getOpacity());

		    //Draw Selection
            Pnt2s TextTopLeft, TextBottomRight;
            getFont()->getBounds(getDrawnText().substr(0, _TextSelectionStart), TextTopLeft, TextBottomRight);

		    TheGraphics->drawQuad(TempPos + Vec2s(TextBottomRight.x(),0),
			    TempPos + Vec2s(getFont()->getBounds(getDrawnText().substr(0, _TextSelectionEnd)).x(), 0),
			    TempPos + Vec2s(getFont()->getBounds(getDrawnText().substr(0, _TextSelectionEnd))),
			    TempPos + Vec2s(TextBottomRight),
			    getSelectionBoxColor(),  getSelectionBoxColor(),  getSelectionBoxColor(),  getSelectionBoxColor(), getOpacity());

            //Draw Selected Text
		    TheGraphics->drawText(TempPos + Vec2s(TextBottomRight.x(), 0), 
			    getDrawnText().substr(_TextSelectionStart, _TextSelectionEnd-_TextSelectionStart), getFont(), getSelectionTextColor(), getOpacity());

		    //Eraw Text After selection
            getFont()->getBounds(getDrawnText().substr(0, _TextSelectionEnd), TextTopLeft, TextBottomRight);
		    TheGraphics->drawText(TempPos + Vec2s(TextBottomRight.x(), 0),
			    getDrawnText().substr(_TextSelectionEnd, getDrawnText().size()-_TextSelectionEnd), getFont(), TextColor, getOpacity());
	    }
    }

    if(getEnabled() && getEditable() && getFocused() && _CurrentCaretBlinkElps <= 0.5*LookAndFeelManager::the()->getLookAndFeel()->getTextCaretRate())
    {
   		    //Draw the caret
		    TheGraphics->drawLine(TempPos+Vec2s(getFont()->getBounds(getDrawnText().substr(0, getCaretPosition())).x(), 0),
	        TempPos + Vec2s(getFont()->getBounds(getDrawnText().substr(0, getCaretPosition())).x(),  getFont()->getBounds(getDrawnText()).y()), 
	        .5, TextColor, 1.0);
    }
}
void TextField::keyTyped(const KeyEvent& e)
{
	if(getEnabled())
	{
		if(e.getKey() == e.KEY_ENTER)
		{
			produceActionPerformed(ActionEvent(TextFieldPtr(this), getTimeStamp()));
		}
	}

	Inherited::keyTyped(e);
}

void TextField::mouseClicked(const MouseEvent& e)
{	
	Int32 Position(0);
	Int32 BeginWord = 0;
	Int32 EndWord = getDrawnText().size();
	if(e.getButton() == e.BUTTON1)
	{

		if(e.getClickCount() == 2)
		{
			Pnt2s TopLeftText, BottomRightText, TempPos;
			Pnt2s TopLeftText1, BottomRightText1;
			Pnt2s TopLeft, BottomRight;
			getFont()->getBounds(getDrawnText(), TopLeftText, BottomRightText);
			getInsideBorderBounds(TopLeft, BottomRight);
            TempPos = calculateAlignment(TopLeft, BottomRight-TopLeft, BottomRightText-TopLeftText, getVerticalAlignment(), getHorizontalAlignment());

			//set caret position to proper place
			//if the mouse is to the left of the text, set it to the begining.
			Pnt2s temp = DrawingSurfaceToComponent(e.getLocation(), TextFieldPtr(this));
			if(DrawingSurfaceToComponent(e.getLocation(), TextFieldPtr(this)).x() <= TempPos.x())
			{
				Position = 0;
			}//if the mouse is to the right of the text, set it to the end
			else if(DrawingSurfaceToComponent(e.getLocation(), TextFieldPtr(this)).x() >= TempPos.x()+BottomRightText.x())
			{
				Position = getDrawnText().size();
			}
			else
			{
				for(UInt32 i = 0; i <getDrawnText().size(); i++)
				{		
					calculateTextBounds(0,i, TopLeftText, BottomRightText);
					calculateTextBounds(0,i+1, TopLeftText1, BottomRightText1);
					if(DrawingSurfaceToComponent(e.getLocation(), TextFieldPtr(this)).x()>BottomRightText.x()
					   && DrawingSurfaceToComponent(e.getLocation(), TextFieldPtr(this)).x() <= BottomRightText1.x())//check to see if it's in the right spot
					{
						Position = i;
						break;
					}
				}
			}
			if(isPunctuationChar(getDrawnText()[Position]))
			{
				EndWord = Position + 1;
				BeginWord = Position;
			}
			else{
				for(Int32 i = Position; i < getDrawnText().size(); i++)
				{
					if(!isWordChar(getDrawnText()[i]))
					{
						EndWord = i;
						break;
					}
				}
				for(Int32 i = Position; i >= 0; i--)
				{
					if(!isWordChar(getDrawnText()[i]))
					{
						BeginWord = i + 1;
						break;
					}
				}
			}
			_TextSelectionEnd = EndWord;
			_TextSelectionStart = BeginWord;
			setCaretPosition(EndWord);
		}
	}
	Inherited::mouseClicked(e);

}


void TextField::mousePressed(const MouseEvent& e)
{
	Pnt2s TopLeftText, BottomRightText, TempPos;
	Pnt2s TopLeftText1, BottomRightText1;
	Pnt2s TopLeft, BottomRight;
	getFont()->getBounds(getDrawnText(), TopLeftText, BottomRightText);
    getInsideBorderBounds(TopLeft, BottomRight);
    TempPos = calculateAlignment(TopLeft, BottomRight-TopLeft, BottomRightText-TopLeftText, getVerticalAlignment(), getHorizontalAlignment());
	if(e.getButton() == e.BUTTON1)
	{
		//set caret position to proper place
		//if the mouse is to the left of the text, set it to the begining.
		Pnt2s temp = DrawingSurfaceToComponent(e.getLocation(), TextFieldPtr(this));
		if(DrawingSurfaceToComponent(e.getLocation(), TextFieldPtr(this)).x() <= TempPos.x())
		{
			setCaretPosition(0);
		}		//if the mouse is to the right of the text, set it to the end
		else if(DrawingSurfaceToComponent(e.getLocation(), TextFieldPtr(this)).x() >= TempPos.x()+BottomRightText.x())
		{
			setCaretPosition(getDrawnText().size());
		}
		else
		{
			for(UInt32 i = 0; i <getDrawnText().size(); i++)
			{		
				calculateTextBounds(0,i, TopLeftText, BottomRightText);
				calculateTextBounds(0,i+1, TopLeftText1, BottomRightText1);
				if(DrawingSurfaceToComponent(e.getLocation(), TextFieldPtr(this)).x()>BottomRightText.x()
				   && DrawingSurfaceToComponent(e.getLocation(), TextFieldPtr(this)).x() <= BottomRightText1.x())//check to see if it's in the right spot
				{
					if(DrawingSurfaceToComponent(e.getLocation(), TextFieldPtr(this)).x() <= (BottomRightText1.x()-BottomRightText.x())/2.0+0.5 + BottomRightText.x())
					{
						setCaretPosition(i);
						break;
					}
					else
					{
						setCaretPosition(i+1);
						break;
					}
				}
			}
		}

		_TextSelectionEnd = getCaretPosition();
		_TextSelectionStart = getCaretPosition();
	}
	Inherited::mousePressed(e);
}

void TextField::calculateTextBounds(const UInt32 StartIndex, const UInt32 EndIndex, Pnt2s& TopLeft, Pnt2s& BottomRight)
{
    Pnt2s ComponentTopLeft, ComponentBottomRight;
    getInsideBorderBounds(ComponentTopLeft, ComponentBottomRight);

    Pnt2s AlignmentOffset = calculateAlignment(ComponentTopLeft, ComponentBottomRight-ComponentTopLeft, getFont()->getBounds(getDrawnText()), getVerticalAlignment(), getHorizontalAlignment());

	getFont()->getBounds(getDrawnText().substr(StartIndex, EndIndex), TopLeft, BottomRight);
	TopLeft = TopLeft + Vec2s(AlignmentOffset);
	BottomRight = BottomRight + Vec2s(AlignmentOffset);
}

void TextField::mouseDragged(const MouseEvent& e)
{
	Pnt2s TopLeftText, BottomRightText, TempPos;
	Pnt2s TopLeftText1, BottomRightText1;
	Pnt2s TopLeft, BottomRight;
	Int32 OriginalPosition = getCaretPosition();
	getFont()->getBounds(getDrawnText(), TopLeftText, BottomRightText);
    getInsideBorderBounds(TopLeft, BottomRight);
    TempPos = calculateAlignment(TopLeft, BottomRight-TopLeft, BottomRightText-TopLeftText, getVerticalAlignment(), getHorizontalAlignment());
	if(e.getButton() == e.BUTTON1)
	{
		//set caret position to proper place
		//if the mouse is to the left of the text, set it to the begining.
		Pnt2s temp = DrawingSurfaceToComponent(e.getLocation(), TextFieldPtr(this));
		if(DrawingSurfaceToComponent(e.getLocation(), TextFieldPtr(this)).x() <= TempPos.x())
		{
			setCaretPosition(0);
		}		//if the mouse is to the right of the text, set it to the end
		else if(DrawingSurfaceToComponent(e.getLocation(), TextFieldPtr(this)).x() >= TempPos.x()+BottomRightText.x())
		{
			setCaretPosition(getDrawnText().size());
		}
		else
		{
			//check letter by letter for the mouse's position
			for(UInt32 i = 0; i <getDrawnText().size(); i++)
			{		
				calculateTextBounds(0,i, TopLeftText, BottomRightText);
				calculateTextBounds(0,i+1, TopLeftText1, BottomRightText1);
				if(DrawingSurfaceToComponent(e.getLocation(), TextFieldPtr(this)).x()>BottomRightText.x()
				   && DrawingSurfaceToComponent(e.getLocation(), TextFieldPtr(this)).x() <= BottomRightText1.x())//check to see if it's in the right spot
				{
					if(DrawingSurfaceToComponent(e.getLocation(), TextFieldPtr(this)).x() < (BottomRightText1.x()-BottomRightText.x())/2.0 + BottomRightText.x())
					{

						setCaretPosition(i);
						break;
					}
					else
					{

						setCaretPosition(i+1);
						break;
					}
				}
			}
		}
		if(getCaretPosition() < OriginalPosition)
		{
			if(getCaretPosition() < _TextSelectionStart)
			{
				_TextSelectionStart = getCaretPosition();
			}
			else
			{
				_TextSelectionEnd = getCaretPosition();
			}
		}
		else if(getCaretPosition() > OriginalPosition)
		{
			if(getCaretPosition() > _TextSelectionEnd)
			{
				_TextSelectionEnd = getCaretPosition();
			}
			else
			{
				_TextSelectionStart = getCaretPosition();
			}
		}
	}
	

	Inherited::mouseDragged(e);
}


void TextField::produceActionPerformed(const ActionEvent& e)
{
   ActionListenerSet ListenerSet(_ActionListeners);
   for(ActionListenerSetConstItor SetItor(ListenerSet.begin()) ; SetItor != ListenerSet.end() ; ++SetItor)
   {
	   (*SetItor)->actionPerformed(e);
   }
}

void TextField::focusGained(const FocusEvent& e)
{
	if( getParentWindow() != NullFC &&
		getParentWindow()->getDrawingSurface() != NullFC &&
		getParentWindow()->getDrawingSurface()->getEventProducer() != NullFC)
    {
		getParentWindow()->getDrawingSurface()->getEventProducer()->addUpdateListener(&_CaretUpdateListener);
	}
	Inherited::focusGained(e);
}

void TextField::focusLost(const FocusEvent& e)
{
	if( getParentWindow() != NullFC &&
		getParentWindow()->getDrawingSurface() != NullFC &&
		getParentWindow()->getDrawingSurface()->getEventProducer() != NullFC)
    {
		getParentWindow()->getDrawingSurface()->getEventProducer()->removeUpdateListener(&_CaretUpdateListener);
	}
	Inherited::focusLost(e);
}


/*-------------------------------------------------------------------------*\
 -  private                                                                 -
\*-------------------------------------------------------------------------*/

/*----------------------- constructors & destructors ----------------------*/

TextField::TextField(void) :
    Inherited(),
		_CurrentCaretBlinkElps(0.0),
	    _CaretUpdateListener(TextFieldPtr(this))
{
}

TextField::TextField(const TextField &source) :
    Inherited(source),
		_CurrentCaretBlinkElps(0.0),
		_CaretUpdateListener(TextFieldPtr(this))
{
}

TextField::~TextField(void)
{
	if( getParentWindow() != NullFC &&
		getParentWindow()->getDrawingSurface() != NullFC &&
		getParentWindow()->getDrawingSurface()->getEventProducer() != NullFC && 
		isContained(getParentWindow()->getDrawingSurface()->getEventProducer()->getMousePosition(), true) )
    {
		getParentWindow()->getDrawingSurface()->getEventProducer()->setCursorType(WindowEventProducer::CURSOR_POINTER);
	}
}


/*----------------------------- class specific ----------------------------*/
void TextField::CaretUpdateListener::update(const UpdateEvent& e)
{
   _TextField->_CurrentCaretBlinkElps += e.getElapsedTime();
   if(_TextField->_CurrentCaretBlinkElps > LookAndFeelManager::the()->getLookAndFeel()->getTextCaretRate())
   {
       Int32 Div = _TextField->_CurrentCaretBlinkElps/LookAndFeelManager::the()->getLookAndFeel()->getTextCaretRate();
	   _TextField->_CurrentCaretBlinkElps -= static_cast<osg::Time>(Div)*LookAndFeelManager::the()->getLookAndFeel()->getTextCaretRate();
   }
}

void TextField::changed(BitVector whichField, UInt32 origin)
{
    Inherited::changed(whichField, origin);
}

void TextField::dump(      UInt32    , 
                         const BitVector ) const
{
    SLOG << "Dump TextField NI" << std::endl;
}


/*------------------------------------------------------------------------*/
/*                              cvs id's                                  */

#ifdef OSG_SGI_CC
#pragma set woff 1174
#endif

#ifdef OSG_LINUX_ICC
#pragma warning( disable : 177 )
#endif

namespace
{
    static Char8 cvsid_cpp       [] = "@(#)$Id: FCTemplate_cpp.h,v 1.20 2006/03/16 17:01:53 dirk Exp $";
    static Char8 cvsid_hpp       [] = OSGTEXTFIELDBASE_HEADER_CVSID;
    static Char8 cvsid_inl       [] = OSGTEXTFIELDBASE_INLINE_CVSID;

    static Char8 cvsid_fields_hpp[] = OSGTEXTFIELDFIELDS_HEADER_CVSID;
}

#ifdef __sgi
#pragma reset woff 1174
#endif

OSG_END_NAMESPACE

