//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <VisualVoicemail/VMTelephonyClient.h>

#import <VisualVoicemail/CoreTelephonyClientCarrierBundleDelegate-Protocol.h>

@class NSString;

@interface VMCarrierBundleClient : VMTelephonyClient <CoreTelephonyClientCarrierBundleDelegate>
{
}

- (void)carrierBundleChange:(id)arg1;
- (id)objectForDomain:(id)arg1 key:(id)arg2 subscription:(id)arg3 error:(id *)arg4;
- (id)objectForDomain:(id)arg1 key:(id)arg2 subscription:(id)arg3;
- (id)objectForKey:(id)arg1 subscription:(id)arg2 error:(id *)arg3;
- (id)objectForKey:(id)arg1 subscription:(id)arg2;
- (_Bool)isServiceSupportedForSubscription:(id)arg1;
- (id)serviceNameForSubscription:(id)arg1;
- (_Bool)isPasswordChangeSupportedForSubscription:(id)arg1;
- (_Bool)isPasswordChangeSupportedForDefaultSubscription;
- (double)maximumGreetingDurationForSubscription:(id)arg1;
- (_Bool)isGreetingChangeSupportedForSubscription:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

