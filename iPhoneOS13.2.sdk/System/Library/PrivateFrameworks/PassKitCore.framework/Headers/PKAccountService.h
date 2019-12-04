//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/PKAccountServiceExportedInterface-Protocol.h>

@class NSHashTable, NSLock, PKXPCService;
@protocol OS_dispatch_queue;

@interface PKAccountService : NSObject <PKAccountServiceExportedInterface>
{
    PKXPCService *_remoteService;
    NSObject<OS_dispatch_queue> *_replyQueue;
    NSLock *_lockObservers;
    NSHashTable *_observers;
    long long _accountChangedNotificationSuspensionCount;
}

+ (id)sharedInstance;
- (void)scheduledPaymentsChangedForAccountIdentifier:(id)arg1;
- (void)statementsChangedForAccountIdentifier:(id)arg1;
- (void)accountRemoved:(id)arg1;
- (void)accountChanged:(id)arg1;
- (void)accountAdded:(id)arg1;
- (void)_accessObserversWithHandler:(id /* block */)arg1;
- (void)unregisterObserver:(id)arg1;
- (void)registerObserver:(id)arg1;
- (void)exportTransactionDataForAccountIdentifier:(id)arg1 withFileFormat:(id)arg2 beginDate:(id)arg3 endDate:(id)arg4 productTimeZone:(id)arg5 completion:(id /* block */)arg6;
- (void)markUserViewedIntroduction:(_Bool)arg1 forInstallmentIdentifiers:(id)arg2 accountIdentifier:(id)arg3;
- (void)updateScheduledPaymentsWithAccount:(id)arg1 completion:(id /* block */)arg2;
- (void)scheduledPaymentsWithAccountIdentifier:(id)arg1 includeFailedRecurringPayments:(_Bool)arg2 completion:(id /* block */)arg3;
- (void)scheduledPaymentsWithAccountIdentifier:(id)arg1 includeFailedRecurringPayments:(_Bool)arg2 allowFetchFromServer:(_Bool)arg3 completion:(id /* block */)arg4;
- (void)billPaymentSelectedSuggestedAmountDataEventsForAccountIdentifier:(id)arg1 withStartDate:(id)arg2 endDate:(id)arg3 completion:(id /* block */)arg4;
- (void)billPaymentSelectedSuggestedAmountDataEventsForAccountIdentifier:(id)arg1 withStatementIdentifier:(id)arg2 completion:(id /* block */)arg3;
- (void)virtualCardsInKeychainWithCompletion:(id /* block */)arg1;
- (void)activatePhysicalCard:(id)arg1 withActivationCode:(id)arg2 forFeatureIdentifier:(unsigned long long)arg3 completion:(id /* block */)arg4;
- (void)inactivePhysicalCardForFeatureIdentifier:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)activateBroadwayPhysicalCardWithActivationCode:(id)arg1 completion:(id /* block */)arg2;
- (void)completePhysicalCardActionRequest:(id)arg1 withSignature:(id)arg2 completion:(id /* block */)arg3;
- (void)beginPhysicalCardAction:(id)arg1 onPhysicalCardWithIdentifier:(id)arg2 forAccountWithIdentifier:(id)arg3 deviceMetadata:(id)arg4 completion:(id /* block */)arg5;
- (void)completePhysicalCardRequest:(id)arg1 withSignature:(id)arg2 completion:(id /* block */)arg3;
- (void)beginPhysicalCardRequestWithOrder:(id)arg1 forAccountWithIdentifier:(id)arg2 deviceMetadata:(id)arg3 completion:(id /* block */)arg4;
- (void)writeVirtualCardToKeychain:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchKeychainCredentialForVirtualCardIdentifier:(id)arg1 forAccountIdentifier:(id)arg2 completion:(id /* block */)arg3;
- (void)noteVirtualCardAutoFilledBySafari:(id)arg1 completion:(id /* block */)arg2;
- (void)cardCredentialsForVirtualCard:(id)arg1 authorization:(id)arg2 completion:(id /* block */)arg3;
- (void)updateVirtualCardsWithAccountIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)performVirtualCardAction:(long long)arg1 forVirtualCardIdentifier:(id)arg2 forAccountIdentifier:(id)arg3 completion:(id /* block */)arg4;
- (void)createVirtualCard:(long long)arg1 forAccountIdentifier:(id)arg2 completion:(id /* block */)arg3;
- (void)lastRedemptionEventToPeerPaymentForAccountIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)creditStatementsForAccountIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)insertEvents:(id)arg1 withAccountidentifier:(id)arg2 completion:(id /* block */)arg3;
- (void)deleteEventWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)deleteEventsWithAccountIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)eventsForAccountIdentifier:(id)arg1 types:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 orderedByDate:(long long)arg5 limit:(unsigned long long)arg6 completion:(id /* block */)arg7;
- (void)eventsForAccountIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)updateUserInfoForAccountIdentifier:(id)arg1 contact:(id)arg2 completion:(id /* block */)arg3;
- (void)userInfoForAccountIdentifier:(id)arg1 forceFetch:(_Bool)arg2 completion:(id /* block */)arg3;
- (void)updatePreferences:(id)arg1 forAccountWithIdentifier:(id)arg2 completion:(id /* block */)arg3;
- (void)preferencesForAccountWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)performAccountAction:(id)arg1 withAccountIdentifier:(id)arg2 completion:(id /* block */)arg3;
- (void)termsWithIdentifier:(id)arg1 accepted:(_Bool)arg2 withAccountIdentifier:(id)arg3 completion:(id /* block */)arg4;
- (void)defaultAccountForFeature:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)scheduleSetupReminderForAccountWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)noteAccountDeleted;
- (void)deleteLocalAccountWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)deleteAccountWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)updateAccountWithIdentifier:(id)arg1 extended:(_Bool)arg2 completion:(id /* block */)arg3;
- (void)updateAccountWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)accountForPassWithUniqueID:(id)arg1 completion:(id /* block */)arg2;
- (void)accountWithVirtualCardIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)accountWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)updateMockAccountWithAccount:(id)arg1 completion:(id /* block */)arg2;
- (void)updateAccountsWithCompletion:(id /* block */)arg1;
- (void)accountsWithPassLocallyProvisionedWithCompletion:(id /* block */)arg1;
- (void)accountsForProvisioningWithCompletion:(id /* block */)arg1;
- (void)accountsWithCompletion:(id /* block */)arg1;
- (id)_synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (id)_remoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (id /* block */)errorHandlerForMethod:(SEL)arg1 completion:(id /* block */)arg2;
- (void)_accountsChanged:(id)arg1;
- (void)dealloc;
- (id)init;

@end

