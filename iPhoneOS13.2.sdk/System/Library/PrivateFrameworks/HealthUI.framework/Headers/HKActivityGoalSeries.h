//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthUI/HKGraphSeries.h>

@class HKFillStyle, HKStrokeStyle;

@interface HKActivityGoalSeries : HKGraphSeries
{
    HKStrokeStyle *_strokeStyle;
    HKFillStyle *_fillStyle;
}

- (_Bool)blockCoordinate:(id)arg1 greaterThan:(id)arg2;
- (_Bool)blockCoordinate:(id)arg1 lessThan:(id)arg2;
- (_Bool)blockCoordinateIsVisibleInsideOfChartRect:(struct CGRect)arg1 blockCoordinate:(id)arg2;
- (double)yAxisDifferenceToPoint:(struct CGPoint)arg1 blockCoordinate:(id)arg2 chartRect:(struct CGRect)arg3;
- (double)xAxisDistanceFromPoint:(struct CGPoint)arg1 blockCoordinate:(id)arg2 chartRect:(struct CGRect)arg3;
- (double)distanceFromPoint:(struct CGPoint)arg1 blockCoordinate:(id)arg2 chartRect:(struct CGRect)arg3;
- (_Bool)supportsMultiTouchSelection;
- (void)_enumerateCoordinateListByRemovingOffscreenPoints:(id)arg1 withTransform:(struct CGAffineTransform)arg2 zoomLevelConfiguration:(id)arg3 axisRect:(struct CGRect)arg4 block:(id /* block */)arg5;
- (void)_enumerateCoordinateList:(id)arg1 withTransform:(struct CGAffineTransform)arg2 zoomLevelConfiguration:(id)arg3 axisRect:(struct CGRect)arg4 block:(id /* block */)arg5;
- (void)drawSeriesWithBlockCoordinates:(id)arg1 axisRect:(struct CGRect)arg2 zoomLevelConfiguration:(id)arg3 pointTransform:(struct CGAffineTransform)arg4 renderContext:(struct CGContext *)arg5 secondaryRenderContext:(id)arg6;
- (id)coordinatesForBlock:(id)arg1 blockPath:(CDStruct_6ca94699)arg2 xAxis:(id)arg3 yAxis:(id)arg4;
- (id)initWithStrokeStyle:(id)arg1 fillStyle:(id)arg2;

@end

