//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/PKPaymentAuthorizationCoordinatorDelegate-Protocol.h>
#import <PassKitCore/PKPaymentAuthorizationCoordinatorPrivateDelegate-Protocol.h>

@class NSError, NSString, PKPaymentAuthorizationCoordinator, PKPaymentPass, PKPeerPaymentAccount, PKPeerPaymentContactResolver, PKPeerPaymentControllerInternalState, PKPeerPaymentPerformResponse, PKPeerPaymentQuote, PKPeerPaymentRecipient, PKPeerPaymentRequestToken, PKPeerPaymentWebService;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface PKPeerPaymentController : NSObject <PKPaymentAuthorizationCoordinatorDelegate, PKPaymentAuthorizationCoordinatorPrivateDelegate>
{
    PKPeerPaymentControllerInternalState *_is;
    PKPeerPaymentAccount *_account;
    PKPaymentPass *_peerPaymentPass;
    PKPeerPaymentContactResolver *_contactResolver;
    PKPaymentAuthorizationCoordinator *_performQuoteAuthorizationCoordinator;
    NSObject<OS_dispatch_group> *_performQuoteGroup;
    NSObject<OS_dispatch_queue> *_performQuoteCallbackQueue;
    _Bool _performQuoteSuccess;
    NSError *_performQuoteError;
    PKPeerPaymentWebService *_webService;
}

+ (id)_displayNameForRecipientAddress:(id)arg1 contactResolver:(id)arg2 foundInContacts:(_Bool *)arg3;
+ (id)displayNameForAddress:(id)arg1 contactResolver:(id)arg2;
+ (id)_peerPaymentPassURL;
+ (_Bool)errorIsTermsAcceptanceRequiredError:(id)arg1;
+ (_Bool)errorIsIdentityVerificationRequiredError:(id)arg1;
+ (unsigned long long)proposedResolutionForError:(id)arg1;
+ (id)_displayableErrorOverrideForUnderlyingError:(id)arg1;
+ (id)displayableErrorForError:(id)arg1;
@property(readonly, nonatomic) PKPeerPaymentWebService *webService; // @synthesize webService=_webService;
@property(readonly, copy) NSString *description;
- (void)_setPerformQuoteSuccess:(_Bool)arg1;
- (id)internalState;
- (void)aggDAuthorizedQuoteWithSuccess:(_Bool)arg1 authorizedQuote:(id)arg2;
- (void)paymentAuthorizationCoordinator:(id)arg1 didAuthorizePeerPaymentQuote:(id)arg2 handler:(id /* block */)arg3;
- (_Bool)_contactInfoIsValidForAuthorizedQuote:(id)arg1 errors:(id *)arg2;
- (void)paymentAuthorizationCoordinator:(id)arg1 didAuthorizePayment:(id)arg2 handler:(id /* block */)arg3;
- (void)paymentAuthorizationCoordinator:(id)arg1 didSelectPaymentMethod:(id)arg2 handler:(id /* block */)arg3;
- (void)paymentAuthorizationCoordinatorDidFinish:(id)arg1;
- (id)summaryItemsForQuote:(id)arg1;
- (id)_contactResolver;
- (id)contactForHandle:(id)arg1;
- (id)displayNameForRecipientAddress:(id)arg1 foundInContacts:(_Bool *)arg2;
- (id)displayNameForRecipientAddress:(id)arg1;
- (id)displayableErrorForError:(id)arg1;
- (void)_handleAccountChanged:(id)arg1;
@property(readonly, nonatomic) PKPaymentPass *peerPaymentPass;
@property(readonly, nonatomic) PKPeerPaymentAccount *account;
- (void)handleTermsAcceptanceRequiredWithError:(id)arg1 completion:(id /* block */)arg2;
- (void)handleIdentityVerificationWithError:(id)arg1 completion:(id /* block */)arg2;
- (void)statusForPaymentIdentifier:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)performAction:(id)arg1 withPaymentIdentifier:(id)arg2 completion:(id /* block */)arg3;
- (void)formalRequestTokenForAmount:(id)arg1 completion:(id /* block */)arg2;
- (void)_updateLastUsedAlternateFundingSource;
- (void)performQuoteWithCompletion:(id /* block */)arg1;
- (void)performQuote:(id)arg1 completion:(id /* block */)arg2;
- (id)_defaultAlternateFundingSourceForMode:(unsigned long long)arg1;
- (void)_requestQuoteWithRequest:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)quoteWithAmount:(id)arg1 requestToken:(id)arg2 alternateFundingSource:(id)arg3 completion:(id /* block */)arg4;
- (void)quoteWithAmount:(id)arg1 requestToken:(id)arg2 completion:(id /* block */)arg3;
- (void)quoteWithAmount:(id)arg1 completion:(id /* block */)arg2;
- (void)selectMode:(unsigned long long)arg1;
- (void)identifyRecipientSelf;
- (void)identifyRecipientDebitCardWithCompletion:(id /* block */)arg1;
- (void)identifyRecipientWithRoutingNumber:(id)arg1 accountNumber:(id)arg2 accountName:(id)arg3 completion:(id /* block */)arg4;
- (void)_refreshRecipientWithCompletion:(id /* block */)arg1;
- (void)identifyRecipientWithAddress:(id)arg1 senderAddress:(id)arg2 completion:(id /* block */)arg3;
@property(readonly, nonatomic) PKPeerPaymentPerformResponse *performQuoteResponse;
@property(readonly, nonatomic) PKPeerPaymentQuote *quote;
@property(readonly, nonatomic) PKPeerPaymentRequestToken *requestToken;
@property(readonly, copy, nonatomic) NSString *recipientDisplayName;
@property(readonly, copy, nonatomic) PKPeerPaymentRecipient *recipient;
@property(readonly, copy, nonatomic) NSString *recipientPhoneOrEmail;
@property(readonly, copy, nonatomic) NSString *senderPhoneOrEmail;
@property(readonly, nonatomic) unsigned long long mode;
@property(readonly, nonatomic) unsigned long long state;
- (_Bool)restoreStateWithExternalizedControllerState:(id)arg1;
- (id)externalizedControllerState;
- (void)_resetToState:(unsigned long long)arg1;
- (void)reset;
- (_Bool)_ensureState:(unsigned long long)arg1;
- (void)_setState:(unsigned long long)arg1 notify:(_Bool)arg2;
- (void)dealloc;
- (id)initWithPeerPaymentWebService:(id)arg1;
- (void)requestTokenForAmount:(id)arg1 completion:(id /* block */)arg2;
- (void)identifyRecipientWithAddress:(id)arg1 completion:(id /* block */)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

