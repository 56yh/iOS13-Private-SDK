//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VKFootprint : NSObject
{
    Box_3d7e3c2c _boundingRect;
    struct VKFootprintConvexHull_struct _convexHull;
    double _maxDistance;
    Matrix_6e1d3589 _furthestGroundPoint;
    double _minDistance;
    Matrix_6e1d3589 _nearestGroundPoint;
    double _minDepth;
    double _maxDepth;
    double _centerDepth;
    int _cornerGroundPointsCount;
    Matrix_6e1d3589 _cornerGroundPoints[12];
}

@property(readonly, nonatomic) int cornerGroundPointsCount; // @synthesize cornerGroundPointsCount=_cornerGroundPointsCount;
@property(readonly, nonatomic) Matrix_6e1d3589 nearestGroundPoint; // @synthesize nearestGroundPoint=_nearestGroundPoint;
@property(readonly, nonatomic) Matrix_6e1d3589 furthestGroundPoint; // @synthesize furthestGroundPoint=_furthestGroundPoint;
@property(readonly, nonatomic) double centerDepth; // @synthesize centerDepth=_centerDepth;
@property(readonly, nonatomic) double maxDepth; // @synthesize maxDepth=_maxDepth;
@property(readonly, nonatomic) double minDepth; // @synthesize minDepth=_minDepth;
@property(readonly, nonatomic) struct VKFootprintConvexHull_struct convexHull; // @synthesize convexHull=_convexHull;
@property(readonly, nonatomic) Box_3d7e3c2c boundingRect; // @synthesize boundingRect=_boundingRect;
- (id).cxx_construct;
- (id /* block */)annotationCoordinateTest;
- (id /* block */)annotationRectTest;
- (Box_3d7e3c2c)_expandedBoundingRect;
- (_Bool)containsGroundPoint:(const Matrix_6e1d3589 *)arg1;
- (_Bool)rejectsRect:(const Box_3d7e3c2c *)arg1;
- (void)computeFromCamera:(id)arg1;
@property(readonly, nonatomic) Matrix_6e1d3589 *cornerGroundPoints;

@end

