//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class PKPaymentApplication, PKPaymentPass, PKPaymentTransaction;

@interface PKPendingPaymentTransaction : NSObject
{
    PKPaymentTransaction *_transaction;
    PKPaymentPass *_pass;
    PKPaymentApplication *_paymentApplication;
}

@property(retain, nonatomic) PKPaymentApplication *paymentApplication; // @synthesize paymentApplication=_paymentApplication;
@property(retain, nonatomic) PKPaymentPass *pass; // @synthesize pass=_pass;
@property(retain, nonatomic) PKPaymentTransaction *transaction; // @synthesize transaction=_transaction;
- (id)initWithTransaction:(id)arg1 pass:(id)arg2 paymentApplication:(id)arg3;

@end

