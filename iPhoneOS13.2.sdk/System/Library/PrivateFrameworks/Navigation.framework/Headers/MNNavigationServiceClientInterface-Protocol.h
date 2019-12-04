//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class GEODirectionsRequest, GEODirectionsResponse, GEOStep, MNActiveRouteInfo, MNAudioOutputSetting, MNGuidanceEventFeedback, MNGuidanceJunctionViewInfo, MNGuidanceLaneInfo, MNGuidanceSignInfo, MNLocationDetails, MNNavigationDetails, MNTracePlaybackDetails, MNTrafficIncidentAlert, NSArray, NSData, NSDate, NSError, NSSet, NSString, NSUUID;
@protocol MNNavigationServiceProxy;

@protocol MNNavigationServiceClientInterface 
- (void)navigationServiceProxy:(id <MNNavigationServiceProxy>)arg1 didReceiveRealtimeUpdates:(NSSet *)arg2;
- (void)navigationServiceProxy:(id <MNNavigationServiceProxy>)arg1 willRequestRealtimeUpdatesForRouteIDs:(NSSet *)arg2;
- (void)navigationServiceProxy:(id <MNNavigationServiceProxy>)arg1 triggerHaptics:(int)arg2;
- (void)navigationServiceProxy:(id <MNNavigationServiceProxy>)arg1 didChangeVolume:(unsigned long long)arg2;
- (void)navigationServiceProxy:(id <MNNavigationServiceProxy>)arg1 didUpdateAudioOutputRouteSelection:(unsigned long long)arg2;
- (void)navigationServiceProxy:(id <MNNavigationServiceProxy>)arg1 didUpdateAudioOutputCurrentSettingForVoicePrompt:(MNAudioOutputSetting *)arg2;
- (void)navigationServiceProxy:(id <MNNavigationServiceProxy>)arg1 didUpdateAudioOutputCurrentSetting:(MNAudioOutputSetting *)arg2;
- (void)navigationServiceProxy:(id <MNNavigationServiceProxy>)arg1 didUpdateAudioOutputSettings:(NSData *)arg2;
- (void)navigationServiceProxy:(id <MNNavigationServiceProxy>)arg1 didStartUsingVoiceLanguage:(NSString *)arg2;
- (void)navigationServiceProxy:(id <MNNavigationServiceProxy>)arg1 didStartSpeakingPrompt:(NSString *)arg2;
- (void)navigationServiceProxy:(id <MNNavigationServiceProxy>)arg1 didActivateAudioSession:(_Bool)arg2;
- (void)navigationServiceProxy:(id <MNNavigationServiceProxy>)arg1 didUpdateTracePlaybackDetails:(MNTracePlaybackDetails *)arg2;
- (void)navigationServiceProxy:(id <MNNavigationServiceProxy>)arg1 didUpdatePossibleCommuteDestinations:(NSArray *)arg2;
- (void)navigationServiceProxy:(id <MNNavigationServiceProxy>)arg1 didInvalidateTrafficIncidentAlert:(MNTrafficIncidentAlert *)arg2;
- (void)navigationServiceProxy:(id <MNNavigationServiceProxy>)arg1 didUpdateTrafficIncidentAlert:(MNTrafficIncidentAlert *)arg2;
- (void)navigationServiceProxy:(id <MNNavigationServiceProxy>)arg1 didReceiveTrafficIncidentAlert:(MNTrafficIncidentAlert *)arg2;
- (void)navigationServiceProxy:(id <MNNavigationServiceProxy>)arg1 didUpdateAlternateRoutes:(NSArray *)arg2;
- (void)navigationServiceProxy:(id <MNNavigationServiceProxy>)arg1 didFailRerouteWithError:(NSError *)arg2;
- (void)navigationServiceProxy:(id <MNNavigationServiceProxy>)arg1 didSwitchToNewTransportType:(int)arg2 newRoute:(MNActiveRouteInfo *)arg3;
- (void)navigationServiceProxy:(id <MNNavigationServiceProxy>)arg1 didUpdateRouteWithNewRideSelection:(MNActiveRouteInfo *)arg2;
- (void)navigationServiceProxyDidCancelReroute:(id <MNNavigationServiceProxy>)arg1;
- (void)navigationServiceProxy:(id <MNNavigationServiceProxy>)arg1 didRerouteWithRoute:(MNActiveRouteInfo *)arg2 withLocationDetails:(MNLocationDetails *)arg3 withAlternateRoutes:(NSArray *)arg4;
- (void)navigationServiceProxyWillReroute:(id <MNNavigationServiceProxy>)arg1;
- (void)navigationServiceProxy:(id <MNNavigationServiceProxy>)arg1 didUpdatePreviewRoutes:(NSArray *)arg2 withSelectedRouteIndex:(unsigned long long)arg3;
- (void)navigationServiceProxy:(id <MNNavigationServiceProxy>)arg1 didUpdateMotionType:(unsigned long long)arg2 confidence:(unsigned long long)arg3;
- (void)navigationServiceProxy:(id <MNNavigationServiceProxy>)arg1 didUpdateHeading:(double)arg2 accuracy:(double)arg3;
- (void)navigationServiceProxy:(id <MNNavigationServiceProxy>)arg1 didUpdateETAResponseForRoute:(MNActiveRouteInfo *)arg2;
- (void)navigationServiceProxy:(id <MNNavigationServiceProxy>)arg1 didUpdateRemainingTime:(double)arg2 remainingDistance:(double)arg3;
- (void)navigationServiceProxy:(id <MNNavigationServiceProxy>)arg1 didUpdateDisplayETA:(NSDate *)arg2 displayRemainingMinutes:(unsigned long long)arg3 forRoute:(MNActiveRouteInfo *)arg4;
- (void)navigationServiceProxy:(id <MNNavigationServiceProxy>)arg1 updatedGuidanceEventFeedback:(MNGuidanceEventFeedback *)arg2;
- (void)navigationServiceProxy:(id <MNNavigationServiceProxy>)arg1 newGuidanceEventFeedback:(MNGuidanceEventFeedback *)arg2;
- (void)navigationServiceProxy:(id <MNNavigationServiceProxy>)arg1 didEnableGuidancePrompts:(_Bool)arg2;
- (void)navigationServiceProxyPredictingDidArrive:(id <MNNavigationServiceProxy>)arg1;
- (void)navigationServiceProxyDidArrive:(id <MNNavigationServiceProxy>)arg1;
- (void)navigationServiceProxyDidEnterPreArrivalState:(id <MNNavigationServiceProxy>)arg1;
- (void)navigationServiceProxy:(id <MNNavigationServiceProxy>)arg1 hideJunctionViewForId:(NSUUID *)arg2;
- (void)navigationServiceProxy:(id <MNNavigationServiceProxy>)arg1 showJunctionView:(MNGuidanceJunctionViewInfo *)arg2;
- (void)navigationServiceProxy:(id <MNNavigationServiceProxy>)arg1 hideLaneDirectionsForId:(NSUUID *)arg2;
- (void)navigationServiceProxy:(id <MNNavigationServiceProxy>)arg1 showLaneDirections:(MNGuidanceLaneInfo *)arg2;
- (void)navigationServiceProxy:(id <MNNavigationServiceProxy>)arg1 usePersistentDisplay:(_Bool)arg2;
- (void)navigationServiceProxy:(id <MNNavigationServiceProxy>)arg1 updateSignsWithInfo:(MNGuidanceSignInfo *)arg2;
- (void)navigationServiceProxyEndGuidanceUpdate:(id <MNNavigationServiceProxy>)arg1;
- (void)navigationServiceProxyBeginGuidanceUpdate:(id <MNNavigationServiceProxy>)arg1;
- (void)navigationServiceProxyHideSecondaryStep:(id <MNNavigationServiceProxy>)arg1;
- (void)navigationServiceProxy:(id <MNNavigationServiceProxy>)arg1 displaySecondaryStep:(GEOStep *)arg2 instructions:(NSArray *)arg3 shieldType:(int)arg4 shieldText:(NSString *)arg5 drivingSide:(int)arg6;
- (void)navigationServiceProxy:(id <MNNavigationServiceProxy>)arg1 displayManeuverAlertForAnnouncementStage:(unsigned long long)arg2;
- (void)navigationServiceProxy:(id <MNNavigationServiceProxy>)arg1 displayPrimaryStep:(GEOStep *)arg2 instructions:(NSArray *)arg3 shieldType:(int)arg4 shieldText:(NSString *)arg5 drivingSide:(int)arg6 maneuverStepIndex:(unsigned long long)arg7 isSynthetic:(_Bool)arg8;
- (void)navigationServiceProxy:(id <MNNavigationServiceProxy>)arg1 willAnnounce:(unsigned long long)arg2 inSeconds:(double)arg3;
- (void)navigationServiceProxy:(id <MNNavigationServiceProxy>)arg1 didUpdateDistanceUntilManeuver:(double)arg2 timeUntilManeuver:(double)arg3 forStepIndex:(unsigned long long)arg4;
- (void)navigationServiceProxy:(id <MNNavigationServiceProxy>)arg1 didUpdateDistanceUntilSign:(double)arg2 timeUntilSign:(double)arg3 forStepIndex:(unsigned long long)arg4;
- (void)navigationServiceProxy:(id <MNNavigationServiceProxy>)arg1 didUpdateProceedToRouteDistance:(double)arg2 displayString:(NSString *)arg3 closestStepIndex:(unsigned long long)arg4;
- (void)navigationServiceProxy:(id <MNNavigationServiceProxy>)arg1 didUpdateStepIndex:(unsigned long long)arg2 legIndex:(unsigned long long)arg3;
- (void)navigationServiceProxy:(id <MNNavigationServiceProxy>)arg1 didUpdateMatchedLocation:(MNLocationDetails *)arg2;
- (void)navigationServiceProxy:(id <MNNavigationServiceProxy>)arg1 didChangeNavigationState:(int)arg2;
- (void)navigationServiceProxy:(id <MNNavigationServiceProxy>)arg1 didFailWithError:(NSError *)arg2;
- (void)navigationServiceProxyWillResumeFromPauseNavigation:(id <MNNavigationServiceProxy>)arg1;
- (void)navigationServiceProxyWillPauseNavigation:(id <MNNavigationServiceProxy>)arg1;
- (void)navigationServiceProxy:(id <MNNavigationServiceProxy>)arg1 didUpdateNavigationDetails:(MNNavigationDetails *)arg2;
- (void)navigationServiceProxy:(id <MNNavigationServiceProxy>)arg1 willStartNavigationWithRoute:(MNActiveRouteInfo *)arg2 navigationType:(int)arg3 request:(GEODirectionsRequest *)arg4 response:(GEODirectionsResponse *)arg5;
- (void)navigationServiceProxy:(id <MNNavigationServiceProxy>)arg1 didChangeFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;
- (void)navigationServiceProxy:(id <MNNavigationServiceProxy>)arg1 willChangeFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;
@end

