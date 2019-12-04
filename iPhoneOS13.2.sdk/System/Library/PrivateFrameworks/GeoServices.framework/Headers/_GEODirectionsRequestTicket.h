//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/GEODirectionServiceTicket-Protocol.h>

@class GEOComposedRoute, GEODirectionsRequest, GEODirectionsRequester, NSArray, NSDictionary, NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface _GEODirectionsRequestTicket : NSObject <GEODirectionServiceTicket>
{
    GEODirectionsRequest *_request;
    _Bool _isReroute;
    GEOComposedRoute *_originalRoute;
    NSArray *_waypoints;
    _Bool _isDoom;
    NSNumber *_requestPriority;
    _Bool _active;
    _Bool _canceled;
    NSDictionary *_userInfo;
    GEODirectionsRequester *_directionsRequester;
}

@property(copy, nonatomic) NSNumber *requestPriority; // @synthesize requestPriority=_requestPriority;
@property(nonatomic) _Bool isDoom; // @synthesize isDoom=_isDoom;
@property(readonly, nonatomic) _Bool canceled; // @synthesize canceled=_canceled;
@property(readonly, nonatomic) _Bool active; // @synthesize active=_active;
@property(retain, nonatomic) NSArray *waypoints; // @synthesize waypoints=_waypoints;
@property(retain, nonatomic) GEOComposedRoute *originalRoute; // @synthesize originalRoute=_originalRoute;
@property(nonatomic) _Bool isReroute; // @synthesize isReroute=_isReroute;
@property(nonatomic) __weak GEODirectionsRequester *directionsRequester; // @synthesize directionsRequester=_directionsRequester;
@property(readonly, nonatomic) GEODirectionsRequest *request; // @synthesize request=_request;
- (void)cancel;
- (void)submitWithHandler:(id /* block */)arg1 auditToken:(id)arg2 networkActivity:(id /* block */)arg3;
@property(readonly, nonatomic) NSDictionary *responseUserInfo;
@property(readonly, copy) NSString *description;
- (id)initWithRequest:(id)arg1 directionsRequester:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

