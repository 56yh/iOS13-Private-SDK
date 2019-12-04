//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PassKitCore/PKPaymentDataItem.h>

@class CNContact, PKCurrencyAmount, PKPaymentApplication, PKPaymentPass;

@interface PKPaymentCardDataItem : PKPaymentDataItem
{
    _Bool _showPeerPaymentBalance;
    PKCurrencyAmount *_peerPaymentBalance;
}

+ (long long)dataType;
@property(retain, nonatomic) PKCurrencyAmount *peerPaymentBalance; // @synthesize peerPaymentBalance=_peerPaymentBalance;
@property(nonatomic) _Bool showPeerPaymentBalance; // @synthesize showPeerPaymentBalance=_showPeerPaymentBalance;
- (_Bool)isValidWithError:(id *)arg1;
@property(readonly, nonatomic) _Bool shouldShowCardArt;
- (long long)status;
@property(readonly, nonatomic) _Bool requiresBillingAddress;
@property(readonly, nonatomic) CNContact *billingAddress;
@property(readonly, nonatomic) PKPaymentApplication *paymentApplication;
@property(readonly, nonatomic) PKPaymentPass *pass;
- (id)errors;

@end

