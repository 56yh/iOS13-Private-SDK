//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Navigation/MNAudioOutputSettingsManagerObserver-Protocol.h>
#import <Navigation/MNNavigationSessionObserver-Protocol.h>
#import <Navigation/MNNavigationTraceManagerDelegate-Protocol.h>
#import <Navigation/MNSessionUpdateManagerDelegate-Protocol.h>
#import <Navigation/MNSettingsObserver-Protocol.h>

@class GEOApplicationAuditToken, MNAudioOutputSettingsManager, MNNavigationProxyUpdater, MNNavigationSession, MNNavigationTraceManager, MNRouteManager, MNSessionUpdateManager, NSMutableDictionary;
@protocol MNNavigationSessionManagerDelegate;

@interface MNNavigationSessionManager : NSObject <MNSessionUpdateManagerDelegate, MNNavigationSessionObserver, MNSettingsObserver, MNNavigationTraceManagerDelegate, MNAudioOutputSettingsManagerObserver>
{
    id <MNNavigationSessionManagerDelegate> _delegate;
    MNSessionUpdateManager *_updateManager;
    MNNavigationSession *_navigationSession;
    MNRouteManager *_routeManager;
    MNNavigationProxyUpdater *_proxyUpdater;
    MNNavigationTraceManager *_traceManager;
    MNAudioOutputSettingsManager *_audioOutputSettingsManager;
    NSMutableDictionary *_trafficIncidentAlertCallbacks;
    GEOApplicationAuditToken *_auditToken;
}

@property(readonly, nonatomic) MNNavigationTraceManager *traceManager; // @synthesize traceManager=_traceManager;
@property(readonly, nonatomic) GEOApplicationAuditToken *auditToken; // @synthesize auditToken=_auditToken;
@property(readonly, nonatomic) MNRouteManager *routeManager; // @synthesize routeManager=_routeManager;
@property(readonly, nonatomic) MNNavigationSession *navigationSession; // @synthesize navigationSession=_navigationSession;
@property(readonly, nonatomic) MNSessionUpdateManager *updateManager; // @synthesize updateManager=_updateManager;
@property(nonatomic) __weak id <MNNavigationSessionManagerDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)audioOutputSettingsManager:(id)arg1 didUpdateRouteSelection:(NSUInteger)arg2;
- (void)audioOutputSettingsManager:(id)arg1 didUpdateCurrentSettingForVoicePrompt:(id)arg2;
- (void)audioOutputSettingsManager:(id)arg1 didUpdateCurrentSetting:(id)arg2;
- (void)audioOutputSettingsManager:(id)arg1 didUpdateSettings:(id)arg2;
- (void)navigationTraceManagerDidFailToRecordTrace:(id)arg1;
- (void)navigationTraceManager:(id)arg1 didUpdateTracePlaybackDetails:(id)arg2;
- (void)settingsManager:(id)arg1 didUpdateSettings:(id)arg2 previousSettings:(id)arg3;
- (void)navigationSession:(id)arg1 triggerHaptics:(int)arg2;
- (void)navigationSession:(id)arg1 didStartSpeakingPrompt:(id)arg2;
- (void)navigationSession:(id)arg1 didActivateAudioSession:(BOOL)arg2;
- (void)navigationSession:(id)arg1 didInvalidateTrafficIncidentAlert:(id)arg2;
- (void)navigationSession:(id)arg1 didUpdateTrafficIncidentAlert:(id)arg2;
- (void)navigationSession:(id)arg1 didReceiveTrafficIncidentAlert:(id)arg2 responseCallback:(id /* CDUnknownBlockType */)arg3;
- (void)navigationSession:(id)arg1 updatedGuidanceEventFeedback:(id)arg2;
- (void)navigationSession:(id)arg1 newGuidanceEventFeedback:(id)arg2;
- (void)navigationSession:(id)arg1 didEnableGuidancePrompts:(BOOL)arg2;
- (void)navigationSession:(id)arg1 hideJunctionViewForId:(id)arg2;
- (void)navigationSession:(id)arg1 showJunctionView:(id)arg2;
- (void)navigationSession:(id)arg1 hideLaneDirectionsForId:(id)arg2;
- (void)navigationSession:(id)arg1 showLaneDirections:(id)arg2;
- (void)navigationSession:(id)arg1 usePersistentDisplay:(BOOL)arg2;
- (void)navigationSession:(id)arg1 updateSignsWithInfo:(id)arg2;
- (void)navigationSessionEndGuidanceUpdate:(id)arg1;
- (void)navigationSessionBeginGuidanceUpdate:(id)arg1;
- (void)navigationSessionHideSecondaryStep:(id)arg1;
- (void)navigationSession:(id)arg1 displaySecondaryStep:(id)arg2 instructions:(id)arg3 shieldType:(int)arg4 shieldText:(id)arg5 drivingSide:(int)arg6;
- (void)navigationSession:(id)arg1 displayManeuverAlertForAnnouncementStage:(NSUInteger)arg2;
- (void)navigationSession:(id)arg1 displayPrimaryStep:(id)arg2 instructions:(id)arg3 shieldType:(int)arg4 shieldText:(id)arg5 drivingSide:(int)arg6 maneuverStepIndex:(NSUInteger)arg7 isSynthetic:(BOOL)arg8;
- (void)navigationSession:(id)arg1 willAnnounce:(NSUInteger)arg2 inSeconds:(double)arg3;
- (void)navigationSession:(id)arg1 currentStepIndex:(NSUInteger)arg2 didUpdateDistanceUntilManeuver:(double)arg3 timeUntilManeuver:(double)arg4;
- (void)navigationSession:(id)arg1 currentStepIndex:(NSUInteger)arg2 didUpdateDistanceUntilSign:(double)arg3 timeUntilSign:(double)arg4;
- (void)navigationSession:(id)arg1 proceedToRouteDistance:(double)arg2 displayString:(id)arg3 closestStepIndex:(NSUInteger)arg4;
- (void)navigationSession:(id)arg1 didUpdateAlternateRoutes:(id)arg2;
- (void)navigationSession:(id)arg1 didFailRerouteWithError:(id)arg2;
- (void)navigationSession:(id)arg1 didSwitchToNewTransportType:(int)arg2 newRoute:(id)arg3;
- (void)navigationSession:(id)arg1 didReroute:(id)arg2 withLocation:(id)arg3 withAlternateRoutes:(id)arg4;
- (void)navigationSessionDidCancelReroute:(id)arg1;
- (void)navigationSessionWillReroute:(id)arg1;
- (void)navigationSession:(id)arg1 didUpdateMotionType:(NSUInteger)arg2 confidence:(NSUInteger)arg3;
- (void)navigationSession:(id)arg1 didUpdateHeading:(double)arg2 accuracy:(double)arg3;
- (void)navigationSession:(id)arg1 didUpdateETAResponseForRoute:(id)arg2;
- (void)navigationSession:(id)arg1 didUpdateRemainingTime:(double)arg2 remainingDistance:(double)arg3;
- (void)navigationSession:(id)arg1 didUpdateDisplayETA:(id)arg2 displayRemainingMinutes:(NSUInteger)arg3 forRoute:(id)arg4;
- (void)navigationSessionWillResumeFromPause:(id)arg1;
- (void)navigationSessionWillPause:(id)arg1;
- (void)navigationSessionDidTimeoutInArrivalRegion:(id)arg1;
- (void)navigationSessionDidArrive:(id)arg1;
- (void)navigationSessionDidEnterPreArrivalState:(id)arg1;
- (void)navigationSession:(id)arg1 matchedToStepIndex:(NSUInteger)arg2 legIndex:(NSUInteger)arg3;
- (void)navigationSession:(id)arg1 didUpdateMatchedLocation:(id)arg2;
- (void)navigationSession:(id)arg1 didChangeNavigationState:(int)arg2;
- (id)userLocationForUpdateManager:(id)arg1;
- (id)routeInfoForUpdateManager:(id)arg1;
- (BOOL)wantsETAUpdates;
- (void)updateManager:(id)arg1 didReceiveETAError:(id)arg2;
- (void)updateManager:(id)arg1 didUpdateETAForRouteInfo:(id)arg2;
- (void)updateManager:(id)arg1 didReceiveETAResponse:(id)arg2 toRequest:(id)arg3;
- (void)updateManager:(id)arg1 willSendETARequest:(id)arg2;
- (void)updateManager:(id)arg1 didReceiveTransitError:(id)arg2;
- (void)updateManager:(id)arg1 didReceiveTransitUpdates:(id)arg2;
- (void)updateManager:(id)arg1 willSendTransitUpdateRequestForRouteIDs:(id)arg2;
- (void)updateManager:(id)arg1 didReceiveTransitUpdateResponse:(id)arg2;
- (void)updateManager:(id)arg1 willSendTransitUpdateRequests:(id)arg2;
- (void)resumeRealtimeUpdatesForSubscriber:(id)arg1;
- (void)pauseRealtimeUpdatesForSubscriber:(id)arg1;
- (void)setIsNavigatingInLowGuidance:(BOOL)arg1;
- (id)_traceManager;
- (id)_proxyUpdater;
- (id)_routeManager;
- (void)recordPedestrianTracePath:(id)arg1;
- (void)recordTraceBookmarkAtCurrentPositionWthScreenshotData:(id)arg1;
- (void)setTracePosition:(double)arg1;
- (void)setTracePlaybackSpeed:(double)arg1;
- (void)setTraceIsPlaying:(BOOL)arg1;
- (void)acceptReroute:(BOOL)arg1 forTrafficIncidentAlert:(id)arg2;
- (void)setJunctionViewImageWidth:(double)arg1 height:(double)arg2;
- (void)setRideIndex:(NSUInteger)arg1 forLegIndex:(NSUInteger)arg2;
- (void)setDisplayedStepIndex:(NSUInteger)arg1;
- (void)setIsConnectedToCarplay:(BOOL)arg1;
- (void)setVoiceGuidanceLevel:(NSUInteger)arg1;
- (NSUInteger)voiceGuidanceLevel;
- (void)setGuidancePromptsEnabled:(BOOL)arg1;
- (void)setCurrentAudioOutputSetting:(id)arg1;
- (void)setHFPPreference:(BOOL)arg1 forSetting:(id)arg2;
- (void)stopCurrentGuidancePrompt;
- (BOOL)vibrateForPrompt:(NSUInteger)arg1;
- (BOOL)repeatCurrentTrafficAlert;
- (BOOL)repeatCurrentGuidance;
- (void)addInjectedEvent:(id)arg1;
- (void)switchToRoute:(id)arg1;
- (void)resumeOriginalDestination;
- (void)updateDestination:(id)arg1;
- (void)stopNavigation;
- (void)startNavigationWithDetails:(id)arg1;
- (void)updateForStartNavigation:(id)arg1;
- (void)setRoutesForPreview:(id)arg1 selectedRouteIndex:(NSUInteger)arg2;
- (void)dealloc;
- (id)initWithAuditToken:(id)arg1;
- (id)init;

@end
