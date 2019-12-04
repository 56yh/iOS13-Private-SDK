//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppleMediaServices/AMSTask.h>

#import <AppleMediaServices/AMSBagConsumer-Protocol.h>

@class NSString;

@interface AMSCardEnrollmentVerificationTask : AMSTask <AMSBagConsumer>
{
}

+ (id)_performSilentEnrollmentPaymentSessionWithContext:(id)arg1;
+ (id)_bagKeySet;
+ (void)addRequiredBagKeysToAggregator:(id)arg1;
+ (id)bagSubProfileVersion;
+ (id)bagSubProfile;
+ (id)bagKeySet;
+ (id)performPaymentVerificationForPayment:(id)arg1 isDefault:(_Bool)arg2 bag:(id)arg3;
+ (id)performPaymentVerificationForPayment:(id)arg1 isDefault:(_Bool)arg2;
+ (void)verifyPayment:(id)arg1 isDefault:(_Bool)arg2 bag:(id)arg3 completion:(id /* block */)arg4;
+ (void)verifyPayment:(id)arg1 isDefault:(_Bool)arg2 completion:(id /* block */)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

