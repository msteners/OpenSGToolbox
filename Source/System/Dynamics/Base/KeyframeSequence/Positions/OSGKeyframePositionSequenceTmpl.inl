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

OSG_BEGIN_NAMESPACE


template <class SequenceDesc> inline 
KeyframePositionSequenceTmpl<SequenceDesc>::KeyframePositionSequenceTmpl(void) :
     KeyframePositionSequence(),
    _field         ()
{
}

template <class SequenceDesc> inline 
KeyframePositionSequenceTmpl<SequenceDesc>::KeyframePositionSequenceTmpl(
    const KeyframePositionSequenceTmpl &source ) :

     KeyframePositionSequence(source),
    _field         (source._field)
{
}

template <class SequenceDesc> inline 
KeyframePositionSequenceTmpl<SequenceDesc>::~KeyframePositionSequenceTmpl(void)
{
}

template <class SequenceDesc> inline 
typename KeyframePositionSequenceTmpl<SequenceDesc>::StoredType 
  KeyframePositionSequenceTmpl<SequenceDesc>::getRawKeyValue (const UInt32 index )
{
    return _field[index];
}

template <class SequenceDesc> inline 
typename KeyframePositionSequenceTmpl<SequenceDesc>::StoredType
  KeyframePositionSequenceTmpl<SequenceDesc>::getRawKeyValue (const UInt32 index ) const
{
    return _field[index];
}

template <class SequenceDesc> inline 
void KeyframePositionSequenceTmpl<SequenceDesc>::getRawKeyValue (StoredType   &val,
                           const UInt32 index )
{
    val = _field[index];
}

template <class SequenceDesc> inline 
void KeyframePositionSequenceTmpl<SequenceDesc>::getRawKeyValue (StoredType   &val,
                           const UInt32 index ) const
{
    val = _field[index];
}


template <class SequenceDesc> inline 
void KeyframePositionSequenceTmpl<SequenceDesc>::setRawKeyframe (const StoredType &val,
                           const Real32     &key,
                           const UInt32     index )
{
    editMField(SequenceDataFieldMask, _field);
    editMField(InternalKeysFieldMask, _mfInternalKeys);

    _field[index] = val;
    _mfInternalKeys[index] = key;
}

template <class SequenceDesc> inline 
void KeyframePositionSequenceTmpl<SequenceDesc>::addRawKeyframe (const StoredType &val,
                           const Real32     &key )
{
    editMField(SequenceDataFieldMask, _field);
    editMField(InternalKeysFieldMask, _mfInternalKeys);

    _field.push_back(val);
    _mfInternalKeys.push_back(key);
}

template <class SequenceDesc> inline 
void KeyframePositionSequenceTmpl<SequenceDesc>::insertRawKeyframe(const StoredType &val,
                             const Real32     &key,
                             const UInt32     index)
{
    if(_field.size() < index)
    {
        assert(false && "Index Out of bounds.");
    }
    else if(_field.size() == index)
    {
        addRawKeyframe(val,key);
    }
    else
    {
        editMField(SequenceDataFieldMask, _field);
        editMField(InternalKeysFieldMask, _mfInternalKeys);

        _field.insert(_field.begin() + index, val);
        this->_mfInternalKeys.insert(this->_mfInternalKeys.begin() + index, key);
    }
}

#ifdef OSG_MT_CPTR_ASPECT
template <class SequenceDesc> inline 
typename KeyframePositionSequenceTmpl<SequenceDesc>::ObjCPtr 
    KeyframePositionSequenceTmpl<SequenceDesc>::createAspectCopy(
        const FieldContainer *pRefAspect) const
{
    ObjCPtr returnValue; 

    newAspectCopy(returnValue, 
                  dynamic_cast<const Self *>(pRefAspect),
                  dynamic_cast<const Self *>(this)); 

    return returnValue; 
}
#endif

#ifdef OSG_MT_CPTR_ASPECT
template <class SequenceDesc> inline
void KeyframePositionSequenceTmpl<SequenceDesc>::execSync(
          Self              *pFrom,
          ConstFieldMaskArg  whichField,
          AspectOffsetStore &oOffsets,
          ConstFieldMaskArg  syncMode  ,
    const UInt32             uiSyncInfo)
{
    Inherited::execSync(pFrom, whichField, oOffsets, syncMode, uiSyncInfo);

    if(FieldBits::NoField != (SequenceDataFieldMask & whichField))
    {
        _field.syncWith(pFrom->_field, syncMode, uiSyncInfo, oOffsets);
    }
}

template <class SequenceDesc> inline
void KeyframePositionSequenceTmpl<SequenceDesc>::execSyncV(     
          FieldContainer    &oFrom,
          ConstFieldMaskArg  whichField,
          AspectOffsetStore &oOffsets,
          ConstFieldMaskArg  syncMode  ,
    const UInt32             uiSyncInfo)
{
    this->execSync(static_cast<Self *>(&oFrom),
                   whichField,
                   oOffsets,
                   syncMode,
                   uiSyncInfo);
}

template <class SequenceDesc> inline
void KeyframePositionSequenceTmpl<SequenceDesc>::resolveLinks(void)
{
    Inherited::resolveLinks();

    AspectOffsetStore oOffsets;

    _pAspectStore->fillOffsetArray(oOffsets, this);

    _field.terminateShare(Thread::getCurrentAspect(), oOffsets);
}


#endif

template <class SequenceDesc> inline 
void KeyframePositionSequenceTmpl<SequenceDesc>::changed(
    ConstFieldMaskArg whichField, 
    UInt32            origin,
    BitVector         details)
{
    Inherited::changed(whichField, origin, details);
}

template <class SequenceDesc> inline 
UInt32 KeyframePositionSequenceTmpl<SequenceDesc>::getBinSize(
    ConstFieldMaskArg whichField)
{
    UInt32 returnValue = KeyframePositionSequence::getBinSize(whichField);

    if(FieldBits::NoField != (SequenceDataFieldMask & whichField))
    {
        returnValue += _field.getBinSize();
    }

    return returnValue;
}

template <class SequenceDesc> inline 
void KeyframePositionSequenceTmpl<SequenceDesc>::copyToBin(
    BinaryDataHandler &pMem,
    ConstFieldMaskArg  whichField)
{
    KeyframePositionSequence::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (SequenceDataFieldMask & whichField))
    {
        _field.copyToBin(pMem);
    }
}

template <class SequenceDesc> inline 
void KeyframePositionSequenceTmpl<SequenceDesc>::copyFromBin(
    BinaryDataHandler &pMem,
    ConstFieldMaskArg  whichField)
{
    KeyframePositionSequence::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (SequenceDataFieldMask & whichField))
    {
        _field.copyFromBin(pMem);
    }
}

/*! Returns a pointer to the stored field. 

    This allows direct access to the data, which is faster than the access via 
    the generic Interface that the KeyframePositionSequence provides, but it
    necessitates compile-time knowledge about the involved concrete types.

    \return Pointer to the data field.
*/
template <class SequenceDesc> inline 
typename KeyframePositionSequenceTmpl<SequenceDesc>::StoredFieldType * 
    KeyframePositionSequenceTmpl<SequenceDesc>::editFieldPtr(void)
{
    editMField(SequenceDataFieldMask, _field);

    return &_field;
}

/*! Returns a pointer to the stored field. 

    This allows direct access to the data, which is faster than the access via 
    the generic Interface that the KeyframePositionSequence provides, but it
    necessitates compile-time knowledge about the involved concrete types.

    \return Pointer to the data field.
*/
template <class SequenceDesc> inline 
const typename KeyframePositionSequenceTmpl<SequenceDesc>::StoredFieldType * 
    KeyframePositionSequenceTmpl<SequenceDesc>::getFieldPtr(void) const
{
    return &_field;
}

/*! Returns a reference to the stored field. 

    This allows direct access to the data, which is faster than the access via 
    the generic Interface that the KeyframePositionSequence provides, but it
    necessitates compile-time knowledge about the involved concrete types.

    \return Reference to the data field.
*/
template <class SequenceDesc> inline 
typename KeyframePositionSequenceTmpl<SequenceDesc>::StoredFieldType & 
    KeyframePositionSequenceTmpl<SequenceDesc>::editField(void)
{
    editMField(SequenceDataFieldMask, _field);

    return _field;
}

/*! Returns a const reference to the stored field. 

    This allows direct access to the data, which is faster than the access via 
    the generic Interface that the KeyframePositionSequence provides, but it
    necessitates compile-time knowledge about the involved concrete types.

    \return Reference to the data field.
*/
template <class SequenceDesc> inline 
const typename KeyframePositionSequenceTmpl<SequenceDesc>::StoredFieldType & 
    KeyframePositionSequenceTmpl<SequenceDesc>::getField(void) const
{
    return _field;
}

//[>! Returns a copy of this property that holds the same data.

    //\return A copy of this property.
 //*/
//template <class SequenceDesc> inline
//SequenceTransitPtr
//KeyframePositionSequenceTmpl<SequenceDesc>::clone(void)
//{
    //ObjTransitPtr obj = Self::create();

    //editMField(SequenceDataFieldMask, obj->_field);
    
    //obj->_field.setValues(_field);

    //return SequenceTransitPtr(obj);
//}

/*! \copydoc OSG::KeyframePositionSequence::getFormat
 */
template <class SequenceDesc> inline 
bool KeyframePositionSequenceTmpl<SequenceDesc>::isBlendable(void) const
{
    return SequenceDesc::isBlendable();
}

/*! \copydoc OSG::KeyframePositionSequence::size
 */
template <class SequenceDesc> inline
UInt32 KeyframePositionSequenceTmpl<SequenceDesc>::size(void) const
{
    return _field.size();
}

/*! \copydoc OSG::KeyframePositionSequence::size
 */
template <class SequenceDesc> inline
const Field& KeyframePositionSequenceTmpl<SequenceDesc>::getKeyValues(void) const
{
    return _field;
}

/*! \copydoc OSG::KeyframePositionSequence::size
 */
template <class SequenceDesc> inline
const DataType*  KeyframePositionSequenceTmpl<SequenceDesc>::getDataType(void) const
{
    return &SequenceDesc::StoredFieldType::getClassType().getContentType();
}

template <class SequenceDesc> inline 
void KeyframePositionSequenceTmpl<SequenceDesc>::push_back (const GenericType &val,
                                                              const Real32 &key   )
{
    addKeyframe(val,key);
}

/*! Removes all Keyframes.
 */
template <class SequenceDesc> inline
void KeyframePositionSequenceTmpl<SequenceDesc>::clear(void)
{
    editMField(SequenceDataFieldMask, _field);
    editMField(InternalKeysFieldMask, _mfInternalKeys);

    _field.clear();
    _mfInternalKeys.clear();
}

/*! Resizes the Number of Keyframes.
 */
template <class SequenceDesc> inline
void KeyframePositionSequenceTmpl<SequenceDesc>::resize(size_t      newsize)
{
    editMField(SequenceDataFieldMask, _field);
    editMField(InternalKeysFieldMask, _mfInternalKeys);

    _field.resize(newsize);
    _mfInternalKeys.resize(newsize);
}

/*! Shrinks Keyframes.
 */
template <class SequenceDesc> inline
void KeyframePositionSequenceTmpl<SequenceDesc>::shrink(void)
{
    editMField(SequenceDataFieldMask, _field);
    editMField(InternalKeysFieldMask, _mfInternalKeys);

    StoredFieldType(_field).swap(_field);
    this->_mfInternalKeys.swap(this->_mfInternalKeys);
}

template <class SequenceDesc> inline
bool KeyframePositionSequenceTmpl<SequenceDesc>::interpolate(UInt32 Type,
                         Real32 time,
                         Real32 prevTime,
                         UInt32 ReplacePolicy,
                         bool isCyclic,
                         EditFieldHandlePtr Result,
                         UInt32 Index,
                         Real32 Blend)
{
    if(Result->getCardinality() == FieldType::SingleField)
    {
        return interpolate(Type,
                           time,
                           prevTime,
                           ReplacePolicy,
                           isCyclic,
                           static_cast<SingleFieldType&>(*Result->getField()).getValue(),
                           Blend);
    }
    else
    {
        return interpolate(Type,
                           time,
                           prevTime,
                           ReplacePolicy,
                           isCyclic,
                           static_cast<MField<typename SingleFieldType::StoredType>&>(*Result->getField())[Index],
                           Blend);
    }
}

template <class SequenceDesc> inline
void KeyframePositionSequenceTmpl<SequenceDesc>::zeroField(EditFieldHandlePtr Result, UInt32 Index) const
{
    if(Result->getCardinality() == FieldType::SingleField)
    {
        zeroField(static_cast<SingleFieldType&>(*Result->getField()).getValue());
    }
    else
    {
        zeroField(static_cast<MField<typename SingleFieldType::StoredType>&>(*Result->getField())[Index]);
    }
}

template <class SequenceDesc> inline
bool KeyframePositionSequenceTmpl<SequenceDesc>::interpolate(UInt32 Type,
                                                           Real32 time,
                                                           Real32 prevTime,
                                                           UInt32 ReplacePolicy,
                                                           bool isCyclic,
                                                           StoredType& Result,
                                                           Real32 Blend)
{
    typename SequenceDesc::ConcreteInterpFunction InterpFunc(SequenceDesc::getInterpolationFuncMap()[Type]);
    if(InterpFunc.empty())
    {
        SWARNING << "KeyframeSequence::interpolate(...): No Interpolation function of type: " << Type << std::endl;
        return false;
    }
    typename SequenceDesc::InterpReplaceFunction InterpReplaceFunc(boost::bind(InterpFunc, static_cast<const StoredFieldType&>(getKeyValues()),this->getKeys(),_1,_2,_3));
    typename SequenceDesc::ConcreteReplaceFunction ReplaceFunc(SequenceDesc::getReplacementFuncMap()[ReplacePolicy]);
    if(ReplaceFunc.empty())
    {
        SWARNING << "KeyframeSequence::interpolate(...): No Replacement function." << std::endl;
        return false;
    }

    return ReplaceFunc(InterpReplaceFunc, time, prevTime, isCyclic, Result, Blend);
}

template <class SequenceDesc> inline
void KeyframePositionSequenceTmpl<SequenceDesc>::dump(      UInt32    uiIndent, 
                                        const BitVector bvFlags) const
{
    KeyframePositionSequence::dump(uiIndent, bvFlags);
}

template <class SequenceDesc> inline
void KeyframePositionSequenceTmpl<SequenceDesc>::initMethod(InitPhase ePhase)
{
    SequenceDesc::initMethod(ePhase);

    Inherited::initMethod(ePhase);
}

template <class SequenceDesc> inline
void KeyframePositionSequenceTmpl<SequenceDesc>::exitMethod(InitPhase ePhase)
{
    SequenceDesc::exitMethod(ePhase);

    Inherited::exitMethod(ePhase);
}

template <class SequenceDesc> inline
EditFieldHandlePtr KeyframePositionSequenceTmpl<SequenceDesc>::editHandleField(
    void)
{
    StoredEditHandlePtr returnValue(
        new  StoredEditHandle(
             &_field, 
             this->getType().getFieldDesc(SequenceDataFieldId),
             this));

    editMField(SequenceDataFieldMask, _field);

    return returnValue;
}

template <class SequenceDesc> inline
GetFieldHandlePtr KeyframePositionSequenceTmpl<SequenceDesc>::getHandleField(
    void) const
{
    StoredGetHandlePtr returnValue(
        new  StoredGetHandle(
             &_field, 
             this->getType().getFieldDesc(SequenceDataFieldId),
             const_cast<Self *>(this)));

    return returnValue;
}

/************************** Int16  ********************/
/************************** Pnt2s  ********************/
template<> inline 
KeyframePositionSequenceTmpl<KeyframePositionSequencePnt2sDescBase>::GenericType 
      KeyframePositionSequenceTmpl<KeyframePositionSequencePnt2sDescBase>::getKeyValue (const UInt32       index ) const
{
    return GenericType(_field[index][0],_field[index][1],0);
}

template<> inline 
KeyframePositionSequenceTmpl<KeyframePositionSequencePnt2sDescBase>::GenericType 
      KeyframePositionSequenceTmpl<KeyframePositionSequencePnt2sDescBase>::getKeyValue (const UInt32       index )
{
    return GenericType(_field[index][0],_field[index][1],0);
}

template<> inline 
void KeyframePositionSequenceTmpl<KeyframePositionSequencePnt2sDescBase>::getKeyValue (GenericType &val,
                              const UInt32       index )      
{
    val.setValues(_field[index][0],_field[index][1],0); 
}

template<> inline 
void KeyframePositionSequenceTmpl<KeyframePositionSequencePnt2sDescBase>::getKeyValue (GenericType &val,
                              const UInt32       index ) const
{
    val.setValues(_field[index][0],_field[index][1],0); 
}

template<> inline 
void
KeyframePositionSequenceTmpl<KeyframePositionSequencePnt2sDescBase>::zeroField(StoredType& Result) const
{
    Result = Pnt2s(0,0);
}

template<> inline 
void KeyframePositionSequenceTmpl<KeyframePositionSequencePnt2sDescBase>::setKeyframe (const GenericType &val,
                                                              const Real32 &key,
                                                              const UInt32       index )
{
    editMField(SequenceDataFieldMask, _field);
    editMField(InternalKeysFieldMask, _mfInternalKeys);

    _field[index] = Pnt2s(val[0], val[1]);
    _mfInternalKeys[index] = key;
}

template<> inline 
void KeyframePositionSequenceTmpl<KeyframePositionSequencePnt2sDescBase>::addKeyframe (const GenericType &val,
                                                              const Real32 &key   )
{
    editMField(SequenceDataFieldMask, _field);
    editMField(InternalKeysFieldMask, _mfInternalKeys);

    _field.push_back(Pnt2s(val[0], val[1]));
    _mfInternalKeys.push_back(key);
}

template<> inline 
void KeyframePositionSequenceTmpl<KeyframePositionSequencePnt2sDescBase>::insertKeyframe (const GenericType &val,
                                                              const Real32 &key,
                                                              const UInt32       index )
{
    if(_field.size() < index)
    {
        assert(false && "Index Out of bounds.");
    }
    else if(_field.size() == index)
    {
        push_back(val,key);
    }
    else
    {
        editMField(SequenceDataFieldMask, _field);
        editMField(InternalKeysFieldMask, _mfInternalKeys);

        _field.insert(_field.begin() + index, Pnt2s(val[0], val[1]));
        this->_mfInternalKeys.insert(this->_mfInternalKeys.begin() + index, key);
    }
}

/************************** Pnt3s  ********************/
template<> inline 
KeyframePositionSequenceTmpl<KeyframePositionSequencePnt3sDescBase>::GenericType 
      KeyframePositionSequenceTmpl<KeyframePositionSequencePnt3sDescBase>::getKeyValue (const UInt32       index ) const
{
    return GenericType(_field[index][0],_field[index][1],_field[index][2]);
}

template<> inline 
KeyframePositionSequenceTmpl<KeyframePositionSequencePnt3sDescBase>::GenericType 
      KeyframePositionSequenceTmpl<KeyframePositionSequencePnt3sDescBase>::getKeyValue (const UInt32       index )
{
    return GenericType(_field[index][0],_field[index][1],_field[index][2]);
}

template<> inline 
void KeyframePositionSequenceTmpl<KeyframePositionSequencePnt3sDescBase>::getKeyValue (GenericType &val,
                              const UInt32       index )      
{
    val = GenericType(_field[index][0],_field[index][1],_field[index][2]); 
}

template<> inline 
void KeyframePositionSequenceTmpl<KeyframePositionSequencePnt3sDescBase>::getKeyValue (GenericType &val,
                              const UInt32       index ) const
{
    val = GenericType(_field[index][0],_field[index][1],_field[index][2]); 
}

template<> inline 
void KeyframePositionSequenceTmpl<KeyframePositionSequencePnt3sDescBase>::zeroField(StoredType& Result) const
{
    Result = Pnt3s(0,0,0);
}

template<> inline 
void KeyframePositionSequenceTmpl<KeyframePositionSequencePnt3sDescBase>::setKeyframe (const GenericType &val,
                                                              const Real32 &key,
                                                              const UInt32       index )
{
    editMField(SequenceDataFieldMask, _field);
    editMField(InternalKeysFieldMask, _mfInternalKeys);

    _field[index] = Pnt3s(val[0],val[1],val[2]);
    _mfInternalKeys[index] = key;
}

template<> inline 
void KeyframePositionSequenceTmpl<KeyframePositionSequencePnt3sDescBase>::addKeyframe (const GenericType &val,
                                                              const Real32 &key   )
{
    editMField(SequenceDataFieldMask, _field);
    editMField(InternalKeysFieldMask, _mfInternalKeys);

    _field.push_back(Pnt3s(val[0],val[1],val[2]));
    _mfInternalKeys.push_back(key);
}

template<> inline 
void KeyframePositionSequenceTmpl<KeyframePositionSequencePnt3sDescBase>::insertKeyframe (const GenericType &val,
                                                              const Real32 &key,
                                                              const UInt32       index )
{
    if(_field.size() < index)
    {
        assert(false && "Index Out of bounds.");
    }
    else if(_field.size() == index)
    {
        push_back(val,key);
    }
    else
    {
        editMField(SequenceDataFieldMask, _field);
        editMField(InternalKeysFieldMask, _mfInternalKeys);

        _field.insert(_field.begin() + index, Pnt3s(val[0],val[1],val[2]));
        this->_mfInternalKeys.insert(this->_mfInternalKeys.begin() + index, key);
    }
}

/************************** Pnt4s  ********************/
template<> inline 
KeyframePositionSequenceTmpl<KeyframePositionSequencePnt4sDescBase>::GenericType 
      KeyframePositionSequenceTmpl<KeyframePositionSequencePnt4sDescBase>::getKeyValue (const UInt32       index ) const
{
    return GenericType(_field[index][0],_field[index][1],_field[index][2]);
}

template<> inline 
KeyframePositionSequenceTmpl<KeyframePositionSequencePnt4sDescBase>::GenericType 
      KeyframePositionSequenceTmpl<KeyframePositionSequencePnt4sDescBase>::getKeyValue (const UInt32       index )
{
    return GenericType(_field[index][0],_field[index][1],_field[index][2]);
}

template<> inline 
void KeyframePositionSequenceTmpl<KeyframePositionSequencePnt4sDescBase>::getKeyValue (GenericType &val,
                              const UInt32       index )      
{
    val.setValues(_field[index][0],_field[index][1],_field[index][2]); 
}

template<> inline 
void KeyframePositionSequenceTmpl<KeyframePositionSequencePnt4sDescBase>::getKeyValue (GenericType &val,
                              const UInt32       index ) const
{
    val.setValues(_field[index][0],_field[index][1],_field[index][2]); 
}

template<> inline 
void KeyframePositionSequenceTmpl<KeyframePositionSequencePnt4sDescBase>::zeroField(StoredType& Result) const
{
    Result = Pnt4s(0,0,0,0);
}

template<> inline 
void KeyframePositionSequenceTmpl<KeyframePositionSequencePnt4sDescBase>::setKeyframe (const GenericType &val,
                                                              const Real32 &key,
                                                              const UInt32       index )
{
    editMField(SequenceDataFieldMask, _field);
    editMField(InternalKeysFieldMask, _mfInternalKeys);

    _field[index] = Pnt4s(val[0], val[1], val[2], 1.0);
    _mfInternalKeys[index] = key;
}

template<> inline 
void KeyframePositionSequenceTmpl<KeyframePositionSequencePnt4sDescBase>::addKeyframe (const GenericType &val,
                                                              const Real32 &key   )
{
    editMField(SequenceDataFieldMask, _field);
    editMField(InternalKeysFieldMask, _mfInternalKeys);

    _field.push_back(Pnt4s(val[0], val[1], val[2], 1.0));
    _mfInternalKeys.push_back(key);
}

template<> inline 
void KeyframePositionSequenceTmpl<KeyframePositionSequencePnt4sDescBase>::insertKeyframe (const GenericType &val,
                                                              const Real32 &key,
                                                              const UInt32       index )
{
    if(_field.size() < index)
    {
        assert(false && "Index Out of bounds.");
    }
    else if(_field.size() == index)
    {
        push_back(val,key);
    }
    else
    {
        editMField(SequenceDataFieldMask, _field);
        editMField(InternalKeysFieldMask, _mfInternalKeys);

        _field.insert(_field.begin() + index, Pnt4s(val[0], val[1], val[2], 1.0));
        this->_mfInternalKeys.insert(this->_mfInternalKeys.begin() + index, key);
    }
}

/************************** Real32  ********************/
/************************** Pnt2f  ********************/
template<> inline 
KeyframePositionSequenceTmpl<KeyframePositionSequencePnt2fDescBase>::GenericType 
      KeyframePositionSequenceTmpl<KeyframePositionSequencePnt2fDescBase>::getKeyValue (const UInt32       index ) const
{
    return GenericType(_field[index][0],_field[index][1],0.0);
}

template<> inline 
KeyframePositionSequenceTmpl<KeyframePositionSequencePnt2fDescBase>::GenericType 
      KeyframePositionSequenceTmpl<KeyframePositionSequencePnt2fDescBase>::getKeyValue (const UInt32       index )
{
    return GenericType(_field[index][0],_field[index][1],0.0);
}

template<> inline 
void KeyframePositionSequenceTmpl<KeyframePositionSequencePnt2fDescBase>::getKeyValue (GenericType &val,
                              const UInt32       index )      
{
    val.setValues(_field[index][0],_field[index][1],0.0); 
}

template<> inline 
void KeyframePositionSequenceTmpl<KeyframePositionSequencePnt2fDescBase>::getKeyValue (GenericType &val,
                              const UInt32       index ) const
{
    val.setValues(_field[index][0],_field[index][1],0.0); 
}

template<> inline 
void KeyframePositionSequenceTmpl<KeyframePositionSequencePnt2fDescBase>::zeroField(StoredType& Result) const
{
    Result = Pnt2f(0.0,0.0);
}

template<> inline 
void KeyframePositionSequenceTmpl<KeyframePositionSequencePnt2fDescBase>::setKeyframe (const GenericType &val,
                                                              const Real32 &key,
                                                              const UInt32       index )
{
    editMField(SequenceDataFieldMask, _field);
    editMField(InternalKeysFieldMask, _mfInternalKeys);

    _field[index] = Pnt2f(val[0], val[1]);
    _mfInternalKeys[index] = key;
}

template<> inline 
void KeyframePositionSequenceTmpl<KeyframePositionSequencePnt2fDescBase>::addKeyframe (const GenericType &val,
                                                              const Real32 &key   )
{
    editMField(SequenceDataFieldMask, _field);
    editMField(InternalKeysFieldMask, _mfInternalKeys);

    _field.push_back(Pnt2f(val[0], val[1]));
    _mfInternalKeys.push_back(key);
}

template<> inline 
void KeyframePositionSequenceTmpl<KeyframePositionSequencePnt2fDescBase>::insertKeyframe (const GenericType &val,
                                                              const Real32 &key,
                                                              const UInt32       index )
{
    if(_field.size() < index)
    {
        assert(false && "Index Out of bounds.");
    }
    else if(_field.size() == index)
    {
        push_back(val,key);
    }
    else
    {
        editMField(SequenceDataFieldMask, _field);
        editMField(InternalKeysFieldMask, _mfInternalKeys);

        _field.insert(_field.begin() + index, Pnt2f(val[0], val[1]));
        this->_mfInternalKeys.insert(this->_mfInternalKeys.begin() + index, key);
    }
}

/************************** Pnt3f  ********************/
template<> inline 
KeyframePositionSequenceTmpl<KeyframePositionSequencePnt3fDescBase>::GenericType 
      KeyframePositionSequenceTmpl<KeyframePositionSequencePnt3fDescBase>::getKeyValue (const UInt32       index ) const
{
    return _field[index];
}

template<> inline 
KeyframePositionSequenceTmpl<KeyframePositionSequencePnt3fDescBase>::GenericType 
      KeyframePositionSequenceTmpl<KeyframePositionSequencePnt3fDescBase>::getKeyValue (const UInt32       index )
{
    return _field[index];
}

template<> inline 
void KeyframePositionSequenceTmpl<KeyframePositionSequencePnt3fDescBase>::getKeyValue (GenericType &val,
                              const UInt32       index )      
{
    val = _field[index]; 
}

template<> inline 
void KeyframePositionSequenceTmpl<KeyframePositionSequencePnt3fDescBase>::getKeyValue (GenericType &val,
                              const UInt32       index ) const
{
    val = _field[index]; 
}

template<> inline 
void KeyframePositionSequenceTmpl<KeyframePositionSequencePnt3fDescBase>::zeroField(StoredType& Result) const
{
    Result = Pnt3f(0.0,0.0,0.0);
}

template<> inline 
void KeyframePositionSequenceTmpl<KeyframePositionSequencePnt3fDescBase>::setKeyframe (const GenericType &val,
                                                              const Real32 &key,
                                                              const UInt32       index )
{
    editMField(SequenceDataFieldMask, _field);
    editMField(InternalKeysFieldMask, _mfInternalKeys);

    _field[index] = val;
    _mfInternalKeys[index] = key;
}

template<> inline 
void KeyframePositionSequenceTmpl<KeyframePositionSequencePnt3fDescBase>::addKeyframe (const GenericType &val,
                                                              const Real32 &key   )
{
    editMField(SequenceDataFieldMask, _field);
    editMField(InternalKeysFieldMask, _mfInternalKeys);

    _field.push_back(val);
    _mfInternalKeys.push_back(key);
}

template<> inline 
void KeyframePositionSequenceTmpl<KeyframePositionSequencePnt3fDescBase>::insertKeyframe (const GenericType &val,
                                                              const Real32 &key,
                                                              const UInt32       index )
{
    if(_field.size() < index)
    {
        assert(false && "Index Out of bounds.");
    }
    else if(_field.size() == index)
    {
        push_back(val,key);
    }
    else
    {
        editMField(SequenceDataFieldMask, _field);
        editMField(InternalKeysFieldMask, _mfInternalKeys);

        _field.insert(_field.begin() + index, val);
        this->_mfInternalKeys.insert(this->_mfInternalKeys.begin() + index, key);
    }
}

/************************** Pnt4f  ********************/
template<> inline 
KeyframePositionSequenceTmpl<KeyframePositionSequencePnt4fDescBase>::GenericType 
      KeyframePositionSequenceTmpl<KeyframePositionSequencePnt4fDescBase>::getKeyValue (const UInt32       index ) const
{
    return GenericType(_field[index][0],_field[index][1],_field[index][2]);
}

template<> inline 
KeyframePositionSequenceTmpl<KeyframePositionSequencePnt4fDescBase>::GenericType 
      KeyframePositionSequenceTmpl<KeyframePositionSequencePnt4fDescBase>::getKeyValue (const UInt32       index )
{
    return GenericType(_field[index][0],_field[index][1],_field[index][2]);
}

template<> inline 
void KeyframePositionSequenceTmpl<KeyframePositionSequencePnt4fDescBase>::getKeyValue (GenericType &val,
                              const UInt32       index )      
{
    val.setValues(_field[index][0],_field[index][1],_field[index][2]); 
}

template<> inline 
void KeyframePositionSequenceTmpl<KeyframePositionSequencePnt4fDescBase>::getKeyValue (GenericType &val,
                              const UInt32       index ) const
{
    val.setValues(_field[index][0],_field[index][1],_field[index][2]); 
}

template<> inline 
void KeyframePositionSequenceTmpl<KeyframePositionSequencePnt4fDescBase>::zeroField(StoredType& Result) const
{
    Result = Pnt4f(0.0,0.0,0.0,0.0);
}

template<> inline 
void KeyframePositionSequenceTmpl<KeyframePositionSequencePnt4fDescBase>::setKeyframe (const GenericType &val,
                                                              const Real32 &key,
                                                              const UInt32       index )
{
    editMField(SequenceDataFieldMask, _field);
    editMField(InternalKeysFieldMask, _mfInternalKeys);

    _field[index] = Pnt4f(val[0], val[1], val[2], 1.0);
    _mfInternalKeys[index] = key;
}

template<> inline 
void KeyframePositionSequenceTmpl<KeyframePositionSequencePnt4fDescBase>::addKeyframe (const GenericType &val,
                                                              const Real32 &key   )
{
    editMField(SequenceDataFieldMask, _field);
    editMField(InternalKeysFieldMask, _mfInternalKeys);

    _field.push_back(Pnt4f(val[0], val[1], val[2], 1.0));
    _mfInternalKeys.push_back(key);
}

template<> inline 
void KeyframePositionSequenceTmpl<KeyframePositionSequencePnt4fDescBase>::insertKeyframe (const GenericType &val,
                                                              const Real32 &key,
                                                              const UInt32       index )
{
    if(_field.size() < index)
    {
        assert(false && "Index Out of bounds.");
    }
    else if(_field.size() == index)
    {
        push_back(val,key);
    }
    else
    {
        editMField(SequenceDataFieldMask, _field);
        editMField(InternalKeysFieldMask, _mfInternalKeys);

        _field.insert(_field.begin() + index, Pnt4f(val[0], val[1], val[2], 1.0));
        this->_mfInternalKeys.insert(this->_mfInternalKeys.begin() + index, key);
    }
}

/************************** Fixed32  ********************/
/************************** Pnt2fx  ********************/
template<> inline 
KeyframePositionSequenceTmpl<KeyframePositionSequencePnt2fxDescBase>::GenericType 
      KeyframePositionSequenceTmpl<KeyframePositionSequencePnt2fxDescBase>::getKeyValue (const UInt32       index ) const
{
#ifdef OSG_FLOAT_PROFILE
    return GenericType(Fixed32::toFloat(_field[index][0]),
                       Fixed32::toFloat(_field[index][1]),
                       0.0f);
#else
    return _field[index];
#endif
}

template<> inline 
KeyframePositionSequenceTmpl<KeyframePositionSequencePnt2fxDescBase>::GenericType 
      KeyframePositionSequenceTmpl<KeyframePositionSequencePnt2fxDescBase>::getKeyValue (const UInt32       index )
{
#ifdef OSG_FLOAT_PROFILE
    return GenericType(Fixed32::toFloat(_field[index][0]),
                       Fixed32::toFloat(_field[index][1]),
                       0.0f);
#else
    return _field[index];
#endif
}

template<> inline 
void KeyframePositionSequenceTmpl<KeyframePositionSequencePnt2fxDescBase>::getKeyValue (GenericType &val,
                              const UInt32       index )      
{
#ifdef OSG_FLOAT_PROFILE
    val.setValues(Fixed32::toFloat(_field[index][0]),
                  Fixed32::toFloat(_field[index][1]),
                  0.0f);
#else
    val = _field[index];
#endif
}

template<> inline 
void KeyframePositionSequenceTmpl<KeyframePositionSequencePnt2fxDescBase>::getKeyValue (GenericType &val,
                              const UInt32       index ) const
{
#ifdef OSG_FLOAT_PROFILE
    val.setValues(Fixed32::toFloat(_field[index][0]),
                  Fixed32::toFloat(_field[index][1]),
                  0.0f);
#else
    val = _field[index];
#endif
}

template<> inline 
void KeyframePositionSequenceTmpl<KeyframePositionSequencePnt2fxDescBase>::zeroField(StoredType& Result) const
{
    Result = Pnt2fx(0.0f,0.0f);
}

template<> inline 
void KeyframePositionSequenceTmpl<KeyframePositionSequencePnt2fxDescBase>::setKeyframe (const GenericType &val,
                                                              const Real32 &key,
                                                              const UInt32       index )
{
    editMField(SequenceDataFieldMask, _field);
    editMField(InternalKeysFieldMask, _mfInternalKeys);

    _field[index] = Pnt2fx(val[0], val[1]);
    _mfInternalKeys[index] = key;
}

template<> inline 
void KeyframePositionSequenceTmpl<KeyframePositionSequencePnt2fxDescBase>::addKeyframe (const GenericType &val,
                                                              const Real32 &key   )
{
    editMField(SequenceDataFieldMask, _field);
    editMField(InternalKeysFieldMask, _mfInternalKeys);

    _field.push_back(Pnt2fx(val[0], val[1]));
    _mfInternalKeys.push_back(key);
}

template<> inline 
void KeyframePositionSequenceTmpl<KeyframePositionSequencePnt2fxDescBase>::insertKeyframe (const GenericType &val,
                                                              const Real32 &key,
                                                              const UInt32       index )
{
    if(_field.size() < index)
    {
        assert(false && "Index Out of bounds.");
    }
    else if(_field.size() == index)
    {
        push_back(val,key);
    }
    else
    {
        editMField(SequenceDataFieldMask, _field);
        editMField(InternalKeysFieldMask, _mfInternalKeys);

        _field.insert(_field.begin() + index, Pnt2fx(val[0], val[1]));
        this->_mfInternalKeys.insert(this->_mfInternalKeys.begin() + index, key);
    }
}

/************************** Pnt3fx  ********************/
template<> inline 
KeyframePositionSequenceTmpl<KeyframePositionSequencePnt3fxDescBase>::GenericType 
      KeyframePositionSequenceTmpl<KeyframePositionSequencePnt3fxDescBase>::getKeyValue (const UInt32       index ) const
{
#ifdef OSG_FLOAT_PROFILE
    return GenericType(Fixed32::toFloat(_field[index][0]),
                       Fixed32::toFloat(_field[index][1]),
                       Fixed32::toFloat(_field[index][2]));
#else
    return _field[index];
#endif
}

template<> inline 
KeyframePositionSequenceTmpl<KeyframePositionSequencePnt3fxDescBase>::GenericType 
      KeyframePositionSequenceTmpl<KeyframePositionSequencePnt3fxDescBase>::getKeyValue (const UInt32       index )
{
#ifdef OSG_FLOAT_PROFILE
    return GenericType(Fixed32::toFloat(_field[index][0]),
                       Fixed32::toFloat(_field[index][1]),
                       Fixed32::toFloat(_field[index][2]));
#else
    return _field[index];
#endif
}

template<> inline 
void KeyframePositionSequenceTmpl<KeyframePositionSequencePnt3fxDescBase>::getKeyValue (GenericType &val,
                              const UInt32       index )      
{
#ifdef OSG_FLOAT_PROFILE
    val.setValues(Fixed32::toFloat(_field[index][0]),
                       Fixed32::toFloat(_field[index][1]),
                       Fixed32::toFloat(_field[index][2]));
#else
    val = _field[index];
#endif
}

template<> inline 
void KeyframePositionSequenceTmpl<KeyframePositionSequencePnt3fxDescBase>::getKeyValue (GenericType &val,
                              const UInt32       index ) const
{
#ifdef OSG_FLOAT_PROFILE
    val.setValues(Fixed32::toFloat(_field[index][0]),
                       Fixed32::toFloat(_field[index][1]),
                       Fixed32::toFloat(_field[index][2]));
#else
    val = _field[index];
#endif
}

template<> inline 
void KeyframePositionSequenceTmpl<KeyframePositionSequencePnt3fxDescBase>::zeroField(StoredType& Result) const
{
    Result = Pnt3fx(0.0f,0.0f,0.0f);
}

template<> inline 
void KeyframePositionSequenceTmpl<KeyframePositionSequencePnt3fxDescBase>::setKeyframe (const GenericType &val,
                                                              const Real32 &key,
                                                              const UInt32       index )
{
    editMField(SequenceDataFieldMask, _field);
    editMField(InternalKeysFieldMask, _mfInternalKeys);

    _field[index] = Pnt3fx(val[0],val[1],val[2]);
    _mfInternalKeys[index] = key;
}

template<> inline 
void KeyframePositionSequenceTmpl<KeyframePositionSequencePnt3fxDescBase>::addKeyframe (const GenericType &val,
                                                              const Real32 &key   )
{
    editMField(SequenceDataFieldMask, _field);
    editMField(InternalKeysFieldMask, _mfInternalKeys);

    _field.push_back(Pnt3fx(val[0],val[1],val[2]));
    _mfInternalKeys.push_back(key);
}

template<> inline 
void KeyframePositionSequenceTmpl<KeyframePositionSequencePnt3fxDescBase>::insertKeyframe (const GenericType &val,
                                                              const Real32 &key,
                                                              const UInt32       index )
{
    if(_field.size() < index)
    {
        assert(false && "Index Out of bounds.");
    }
    else if(_field.size() == index)
    {
        push_back(val,key);
    }
    else
    {
        editMField(SequenceDataFieldMask, _field);
        editMField(InternalKeysFieldMask, _mfInternalKeys);

        _field.insert(_field.begin() + index, Pnt3fx(val[0],val[1],val[2]));
        this->_mfInternalKeys.insert(this->_mfInternalKeys.begin() + index, key);
    }
}

/************************** Pnt4fx  ********************/
template<> inline 
KeyframePositionSequenceTmpl<KeyframePositionSequencePnt4fxDescBase>::GenericType 
      KeyframePositionSequenceTmpl<KeyframePositionSequencePnt4fxDescBase>::getKeyValue (const UInt32       index ) const
{
#ifdef OSG_FLOAT_PROFILE
    return GenericType(Fixed32::toFloat(_field[index][0]),
                       Fixed32::toFloat(_field[index][1]),
                       Fixed32::toFloat(_field[index][2]));
#else
    return GenericType(_field[index][0],
                       _field[index][1],
                       _field[index][2]);
#endif
}

template<> inline 
KeyframePositionSequenceTmpl<KeyframePositionSequencePnt4fxDescBase>::GenericType 
      KeyframePositionSequenceTmpl<KeyframePositionSequencePnt4fxDescBase>::getKeyValue (const UInt32       index )
{
#ifdef OSG_FLOAT_PROFILE
    return GenericType(Fixed32::toFloat(_field[index][0]),
                       Fixed32::toFloat(_field[index][1]),
                       Fixed32::toFloat(_field[index][2]));
#else
    return GenericType(_field[index][0],
                       _field[index][1],
                       _field[index][2]);
#endif
}

template<> inline 
void KeyframePositionSequenceTmpl<KeyframePositionSequencePnt4fxDescBase>::getKeyValue (GenericType &val,
                              const UInt32       index )      
{
#ifdef OSG_FLOAT_PROFILE
    val.setValues(Fixed32::toFloat(_field[index][0]),
                       Fixed32::toFloat(_field[index][1]),
                       Fixed32::toFloat(_field[index][2]));
#else
    val.setValues(_field[index][0],
                       _field[index][1],
                       _field[index][2]);
#endif
}

template<> inline 
void KeyframePositionSequenceTmpl<KeyframePositionSequencePnt4fxDescBase>::getKeyValue (GenericType &val,
                              const UInt32       index ) const
{
#ifdef OSG_FLOAT_PROFILE
    val.setValues(Fixed32::toFloat(_field[index][0]),
                       Fixed32::toFloat(_field[index][1]),
                       Fixed32::toFloat(_field[index][2]));
#else
    val.setValues(_field[index][0],
                       _field[index][1],
                       _field[index][2]);
#endif
}

template<> inline 
void KeyframePositionSequenceTmpl<KeyframePositionSequencePnt4fxDescBase>::zeroField(StoredType& Result) const
{
    Result = Pnt4fx(0.0f,0.0f,0.0f,0.0f);
}

template<> inline 
void KeyframePositionSequenceTmpl<KeyframePositionSequencePnt4fxDescBase>::setKeyframe (const GenericType &val,
                                                              const Real32 &key,
                                                              const UInt32       index )
{
    editMField(SequenceDataFieldMask, _field);
    editMField(InternalKeysFieldMask, _mfInternalKeys);

    _field[index] = Pnt4fx(val[0], val[1], val[2], 1.0f);
    _mfInternalKeys[index] = key;
}

template<> inline 
void KeyframePositionSequenceTmpl<KeyframePositionSequencePnt4fxDescBase>::addKeyframe (const GenericType &val,
                                                              const Real32 &key   )
{
    editMField(SequenceDataFieldMask, _field);
    editMField(InternalKeysFieldMask, _mfInternalKeys);

    _field.push_back(Pnt4fx(val[0], val[1], val[2], 1.0f));
    _mfInternalKeys.push_back(key);
}

template<> inline 
void KeyframePositionSequenceTmpl<KeyframePositionSequencePnt4fxDescBase>::insertKeyframe (const GenericType &val,
                                                              const Real32 &key,
                                                              const UInt32       index )
{
    if(_field.size() < index)
    {
        assert(false && "Index Out of bounds.");
    }
    else if(_field.size() == index)
    {
        push_back(val,key);
    }
    else
    {
        editMField(SequenceDataFieldMask, _field);
        editMField(InternalKeysFieldMask, _mfInternalKeys);

        _field.insert(_field.begin() + index, Pnt4fx(val[0], val[1], val[2], 1.0f));
        this->_mfInternalKeys.insert(this->_mfInternalKeys.begin() + index, key);
    }
}

/************************** Real64  ********************/
/************************** Pnt2d  ********************/
template<> inline 
KeyframePositionSequenceTmpl<KeyframePositionSequencePnt2dDescBase>::GenericType 
      KeyframePositionSequenceTmpl<KeyframePositionSequencePnt2dDescBase>::getKeyValue (const UInt32       index ) const
{
    return GenericType(_field[index][0],_field[index][1],0.0);
}

template<> inline 
KeyframePositionSequenceTmpl<KeyframePositionSequencePnt2dDescBase>::GenericType 
      KeyframePositionSequenceTmpl<KeyframePositionSequencePnt2dDescBase>::getKeyValue (const UInt32       index )
{
    return GenericType(_field[index][0],_field[index][1],0.0);
}

template<> inline 
void KeyframePositionSequenceTmpl<KeyframePositionSequencePnt2dDescBase>::getKeyValue (GenericType &val,
                              const UInt32       index )      
{
    val.setValues(_field[index][0],_field[index][1],0.0); 
}

template<> inline 
void KeyframePositionSequenceTmpl<KeyframePositionSequencePnt2dDescBase>::getKeyValue (GenericType &val,
                              const UInt32       index ) const
{
    val.setValues(_field[index][0],_field[index][1],0.0); 
}

template<> inline 
void KeyframePositionSequenceTmpl<KeyframePositionSequencePnt2dDescBase>::zeroField(StoredType& Result) const
{
    Result = Pnt2d(0.0,0.0);
}

template<> inline 
void KeyframePositionSequenceTmpl<KeyframePositionSequencePnt2dDescBase>::setKeyframe (const GenericType &val,
                                                              const Real32 &key,
                                                              const UInt32       index )
{
    editMField(SequenceDataFieldMask, _field);
    editMField(InternalKeysFieldMask, _mfInternalKeys);

    _field[index] = Pnt2d(val[0], val[1]);
    _mfInternalKeys[index] = key;
}

template<> inline 
void KeyframePositionSequenceTmpl<KeyframePositionSequencePnt2dDescBase>::addKeyframe (const GenericType &val,
                                                              const Real32 &key   )
{
    editMField(SequenceDataFieldMask, _field);
    editMField(InternalKeysFieldMask, _mfInternalKeys);

    _field.push_back(Pnt2d(val[0], val[1]));
    _mfInternalKeys.push_back(key);
}

template<> inline 
void KeyframePositionSequenceTmpl<KeyframePositionSequencePnt2dDescBase>::insertKeyframe (const GenericType &val,
                                                              const Real32 &key,
                                                              const UInt32       index )
{
    if(_field.size() < index)
    {
        assert(false && "Index Out of bounds.");
    }
    else if(_field.size() == index)
    {
        push_back(val,key);
    }
    else
    {
        editMField(SequenceDataFieldMask, _field);
        editMField(InternalKeysFieldMask, _mfInternalKeys);

        _field.insert(_field.begin() + index, Pnt2d(val[0], val[1]));
        this->_mfInternalKeys.insert(this->_mfInternalKeys.begin() + index, key);
    }
}

/************************** Pnt3d  ********************/
template<> inline 
KeyframePositionSequenceTmpl<KeyframePositionSequencePnt3dDescBase>::GenericType 
      KeyframePositionSequenceTmpl<KeyframePositionSequencePnt3dDescBase>::getKeyValue (const UInt32       index ) const
{
    return GenericType(_field[index][0],_field[index][1],_field[index][2]);
}

template<> inline 
KeyframePositionSequenceTmpl<KeyframePositionSequencePnt3dDescBase>::GenericType 
      KeyframePositionSequenceTmpl<KeyframePositionSequencePnt3dDescBase>::getKeyValue (const UInt32       index )
{
    return GenericType(_field[index][0],_field[index][1],_field[index][2]);
}

template<> inline 
void KeyframePositionSequenceTmpl<KeyframePositionSequencePnt3dDescBase>::getKeyValue (GenericType &val,
                              const UInt32       index )      
{
    val = GenericType(_field[index][0],_field[index][1],_field[index][2]); 
}

template<> inline 
void KeyframePositionSequenceTmpl<KeyframePositionSequencePnt3dDescBase>::getKeyValue (GenericType &val,
                              const UInt32       index ) const
{
    val = GenericType(_field[index][0],_field[index][1],_field[index][2]); 
}

template<> inline 
void KeyframePositionSequenceTmpl<KeyframePositionSequencePnt3dDescBase>::zeroField(StoredType& Result) const
{
    Result = Pnt3d(0.0,0.0,0.0);
}

template<> inline 
void KeyframePositionSequenceTmpl<KeyframePositionSequencePnt3dDescBase>::setKeyframe (const GenericType &val,
                                                              const Real32 &key,
                                                              const UInt32       index )
{
    editMField(SequenceDataFieldMask, _field);
    editMField(InternalKeysFieldMask, _mfInternalKeys);

    _field[index] = Pnt3d(val[0],val[1],val[2]);
    _mfInternalKeys[index] = key;
}

template<> inline 
void KeyframePositionSequenceTmpl<KeyframePositionSequencePnt3dDescBase>::addKeyframe (const GenericType &val,
                                                              const Real32 &key   )
{
    editMField(SequenceDataFieldMask, _field);
    editMField(InternalKeysFieldMask, _mfInternalKeys);

    _field.push_back(Pnt3d(val[0],val[1],val[2]));
    _mfInternalKeys.push_back(key);
}

template<> inline 
void KeyframePositionSequenceTmpl<KeyframePositionSequencePnt3dDescBase>::insertKeyframe (const GenericType &val,
                                                              const Real32 &key,
                                                              const UInt32       index )
{
    if(_field.size() < index)
    {
        assert(false && "Index Out of bounds.");
    }
    else if(_field.size() == index)
    {
        push_back(val,key);
    }
    else
    {
        editMField(SequenceDataFieldMask, _field);
        editMField(InternalKeysFieldMask, _mfInternalKeys);

        _field.insert(_field.begin() + index, Pnt3d(val[0],val[1],val[2]));
        this->_mfInternalKeys.insert(this->_mfInternalKeys.begin() + index, key);
    }
}

/************************** Pnt4d  ********************/
template<> inline 
KeyframePositionSequenceTmpl<KeyframePositionSequencePnt4dDescBase>::GenericType 
      KeyframePositionSequenceTmpl<KeyframePositionSequencePnt4dDescBase>::getKeyValue (const UInt32       index ) const
{
    return GenericType(_field[index][0],_field[index][1],_field[index][2]);
}

template<> inline 
KeyframePositionSequenceTmpl<KeyframePositionSequencePnt4dDescBase>::GenericType 
      KeyframePositionSequenceTmpl<KeyframePositionSequencePnt4dDescBase>::getKeyValue (const UInt32       index )
{
    return GenericType(_field[index][0],_field[index][1],_field[index][2]);
}

template<> inline 
void KeyframePositionSequenceTmpl<KeyframePositionSequencePnt4dDescBase>::getKeyValue (GenericType &val,
                              const UInt32       index )      
{
    val.setValues(_field[index][0],_field[index][1],_field[index][2]); 
}

template<> inline 
void KeyframePositionSequenceTmpl<KeyframePositionSequencePnt4dDescBase>::getKeyValue (GenericType &val,
                              const UInt32       index ) const
{
    val.setValues(_field[index][0],_field[index][1],_field[index][2]); 
}

template<> inline 
void KeyframePositionSequenceTmpl<KeyframePositionSequencePnt4dDescBase>::zeroField(StoredType& Result) const
{
    Result = Pnt4d(0.0,0.0,0.0,0.0);
}

template<> inline 
void KeyframePositionSequenceTmpl<KeyframePositionSequencePnt4dDescBase>::setKeyframe (const GenericType &val,
                                                              const Real32 &key,
                                                              const UInt32       index )
{
    editMField(SequenceDataFieldMask, _field);
    editMField(InternalKeysFieldMask, _mfInternalKeys);

    _field[index] = Pnt4d(val[0], val[1], val[2], 1.0);
    _mfInternalKeys[index] = key;
}

template<> inline 
void KeyframePositionSequenceTmpl<KeyframePositionSequencePnt4dDescBase>::addKeyframe (const GenericType &val,
                                                              const Real32 &key   )
{
    editMField(SequenceDataFieldMask, _field);
    editMField(InternalKeysFieldMask, _mfInternalKeys);

    _field.push_back(Pnt4d(val[0], val[1], val[2], 1.0));
    _mfInternalKeys.push_back(key);
}

template<> inline 
void KeyframePositionSequenceTmpl<KeyframePositionSequencePnt4dDescBase>::insertKeyframe (const GenericType &val,
                                                              const Real32 &key,
                                                              const UInt32       index )
{
    if(_field.size() < index)
    {
        assert(false && "Index Out of bounds.");
    }
    else if(_field.size() == index)
    {
        push_back(val,key);
    }
    else
    {
        editMField(SequenceDataFieldMask, _field);
        editMField(InternalKeysFieldMask, _mfInternalKeys);

        _field.insert(_field.begin() + index, Pnt4d(val[0], val[1], val[2], 1.0));
        this->_mfInternalKeys.insert(this->_mfInternalKeys.begin() + index, key);
    }
}

OSG_END_NAMESPACE
