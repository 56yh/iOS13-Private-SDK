//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GeoServices/GEOComposedRouteLeg.h>

@class GEOComposedTransitWalkingRouteStep, GEOComposedWalkingRouteStep;
@protocol GEOTransitRoutingIncidentMessage;

@interface GEOComposedWalkingRouteLeg : GEOComposedRouteLeg
{
    unsigned long long _transitIncidentMessageStepIndex;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) unsigned long long transitIncidentMessageStepIndex; // @synthesize transitIncidentMessageStepIndex=_transitIncidentMessageStepIndex;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_transitIncidentMessageStep;
@property(readonly, nonatomic) GEOComposedTransitWalkingRouteStep *arrivalStep;
@property(readonly, nonatomic) GEOComposedWalkingRouteStep *lastWalkingStep;
@property(readonly, nonatomic) id <GEOTransitRoutingIncidentMessage> transitRouteDetailsIncidentMessage;
@property(readonly, nonatomic) id <GEOTransitRoutingIncidentMessage> transitSteppingIncidentMessage;
- (id)initWithComposedRoute:(id)arg1 stepRange:(struct _NSRange)arg2 pointRange:(struct _NSRange)arg3 transitIncidentMessageStepIndex:(unsigned long long)arg4;

@end

