// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from thread_dispatcher.djinni

#ifndef DJINNI_GENERATED_NJSEXECUTIONCONTEXT_HPP
#define DJINNI_GENERATED_NJSEXECUTIONCONTEXT_HPP


#include "../include/Runnable.hpp"
#include "NJSRunnableCpp.hpp"
#include <cstdint>
#include <memory>

#include <nan.h>
#include <node.h>
#include "../include/ExecutionContext.hpp"

using namespace v8;
using namespace node;
using namespace std;
using namespace ledger::core::api;

class NJSExecutionContext: public Nan::ObjectWrap, public ledger::core::api::ExecutionContext {
public:

    static void Initialize(Local<Object> target);
    ~NJSExecutionContext()
    {
        persistent().Reset();
        njs_impl.Reset();
        njs_impl.Reset();
    };
    NJSExecutionContext(Local<Object> njs_implementation){njs_impl.Reset(njs_implementation);};

    /**
     *Execute a given runnable
     *@param runnalbe, Runnable object
     */
    void execute(const std::shared_ptr<Runnable> & runnable);

    /**
     *Execute a given runnable with a delay
     *@param runnalbe, Runnable object
     *@param millis, 64 bits integer, delay in milli-seconds
     */
    void delay(const std::shared_ptr<Runnable> & runnable, int64_t millis);

private:
    /**
     *Execute a given runnable
     *@param runnalbe, Runnable object
     */
    static NAN_METHOD(execute);

    /**
     *Execute a given runnable with a delay
     *@param runnalbe, Runnable object
     *@param millis, 64 bits integer, delay in milli-seconds
     */
    static NAN_METHOD(delay);

    static NAN_METHOD(New);

    static NAN_METHOD(addRef);
    static NAN_METHOD(removeRef);
    Nan::Persistent<Object> njs_impl;
};
#endif //DJINNI_GENERATED_NJSEXECUTIONCONTEXT_HPP
