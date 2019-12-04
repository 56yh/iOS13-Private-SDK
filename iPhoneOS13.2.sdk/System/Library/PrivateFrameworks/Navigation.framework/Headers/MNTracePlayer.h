//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Navigation/MNTimeProvider-Protocol.h>
#import <Navigation/MNTracePlayerSchedulerDelegate-Protocol.h>

@class MNLocation, MNSessionUpdateManager, MNTrace, MNTracePlayerETAUpdater, MNTracePlayerScheduler, MNTracePlayerTimelineStream, NSData, NSDate, NSHashTable, NSString;

@interface MNTracePlayer : NSObject <MNTracePlayerSchedulerDelegate, MNTimeProvider>
{
    MNTrace *_trace;
    double _traceStartTimestamp;
    NSHashTable *_observers;
    MNTracePlayerScheduler *_scheduler;
    MNTracePlayerTimelineStream *_locationStream;
    MNLocation *_lastReportedLocation;
    _Bool _isPlaying;
    _Bool _isPaused;
    double _duration;
    double _speedMultiplier;
    _Bool _forceDirectionsResponsesFromTrace;
    MNTracePlayerTimelineStream *_directionsStream;
    _Bool _shouldPlayETARequests;
    MNTracePlayerETAUpdater *_etaUpdater;
    MNTracePlayerTimelineStream *_etaUpdatesStream;
}

@property(nonatomic) _Bool forceDirectionsResponsesFromTrace; // @synthesize forceDirectionsResponsesFromTrace=_forceDirectionsResponsesFromTrace;
@property(nonatomic) _Bool shouldPlayETARequests; // @synthesize shouldPlayETARequests=_shouldPlayETARequests;
@property(nonatomic) double speedMultiplier; // @synthesize speedMultiplier=_speedMultiplier;
@property(readonly, nonatomic) double duration; // @synthesize duration=_duration;
@property(readonly, nonatomic) _Bool isPaused; // @synthesize isPaused=_isPaused;
@property(readonly, nonatomic) _Bool isPlaying; // @synthesize isPlaying=_isPlaying;
@property(readonly, nonatomic) MNTrace *trace; // @synthesize trace=_trace;
- (id)_locationWithCurrentDate:(id)arg1;
- (double)_responseTimeForRequestAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) MNSessionUpdateManager *sessionUpdater;
- (void)_createTimelineStreams;
- (void)tracePlayerScheduler:(id)arg1 didUpdatePosition:(double)arg2;
@property(readonly, nonatomic) unsigned long long selectedRouteIndex;
@property(readonly, nonatomic) NSData *selectedRouteID;
@property(readonly, nonatomic) NSDate *currentLocationDate;
@property(readonly, nonatomic) double currentTime;
@property(readonly, nonatomic) double position;
- (void)jumpToBookmarkAtIndex:(unsigned long long)arg1;
- (void)skipByTimeInterval:(double)arg1;
- (void)jumpToLocationAtIndex:(unsigned long long)arg1;
- (void)jumpToTime:(double)arg1;
- (_Bool)requestDirectionsNearTimestamp:(double)arg1 withHandler:(id /* block */)arg2 errorHandler:(id /* block */)arg3;
- (_Bool)requestDirectionsWithHandler:(id /* block */)arg1 errorHandler:(id /* block */)arg2;
- (void)resume;
- (void)pause;
- (void)stop;
- (void)startAtLocationIndex:(unsigned long long)arg1;
- (void)start;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
@property(readonly, nonatomic) int mainTransportType;
- (void)dealloc;
- (id)initWithTrace:(id)arg1;
- (id)initWithPath:(id)arg1 outError:(id *)arg2;
- (id)initWithPath:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

