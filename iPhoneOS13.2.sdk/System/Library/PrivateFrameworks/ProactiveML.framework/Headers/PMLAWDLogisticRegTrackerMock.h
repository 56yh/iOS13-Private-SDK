//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProactiveML/PMLProtoBufTracker.h>

@class NSArray, PMLTrackerMockAdapter;

@interface PMLAWDLogisticRegTrackerMock : PMLProtoBufTracker
{
    PMLTrackerMockAdapter *_adapter;
}

+ (id)mockTrackerForPlanId:(struct NSString *)arg1;
+ (id)mockTracker;
@property(readonly) NSArray *trackedWeights; // @dynamic trackedWeights;
@property(readonly) NSArray *trackedGradients; // @dynamic trackedGradients;
- (void)clearTrackedMessages;
- (id)initWithModel:(id)arg1;
- (id)initWithAdapter:(id)arg1 modelInfo:(id)arg2;

@end

