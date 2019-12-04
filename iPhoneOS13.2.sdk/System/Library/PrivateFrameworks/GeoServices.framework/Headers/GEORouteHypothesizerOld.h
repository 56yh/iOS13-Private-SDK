//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/GEOETAUpdaterDelegate-Protocol.h>
#import <GeoServices/GEORouteHypothesizerUpdaterDelegate-Protocol.h>

@class GEOComposedRoute, GEOComposedWaypoint, GEODirectionsRequestFeedback, GEOETARoute, GEOETAUpdater, GEOLocation, GEOLocationShifter, GEORouteAttributes, GEORouteHypothesisOld, GEORouteHypothesizerUpdater, NSData, NSDate, NSString;
@protocol GEORouteHypothesizerDelegate;

@interface GEORouteHypothesizerOld : NSObject <GEORouteHypothesizerUpdaterDelegate, GEOETAUpdaterDelegate>
{
    id <GEORouteHypothesizerDelegate> _delegate;
    id /* block */ _handler;
    GEODirectionsRequestFeedback *_feedback;
    GEOLocationShifter *_locationShifter;
    GEOComposedWaypoint *_source;
    GEOComposedWaypoint *_destination;
    NSDate *_departureDate;
    NSDate *_arrivalDate;
    GEORouteHypothesisOld *_hypothesis;
    GEOLocation *_lastLocation;
    NSDate *_suggestedNextUpdateDate;
    NSDate *_lastETARequestDate;
    double _etaUpdateInterval;
    unsigned long long _etaUpdateFrequency;
    GEOETAUpdater *_etaUpdater;
    GEOETARoute *_liveETARoute;
    GEOETARoute *_baselineETARoute;
    GEORouteAttributes *_routeAttributes;
    GEORouteHypothesizerUpdater *_updater;
    NSData *_usualRouteData;
}

@property(nonatomic) unsigned long long etaUpdateFrequency; // @synthesize etaUpdateFrequency=_etaUpdateFrequency;
@property(readonly, nonatomic) NSDate *suggestedNextUpdateDate; // @synthesize suggestedNextUpdateDate=_suggestedNextUpdateDate;
@property(readonly, nonatomic) NSDate *arrivalDate; // @synthesize arrivalDate=_arrivalDate;
@property(readonly, nonatomic) NSDate *departureDate; // @synthesize departureDate=_departureDate;
@property(readonly, nonatomic) GEOComposedWaypoint *destination; // @synthesize destination=_destination;
@property(readonly, nonatomic) GEOComposedWaypoint *source; // @synthesize source=_source;
@property(retain, nonatomic) GEODirectionsRequestFeedback *feedback; // @synthesize feedback=_feedback;
@property(nonatomic) __weak id <GEORouteHypothesizerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)etaUpdaterReceivedInvalidRoute:(id)arg1 newRoute:(id)arg2 incidentsOnRoute:(id)arg3 incidentsOffRoute:(id)arg4;
- (void)etaUpdaterUpdatedETA:(id)arg1;
- (void)etaUpdater:(id)arg1 receivedError:(id)arg2;
- (void)etaUpdater:(id)arg1 receivedETATrafficUpdateResponse:(id)arg2;
- (void)etaUpdater:(id)arg1 willSendETATrafficUpdateRequest:(id)arg2;
- (id)etaUpdaterRoutesForETATrafficUpdateRequest:(id)arg1;
- (void)routeHypothesizerUpdater:(id)arg1 receivedNewRoute:(id)arg2 request:(id)arg3 response:(id)arg4;
- (void)routeHypothesizerUpdater:(id)arg1 willRequestNewRoute:(id)arg2;
- (void)_updateLocationAndETAUpdateInterval;
- (void)_refreshETAWithRouteMatch:(id)arg1;
- (void)_createUpdaterWithStartingLocation:(id)arg1;
- (void)_updateETAWithRouteMatch:(id)arg1;
- (void)_updateLocation:(id)arg1 hypothesisHandler:(id /* block */)arg2;
- (void)updateLocation:(id)arg1 hypothesisHandler:(id /* block */)arg2;
- (void)addRouteAttributes:(id)arg1;
@property(readonly, nonatomic) GEOComposedRoute *route;
@property(readonly, nonatomic) _Bool supportsDirections;
@property(readonly, nonatomic) _Bool supportsLiveTraffic;
- (void)dealloc;
- (void)_commonInit;
- (id)initWithSource:(id)arg1 toDestination:(id)arg2 arrivalDate:(id)arg3 usualRouteData:(id)arg4;
- (id)initWithSource:(id)arg1 toDestination:(id)arg2 departureDate:(id)arg3 usualRouteData:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

