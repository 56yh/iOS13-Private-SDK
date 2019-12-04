//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Navigation/MNSteppingLocationTracker.h>

@class GEORoadMatcher, GEOTransitRouteMatcher, MNLocation, NSDate;

__attribute__((visibility("hidden")))
@interface MNTransitLocationTracker : MNSteppingLocationTracker
{
    GEOTransitRouteMatcher *_transitRouteMatcher;
    GEORoadMatcher *_roadMatcher;
    NSDate *_lastLocationTimestamp;
    NSDate *_lastAccurateLocationDate;
    MNLocation *_lastMatchedLocation;
    NSDate *_startDate;
    _Bool _hasArrived;
    _Bool _debugSnapToTransitLines;
}

@property(nonatomic) _Bool debugSnapToTransitLines; // @synthesize debugSnapToTransitLines=_debugSnapToTransitLines;
- (_Bool)_isInaccurateLocation:(id)arg1;
- (double)_timeToDisplayStaleGPSLocation;
- (id)_roadMatchForOffRouteLocation:(id)arg1 routeMatch:(id)arg2;
- (id)_locationForInaccurateLocation:(id)arg1;
- (id)_correctedLocationForLocation:(id)arg1;
- (id)_matchedLocationForLocation:(id)arg1;
- (void)stopTracking;
- (void)startTracking;
- (int)transportType;
- (id)initWithNavigationSession:(id)arg1;

@end

