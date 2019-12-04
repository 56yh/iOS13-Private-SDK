//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class CTServiceDescriptor, CTXPCServiceSubscriptionContext, NSString;

@protocol CoreTelephonyClientSubscriberDelegate 

@optional
- (void)userDefaultVoiceSlotDidChange:(CTXPCServiceSubscriptionContext *)arg1;
- (void)subscriberCountryCodeDidChange:(CTXPCServiceSubscriptionContext *)arg1;
- (void)shortLabelsDidChange;
- (void)authTokenChanged:(CTServiceDescriptor *)arg1;
- (void)simPinChangeRequestDidComplete:(CTXPCServiceSubscriptionContext *)arg1 success:(_Bool)arg2;
- (void)simPukEntryErrorDidOccur:(CTXPCServiceSubscriptionContext *)arg1 status:(NSString *)arg2;
- (void)simPinEntryErrorDidOccur:(CTXPCServiceSubscriptionContext *)arg1 status:(NSString *)arg2;
- (void)simLockSaveRequestDidComplete:(CTXPCServiceSubscriptionContext *)arg1 success:(_Bool)arg2;
- (void)simStatusDidChange:(CTXPCServiceSubscriptionContext *)arg1 status:(NSString *)arg2;
@end

