//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GeoServices/GEONavdPeer.h>

#import <GeoServices/GEONavigationServerRequestStateXPCInterface-Protocol.h>

@class GEONavigationServer;

__attribute__((visibility("hidden")))
@interface GEONavigationServerPeer : GEONavdPeer <GEONavigationServerRequestStateXPCInterface>
{
    GEONavigationServer *_delegate;
}

@property(nonatomic) __weak GEONavigationServer *delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)dealloc;
- (void)requestUpdates;
- (void)requestNavigationVoiceVolume;
- (void)requestTrafficIncidentDetailsData;
- (void)requestPositionFromDestination;
- (void)requestPositionFromManeuver;
- (void)requestPositionFromSign;
- (void)requestRideSelections;
- (void)requestStepNameInfo;
- (void)requestStepIndex;
- (void)requestActiveRouteDetailsData;
- (void)requestGuidanceState;
- (void)requestTransitSummary;
- (void)requestRouteSummary;

@end

