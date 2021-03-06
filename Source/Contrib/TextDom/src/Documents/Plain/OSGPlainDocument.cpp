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

#include "OSGPlainDocument.h"

OSG_BEGIN_NAMESPACE

// Documentation for this class is emitted in the
// OSGPlainDocumentBase.cpp file.
// To modify it, please change the .fcd file (OSGPlainDocument.fcd) and
// regenerate the base file.

/***************************************************************************\
 *                           Class variables                               *
\***************************************************************************/

/***************************************************************************\
 *                           Class methods                                 *
\***************************************************************************/

void PlainDocument::initMethod(InitPhase ePhase)
{
    Inherited::initMethod(ePhase);

    if(ePhase == TypeObject::SystemPost)
    {
    }
}


/***************************************************************************\
 *                           Instance methods                              *
\***************************************************************************/

Document::Position*   PlainDocument::createPosition(UInt32 offs) const
{
    return NULL;
}

ElementUnrecPtr    PlainDocument::getDefaultRootElement(void) const
{
   return ElementUnrecPtr(NULL);
}

const Document::Position*   PlainDocument::getEndPosition(void) const
{
    return NULL;
}

UInt32    PlainDocument::getLength(void) const
{
   return 0;
}

const boost::any&     PlainDocument::getProperty(const std::string& key) const
{
    return boost::any();
}

std::vector<ElementUnrecPtr>  PlainDocument::getRootElements(void) const
{
    return std::vector<ElementUnrecPtr>();
}

const Document::Position*   PlainDocument::getStartPosition(void) const
{
    return NULL;
}

std::string     PlainDocument::getText(UInt32 offset, UInt32 length) const
{
    return "";
}

void   PlainDocument::insertString(UInt32 offset, std::string str, const AttributeSet& a)
{
}

void   PlainDocument::putProperty(const std::string& key, boost::any value)
{
}

void   PlainDocument::remove(UInt32 offs, UInt32 len)
{
}

/*-------------------------------------------------------------------------*\
 -  private                                                                 -
\*-------------------------------------------------------------------------*/


UInt32 PlainDocument::PlainDocPosition::getOffset(void) const
{
    return _Pos;
}

/*----------------------- constructors & destructors ----------------------*/

PlainDocument::PlainDocument(void) :
    Inherited()
{
}

PlainDocument::PlainDocument(const PlainDocument &source) :
    Inherited(source)
{
}

PlainDocument::~PlainDocument(void)
{
}

/*----------------------------- class specific ----------------------------*/

void PlainDocument::changed(ConstFieldMaskArg whichField, 
                            UInt32            origin,
                            BitVector         details)
{
    Inherited::changed(whichField, origin, details);
}

void PlainDocument::dump(      UInt32    ,
                         const BitVector ) const
{
    SLOG << "Dump PlainDocument NI" << std::endl;
}

OSG_END_NAMESPACE
