//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GEOComposedRoute, GEORouteMatch, NSArray, NSHashTable;

@interface VKNavContext : NSObject
{
    GEOComposedRoute *_route;
    GEORouteMatch *_routeMatch;
    unsigned long long _currentStepIndex;
    struct vector<GEOLocationCoordinate2D, std::__1::allocator<GEOLocationCoordinate2D>> _pointsToFrame;
    NSHashTable *_observers;
    NSArray *_groupedManeuverCounts;
    unsigned long long _navCameraHeadingOverride;
    struct vector<AdditionalRouteInfo, std::__1::allocator<AdditionalRouteInfo>> _additionalRoutesToFrame;
    unsigned long long _navigationCameraHeadingOverride;
}

@property(retain, nonatomic) GEORouteMatch *routeMatch; // @synthesize routeMatch=_routeMatch;
@property(copy, nonatomic) NSArray *groupedManeuverCounts; // @synthesize groupedManeuverCounts=_groupedManeuverCounts;
@property(nonatomic) unsigned long long currentStepIndex; // @synthesize currentStepIndex=_currentStepIndex;
@property(readonly, nonatomic) GEOComposedRoute *route; // @synthesize route=_route;
- (id).cxx_construct;
- (void)enumerateAdditionalRoutesToFrameUsingBlock:(id /* block */)arg1;
- (void)addRouteToFrame:(id)arg1 divergenceCoord:(struct PolylineCoordinate)arg2 convergenceCoord:(struct PolylineCoordinate)arg3;
- (void)clearAdditionalRoutesToFrame;
@property(nonatomic) unsigned long long navigationCameraHeadingOverride; // @synthesize navigationCameraHeadingOverride=_navigationCameraHeadingOverride;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)_notifyObserversStateChanged;
- (void)enumeratePointsToFrameUsingBlock:(id /* block */)arg1;
- (void)addPointToFrame:(CDStruct_c3b9c2ee)arg1;
- (void)clearPointsToFrame;
@property(readonly, nonatomic) unsigned long long groupedManeuverCount; // @dynamic groupedManeuverCount;
- (void)updateWithNewRoute:(id)arg1 currentStepIndex:(unsigned long long)arg2;
- (void)dealloc;
- (id)init;

@end
