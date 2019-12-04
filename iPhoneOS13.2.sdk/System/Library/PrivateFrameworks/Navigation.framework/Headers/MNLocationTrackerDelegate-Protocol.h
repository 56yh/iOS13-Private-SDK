//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class GEODirectionsRequest, GEODirectionsResponse, MNActiveRouteInfo, MNLocation, MNLocationTracker, MNTrafficIncidentAlert, NSArray, NSError;

@protocol MNLocationTrackerDelegate 

@optional
- (void)locationTracker:(MNLocationTracker *)arg1 updatedTrafficIncidentAlert:(MNTrafficIncidentAlert *)arg2;
- (void)locationTracker:(MNLocationTracker *)arg1 invalidatedTrafficIncidentAlert:(MNTrafficIncidentAlert *)arg2;
- (void)locationTracker:(MNLocationTracker *)arg1 receivedTrafficIncidentAlert:(MNTrafficIncidentAlert *)arg2 responseCallback:(void (^)(_Bool))arg3;
- (void)locationTracker:(MNLocationTracker *)arg1 didSwitchToNewTransportType:(int)arg2 newRoute:(MNActiveRouteInfo *)arg3 request:(GEODirectionsRequest *)arg4 response:(GEODirectionsResponse *)arg5;
- (void)locationTracker:(MNLocationTracker *)arg1 didUpdateAlternateRoutes:(NSArray *)arg2;
- (void)locationTracker:(MNLocationTracker *)arg1 didFailRerouteWithError:(NSError *)arg2;
- (void)locationTracker:(MNLocationTracker *)arg1 didReroute:(MNActiveRouteInfo *)arg2 newAlternateRoutes:(NSArray *)arg3 rerouteReason:(unsigned long long)arg4 request:(GEODirectionsRequest *)arg5 response:(GEODirectionsResponse *)arg6;
- (void)locationTrackerDidCancelReroute:(MNLocationTracker *)arg1;
- (void)locationTracker:(MNLocationTracker *)arg1 didSuppressReroute:(NSError *)arg2;
- (void)locationTrackerWillReroute:(MNLocationTracker *)arg1;
- (void)locationTracker:(MNLocationTracker *)arg1 didUpdateETAForRoute:(MNActiveRouteInfo *)arg2;
- (void)locationTracker:(MNLocationTracker *)arg1 matchedToStepIndex:(unsigned long long)arg2 legIndex:(unsigned long long)arg3;
- (void)locationTracker:(MNLocationTracker *)arg1 didUpdateMatchedLocation:(MNLocation *)arg2;
- (void)locationTrackerDidTimeoutInArrivalRegion:(MNLocationTracker *)arg1;
- (void)locationTrackerDidArrive:(MNLocationTracker *)arg1;
- (void)locationTrackerDidEnterPreArrivalState:(MNLocationTracker *)arg1;
- (void)locationTracker:(MNLocationTracker *)arg1 didChangeState:(int)arg2;
@end
