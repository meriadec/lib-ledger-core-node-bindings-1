// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from dynamic.djinni

#ifndef DJINNI_GENERATED_DYNAMICOBJECT_HPP
#define DJINNI_GENERATED_DYNAMICOBJECT_HPP

#include "../utils/optional.hpp"
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

namespace ledger { namespace core { namespace api {

class DynamicArray;
enum class DynamicType;

/**
 *Class representing an object that stores values of different types of objects,
 *those values are appended dynamically in a map like structure with a given key through which they can be retreived
 */
class DynamicObject {
public:
    virtual ~DynamicObject() {}

    /**
     *Store a string with a given key
     *@param key, string, key to access stored value
     *@param value, string
     *@return DynamicObject object with value stored in it
     */
    virtual std::shared_ptr<DynamicObject> putString(const std::string & key, const std::string & value) = 0;

    /**
     *Store a 32 bits integer with a given key
     *@param key, string, key to access stored value
     *@param value, 32 bits integer
     *@return DynamicObject object with value stored in it
     */
    virtual std::shared_ptr<DynamicObject> putInt(const std::string & key, int32_t value) = 0;

    /**
     *Store a 64 bits integer with a given key
     *@param key, string, key to access stored value
     *@param value, 64 bits integer
     *@return DynamicObject object with value stored in it
     */
    virtual std::shared_ptr<DynamicObject> putLong(const std::string & key, int64_t value) = 0;

    /**
     *Store a double with a given key
     *@param key, string, key to access stored value
     *@param value, double
     *@return DynamicObject object with value stored in it
     */
    virtual std::shared_ptr<DynamicObject> putDouble(const std::string & key, double value) = 0;

    /**
     *Store a binary integer with a given key
     *@param key, string, key to access stored value
     *@param value, binary
     *@return DynamicObject object with value stored in it
     */
    virtual std::shared_ptr<DynamicObject> putData(const std::string & key, const std::vector<uint8_t> & value) = 0;

    /**
     *Store a boolean integer with a given key
     *@param key, string, key to access stored value
     *@param value, bool
     *@return DynamicObject object with value stored in it
     */
    virtual std::shared_ptr<DynamicObject> putBoolean(const std::string & key, bool value) = 0;

    /**
     *Store another DynamicObject object with a given key
     *@param key, string, key to access stored value
     *@return DynamicObject object with value stored in it
     */
    virtual std::shared_ptr<DynamicObject> putObject(const std::string & key, const std::shared_ptr<DynamicObject> & value) = 0;

    /**
     *Store a DynamicArray object with a given key
     *@param key, string, key to access stored reference
     *@return DynamicArray object with value stored in it
     */
    virtual std::shared_ptr<DynamicObject> putArray(const std::string & key, const std::shared_ptr<DynamicArray> & value) = 0;

    /**
     *Get, if exists, stored string having a specific key
     *@param key, string, key of string to look for
     *@return Optional string
     */
    virtual std::experimental::optional<std::string> getString(const std::string & key) = 0;

    /**
     *Get, if exists, stored 32 bits integer having a specific key
     *@param key, string, key of 32 bits integer to look for
     *@return Optional 32 bits integer
     */
    virtual std::experimental::optional<int32_t> getInt(const std::string & key) = 0;

    /**
     *Get, if exists, stored 64 bits integer having a specific key
     *@param key, string, key of 64 bits integer to look for
     *@return Optional 64 bits integer
     */
    virtual std::experimental::optional<int64_t> getLong(const std::string & key) = 0;

    /**
     *Get, if exists, stored double having a specific key
     *@param key, string, key of double to look for
     *@return Optional double
     */
    virtual std::experimental::optional<double> getDouble(const std::string & key) = 0;

    /**
     *Get, if exists, stored binary having a specific key
     *@param key, string, key of binary to look for
     *@return Optional binary
     */
    virtual std::experimental::optional<std::vector<uint8_t>> getData(const std::string & key) = 0;

    /**
     *Get, if exists, stored bool having a specific key
     *@param key, string, key of bool to look for
     *@return Optional bool
     */
    virtual std::experimental::optional<bool> getBoolean(const std::string & key) = 0;

    /**
     *Get, if exists, stored DynamicObject having a specific key
     *@param key, string, key of DynamicObject to look for
     *@return Optional DynamicObject
     */
    virtual std::shared_ptr<DynamicObject> getObject(const std::string & key) = 0;

    /**
     *Get, if exists, stored DynamicArray having a specific key
     *@param key, string, key of DynamicArray to look for
     *@return Optional DynamicArray
     */
    virtual std::shared_ptr<DynamicArray> getArray(const std::string & key) = 0;

    /**
     *Check if a key was used to store a value
     *@param key, string, key to look for
     *@return bool
     */
    virtual bool contains(const std::string & key) = 0;

    /**
     *Delete key and value stored with it
     *@param key, string, key to look for
     *@return bool, true if key exists and deletion succeeded, false otherwise
     */
    virtual bool remove(const std::string & key) = 0;

    /**
     *Get list of keys
     *@return list of string, list all stored keys
     */
    virtual std::vector<std::string> getKeys() = 0;

    /**
     *Get type of object stored with specific key
     *@param key, string, key to look for
     *@return Optional DynamicType enum entry
     */
    virtual std::experimental::optional<DynamicType> getType(const std::string & key) = 0;

    /**
     *Dump whole object's content as string
     *@return string
     */
    virtual std::string dump() = 0;

    /**
     *Serialize whole object to a binary
     *@return binary
     */
    virtual std::vector<uint8_t> serialize() = 0;

    /**
     *Get readonly status of object
     *@param bool
     */
    virtual bool isReadOnly() = 0;

    /**
     *Get count of stored references
     *@return 64 bits integer
     */
    virtual int64_t size() = 0;

    /**
     *Create a new instance of DynamicObject class
     *@return DynamicObject instance
     */
    static std::shared_ptr<DynamicObject> newInstance();

    /**
     *Parse a binary to a DynamicObject
     *@param serialized, binary to parse
     *@return Optional DynamicObject
     */
    static std::shared_ptr<DynamicObject> load(const std::vector<uint8_t> & serialized);
};

} } }  // namespace ledger::core::api
#endif //DJINNI_GENERATED_DYNAMICOBJECT_HPP
