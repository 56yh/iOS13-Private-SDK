//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaPlaybackCore/MPCReportingController.h>

@class NSObject, NSString, SSVPlayActivityController;
@protocol OS_dispatch_queue;

@interface MPCJinglePlayActivityReportingController : MPCReportingController
{
    NSObject<OS_dispatch_queue> *_accessSerialQueue;
    double _nonCatalogAggregatePlayDuration;
    double _nonCatalogAggregateStartTime;
    NSString *_nonCatalogDeviceName;
    _Bool _nonCatalogOffline;
    _Bool _nonCatalogSBEnabled;
    unsigned long long _nonCatalogStoreAccountID;
    NSString *_nonCatalogBuildVersion;
    NSString *_nonCatalogStoreFrontID;
    unsigned long long _nonCatalogSourceType;
    _Bool _shouldReportAggregateTimePlayActivityEvents;
    _Bool _shouldReportPlayActivityEvents;
    SSVPlayActivityController *_playActivityController;
}

@property(nonatomic) _Bool shouldReportPlayActivityEvents; // @synthesize shouldReportPlayActivityEvents=_shouldReportPlayActivityEvents;
@property(nonatomic) _Bool shouldReportAggregateTimePlayActivityEvents; // @synthesize shouldReportAggregateTimePlayActivityEvents=_shouldReportAggregateTimePlayActivityEvents;
@property(readonly, nonatomic) SSVPlayActivityController *playActivityController; // @synthesize playActivityController=_playActivityController;
- (void)_clearNonCatalogAggregatePlayActivityEventData;
- (id)_captureNonCatalogAggregatePlayActivityEventWithNonCatalogAggregateEndTime:(double)arg1;
- (void)_applicationWillTerminateNotification:(id)arg1;
- (void)completePendingPlayActivityEvents:(id)arg1 forSessionToken:(unsigned long long)arg2 withResult:(unsigned long long)arg3 completionHandler:(id /* block */)arg4;
- (void)acquirePendingPlayActivityEventsForStoreAccountID:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;
- (void)_recordReportingEvents:(id)arg1;
- (void)dealloc;
- (id)initWithWritingStyle:(unsigned long long)arg1;
- (id)init;

@end

