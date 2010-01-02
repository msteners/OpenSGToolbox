/*---------------------------------------------------------------------------*\
 *                     OpenSG ToolBox UserInterface                          *
 *                                                                           *
 *                                                                           *
 *                                                                           *
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

#include <OpenSG/OSGConfig.h>

OSG_BEGIN_NAMESPACE

inline
bool TextComponent::isTextListenerAttached(TextListenerPtr Listener) const
{
    return _TextListeners.find(Listener) != _TextListeners.end();
}

inline
bool TextComponent::isCaretListenerAttached(CaretListenerPtr Listener) const
{
    return _CaretListeners.find(Listener) != _CaretListeners.end();
}


inline
bool TextComponent::hasSelection(void) const
{
    return _TextSelectionEnd > _TextSelectionStart;
}

inline
void TextComponent::selectAll(void)
{
    select(0, getText().size());
}

inline
void TextComponent::setSelectionStart(const UInt32& index)
{
    select(index,_TextSelectionEnd);
}

inline
void TextComponent::setSelectionEnd(const UInt32& index)
{
    select(_TextSelectionStart,index);
}

OSG_END_NAMESPACE
