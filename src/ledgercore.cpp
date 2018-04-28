// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni

#include <nan.h>
#include <node.h>

#include "NJSSecp256k1Cpp.hpp"
#include "NJSNetworksCpp.hpp"
#include "NJSHashAlgorithmHelper.hpp"
#include "NJSEventCpp.hpp"
#include "NJSEventReceiver.hpp"
#include "NJSEventBusCpp.hpp"
#include "NJSEventPublisherCpp.hpp"
#include "NJSSynchronizationStatusCpp.hpp"
#include "NJSDerivationPathCpp.hpp"
#include "NJSTrustIndicatorCpp.hpp"
#include "NJSOperationCpp.hpp"
#include "NJSQueryFilterCpp.hpp"
#include "NJSOperationQueryCpp.hpp"
#include "NJSOperationListCallback.hpp"
#include "NJSAccountCpp.hpp"
#include "NJSAmountCallback.hpp"
#include "NJSStringListCallback.hpp"
#include "NJSBlockCallback.hpp"
#include "NJSWalletCpp.hpp"
#include "NJSAccountCallback.hpp"
#include "NJSI32Callback.hpp"
#include "NJSAccountListCallback.hpp"
#include "NJSAccountCreationInfoCallback.hpp"
#include "NJSExtendedKeyAccountCreationInfoCallback.hpp"
#include "NJSDynamicArrayCpp.hpp"
#include "NJSDynamicObjectCpp.hpp"
#include "NJSBlockchainExplorerEnginesCpp.hpp"
#include "NJSBlockchainObserverEnginesCpp.hpp"
#include "NJSKeychainEnginesCpp.hpp"
#include "NJSSynchronizerEnginesCpp.hpp"
#include "NJSSynchronizationEnginesCpp.hpp"
#include "NJSConfigurationDefaultsCpp.hpp"
#include "NJSConfigurationCpp.hpp"
#include "NJSPoolConfigurationCpp.hpp"
#include "NJSDatabaseBackendCpp.hpp"
#include "NJSRandomNumberGenerator.hpp"
#include "NJSEthereumPublicKeyProvider.hpp"
#include "NJSGetEthreumLikeWalletCallback.hpp"
#include "NJSEthereumLikeWalletCpp.hpp"
#include "NJSBitcoinLikeScriptChunkCpp.hpp"
#include "NJSBitcoinLikeScriptCpp.hpp"
#include "NJSBitcoinLikeAddressCpp.hpp"
#include "NJSBitcoinLikeExtendedPublicKeyCpp.hpp"
#include "NJSAmountCpp.hpp"
#include "NJSPreferencesCpp.hpp"
#include "NJSPreferencesEditorCpp.hpp"
#include "NJSBitcoinLikeWalletConfigurationCpp.hpp"
#include "NJSBitcoinLikeInputCpp.hpp"
#include "NJSBinaryCallback.hpp"
#include "NJSBitcoinLikeOutputCpp.hpp"
#include "NJSBitcoinLikeBlockCpp.hpp"
#include "NJSBitcoinLikeTransactionCpp.hpp"
#include "NJSBitcoinLikeOperationCpp.hpp"
#include "NJSBitcoinLikeTransactionBuilderCpp.hpp"
#include "NJSBitcoinLikeTransactionCallback.hpp"
#include "NJSBitcoinLikeAccountCpp.hpp"
#include "NJSBitcoinLikeOutputListCallback.hpp"
#include "NJSStringCallback.hpp"
#include "NJSBitcoinLikeWalletCpp.hpp"
#include "NJSWalletPoolCpp.hpp"
#include "NJSWalletListCallback.hpp"
#include "NJSWalletCallback.hpp"
#include "NJSCurrencyListCallback.hpp"
#include "NJSCurrencyCallback.hpp"
#include "NJSWalletPoolBuilderCpp.hpp"
#include "NJSWalletPoolCallback.hpp"
#include "NJSWebSocketConnectionCpp.hpp"
#include "NJSWebSocketClient.hpp"
#include "NJSHttpUrlConnection.hpp"
#include "NJSHttpRequestCpp.hpp"
#include "NJSHttpClient.hpp"
#include "NJSBigIntCpp.hpp"
#include "NJSPathResolver.hpp"
#include "NJSRunnableCpp.hpp"
#include "NJSLock.hpp"
#include "NJSExecutionContext.hpp"
#include "NJSThreadDispatcher.hpp"
#include "NJSLogPrinter.hpp"
#include "NJSLoggerCpp.hpp"
#include "NJSLedgerCoreCpp.hpp"

using namespace v8;
using namespace node;

static void initAll(Local<Object> target)
{
    Nan::HandleScope scope;
    NJSSecp256k1::Initialize(target);
    NJSNetworks::Initialize(target);
    NJSHashAlgorithmHelper::Initialize(target);
    NJSEvent::Initialize(target);
    NJSEventReceiver::Initialize(target);
    NJSEventBus::Initialize(target);
    NJSEventPublisher::Initialize(target);
    NJSSynchronizationStatus::Initialize(target);
    NJSDerivationPath::Initialize(target);
    NJSTrustIndicator::Initialize(target);
    NJSOperation::Initialize(target);
    NJSQueryFilter::Initialize(target);
    NJSOperationQuery::Initialize(target);
    NJSOperationListCallback::Initialize(target);
    NJSAccount::Initialize(target);
    NJSAmountCallback::Initialize(target);
    NJSStringListCallback::Initialize(target);
    NJSBlockCallback::Initialize(target);
    NJSWallet::Initialize(target);
    NJSAccountCallback::Initialize(target);
    NJSI32Callback::Initialize(target);
    NJSAccountListCallback::Initialize(target);
    NJSAccountCreationInfoCallback::Initialize(target);
    NJSExtendedKeyAccountCreationInfoCallback::Initialize(target);
    NJSDynamicArray::Initialize(target);
    NJSDynamicObject::Initialize(target);
    NJSBlockchainExplorerEngines::Initialize(target);
    NJSBlockchainObserverEngines::Initialize(target);
    NJSKeychainEngines::Initialize(target);
    NJSSynchronizerEngines::Initialize(target);
    NJSSynchronizationEngines::Initialize(target);
    NJSConfigurationDefaults::Initialize(target);
    NJSConfiguration::Initialize(target);
    NJSPoolConfiguration::Initialize(target);
    NJSDatabaseBackend::Initialize(target);
    NJSRandomNumberGenerator::Initialize(target);
    NJSEthereumPublicKeyProvider::Initialize(target);
    NJSGetEthreumLikeWalletCallback::Initialize(target);
    NJSEthereumLikeWallet::Initialize(target);
    NJSBitcoinLikeScriptChunk::Initialize(target);
    NJSBitcoinLikeScript::Initialize(target);
    NJSBitcoinLikeAddress::Initialize(target);
    NJSBitcoinLikeExtendedPublicKey::Initialize(target);
    NJSAmount::Initialize(target);
    NJSPreferences::Initialize(target);
    NJSPreferencesEditor::Initialize(target);
    NJSBitcoinLikeWalletConfiguration::Initialize(target);
    NJSBitcoinLikeInput::Initialize(target);
    NJSBinaryCallback::Initialize(target);
    NJSBitcoinLikeOutput::Initialize(target);
    NJSBitcoinLikeBlock::Initialize(target);
    NJSBitcoinLikeTransaction::Initialize(target);
    NJSBitcoinLikeOperation::Initialize(target);
    NJSBitcoinLikeTransactionBuilder::Initialize(target);
    NJSBitcoinLikeTransactionCallback::Initialize(target);
    NJSBitcoinLikeAccount::Initialize(target);
    NJSBitcoinLikeOutputListCallback::Initialize(target);
    NJSStringCallback::Initialize(target);
    NJSBitcoinLikeWallet::Initialize(target);
    NJSWalletPool::Initialize(target);
    NJSWalletListCallback::Initialize(target);
    NJSWalletCallback::Initialize(target);
    NJSCurrencyListCallback::Initialize(target);
    NJSCurrencyCallback::Initialize(target);
    NJSWalletPoolBuilder::Initialize(target);
    NJSWalletPoolCallback::Initialize(target);
    NJSWebSocketConnection::Initialize(target);
    NJSWebSocketClient::Initialize(target);
    NJSHttpUrlConnection::Initialize(target);
    NJSHttpRequest::Initialize(target);
    NJSHttpClient::Initialize(target);
    NJSBigInt::Initialize(target);
    NJSPathResolver::Initialize(target);
    NJSRunnable::Initialize(target);
    NJSLock::Initialize(target);
    NJSExecutionContext::Initialize(target);
    NJSThreadDispatcher::Initialize(target);
    NJSLogPrinter::Initialize(target);
    NJSLogger::Initialize(target);
    NJSLedgerCore::Initialize(target);
}
NODE_MODULE(ledgercore,initAll);
