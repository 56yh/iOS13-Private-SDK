//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GEOMapFeatureJunction, GEOMapFeatureRoad;

__attribute__((visibility("hidden")))
@interface GEORoadMatcherCandidateSegment : NSObject
{
    double _score;
    GEOMapFeatureRoad *_road;
    CDStruct_2c43369c _coordinateOnSegment;
    double _distanceFromSegment;
    double _segmentAngle;
    GEOMapFeatureJunction *_junction;
    double _distanceInMetersFromJunction;
}

@property(readonly, nonatomic) double distanceFromJunction; // @synthesize distanceFromJunction=_distanceInMetersFromJunction;
@property(readonly, nonatomic) GEOMapFeatureJunction *junction; // @synthesize junction=_junction;
@property(readonly, nonatomic) double segmentAngle; // @synthesize segmentAngle=_segmentAngle;
@property(readonly, nonatomic) double distanceFromSegment; // @synthesize distanceFromSegment=_distanceFromSegment;
@property(readonly, nonatomic) CDStruct_c3b9c2ee coordinateOnSegment; // @synthesize coordinateOnSegment=_coordinateOnSegment;
@property(readonly, nonatomic) GEOMapFeatureRoad *road; // @synthesize road=_road;
@property(readonly, nonatomic) double score; // @synthesize score=_score;
- (id)initWithCoordinate:(CDStruct_c3b9c2ee)arg1 angle:(double)arg2 road:(id)arg3 startCoordinate:(CDStruct_c3b9c2ee)arg4 endCoordinate:(CDStruct_c3b9c2ee)arg5;

@end

