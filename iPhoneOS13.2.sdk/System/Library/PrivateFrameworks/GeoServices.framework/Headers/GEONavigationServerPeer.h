//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GeoServices/GEONavdPeer.h>

#import <GeoServices/GEONavigationServerRequestStateXPCInterface-Protocol.h>

@class GEONavigationServer, NSString;

__attribute__((visibility("hidden")))
@interface GEONavigationServerPeer : GEONavdPeer <GEONavigationServerRequestStateXPCInterface>
{
    GEONavigationServer *_delegate;
}

@property(nonatomic) __weak GEONavigationServer *delegate; // @synthesize delegate=_delegate;
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

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

