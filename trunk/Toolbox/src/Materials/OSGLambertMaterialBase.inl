/*---------------------------------------------------------------------------*\
 *                        OpenSG ToolBox Toolbox                             *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                          Authors: David Kabala                            *
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

/*****************************************************************************\
 *****************************************************************************
 **                                                                         **
 **                  This file is automatically generated.                  **
 **                                                                         **
 **          Any changes made to this file WILL be lost when it is          **
 **           regenerated, which can become necessary at any time.          **
 **                                                                         **
 **     Do not change this file, changes should be done in the derived      **
 **     class LambertMaterial!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <OpenSG/OSGConfig.h>

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &LambertMaterialBase::getClassType(void)
{
    return _type; 
} 

//! access the numerical type of the class
inline
OSG::UInt32 LambertMaterialBase::getClassTypeId(void) 
{
    return _type.getId(); 
} 

//! create a new instance of the class
inline
LambertMaterialPtr LambertMaterialBase::create(void) 
{
    LambertMaterialPtr fc; 

    if(getClassType().getPrototype() != OSG::NullFC) 
    {
        fc = LambertMaterialPtr::dcast(
            getClassType().getPrototype()-> shallowCopy()); 
    }
    
    return fc; 
}

//! create an empty new instance of the class, do not copy the prototype
inline
LambertMaterialPtr LambertMaterialBase::createEmpty(void) 
{ 
    LambertMaterialPtr returnValue; 
    
    newPtr(returnValue); 

    return returnValue; 
}


/*------------------------------ get -----------------------------------*/

//! Get the LambertMaterial::_sfNumLights field.
inline
const SFUInt8 *LambertMaterialBase::getSFNumLights(void) const
{
    return &_sfNumLights;
}

//! Get the LambertMaterial::_sfNumLights field.
inline
SFUInt8 *LambertMaterialBase::editSFNumLights(void)
{
    return &_sfNumLights;
}

#ifndef OSG_2_PREP
//! Get the LambertMaterial::_sfNumLights field.
inline
SFUInt8 *LambertMaterialBase::getSFNumLights(void)
{
    return &_sfNumLights;
}
#endif

//! Get the LambertMaterial::_sfColor field.
inline
const SFColor3f *LambertMaterialBase::getSFColor(void) const
{
    return &_sfColor;
}

//! Get the LambertMaterial::_sfColor field.
inline
SFColor3f *LambertMaterialBase::editSFColor(void)
{
    return &_sfColor;
}

#ifndef OSG_2_PREP
//! Get the LambertMaterial::_sfColor field.
inline
SFColor3f *LambertMaterialBase::getSFColor(void)
{
    return &_sfColor;
}
#endif

//! Get the LambertMaterial::_sfColorImage field.
inline
const SFTextureChunkPtr *LambertMaterialBase::getSFColorImage(void) const
{
    return &_sfColorImage;
}

//! Get the LambertMaterial::_sfColorImage field.
inline
SFTextureChunkPtr *LambertMaterialBase::editSFColorImage(void)
{
    return &_sfColorImage;
}

#ifndef OSG_2_PREP
//! Get the LambertMaterial::_sfColorImage field.
inline
SFTextureChunkPtr *LambertMaterialBase::getSFColorImage(void)
{
    return &_sfColorImage;
}
#endif

//! Get the LambertMaterial::_sfTransparency field.
inline
const SFColor3f *LambertMaterialBase::getSFTransparency(void) const
{
    return &_sfTransparency;
}

//! Get the LambertMaterial::_sfTransparency field.
inline
SFColor3f *LambertMaterialBase::editSFTransparency(void)
{
    return &_sfTransparency;
}

#ifndef OSG_2_PREP
//! Get the LambertMaterial::_sfTransparency field.
inline
SFColor3f *LambertMaterialBase::getSFTransparency(void)
{
    return &_sfTransparency;
}
#endif

//! Get the LambertMaterial::_sfTransparencyImage field.
inline
const SFTextureChunkPtr *LambertMaterialBase::getSFTransparencyImage(void) const
{
    return &_sfTransparencyImage;
}

//! Get the LambertMaterial::_sfTransparencyImage field.
inline
SFTextureChunkPtr *LambertMaterialBase::editSFTransparencyImage(void)
{
    return &_sfTransparencyImage;
}

#ifndef OSG_2_PREP
//! Get the LambertMaterial::_sfTransparencyImage field.
inline
SFTextureChunkPtr *LambertMaterialBase::getSFTransparencyImage(void)
{
    return &_sfTransparencyImage;
}
#endif

//! Get the LambertMaterial::_sfAmbientColor field.
inline
const SFColor3f *LambertMaterialBase::getSFAmbientColor(void) const
{
    return &_sfAmbientColor;
}

//! Get the LambertMaterial::_sfAmbientColor field.
inline
SFColor3f *LambertMaterialBase::editSFAmbientColor(void)
{
    return &_sfAmbientColor;
}

#ifndef OSG_2_PREP
//! Get the LambertMaterial::_sfAmbientColor field.
inline
SFColor3f *LambertMaterialBase::getSFAmbientColor(void)
{
    return &_sfAmbientColor;
}
#endif

//! Get the LambertMaterial::_sfAmbientColorImage field.
inline
const SFTextureChunkPtr *LambertMaterialBase::getSFAmbientColorImage(void) const
{
    return &_sfAmbientColorImage;
}

//! Get the LambertMaterial::_sfAmbientColorImage field.
inline
SFTextureChunkPtr *LambertMaterialBase::editSFAmbientColorImage(void)
{
    return &_sfAmbientColorImage;
}

#ifndef OSG_2_PREP
//! Get the LambertMaterial::_sfAmbientColorImage field.
inline
SFTextureChunkPtr *LambertMaterialBase::getSFAmbientColorImage(void)
{
    return &_sfAmbientColorImage;
}
#endif

//! Get the LambertMaterial::_sfIncandescence field.
inline
const SFColor3f *LambertMaterialBase::getSFIncandescence(void) const
{
    return &_sfIncandescence;
}

//! Get the LambertMaterial::_sfIncandescence field.
inline
SFColor3f *LambertMaterialBase::editSFIncandescence(void)
{
    return &_sfIncandescence;
}

#ifndef OSG_2_PREP
//! Get the LambertMaterial::_sfIncandescence field.
inline
SFColor3f *LambertMaterialBase::getSFIncandescence(void)
{
    return &_sfIncandescence;
}
#endif

//! Get the LambertMaterial::_sfIncandescenceImage field.
inline
const SFTextureChunkPtr *LambertMaterialBase::getSFIncandescenceImage(void) const
{
    return &_sfIncandescenceImage;
}

//! Get the LambertMaterial::_sfIncandescenceImage field.
inline
SFTextureChunkPtr *LambertMaterialBase::editSFIncandescenceImage(void)
{
    return &_sfIncandescenceImage;
}

#ifndef OSG_2_PREP
//! Get the LambertMaterial::_sfIncandescenceImage field.
inline
SFTextureChunkPtr *LambertMaterialBase::getSFIncandescenceImage(void)
{
    return &_sfIncandescenceImage;
}
#endif

//! Get the LambertMaterial::_sfNormalMapImage field.
inline
const SFTextureChunkPtr *LambertMaterialBase::getSFNormalMapImage(void) const
{
    return &_sfNormalMapImage;
}

//! Get the LambertMaterial::_sfNormalMapImage field.
inline
SFTextureChunkPtr *LambertMaterialBase::editSFNormalMapImage(void)
{
    return &_sfNormalMapImage;
}

#ifndef OSG_2_PREP
//! Get the LambertMaterial::_sfNormalMapImage field.
inline
SFTextureChunkPtr *LambertMaterialBase::getSFNormalMapImage(void)
{
    return &_sfNormalMapImage;
}
#endif

//! Get the LambertMaterial::_sfBumpDepth field.
inline
const SFReal32 *LambertMaterialBase::getSFBumpDepth(void) const
{
    return &_sfBumpDepth;
}

//! Get the LambertMaterial::_sfBumpDepth field.
inline
SFReal32 *LambertMaterialBase::editSFBumpDepth(void)
{
    return &_sfBumpDepth;
}

#ifndef OSG_2_PREP
//! Get the LambertMaterial::_sfBumpDepth field.
inline
SFReal32 *LambertMaterialBase::getSFBumpDepth(void)
{
    return &_sfBumpDepth;
}
#endif

//! Get the LambertMaterial::_sfBumpDepthImage field.
inline
const SFTextureChunkPtr *LambertMaterialBase::getSFBumpDepthImage(void) const
{
    return &_sfBumpDepthImage;
}

//! Get the LambertMaterial::_sfBumpDepthImage field.
inline
SFTextureChunkPtr *LambertMaterialBase::editSFBumpDepthImage(void)
{
    return &_sfBumpDepthImage;
}

#ifndef OSG_2_PREP
//! Get the LambertMaterial::_sfBumpDepthImage field.
inline
SFTextureChunkPtr *LambertMaterialBase::getSFBumpDepthImage(void)
{
    return &_sfBumpDepthImage;
}
#endif

//! Get the LambertMaterial::_sfDiffuse field.
inline
const SFReal32 *LambertMaterialBase::getSFDiffuse(void) const
{
    return &_sfDiffuse;
}

//! Get the LambertMaterial::_sfDiffuse field.
inline
SFReal32 *LambertMaterialBase::editSFDiffuse(void)
{
    return &_sfDiffuse;
}

#ifndef OSG_2_PREP
//! Get the LambertMaterial::_sfDiffuse field.
inline
SFReal32 *LambertMaterialBase::getSFDiffuse(void)
{
    return &_sfDiffuse;
}
#endif

//! Get the LambertMaterial::_sfDiffuseImage field.
inline
const SFTextureChunkPtr *LambertMaterialBase::getSFDiffuseImage(void) const
{
    return &_sfDiffuseImage;
}

//! Get the LambertMaterial::_sfDiffuseImage field.
inline
SFTextureChunkPtr *LambertMaterialBase::editSFDiffuseImage(void)
{
    return &_sfDiffuseImage;
}

#ifndef OSG_2_PREP
//! Get the LambertMaterial::_sfDiffuseImage field.
inline
SFTextureChunkPtr *LambertMaterialBase::getSFDiffuseImage(void)
{
    return &_sfDiffuseImage;
}
#endif

//! Get the LambertMaterial::_sfTransleucence field.
inline
const SFReal32 *LambertMaterialBase::getSFTransleucence(void) const
{
    return &_sfTransleucence;
}

//! Get the LambertMaterial::_sfTransleucence field.
inline
SFReal32 *LambertMaterialBase::editSFTransleucence(void)
{
    return &_sfTransleucence;
}

#ifndef OSG_2_PREP
//! Get the LambertMaterial::_sfTransleucence field.
inline
SFReal32 *LambertMaterialBase::getSFTransleucence(void)
{
    return &_sfTransleucence;
}
#endif

//! Get the LambertMaterial::_sfTransleucenceImage field.
inline
const SFTextureChunkPtr *LambertMaterialBase::getSFTransleucenceImage(void) const
{
    return &_sfTransleucenceImage;
}

//! Get the LambertMaterial::_sfTransleucenceImage field.
inline
SFTextureChunkPtr *LambertMaterialBase::editSFTransleucenceImage(void)
{
    return &_sfTransleucenceImage;
}

#ifndef OSG_2_PREP
//! Get the LambertMaterial::_sfTransleucenceImage field.
inline
SFTextureChunkPtr *LambertMaterialBase::getSFTransleucenceImage(void)
{
    return &_sfTransleucenceImage;
}
#endif

//! Get the LambertMaterial::_sfTransleucenceDepth field.
inline
const SFReal32 *LambertMaterialBase::getSFTransleucenceDepth(void) const
{
    return &_sfTransleucenceDepth;
}

//! Get the LambertMaterial::_sfTransleucenceDepth field.
inline
SFReal32 *LambertMaterialBase::editSFTransleucenceDepth(void)
{
    return &_sfTransleucenceDepth;
}

#ifndef OSG_2_PREP
//! Get the LambertMaterial::_sfTransleucenceDepth field.
inline
SFReal32 *LambertMaterialBase::getSFTransleucenceDepth(void)
{
    return &_sfTransleucenceDepth;
}
#endif

//! Get the LambertMaterial::_sfTransleucenceDepthImage field.
inline
const SFTextureChunkPtr *LambertMaterialBase::getSFTransleucenceDepthImage(void) const
{
    return &_sfTransleucenceDepthImage;
}

//! Get the LambertMaterial::_sfTransleucenceDepthImage field.
inline
SFTextureChunkPtr *LambertMaterialBase::editSFTransleucenceDepthImage(void)
{
    return &_sfTransleucenceDepthImage;
}

#ifndef OSG_2_PREP
//! Get the LambertMaterial::_sfTransleucenceDepthImage field.
inline
SFTextureChunkPtr *LambertMaterialBase::getSFTransleucenceDepthImage(void)
{
    return &_sfTransleucenceDepthImage;
}
#endif

//! Get the LambertMaterial::_sfTransleucenceFocus field.
inline
const SFReal32 *LambertMaterialBase::getSFTransleucenceFocus(void) const
{
    return &_sfTransleucenceFocus;
}

//! Get the LambertMaterial::_sfTransleucenceFocus field.
inline
SFReal32 *LambertMaterialBase::editSFTransleucenceFocus(void)
{
    return &_sfTransleucenceFocus;
}

#ifndef OSG_2_PREP
//! Get the LambertMaterial::_sfTransleucenceFocus field.
inline
SFReal32 *LambertMaterialBase::getSFTransleucenceFocus(void)
{
    return &_sfTransleucenceFocus;
}
#endif

//! Get the LambertMaterial::_sfTransleucenceFocusImage field.
inline
const SFTextureChunkPtr *LambertMaterialBase::getSFTransleucenceFocusImage(void) const
{
    return &_sfTransleucenceFocusImage;
}

//! Get the LambertMaterial::_sfTransleucenceFocusImage field.
inline
SFTextureChunkPtr *LambertMaterialBase::editSFTransleucenceFocusImage(void)
{
    return &_sfTransleucenceFocusImage;
}

#ifndef OSG_2_PREP
//! Get the LambertMaterial::_sfTransleucenceFocusImage field.
inline
SFTextureChunkPtr *LambertMaterialBase::getSFTransleucenceFocusImage(void)
{
    return &_sfTransleucenceFocusImage;
}
#endif


//! Get the value of the LambertMaterial::_sfNumLights field.
inline
UInt8 &LambertMaterialBase::editNumLights(void)
{
    return _sfNumLights.getValue();
}

//! Get the value of the LambertMaterial::_sfNumLights field.
inline
const UInt8 &LambertMaterialBase::getNumLights(void) const
{
    return _sfNumLights.getValue();
}

#ifndef OSG_2_PREP
//! Get the value of the LambertMaterial::_sfNumLights field.
inline
UInt8 &LambertMaterialBase::getNumLights(void)
{
    return _sfNumLights.getValue();
}
#endif

//! Set the value of the LambertMaterial::_sfNumLights field.
inline
void LambertMaterialBase::setNumLights(const UInt8 &value)
{
    _sfNumLights.setValue(value);
}

//! Get the value of the LambertMaterial::_sfColor field.
inline
Color3f &LambertMaterialBase::editColor(void)
{
    return _sfColor.getValue();
}

//! Get the value of the LambertMaterial::_sfColor field.
inline
const Color3f &LambertMaterialBase::getColor(void) const
{
    return _sfColor.getValue();
}

#ifndef OSG_2_PREP
//! Get the value of the LambertMaterial::_sfColor field.
inline
Color3f &LambertMaterialBase::getColor(void)
{
    return _sfColor.getValue();
}
#endif

//! Set the value of the LambertMaterial::_sfColor field.
inline
void LambertMaterialBase::setColor(const Color3f &value)
{
    _sfColor.setValue(value);
}

//! Get the value of the LambertMaterial::_sfColorImage field.
inline
TextureChunkPtr &LambertMaterialBase::editColorImage(void)
{
    return _sfColorImage.getValue();
}

//! Get the value of the LambertMaterial::_sfColorImage field.
inline
const TextureChunkPtr &LambertMaterialBase::getColorImage(void) const
{
    return _sfColorImage.getValue();
}

#ifndef OSG_2_PREP
//! Get the value of the LambertMaterial::_sfColorImage field.
inline
TextureChunkPtr &LambertMaterialBase::getColorImage(void)
{
    return _sfColorImage.getValue();
}
#endif

//! Set the value of the LambertMaterial::_sfColorImage field.
inline
void LambertMaterialBase::setColorImage(const TextureChunkPtr &value)
{
    _sfColorImage.setValue(value);
}

//! Get the value of the LambertMaterial::_sfTransparency field.
inline
Color3f &LambertMaterialBase::editTransparency(void)
{
    return _sfTransparency.getValue();
}

//! Get the value of the LambertMaterial::_sfTransparency field.
inline
const Color3f &LambertMaterialBase::getTransparency(void) const
{
    return _sfTransparency.getValue();
}

#ifndef OSG_2_PREP
//! Get the value of the LambertMaterial::_sfTransparency field.
inline
Color3f &LambertMaterialBase::getTransparency(void)
{
    return _sfTransparency.getValue();
}
#endif

//! Set the value of the LambertMaterial::_sfTransparency field.
inline
void LambertMaterialBase::setTransparency(const Color3f &value)
{
    _sfTransparency.setValue(value);
}

//! Get the value of the LambertMaterial::_sfTransparencyImage field.
inline
TextureChunkPtr &LambertMaterialBase::editTransparencyImage(void)
{
    return _sfTransparencyImage.getValue();
}

//! Get the value of the LambertMaterial::_sfTransparencyImage field.
inline
const TextureChunkPtr &LambertMaterialBase::getTransparencyImage(void) const
{
    return _sfTransparencyImage.getValue();
}

#ifndef OSG_2_PREP
//! Get the value of the LambertMaterial::_sfTransparencyImage field.
inline
TextureChunkPtr &LambertMaterialBase::getTransparencyImage(void)
{
    return _sfTransparencyImage.getValue();
}
#endif

//! Set the value of the LambertMaterial::_sfTransparencyImage field.
inline
void LambertMaterialBase::setTransparencyImage(const TextureChunkPtr &value)
{
    _sfTransparencyImage.setValue(value);
}

//! Get the value of the LambertMaterial::_sfAmbientColor field.
inline
Color3f &LambertMaterialBase::editAmbientColor(void)
{
    return _sfAmbientColor.getValue();
}

//! Get the value of the LambertMaterial::_sfAmbientColor field.
inline
const Color3f &LambertMaterialBase::getAmbientColor(void) const
{
    return _sfAmbientColor.getValue();
}

#ifndef OSG_2_PREP
//! Get the value of the LambertMaterial::_sfAmbientColor field.
inline
Color3f &LambertMaterialBase::getAmbientColor(void)
{
    return _sfAmbientColor.getValue();
}
#endif

//! Set the value of the LambertMaterial::_sfAmbientColor field.
inline
void LambertMaterialBase::setAmbientColor(const Color3f &value)
{
    _sfAmbientColor.setValue(value);
}

//! Get the value of the LambertMaterial::_sfAmbientColorImage field.
inline
TextureChunkPtr &LambertMaterialBase::editAmbientColorImage(void)
{
    return _sfAmbientColorImage.getValue();
}

//! Get the value of the LambertMaterial::_sfAmbientColorImage field.
inline
const TextureChunkPtr &LambertMaterialBase::getAmbientColorImage(void) const
{
    return _sfAmbientColorImage.getValue();
}

#ifndef OSG_2_PREP
//! Get the value of the LambertMaterial::_sfAmbientColorImage field.
inline
TextureChunkPtr &LambertMaterialBase::getAmbientColorImage(void)
{
    return _sfAmbientColorImage.getValue();
}
#endif

//! Set the value of the LambertMaterial::_sfAmbientColorImage field.
inline
void LambertMaterialBase::setAmbientColorImage(const TextureChunkPtr &value)
{
    _sfAmbientColorImage.setValue(value);
}

//! Get the value of the LambertMaterial::_sfIncandescence field.
inline
Color3f &LambertMaterialBase::editIncandescence(void)
{
    return _sfIncandescence.getValue();
}

//! Get the value of the LambertMaterial::_sfIncandescence field.
inline
const Color3f &LambertMaterialBase::getIncandescence(void) const
{
    return _sfIncandescence.getValue();
}

#ifndef OSG_2_PREP
//! Get the value of the LambertMaterial::_sfIncandescence field.
inline
Color3f &LambertMaterialBase::getIncandescence(void)
{
    return _sfIncandescence.getValue();
}
#endif

//! Set the value of the LambertMaterial::_sfIncandescence field.
inline
void LambertMaterialBase::setIncandescence(const Color3f &value)
{
    _sfIncandescence.setValue(value);
}

//! Get the value of the LambertMaterial::_sfIncandescenceImage field.
inline
TextureChunkPtr &LambertMaterialBase::editIncandescenceImage(void)
{
    return _sfIncandescenceImage.getValue();
}

//! Get the value of the LambertMaterial::_sfIncandescenceImage field.
inline
const TextureChunkPtr &LambertMaterialBase::getIncandescenceImage(void) const
{
    return _sfIncandescenceImage.getValue();
}

#ifndef OSG_2_PREP
//! Get the value of the LambertMaterial::_sfIncandescenceImage field.
inline
TextureChunkPtr &LambertMaterialBase::getIncandescenceImage(void)
{
    return _sfIncandescenceImage.getValue();
}
#endif

//! Set the value of the LambertMaterial::_sfIncandescenceImage field.
inline
void LambertMaterialBase::setIncandescenceImage(const TextureChunkPtr &value)
{
    _sfIncandescenceImage.setValue(value);
}

//! Get the value of the LambertMaterial::_sfNormalMapImage field.
inline
TextureChunkPtr &LambertMaterialBase::editNormalMapImage(void)
{
    return _sfNormalMapImage.getValue();
}

//! Get the value of the LambertMaterial::_sfNormalMapImage field.
inline
const TextureChunkPtr &LambertMaterialBase::getNormalMapImage(void) const
{
    return _sfNormalMapImage.getValue();
}

#ifndef OSG_2_PREP
//! Get the value of the LambertMaterial::_sfNormalMapImage field.
inline
TextureChunkPtr &LambertMaterialBase::getNormalMapImage(void)
{
    return _sfNormalMapImage.getValue();
}
#endif

//! Set the value of the LambertMaterial::_sfNormalMapImage field.
inline
void LambertMaterialBase::setNormalMapImage(const TextureChunkPtr &value)
{
    _sfNormalMapImage.setValue(value);
}

//! Get the value of the LambertMaterial::_sfBumpDepth field.
inline
Real32 &LambertMaterialBase::editBumpDepth(void)
{
    return _sfBumpDepth.getValue();
}

//! Get the value of the LambertMaterial::_sfBumpDepth field.
inline
const Real32 &LambertMaterialBase::getBumpDepth(void) const
{
    return _sfBumpDepth.getValue();
}

#ifndef OSG_2_PREP
//! Get the value of the LambertMaterial::_sfBumpDepth field.
inline
Real32 &LambertMaterialBase::getBumpDepth(void)
{
    return _sfBumpDepth.getValue();
}
#endif

//! Set the value of the LambertMaterial::_sfBumpDepth field.
inline
void LambertMaterialBase::setBumpDepth(const Real32 &value)
{
    _sfBumpDepth.setValue(value);
}

//! Get the value of the LambertMaterial::_sfBumpDepthImage field.
inline
TextureChunkPtr &LambertMaterialBase::editBumpDepthImage(void)
{
    return _sfBumpDepthImage.getValue();
}

//! Get the value of the LambertMaterial::_sfBumpDepthImage field.
inline
const TextureChunkPtr &LambertMaterialBase::getBumpDepthImage(void) const
{
    return _sfBumpDepthImage.getValue();
}

#ifndef OSG_2_PREP
//! Get the value of the LambertMaterial::_sfBumpDepthImage field.
inline
TextureChunkPtr &LambertMaterialBase::getBumpDepthImage(void)
{
    return _sfBumpDepthImage.getValue();
}
#endif

//! Set the value of the LambertMaterial::_sfBumpDepthImage field.
inline
void LambertMaterialBase::setBumpDepthImage(const TextureChunkPtr &value)
{
    _sfBumpDepthImage.setValue(value);
}

//! Get the value of the LambertMaterial::_sfDiffuse field.
inline
Real32 &LambertMaterialBase::editDiffuse(void)
{
    return _sfDiffuse.getValue();
}

//! Get the value of the LambertMaterial::_sfDiffuse field.
inline
const Real32 &LambertMaterialBase::getDiffuse(void) const
{
    return _sfDiffuse.getValue();
}

#ifndef OSG_2_PREP
//! Get the value of the LambertMaterial::_sfDiffuse field.
inline
Real32 &LambertMaterialBase::getDiffuse(void)
{
    return _sfDiffuse.getValue();
}
#endif

//! Set the value of the LambertMaterial::_sfDiffuse field.
inline
void LambertMaterialBase::setDiffuse(const Real32 &value)
{
    _sfDiffuse.setValue(value);
}

//! Get the value of the LambertMaterial::_sfDiffuseImage field.
inline
TextureChunkPtr &LambertMaterialBase::editDiffuseImage(void)
{
    return _sfDiffuseImage.getValue();
}

//! Get the value of the LambertMaterial::_sfDiffuseImage field.
inline
const TextureChunkPtr &LambertMaterialBase::getDiffuseImage(void) const
{
    return _sfDiffuseImage.getValue();
}

#ifndef OSG_2_PREP
//! Get the value of the LambertMaterial::_sfDiffuseImage field.
inline
TextureChunkPtr &LambertMaterialBase::getDiffuseImage(void)
{
    return _sfDiffuseImage.getValue();
}
#endif

//! Set the value of the LambertMaterial::_sfDiffuseImage field.
inline
void LambertMaterialBase::setDiffuseImage(const TextureChunkPtr &value)
{
    _sfDiffuseImage.setValue(value);
}

//! Get the value of the LambertMaterial::_sfTransleucence field.
inline
Real32 &LambertMaterialBase::editTransleucence(void)
{
    return _sfTransleucence.getValue();
}

//! Get the value of the LambertMaterial::_sfTransleucence field.
inline
const Real32 &LambertMaterialBase::getTransleucence(void) const
{
    return _sfTransleucence.getValue();
}

#ifndef OSG_2_PREP
//! Get the value of the LambertMaterial::_sfTransleucence field.
inline
Real32 &LambertMaterialBase::getTransleucence(void)
{
    return _sfTransleucence.getValue();
}
#endif

//! Set the value of the LambertMaterial::_sfTransleucence field.
inline
void LambertMaterialBase::setTransleucence(const Real32 &value)
{
    _sfTransleucence.setValue(value);
}

//! Get the value of the LambertMaterial::_sfTransleucenceImage field.
inline
TextureChunkPtr &LambertMaterialBase::editTransleucenceImage(void)
{
    return _sfTransleucenceImage.getValue();
}

//! Get the value of the LambertMaterial::_sfTransleucenceImage field.
inline
const TextureChunkPtr &LambertMaterialBase::getTransleucenceImage(void) const
{
    return _sfTransleucenceImage.getValue();
}

#ifndef OSG_2_PREP
//! Get the value of the LambertMaterial::_sfTransleucenceImage field.
inline
TextureChunkPtr &LambertMaterialBase::getTransleucenceImage(void)
{
    return _sfTransleucenceImage.getValue();
}
#endif

//! Set the value of the LambertMaterial::_sfTransleucenceImage field.
inline
void LambertMaterialBase::setTransleucenceImage(const TextureChunkPtr &value)
{
    _sfTransleucenceImage.setValue(value);
}

//! Get the value of the LambertMaterial::_sfTransleucenceDepth field.
inline
Real32 &LambertMaterialBase::editTransleucenceDepth(void)
{
    return _sfTransleucenceDepth.getValue();
}

//! Get the value of the LambertMaterial::_sfTransleucenceDepth field.
inline
const Real32 &LambertMaterialBase::getTransleucenceDepth(void) const
{
    return _sfTransleucenceDepth.getValue();
}

#ifndef OSG_2_PREP
//! Get the value of the LambertMaterial::_sfTransleucenceDepth field.
inline
Real32 &LambertMaterialBase::getTransleucenceDepth(void)
{
    return _sfTransleucenceDepth.getValue();
}
#endif

//! Set the value of the LambertMaterial::_sfTransleucenceDepth field.
inline
void LambertMaterialBase::setTransleucenceDepth(const Real32 &value)
{
    _sfTransleucenceDepth.setValue(value);
}

//! Get the value of the LambertMaterial::_sfTransleucenceDepthImage field.
inline
TextureChunkPtr &LambertMaterialBase::editTransleucenceDepthImage(void)
{
    return _sfTransleucenceDepthImage.getValue();
}

//! Get the value of the LambertMaterial::_sfTransleucenceDepthImage field.
inline
const TextureChunkPtr &LambertMaterialBase::getTransleucenceDepthImage(void) const
{
    return _sfTransleucenceDepthImage.getValue();
}

#ifndef OSG_2_PREP
//! Get the value of the LambertMaterial::_sfTransleucenceDepthImage field.
inline
TextureChunkPtr &LambertMaterialBase::getTransleucenceDepthImage(void)
{
    return _sfTransleucenceDepthImage.getValue();
}
#endif

//! Set the value of the LambertMaterial::_sfTransleucenceDepthImage field.
inline
void LambertMaterialBase::setTransleucenceDepthImage(const TextureChunkPtr &value)
{
    _sfTransleucenceDepthImage.setValue(value);
}

//! Get the value of the LambertMaterial::_sfTransleucenceFocus field.
inline
Real32 &LambertMaterialBase::editTransleucenceFocus(void)
{
    return _sfTransleucenceFocus.getValue();
}

//! Get the value of the LambertMaterial::_sfTransleucenceFocus field.
inline
const Real32 &LambertMaterialBase::getTransleucenceFocus(void) const
{
    return _sfTransleucenceFocus.getValue();
}

#ifndef OSG_2_PREP
//! Get the value of the LambertMaterial::_sfTransleucenceFocus field.
inline
Real32 &LambertMaterialBase::getTransleucenceFocus(void)
{
    return _sfTransleucenceFocus.getValue();
}
#endif

//! Set the value of the LambertMaterial::_sfTransleucenceFocus field.
inline
void LambertMaterialBase::setTransleucenceFocus(const Real32 &value)
{
    _sfTransleucenceFocus.setValue(value);
}

//! Get the value of the LambertMaterial::_sfTransleucenceFocusImage field.
inline
TextureChunkPtr &LambertMaterialBase::editTransleucenceFocusImage(void)
{
    return _sfTransleucenceFocusImage.getValue();
}

//! Get the value of the LambertMaterial::_sfTransleucenceFocusImage field.
inline
const TextureChunkPtr &LambertMaterialBase::getTransleucenceFocusImage(void) const
{
    return _sfTransleucenceFocusImage.getValue();
}

#ifndef OSG_2_PREP
//! Get the value of the LambertMaterial::_sfTransleucenceFocusImage field.
inline
TextureChunkPtr &LambertMaterialBase::getTransleucenceFocusImage(void)
{
    return _sfTransleucenceFocusImage.getValue();
}
#endif

//! Set the value of the LambertMaterial::_sfTransleucenceFocusImage field.
inline
void LambertMaterialBase::setTransleucenceFocusImage(const TextureChunkPtr &value)
{
    _sfTransleucenceFocusImage.setValue(value);
}


OSG_END_NAMESPACE

