//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface PPConnectionsMetricsTracker : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)triggerFromCriteria:(id)arg1;
+ (id)donationSourceFromBundleID:(id)arg1;
+ (id)consumerStringForConsumerType:(unsigned long long)arg1;
+ (id)sharedInstance;
- (id)privacyFriendlyBundleIdentifierWith:(id)arg1;
- (void)trackPasteboardItemFromBundleId:(id)arg1 hasAddress:(_Bool)arg2 isEligible:(_Bool)arg3;
- (void)trackDonationFromBundleId:(id)arg1 source:(id)arg2 hasLatLon:(_Bool)arg3 isEligible:(_Bool)arg4;
- (void)trackTimingForConsumer:(id)arg1 time:(unsigned long long)arg2;
- (void)trackDismissalForConsumer:(id)arg1 source:(id)arg2 trigger:(id)arg3 originatingApp:(id)arg4 targetApp:(id)arg5;
- (void)trackOpportunityForConsumer:(id)arg1 trigger:(id)arg2 targetApp:(id)arg3;
- (void)trackConversionGoalForConsumer:(id)arg1 source:(id)arg2 trigger:(id)arg3 originatingApp:(id)arg4 targetApp:(id)arg5 converted:(_Bool)arg6;
- (id)init;

@end

