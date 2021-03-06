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

#include "OSGButton.h"
#include "OSGUIDrawUtils.h"
#include "OSGInternalWindow.h"
#include "OSGUIDrawingSurface.h"
#include "OSGWindowEventProducer.h"
#include "OSGImageFileHandler.h"

#include "OSGTexturedQuadUIDrawObject.h"

#include <boost/bind.hpp>

OSG_BEGIN_NAMESPACE

// Documentation for this class is emitted in the
// OSGButtonBase.cpp file.
// To modify it, please change the .fcd file (OSGButton.fcd) and
// regenerate the base file.

/***************************************************************************\
 *                           Class variables                               *
\***************************************************************************/

/***************************************************************************\
 *                           Class methods                                 *
\***************************************************************************/

void Button::initMethod(InitPhase ePhase)
{
    Inherited::initMethod(ePhase);

    if(ePhase == TypeObject::SystemPost)
    {
    }
}


/***************************************************************************\
 *                           Instance methods                              *
\***************************************************************************/
    
void Button::setTextColors( const Color4f &value )
{
    setTextColor(value);
    setDisabledTextColor(value);
    setRolloverTextColor(value);
    setFocusedTextColor(value);
    setActiveTextColor(value);
}

void Button::setBorders(BorderRefPtr TheBorder)
{
    Inherited::setBorders(TheBorder);
    setActiveBorder(TheBorder);
}

void Button::setBackgrounds(LayerRefPtr TheBackground)
{
    Inherited::setBackgrounds(TheBackground);
    setActiveBackground(TheBackground);
}

void Button::setForegrounds(LayerRefPtr TheForeground)
{
    Inherited::setForegrounds(TheForeground);
    setActiveForeground(TheForeground);
}

UIDrawObjectCanvasRefPtr Button::createTexturedDrawObjectCanvas(TextureObjChunkRefPtr TheTexture, Vec2f Size)
{
    UIDrawObjectCanvasRefPtr DrawObjectCanvas = UIDrawObjectCanvas::create();
    TexturedQuadUIDrawObjectRefPtr TextureDrawObject = TexturedQuadUIDrawObject::create();

    Vec2f ImageSize;
    ImageSize.setValues(TheTexture->getImage()->getWidth(), TheTexture->getImage()->getHeight());

    if(Size.x() > 0.0f)
    {
        ImageSize[0] = Size.x();
    }
    if(Size.y() > 0.0f)
    {
        ImageSize[1] = Size.y();
    }

    TextureDrawObject->setPoint1(Pnt2f(0,0));
    TextureDrawObject->setPoint2(Pnt2f(ImageSize.x(),0));
    TextureDrawObject->setPoint3(Pnt2f(ImageSize.x(),ImageSize.y()));
    TextureDrawObject->setPoint4(Pnt2f(0,ImageSize.y()));

    TextureDrawObject->setTexCoord1(Vec2f(0.0,0.0));
    TextureDrawObject->setTexCoord2(Vec2f(1.0,0.0));
    TextureDrawObject->setTexCoord3(Vec2f(1.0,1.0));
    TextureDrawObject->setTexCoord4(Vec2f(0.0,1.0));

    TextureDrawObject->setTexture(TheTexture);

    TextureDrawObject->setOpacity(1.0);

    DrawObjectCanvas->pushToDrawObjects(TextureDrawObject);

    return DrawObjectCanvas;
}

UIDrawObjectCanvasRefPtr Button::getBaseDrawObject(void) const
{
    return getDrawObject();
}

EventConnection Button::addActionListener(ActionListenerPtr Listener)
{
    _ActionListeners.insert(Listener);
    return EventConnection(
                           boost::bind(&Button::isActionListenerAttached, this, Listener),
                           boost::bind(&Button::removeActionListener, this, Listener));
}

EventConnection Button::addMousePressedActionListener(ActionListenerPtr Listener)
{
    _MousePressedActionListeners.insert(Listener);
    return EventConnection(
                           boost::bind(&Button::isMousePressedActionListenerAttached, this, Listener),
                           boost::bind(&Button::removeMousePressedActionListener, this, Listener));
}

Vec2f Button::getContentRequestedSize(void) const
{
    Vec2f Result(0.0f,0.0f);
    UIDrawObjectCanvasRefPtr DrawnDrawObject = getDrawnDrawObject();
    if(getDrawObjectToTextAlignment() == ALIGN_DRAW_OBJECT_LEFT_OF_TEXT ||
       getDrawObjectToTextAlignment() == ALIGN_DRAW_OBJECT_RIGHT_OF_TEXT)
    {
        if(getFont() != NULL)
        {
            Pnt2f TextTopLeft(0.0f,0.0f), TextBottomRight(0.0f,0.0f);
            getFont()->getBounds(getText(), TextTopLeft, TextBottomRight);
            Result[0] += (TextBottomRight - TextTopLeft).x();
            Result[1] = osgMax(Result[1],(TextBottomRight - TextTopLeft).y());
        }

        if(DrawnDrawObject != NULL)
        {
            Pnt2f DrawObjectTopLeft, DrawObjectBottomRight;
            DrawnDrawObject->getDrawObjectBounds(DrawObjectTopLeft, DrawObjectBottomRight);

            Result[0] += (DrawObjectBottomRight - DrawObjectTopLeft).x();
            Result[1] = osgMax(Result[1],(DrawObjectBottomRight - DrawObjectTopLeft).y());
        }

        if(getFont() != NULL && DrawnDrawObject != NULL)
        {
            Result[0] += getDrawObjectToTextPadding();
        }
    }
    else if(getDrawObjectToTextAlignment() == ALIGN_DRAW_OBJECT_ABOVE_TEXT ||
            getDrawObjectToTextAlignment() == ALIGN_DRAW_OBJECT_BELOW_TEXT)
    {
        if(getFont() != NULL)
        {
            Pnt2f TextTopLeft(0.0f,0.0f), TextBottomRight(0.0f,0.0f);
            getFont()->getBounds(getText(), TextTopLeft, TextBottomRight);
            Result[1] += (TextBottomRight - TextTopLeft).y();
            Result[0] = osgMax(Result[0],(TextBottomRight - TextTopLeft).x());
        }

        if(DrawnDrawObject != NULL)
        {
            Pnt2f DrawObjectTopLeft, DrawObjectBottomRight;
            DrawnDrawObject->getDrawObjectBounds(DrawObjectTopLeft, DrawObjectBottomRight);

            Result[1] += (DrawObjectBottomRight - DrawObjectTopLeft).y();
            Result[0] = osgMax(Result[0],(DrawObjectBottomRight - DrawObjectTopLeft).x());
        }

        if(getFont() != NULL && DrawnDrawObject != NULL)
        {
            Result[1] += getDrawObjectToTextPadding();
        }
    }

    return Result + Vec2f(2.0,2.0);
}
BorderRefPtr Button::getDrawnBorder(void) const
{
    if(getEnabled())
    {
        //if(getFocused())
        //{
        //    return getFocusedTextColor();
        //}
        if(getActive())
        {
            return getActiveBorder();
        }
        else if(_MouseInComponentLastMouse)
        {
            return getRolloverBorder();
        }
        else
        {
            return getBorder();
        }
    }
    else
    {
        return getDisabledBorder();
    }
}

LayerRefPtr Button::getDrawnBackground(void) const
{
    if(getEnabled())
    {
        //if(getFocused())
        //{
        //    return getFocusedTextColor();
        //}
        if(getActive())
        {
            return getActiveBackground();
        }
        else if(_MouseInComponentLastMouse)
        {
            return getRolloverBackground();
        }
        else
        {
            return getBackground();
        }
    }
    else
    {
        return getDisabledBackground();
    }
}
LayerRefPtr Button::getDrawnForeground(void) const
{
    if(getEnabled())
    {
        //if(getFocused())
        //{
        //    return getFocusedTextColor();
        //}
        if(getActive())
        {
            return getActiveForeground();
        }
        else if(_MouseInComponentLastMouse)
        {
            return getRolloverForeground();
        }
        else
        {
            return getForeground();
        }
    }
    else
    {
        return getDisabledForeground();
    }
}

Color4f Button::getDrawnTextColor(void) const
{
    if(getEnabled())
    {
        //if(getFocused())
        //{
        //    return getFocusedTextColor();
        //}
        if(getActive())
        {
            return getActiveTextColor();
        }
        else if(_MouseInComponentLastMouse)
        {
            return getRolloverTextColor();
        }
        else
        {
            return getTextColor();
        }
    }
    else
    {
        return getDisabledTextColor();
    }
}

UIDrawObjectCanvasRefPtr Button::getDrawnDrawObject(void) const
{
    if(getEnabled())
    {
        //if(getFocused())
        //{
        //    return getFocusedDrawObject();
        //}
        if(getActive())
        {
            return getActiveDrawObject();
        }
        else if(_MouseInComponentLastMouse)
        {
            return getRolloverDrawObject();
        }
        else
        {
            return getDrawObject();
        }
    }
    else
    {
        return getDisabledDrawObject();
    }
}

void Button::drawInternal(const GraphicsWeakPtr TheGraphics, Real32 Opacity) const
{
    Pnt2f TopLeft, BottomRight;
    getInsideBorderBounds(TopLeft, BottomRight);

    //If I have a DrawObject then Draw it
    UIDrawObjectCanvasRefPtr DrawnDrawObject = getDrawnDrawObject();
    UIDrawObjectCanvasRefPtr BaseDrawObject = getBaseDrawObject();

    if(DrawnDrawObject != NULL)
    {
        //Get the Draw Object Size
        Pnt2f DrawObjectTopLeft, DrawObjectBottomRight;
        DrawnDrawObject->getDrawObjectBounds(DrawObjectTopLeft, DrawObjectBottomRight);

        Pnt2f BaseDrawObjectTopLeft, BaseDrawObjectBottomRight;
        BaseDrawObject->getDrawObjectBounds(BaseDrawObjectTopLeft, BaseDrawObjectBottomRight);

        if(getText() != "" && getFont() != NULL)
        {
            //Draw both the text and Draw Object

            //Get the Text Size
            Pnt2f TextTopLeft, TextBottomRight;
            getFont()->getBounds(getText(), TextTopLeft, TextBottomRight);

            Vec2f InternalsSize;
            if(getDrawObjectToTextAlignment() == ALIGN_DRAW_OBJECT_LEFT_OF_TEXT || 
               getDrawObjectToTextAlignment() == ALIGN_DRAW_OBJECT_RIGHT_OF_TEXT)
            {
                InternalsSize.setValues((TextBottomRight.x()-TextTopLeft.x()) + (DrawObjectBottomRight.x()-DrawObjectTopLeft.x()) + getDrawObjectToTextPadding(),
                                        osgMax((TextBottomRight.y()-TextTopLeft.y()), (DrawObjectBottomRight.y()-DrawObjectTopLeft.y())));
            }
            else
            {
                InternalsSize.setValues(osgMax((TextBottomRight.x()-TextTopLeft.x()), (DrawObjectBottomRight.x()-DrawObjectTopLeft.x())),
                                        (TextBottomRight.y()-TextTopLeft.y()) + (DrawObjectBottomRight.y()-DrawObjectTopLeft.y()) + getDrawObjectToTextPadding());
            }

            Pnt2f InternalAlignment;
            InternalAlignment = calculateAlignment(TopLeft, (BottomRight-TopLeft), InternalsSize,getAlignment().y(), getAlignment().x());

            //Draw Object Alignment
            Pnt2f DrawObjectAlignedPosition;
            switch(getDrawObjectToTextAlignment())
            {
                case ALIGN_DRAW_OBJECT_LEFT_OF_TEXT:
                    DrawObjectAlignedPosition = calculateAlignment(InternalAlignment, InternalsSize, (BaseDrawObjectBottomRight - BaseDrawObjectTopLeft),0.5f, 0.0);
                    break;
                case ALIGN_DRAW_OBJECT_RIGHT_OF_TEXT:
                    DrawObjectAlignedPosition = calculateAlignment(InternalAlignment, InternalsSize, (BaseDrawObjectBottomRight - BaseDrawObjectTopLeft),0.5f, 1.0);
                    break;
                case ALIGN_DRAW_OBJECT_ABOVE_TEXT:
                    DrawObjectAlignedPosition = calculateAlignment(InternalAlignment, InternalsSize, (BaseDrawObjectBottomRight - BaseDrawObjectTopLeft),0.0f, 0.5);
                    break;
                case ALIGN_DRAW_OBJECT_BELOW_TEXT:
                    DrawObjectAlignedPosition = calculateAlignment(InternalAlignment, InternalsSize, (BaseDrawObjectBottomRight - BaseDrawObjectTopLeft),1.0f, 0.5);
                    break;
            }
            //If active then translate the Text by the Active Offset
            DrawObjectAlignedPosition = DrawObjectAlignedPosition + getDrawnOffset();

            DrawnDrawObject->setPosition( DrawObjectAlignedPosition );

            //Text Alignment
            Pnt2f TextAlignedPosition;
            switch(getDrawObjectToTextAlignment())
            {
                case ALIGN_DRAW_OBJECT_LEFT_OF_TEXT:
                    TextAlignedPosition = calculateAlignment(InternalAlignment, InternalsSize, (TextBottomRight - TextTopLeft),0.5f, 1.0);
                    break;
                case ALIGN_DRAW_OBJECT_RIGHT_OF_TEXT:
                    TextAlignedPosition = calculateAlignment(InternalAlignment, InternalsSize, (TextBottomRight - TextTopLeft),0.5f, 0.0);
                    break;
                case ALIGN_DRAW_OBJECT_ABOVE_TEXT:
                    TextAlignedPosition = calculateAlignment(InternalAlignment, InternalsSize, (TextBottomRight - TextTopLeft),1.0f, 0.5);
                    break;
                case ALIGN_DRAW_OBJECT_BELOW_TEXT:
                    TextAlignedPosition = calculateAlignment(InternalAlignment, InternalsSize, (TextBottomRight - TextTopLeft),0.0f, 0.5);
                    break;
            }

            drawText(TheGraphics, TextAlignedPosition, Opacity);
        }
        else
        {
            //Just Draw the Draw Object
            Pnt2f AlignedPosition;
            AlignedPosition = calculateAlignment(TopLeft, (BottomRight-TopLeft), (BaseDrawObjectBottomRight - BaseDrawObjectTopLeft),getAlignment().y(), getAlignment().x());

            //If active then translate the Text by the Active Offset
            AlignedPosition = AlignedPosition + getDrawnOffset();

            DrawnDrawObject->setPosition( AlignedPosition );
        }

        //Draw the DrawnDrawObject
        DrawnDrawObject->draw(TheGraphics, getOpacity()*Opacity);

    }
    else if(getText() != "" && getFont() != NULL)
    {
        //Just Draw the Text
        Pnt2f AlignedPosition;
        Pnt2f TextTopLeft, TextBottomRight;
        getFont()->getBounds(getText(), TextTopLeft, TextBottomRight);

        AlignedPosition = calculateAlignment(TopLeft, (BottomRight-TopLeft), (TextBottomRight - TextTopLeft),getAlignment().y(), getAlignment().x());

        drawText(TheGraphics, AlignedPosition, Opacity);
    }
}

void Button::drawText(const GraphicsWeakPtr TheGraphics, const Pnt2f& TopLeft, Real32 Opacity) const
{
    //If I have Text Then Draw it
    if(getText() != "" && getFont() != NULL)
    {
        //Calculate Alignment
        Pnt2f Position =  TopLeft + getDrawnOffset();

        //Draw the Text
        TheGraphics->drawText(Position, getText(), getFont(), getDrawnTextColor(), getOpacity()*Opacity);
    }
}

Vec2f Button::getDrawnOffset(void) const
{
    if(getActive())
    {
        return getActiveOffset();
    }
    else
    {
        return Vec2f(0.0f,0.0f);
    }
}

void Button::detachFromEventProducer(void)
{
    Inherited::detachFromEventProducer();
    _ArmedUpdateEventConnection.disconnect();
    _ArmedMouseEventConnection.disconnect();
}

void Button::actionPreformed(const ActionEventUnrecPtr e)
{
}

void Button::mousePressedActionPreformed(const ActionEventUnrecPtr e)
{
}

void Button::mouseClicked(const MouseEventUnrecPtr e)
{
    Component::mouseClicked(e);
}

void Button::mouseEntered(const MouseEventUnrecPtr e)
{
    if(getEnabled())
    {
        if(_Armed)
        {
            ButtonRefPtr(this)->setActive(true);
        }
    }

    Component::mouseEntered(e);
}

void Button::mouseExited(const MouseEventUnrecPtr e)
{
    if(getEnabled())
    {
        if(_Armed)
        {
            ButtonRefPtr(this)->setActive(false);
        }
    }

    Component::mouseExited(e);
}

void Button::mousePressed(const MouseEventUnrecPtr e)
{
    if(getEnabled())
    {
        if(e->getButton()==MouseEvent::BUTTON1){
            ButtonRefPtr(this)->setActive(true);
            _Armed = true;

            if(getParentWindow() != NULL && getParentWindow()->getDrawingSurface()!=NULL&& getParentWindow()->getDrawingSurface()->getEventProducer() != NULL)
            {
                _ArmedMouseEventConnection = getParentWindow()->getDrawingSurface()->getEventProducer()->addMouseListener(&_ButtonArmedListener);
                if(getEnableActionOnMouseDownTime())
                {
                    produceMousePressedActionPerformed(ActionEvent::create(ButtonRefPtr(this), e->getTimeStamp()));
                    _ButtonArmedListener.reset();
                    _ArmedUpdateEventConnection = getParentWindow()->getDrawingSurface()->getEventProducer()->addUpdateListener(&_ButtonArmedListener);
                }
            }
        }
    }
    Component::mousePressed(e);
}

void Button::mouseReleased(const MouseEventUnrecPtr e)
{	
    if(getEnabled())
    {
        if(e->getButton() == MouseEvent::BUTTON1 && _Armed)
        {
            ButtonRefPtr(this)->setActive(false);
            produceActionPerformed(ActionEvent::create(ButtonRefPtr(this), e->getTimeStamp()));
            _Armed = false;
        }
    }
    Component::mouseReleased(e);
}

void Button::produceActionPerformed(const ActionEventUnrecPtr e)
{
    actionPreformed(e);
    ActionListenerSet Listeners(_ActionListeners);
    for(ActionListenerSetConstItor SetItor(Listeners.begin()) ; SetItor != Listeners.end() ; ++SetItor)
    {
        (*SetItor)->actionPerformed(e);
    }
    _Producer.produceEvent(ActionPerformedMethodId,e);
}

void Button::produceMousePressedActionPerformed(const ActionEventUnrecPtr e)
{
    mousePressedActionPreformed(e);
    for(ActionListenerSetConstItor SetItor(_MousePressedActionListeners.begin()) ; SetItor != _MousePressedActionListeners.end() ; ++SetItor)
    {
        (*SetItor)->actionPerformed(e);
    }
    _Producer.produceEvent(MousePressedActionPerformedMethodId,e);
}

void Button::setTexture(TextureObjChunkRefPtr TheTexture, Vec2f Size)
{
    UIDrawObjectCanvasRefPtr DrawObjectCanvas;
    if(TheTexture == NULL)
    {
        DrawObjectCanvas = NULL;
    }
    else
    {
        DrawObjectCanvas = createTexturedDrawObjectCanvas(TheTexture, Size);
    }

    setDrawObject(DrawObjectCanvas);

}

void Button::setActiveTexture(TextureObjChunkRefPtr TheTexture, Vec2f Size)
{
    UIDrawObjectCanvasRefPtr DrawObjectCanvas;
    if(TheTexture == NULL)
    {
        DrawObjectCanvas = NULL;
    }
    else
    {
        DrawObjectCanvas = createTexturedDrawObjectCanvas(TheTexture, Size);
    }

    setActiveDrawObject(DrawObjectCanvas);
}

void Button::setFocusedTexture(TextureObjChunkRefPtr TheTexture, Vec2f Size)
{
    UIDrawObjectCanvasRefPtr DrawObjectCanvas;
    if(TheTexture == NULL)
    {
        DrawObjectCanvas = NULL;
    }
    else
    {
        DrawObjectCanvas = createTexturedDrawObjectCanvas(TheTexture, Size);
    }

    setFocusedDrawObject(DrawObjectCanvas);
}

void Button::setRolloverTexture(TextureObjChunkRefPtr TheTexture, Vec2f Size)
{
    UIDrawObjectCanvasRefPtr DrawObjectCanvas;
    if(TheTexture == NULL)
    {
        DrawObjectCanvas = NULL;
    }
    else
    {
        DrawObjectCanvas = createTexturedDrawObjectCanvas(TheTexture, Size);
    }

    setRolloverDrawObject(DrawObjectCanvas);
}

void Button::setDisabledTexture(TextureObjChunkRefPtr TheTexture, Vec2f Size)
{
    UIDrawObjectCanvasRefPtr DrawObjectCanvas;
    if(TheTexture == NULL)
    {
        DrawObjectCanvas = NULL;
    }
    else
    {
        DrawObjectCanvas = createTexturedDrawObjectCanvas(TheTexture, Size);
    }

    setDisabledDrawObject(DrawObjectCanvas);
}

void Button::setImage(ImageRefPtr TheImage, Vec2f Size)
{
    TextureObjChunkRefPtr TextureObjChunk;
    if(TheImage == NULL)
    {
        TextureObjChunk = NULL;
    }
    else
    {
        TextureObjChunk = TextureObjChunk::create();
        TextureObjChunk->setImage(TheImage);
        TextureObjChunk->setWrapS(GL_CLAMP);
        TextureObjChunk->setWrapT(GL_CLAMP);
        TextureObjChunk->setMinFilter(GL_LINEAR_MIPMAP_NEAREST);
        TextureObjChunk->setMagFilter(GL_LINEAR);
        //TextureObjChunk->setEnvMode(GL_MODULATE);
    }

    setTexture(TextureObjChunk, Size);
}

void Button::setActiveImage(ImageRefPtr TheImage, Vec2f Size)
{
    TextureObjChunkRefPtr TextureObjChunk;
    if(TheImage == NULL)
    {
        TextureObjChunk = NULL;
    }
    else
    {
        TextureObjChunk = TextureObjChunk::create();
        TextureObjChunk->setImage(TheImage);
        TextureObjChunk->setWrapS(GL_CLAMP);
        TextureObjChunk->setWrapT(GL_CLAMP);
        TextureObjChunk->setMinFilter(GL_LINEAR_MIPMAP_NEAREST);
        TextureObjChunk->setMagFilter(GL_LINEAR);
        //TextureObjChunk->setEnvMode(GL_MODULATE);
    }

    setActiveTexture(TextureObjChunk, Size);
}

void Button::setFocusedImage(ImageRefPtr TheImage, Vec2f Size)
{
    TextureObjChunkRefPtr TextureObjChunk;
    if(TheImage == NULL)
    {
        TextureObjChunk = NULL;
    }
    else
    {
        TextureObjChunk = TextureObjChunk::create();
        TextureObjChunk->setImage(TheImage);
        TextureObjChunk->setWrapS(GL_CLAMP);
        TextureObjChunk->setWrapT(GL_CLAMP);
        TextureObjChunk->setMinFilter(GL_LINEAR_MIPMAP_NEAREST);
        TextureObjChunk->setMagFilter(GL_LINEAR);
        //TextureObjChunk->setEnvMode(GL_MODULATE);
    }

    setFocusedTexture(TextureObjChunk, Size);
}

void Button::setRolloverImage(ImageRefPtr TheImage, Vec2f Size)
{
    TextureObjChunkRefPtr TextureObjChunk;
    if(TheImage == NULL)
    {
        TextureObjChunk = NULL;
    }
    else
    {
        TextureObjChunk = TextureObjChunk::create();
        TextureObjChunk->setImage(TheImage);
        TextureObjChunk->setWrapS(GL_CLAMP);
        TextureObjChunk->setWrapT(GL_CLAMP);
        TextureObjChunk->setMinFilter(GL_LINEAR_MIPMAP_NEAREST);
        TextureObjChunk->setMagFilter(GL_LINEAR);
        //TextureObjChunk->setEnvMode(GL_MODULATE);
    }

    setRolloverTexture(TextureObjChunk, Size);
}

void Button::setDisabledImage(ImageRefPtr TheImage, Vec2f Size)
{
    TextureObjChunkRefPtr TextureObjChunk;
    if(TheImage == NULL)
    {
        TextureObjChunk = NULL;
    }
    else
    {
        TextureObjChunk = TextureObjChunk::create();
        TextureObjChunk->setImage(TheImage);
        TextureObjChunk->setWrapS(GL_CLAMP);
        TextureObjChunk->setWrapT(GL_CLAMP);
        TextureObjChunk->setMinFilter(GL_LINEAR_MIPMAP_NEAREST);
        TextureObjChunk->setMagFilter(GL_LINEAR);
        //TextureObjChunk->setEnvMode(GL_MODULATE);
    }

    setDisabledTexture(TextureObjChunk, Size);
}


void Button::setImage(const std::string& Path, Vec2f Size)
{
    ImageRefPtr LoadedImage = ImageFileHandler::the()->read(Path.c_str());
    setImage(LoadedImage, Size);
}

void Button::setActiveImage(const std::string& Path, Vec2f Size)
{
    ImageRefPtr LoadedImage = ImageFileHandler::the()->read(Path.c_str());
    setActiveImage(LoadedImage, Size);
}

void Button::setFocusedImage(const std::string& Path, Vec2f Size)
{
    ImageRefPtr LoadedImage = ImageFileHandler::the()->read(Path.c_str());
    setFocusedImage(LoadedImage, Size);
}

void Button::setRolloverImage(const std::string& Path, Vec2f Size)
{
    ImageRefPtr LoadedImage = ImageFileHandler::the()->read(Path.c_str());
    setRolloverImage(LoadedImage, Size);
}

void Button::setDisabledImage(const std::string& Path, Vec2f Size)
{
    ImageRefPtr LoadedImage = ImageFileHandler::the()->read(Path.c_str());
    setDisabledImage(LoadedImage, Size);
}

void Button::getTextBounds(Pnt2f& TextTopLeft, Pnt2f& TextBottomRight) const
{
    getFont()->getBounds(this->getText(), TextTopLeft, TextBottomRight);
}

void Button::removeActionListener(ActionListenerPtr Listener)
{
    ActionListenerSetItor EraseIter(_ActionListeners.find(Listener));
    if(EraseIter != _ActionListeners.end())
    {
        _ActionListeners.erase(EraseIter);
    }
}

/*-------------------------------------------------------------------------*\
 -  private                                                                 -
\*-------------------------------------------------------------------------*/

/*----------------------- constructors & destructors ----------------------*/

Button::Button(void) :
    Inherited(),
		_ButtonArmedListener(this),
        _Armed(false),
        _Active(false)

{
}

Button::Button(const Button &source) :
    Inherited(source),
		_ButtonArmedListener(this),
        _Armed(false),
        _Active(false)

{
}

Button::~Button(void)
{
}

/*----------------------------- class specific ----------------------------*/

void Button::changed(ConstFieldMaskArg whichField, 
                            UInt32            origin,
                            BitVector         details)
{
    Inherited::changed(whichField, origin, details);

	if(whichField & DrawObjectFieldMask &&
		getDrawObject() != NULL)
	{
			getDrawObject()->setSize(getDrawObject()->getPreferredSize());
	}
	
	if(whichField & ActiveDrawObjectFieldMask &&
		getActiveDrawObject() != NULL)
	{
			getActiveDrawObject()->setSize(getActiveDrawObject()->getPreferredSize());
	}
	
	if(whichField & RolloverDrawObjectFieldMask &&
		getRolloverDrawObject() != NULL)
	{
			getRolloverDrawObject()->setSize(getRolloverDrawObject()->getPreferredSize());
	}
	
	if(whichField & DisabledDrawObjectFieldMask &&
		getDisabledDrawObject() != NULL)
	{
			getDisabledDrawObject()->setSize(getDisabledDrawObject()->getPreferredSize());
	}
	
	if(whichField & FocusedDrawObjectFieldMask &&
		getFocusedDrawObject() != NULL)
	{
			getFocusedDrawObject()->setSize(getFocusedDrawObject()->getPreferredSize());
	}
}

void Button::dump(      UInt32    ,
                         const BitVector ) const
{
    SLOG << "Dump Button NI" << std::endl;
}

void Button::ButtonArmedListener::mouseReleased(const MouseEventUnrecPtr e)
{
	if(e->getButton() == MouseEvent::BUTTON1)
	{
		Pnt2f MousePos = ViewportToDrawingSurface(e->getLocation(), _Button->getParentWindow()->getDrawingSurface(), e->getViewport());
        //If the Mouse is not within the button
        if(!_Button->isContained(MousePos))
        {
            //Then Disarm the button
            _Button->_Armed = false;
        }

		//Remove myself from the listener
        if(_Button->getParentWindow() != NULL &&
            _Button->getParentWindow()->getDrawingSurface() != NULL &&
            _Button->getParentWindow()->getDrawingSurface()->getEventProducer() != NULL)
        {
            _Button->getParentWindow()->getDrawingSurface()->getEventProducer()->removeMouseListener(this);
            if(_Button->getEnableActionOnMouseDownTime())
            {
                _Button->getParentWindow()->getDrawingSurface()->getEventProducer()->removeUpdateListener(this);
            }
        }
	}
}

void Button::ButtonArmedListener::update(const UpdateEventUnrecPtr e)
{
    if(_Button->isContained(_Button->getParentWindow()->getDrawingSurface()->getMousePosition()))
    {
        _ActionFireElps += e->getElapsedTime();
    }
    if(_ActionFireElps >= _Button->getActionOnMouseDownRate())
    {
        _Button->produceMousePressedActionPerformed(ActionEvent::create(_Button, e->getTimeStamp()));
        _ActionFireElps -= static_cast<Int32>(_ActionFireElps/_Button->getActionOnMouseDownRate()) * _Button->getActionOnMouseDownRate();
    }
}
OSG_END_NAMESPACE
