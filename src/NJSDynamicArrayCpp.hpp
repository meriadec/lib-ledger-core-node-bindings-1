// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from dynamic.djinni

#ifndef DJINNI_GENERATED_NJSDYNAMICARRAY_HPP
#define DJINNI_GENERATED_NJSDYNAMICARRAY_HPP


#include "../include/../utils/optional.hpp"
#include "../include/DynamicType.hpp"
#include "NJSDynamicObjectCpp.hpp"
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include <nan.h>
#include <node.h>
#include "../include/DynamicArray.hpp"

using namespace v8;
using namespace node;
using namespace std;
using namespace ledger::core::api;

class NJSDynamicArray: public Nan::ObjectWrap {
public:

    static void Initialize(Local<Object> target);
    virtual ~NJSDynamicArray() {};
    NJSDynamicArray(const std::shared_ptr<ledger::core::api::DynamicArray> &iDynamicArray):_DynamicArray(iDynamicArray){};

    static Handle<Object> wrap(const std::shared_ptr<ledger::core::api::DynamicArray> &object);
    static Nan::Persistent<ObjectTemplate> DynamicArray_prototype;
    std::shared_ptr<ledger::core::api::DynamicArray> getCppImpl(){return _DynamicArray;};

private:
    /**
     *Get count of stored references
     *@return 64 bits integer
     */
    static NAN_METHOD(size);

    /**
     *Push a 32 bits integer
     *@param value, 32 bits integer
     *@return DynamicArray with value stored in it
     */
    static NAN_METHOD(pushInt);

    /**
     *Push a 64 bits integer
     *@param value, 64 bits integer
     *@return DynamicArray with value stored in it
     */
    static NAN_METHOD(pushLong);

    /**
     *Push a string
     *@param value, string
     *@return DynamicArray with value stored in it
     */
    static NAN_METHOD(pushString);

    /**
     *Push a double
     *@param value, double
     *@return DynamicArray with value stored in it
     */
    static NAN_METHOD(pushDouble);

    /**
     *Push a binary
     *@param value, binary
     *@return DynamicArray with value stored in it
     */
    static NAN_METHOD(pushData);

    /**
     *Push a bool
     *@param value, bool
     *@return DynamicArray with value stored in it
     */
    static NAN_METHOD(pushBoolean);

    /**
     *Push a DynamicObject object
     *@param value, DynamicObject
     *@return DynamicArray with value stored in it
     */
    static NAN_METHOD(pushObject);

    /**
     *Push a DynamicArray object
     *@param value, DynamicArray
     *@return DynamicArray with value stored in it
     */
    static NAN_METHOD(pushArray);

    /**
     *Get string at a given index
     *@param index, 64 bits integer
     *@return Optional string
     */
    static NAN_METHOD(getString);

    /**
     *Get 32 bits integer at a given index
     *@param index, 64 bits integer
     *@return Optional 32 bits integer
     */
    static NAN_METHOD(getInt);

    /**
     *Get 64 bits integer at a given index
     *@param index, 64 bits integer
     *@return Optional 64 bits integer
     */
    static NAN_METHOD(getLong);

    /**
     *Get double at a given index
     *@param index, 64 bits integer
     *@return Optional double
     */
    static NAN_METHOD(getDouble);

    /**
     *Get binary at a given index
     *@param index, 64 bits integer
     *@return Optional binary
     */
    static NAN_METHOD(getData);

    /**
     *Get bool at a given index
     *@param index, 64 bits integer
     *@return Optional bool
     */
    static NAN_METHOD(getBoolean);

    /**
     *Get DynamicObject object at a given index
     *@param index, 64 bits integer
     *@return Optional DynamicObject
     */
    static NAN_METHOD(getObject);

    /**
     *Get DynamicArray object at a given index
     *@param index, 64 bits integer
     *@return Optional DynamicArray
     */
    static NAN_METHOD(getArray);

    /**
     *Concatenate current DynamicArray with another one
     *@param array, DynamicArray object to concatenate with
     *@return DynamicArray object, concatenated DynamicArray
     */
    static NAN_METHOD(concat);

    /**
     *Get type of value stored at a given index
     *@param index, 64 bits integer
     *@return Optional DynamicType enum entry
     */
    static NAN_METHOD(getType);

    /**
     *Delete value stored at given index
     *@param index, 64 bits integer
     *@return bool, true if deletion succeeded
     */
    static NAN_METHOD(remove);

    /**
     *Dump whole object's content as string
     *@return string
     */
    static NAN_METHOD(dump);

    /**
     *Serialize whole object to a binary
     *@return binary
     */
    static NAN_METHOD(serialize);

    /**
     *Get readonly status of object
     *@param bool
     */
    static NAN_METHOD(isReadOnly);

    /**
     *Create a new instance of DynamicArray class
     *@return DynamicArray instance
     */
    static NAN_METHOD(newInstance);

    /**
     *Parse a binary to a DynamicArray
     *@param serialized, binary to parse
     *@return Optional DynamicArray
     */
    static NAN_METHOD(load);

    static NAN_METHOD(New);

    std::shared_ptr<ledger::core::api::DynamicArray> _DynamicArray;
};
#endif //DJINNI_GENERATED_NJSDYNAMICARRAY_HPP
