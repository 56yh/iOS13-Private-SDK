//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MapsSupport/MSPRouteInformationSource-Protocol.h>

@class GEOComposedWaypoint, NSString;

@interface MSPRidesharingInformationSource : NSObject <MSPRouteInformationSource>
{
    GEOComposedWaypoint *_startWaypoint;
    GEOComposedWaypoint *_endWaypoint;
}

@property(readonly, nonatomic, getter=_endWaypoint) GEOComposedWaypoint *endWaypoint; // @synthesize endWaypoint=_endWaypoint;
@property(readonly, nonatomic, getter=_startWaypoint) GEOComposedWaypoint *startWaypoint; // @synthesize startWaypoint=_startWaypoint;
- (id)ifGEOStorageRouteRequestStorage;
- (id)ifRidesharingInformationSource;
- (id)initWithStartWaypoint:(id)arg1 endWaypoint:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

