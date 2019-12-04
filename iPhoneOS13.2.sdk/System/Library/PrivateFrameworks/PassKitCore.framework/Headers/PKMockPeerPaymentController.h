//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PassKitCore/PKPeerPaymentController.h>

@class PKCurrencyAmount;

@interface PKMockPeerPaymentController : PKPeerPaymentController
{
    id _performCompletion;
    _Bool _shouldGenerateMockTransactions;
    PKCurrencyAmount *_mockBalance;
}

@property(nonatomic) _Bool shouldGenerateMockTransactions; // @synthesize shouldGenerateMockTransactions=_shouldGenerateMockTransactions;
@property(retain, nonatomic) PKCurrencyAmount *mockBalance; // @synthesize mockBalance=_mockBalance;
- (void)performAction:(id)arg1 withPaymentIdentifier:(id)arg2 completion:(id /* block */)arg3;
- (void)paymentAuthorizationCoordinator:(id *)arg1 didSelectPaymentMethod:(id)arg2 handler:(id /* block */)arg3;
- (void)_insertPaymentTransactionForSecondaryFundingSourceIfNecessary:(id)arg1;
- (void)_insertPeerPaymentTransactionForAuthroizedTransferQuote:(id)arg1;
- (void)_adjustBalanceForAuthorizedTransferQuote:(id)arg1;
- (void)paymentAuthorizationCoordinator:(id *)arg1 didAuthorizePeerPaymentQuote:(id)arg2 handler:(id /* block */)arg3;
- (void)formalRequestTokenForAmount:(id)arg1 completion:(id /* block */)arg2;
- (void)quoteWithAmount:(id)arg1 requestToken:(id)arg2 alternateFundingSource:(id)arg3 completion:(id /* block */)arg4;
- (id)_quoteItemDictionaryWithType:(unsigned long long)arg1 amount:(id)arg2 alternateFundingSource:(id)arg3 featureDescriptor:(id)arg4;
- (void)identifyRecipientWithAddress:(id)arg1 senderAddress:(id)arg2 completion:(id /* block */)arg3;
- (id)initWithPeerPaymentWebService:(id)arg1;

@end

