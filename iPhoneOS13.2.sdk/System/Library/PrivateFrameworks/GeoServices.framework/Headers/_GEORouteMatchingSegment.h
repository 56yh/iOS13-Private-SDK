//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GEOComposedRouteStep;

__attribute__((visibility("hidden")))
@interface _GEORouteMatchingSegment : NSObject
{
    unsigned int _startPointIndex;
    CDStruct_2c43369c _startCoordinate;
    CDStruct_2c43369c _endCoordinate;
    GEOComposedRouteStep *_step;
}

@property(retain, nonatomic) GEOComposedRouteStep *step; // @synthesize step=_step;
@property(nonatomic) CDStruct_c3b9c2ee endCoordinate; // @synthesize endCoordinate=_endCoordinate;
@property(nonatomic) CDStruct_c3b9c2ee startCoordinate; // @synthesize startCoordinate=_startCoordinate;
@property(nonatomic) unsigned int startPointIndex; // @synthesize startPointIndex=_startPointIndex;
- (id)description;
- (double)distanceFromCoordinate:(CDStruct_c3b9c2ee)arg1 outCoordinateOnSegment:(CDStruct_c3b9c2ee *)arg2 outRouteCoordinate:(struct PolylineCoordinate *)arg3;

@end

