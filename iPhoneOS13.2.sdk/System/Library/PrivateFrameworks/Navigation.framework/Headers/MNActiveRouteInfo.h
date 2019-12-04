//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



@class GEOComposedRoute, GEOComposedRouteTraffic, GEOETARoute, GEOETATrafficUpdateResponse, GEOTransitRouteUpdateRequest, NSDate, NSUUID;

@interface MNActiveRouteInfo : NSObject <NSSecureCoding>
{
    GEOComposedRoute *_route;
    GEOETARoute *_etaRoute;
    GEOETATrafficUpdateResponse *_etaResponse;
    NSDate *_displayETA;
    unsigned long long _displayRemainingMinutes;
    GEOComposedRouteTraffic *_traffic;
    unsigned long long _alternateRouteIndex;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) unsigned long long alternateRouteIndex; // @synthesize alternateRouteIndex=_alternateRouteIndex;
@property(retain, nonatomic) GEOComposedRouteTraffic *traffic; // @synthesize traffic=_traffic;
@property(nonatomic) unsigned long long displayRemainingMinutes; // @synthesize displayRemainingMinutes=_displayRemainingMinutes;
@property(retain, nonatomic) NSDate *displayETA; // @synthesize displayETA=_displayETA;
@property(retain, nonatomic) GEOETATrafficUpdateResponse *etaResponse; // @synthesize etaResponse=_etaResponse;
@property(retain, nonatomic) GEOETARoute *etaRoute; // @synthesize etaRoute=_etaRoute;
@property(retain, nonatomic) GEOComposedRoute *route; // @synthesize route=_route;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, nonatomic) GEOTransitRouteUpdateRequest *transitRouteUpdateRequest;
@property(readonly, nonatomic) NSUUID *routeID;
- (void)updateWithETARoute:(id)arg1 offsetInMeters:(double)arg2;
- (id)initWithRoute:(id)arg1 trafficRoute:(id)arg2 routeInitalizerData:(id)arg3;
- (id)initWithRoute:(id)arg1 traffic:(id)arg2;
- (id)initWithRoute:(id)arg1;

@end

