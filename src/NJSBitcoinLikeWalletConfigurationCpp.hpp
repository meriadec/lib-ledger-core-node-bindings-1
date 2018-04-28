// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from bitcoin_like_wallet.djinni

#ifndef DJINNI_GENERATED_NJSBITCOINLIKEWALLETCONFIGURATION_HPP
#define DJINNI_GENERATED_NJSBITCOINLIKEWALLETCONFIGURATION_HPP


#include <memory>

#include <nan.h>
#include <node.h>
#include "../include/BitcoinLikeWalletConfiguration.hpp"

using namespace v8;
using namespace node;
using namespace std;
using namespace ledger::core::api;

class NJSBitcoinLikeWalletConfiguration: public Nan::ObjectWrap {
public:

    static void Initialize(Local<Object> target);
    virtual ~NJSBitcoinLikeWalletConfiguration() {};
    NJSBitcoinLikeWalletConfiguration(const std::shared_ptr<ledger::core::api::BitcoinLikeWalletConfiguration> &iBitcoinLikeWalletConfiguration):_BitcoinLikeWalletConfiguration(iBitcoinLikeWalletConfiguration){};

    static Handle<Object> wrap(const std::shared_ptr<ledger::core::api::BitcoinLikeWalletConfiguration> &object);
    static Nan::Persistent<ObjectTemplate> BitcoinLikeWalletConfiguration_prototype;
    std::shared_ptr<ledger::core::api::BitcoinLikeWalletConfiguration> getCppImpl(){return _BitcoinLikeWalletConfiguration;};

private:
    static NAN_METHOD(New);

    std::shared_ptr<ledger::core::api::BitcoinLikeWalletConfiguration> _BitcoinLikeWalletConfiguration;
};
#endif //DJINNI_GENERATED_NJSBITCOINLIKEWALLETCONFIGURATION_HPP
