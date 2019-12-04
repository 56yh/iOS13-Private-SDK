//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsUI/NUVideoPlayerEventTracker-Protocol.h>

@class NSString;
@protocol NSSNewsAnalyticsSessionManager, NUExternalAnalyticsEventStreamObserver;

@interface NUExternalAnalyticsVideoPlayerEventTracker : NSObject <NUVideoPlayerEventTracker>
{
    id <NSSNewsAnalyticsSessionManager> _sessionManager;
    id <NUExternalAnalyticsEventStreamObserver> _observer;
    NSString *_referrer;
}

@property(readonly, copy, nonatomic) NSString *referrer; // @synthesize referrer=_referrer;
@property(readonly, nonatomic) __weak id <NUExternalAnalyticsEventStreamObserver> observer; // @synthesize observer=_observer;
@property(readonly, nonatomic) id <NSSNewsAnalyticsSessionManager> sessionManager; // @synthesize sessionManager=_sessionManager;
- (void)_populateQueryParameters:(id)arg1 withVideoItem:(id)arg2;
- (id)_videoPlaybackEventQueryParametersForVideoItem:(id)arg1 streamUserAction:(id)arg2;
- (id)_articleViewEventWithQueryParametersForVideoItem:(id)arg1;
- (id)_eventWithQueryParameters:(id)arg1;
- (void)_submitEventWithQueryParameters:(id)arg1;
- (id)_defaultQueryParametersWithEventType:(id)arg1;
- (void)playbackFinishedWithVideoItem:(id)arg1 metadata:(id)arg2;
- (void)playbackResumedWithVideoItem:(id)arg1 metadata:(id)arg2;
- (void)playbackPausedWithVideoItem:(id)arg1 metadata:(id)arg2;
- (void)playbackStartedWithVideoItem:(id)arg1 metadata:(id)arg2;
- (void)videoDidAppearWithVideoItem:(id)arg1;
- (id)initWithSessionManager:(id)arg1 observer:(id)arg2 referrer:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

