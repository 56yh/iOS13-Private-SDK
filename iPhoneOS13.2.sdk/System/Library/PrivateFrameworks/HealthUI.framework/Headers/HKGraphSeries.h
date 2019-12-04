//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthUI/HKGraphSeriesDataSourceDelegate-Protocol.h>

@class HKAxis, HKGraphSeriesDataSource, HKPropertyAnimationApplier, HKValueRange, NSArray, NSMutableDictionary, NSString, NSUUID, UIColor, UIView;
@protocol HKAxisAccessoryViewDelegate, HKGraphSeriesAxisAnnotation, HKGraphSeriesAxisScalingRule, HKSeriesDelegate;

@interface HKGraphSeries : NSObject <HKGraphSeriesDataSourceDelegate>
{
    _Bool _dirty;
    CDStruct_f3788345 _selectedPathRange;
    NSMutableDictionary *_cachedCoordinateListsByBlockPath;
    NSMutableDictionary *_cachedDataBlocksByBlockPath;
    HKValueRange *_closestXCoordinateRange;
    HKPropertyAnimationApplier *_animationApplier;
    HKValueRange *_visibleValueRange;
    _Bool _allowsSelection;
    _Bool _adjustYAxisForLabels;
    _Bool _animatingDuringAutoscale;
    _Bool _primarySeriesForAutoscale;
    _Bool _wantsRoundingDuringYRangeExpansion;
    HKGraphSeriesDataSource *_dataSource;
    NSArray *_titleLegendEntries;
    NSArray *_detailLegendEntries;
    id <HKSeriesDelegate> _delegate;
    id <HKGraphSeriesAxisAnnotation> _axisAnnotationDelegate;
    id <HKAxisAccessoryViewDelegate> _yAxisAccessoryViewDelegate;
    double _alpha;
    double _offscreenIndicatorAlpha;
    NSUUID *_UUID;
    id _context;
    HKAxis *_yAxis;
    id <HKGraphSeriesAxisScalingRule> _axisScalingRule;
    UIView *_cachedYAxisAccessoryView;
    UIColor *_offScreenIndicatorColor;
}

+ (void)drawInnerDotMarkerInContext:(struct CGContext *)arg1 outColor:(struct CGColor *)arg2 inColor:(struct CGColor *)arg3 x:(double)arg4 y:(double)arg5 radius:(double)arg6;
+ (void)drawFilledMarkerInContext:(struct CGContext *)arg1 color:(struct CGColor *)arg2 x:(double)arg3 y:(double)arg4 radius:(double)arg5;
@property(retain, nonatomic) UIColor *offScreenIndicatorColor; // @synthesize offScreenIndicatorColor=_offScreenIndicatorColor;
@property(retain, nonatomic) UIView *cachedYAxisAccessoryView; // @synthesize cachedYAxisAccessoryView=_cachedYAxisAccessoryView;
@property(retain, nonatomic) id <HKGraphSeriesAxisScalingRule> axisScalingRule; // @synthesize axisScalingRule=_axisScalingRule;
@property(copy, nonatomic) HKAxis *yAxis; // @synthesize yAxis=_yAxis;
@property(nonatomic) _Bool wantsRoundingDuringYRangeExpansion; // @synthesize wantsRoundingDuringYRangeExpansion=_wantsRoundingDuringYRangeExpansion;
@property(nonatomic) _Bool primarySeriesForAutoscale; // @synthesize primarySeriesForAutoscale=_primarySeriesForAutoscale;
@property(readonly, nonatomic) _Bool animatingDuringAutoscale; // @synthesize animatingDuringAutoscale=_animatingDuringAutoscale;
@property(retain, nonatomic) id context; // @synthesize context=_context;
@property(nonatomic) _Bool adjustYAxisForLabels; // @synthesize adjustYAxisForLabels=_adjustYAxisForLabels;
@property(nonatomic) _Bool allowsSelection; // @synthesize allowsSelection=_allowsSelection;
@property(readonly, nonatomic) NSUUID *UUID; // @synthesize UUID=_UUID;
@property(nonatomic) double offscreenIndicatorAlpha; // @synthesize offscreenIndicatorAlpha=_offscreenIndicatorAlpha;
@property(nonatomic) double alpha; // @synthesize alpha=_alpha;
@property(nonatomic) __weak id <HKAxisAccessoryViewDelegate> yAxisAccessoryViewDelegate; // @synthesize yAxisAccessoryViewDelegate=_yAxisAccessoryViewDelegate;
@property(nonatomic) __weak id <HKGraphSeriesAxisAnnotation> axisAnnotationDelegate; // @synthesize axisAnnotationDelegate=_axisAnnotationDelegate;
@property(nonatomic) __weak id <HKSeriesDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *detailLegendEntries; // @synthesize detailLegendEntries=_detailLegendEntries;
@property(retain, nonatomic) NSArray *titleLegendEntries; // @synthesize titleLegendEntries=_titleLegendEntries;
@property(retain, nonatomic) HKGraphSeriesDataSource *dataSource; // @synthesize dataSource=_dataSource;
- (struct CGRect)backgroundRectFromStringRect:(struct CGRect)arg1 forFont:(id)arg2;
- (void)drawRoundedRect:(struct CGRect)arg1 color:(id)arg2 context:(struct CGContext *)arg3;
- (struct CGRect)adjustRect:(struct CGRect)arg1 forFont:(id)arg2;
- (_Bool)untransformedChartPointsForTimeScope:(long long)arg1 range:(id)arg2 completion:(id /* block */)arg3;
- (id)findVisibleBlockCoordinatesForChartRect:(struct CGRect)arg1 xAxis:(id)arg2 zoomScale:(double)arg3 contentOffset:(struct CGPoint)arg4 xAxisTransform:(struct CGAffineTransform)arg5;
- (double)distanceFromTouchPoint:(struct CGPoint)arg1 inChartRect:(struct CGRect)arg2 xAxis:(id)arg3 zoomScale:(double)arg4 contentOffset:(struct CGPoint)arg5 xAxisTransform:(struct CGAffineTransform)arg6;
- (void)deselectPath;
- (void)selectPathsinPathRange:(CDStruct_f3788345)arg1 coordinateRange:(id)arg2;
- (_Bool)isHighlighted;
- (id)closestXCoordinateRange;
- (CDStruct_f3788345)selectedPathRange;
- (void)layoutOverlayInteractiveViews:(id)arg1 seriesOverlayData:(id)arg2 overlayRect:(struct CGRect)arg3;
- (id)overlayInteractiveViewsWithDelegate:(id)arg1;
- (void)drawOverlayInContext:(struct CGContext *)arg1 seriesOverlayData:(id)arg2;
- (id)overlayIdentifier;
- (long long)overlayType;
- (void)updateLegendsForTimeScope:(long long)arg1 range:(id)arg2;
- (id)marginsForYAxis:(id)arg1 chartRect:(struct CGRect)arg2;
- (_Bool)supportsMultiTouchSelection;
- (id)coordinatesForBlock:(id)arg1 blockPath:(CDStruct_6ca94699)arg2 xAxis:(id)arg3 yAxis:(id)arg4;
- (void)drawSeriesWithBlockCoordinates:(id)arg1 axisRect:(struct CGRect)arg2 zoomLevelConfiguration:(id)arg3 pointTransform:(struct CGAffineTransform)arg4 renderContext:(struct CGContext *)arg5 secondaryRenderContext:(id)arg6;
- (void)clearCaches;
- (id)_dataBlockForBlockPath:(CDStruct_6ca94699)arg1;
- (id)_coordinatesForBlockPath:(CDStruct_6ca94699)arg1 xAxis:(id)arg2;
- (void)_cacheCoordinates:(id)arg1 forBlockPath:(CDStruct_6ca94699)arg2;
- (id)_cachedCoordinatesForBlockPath:(CDStruct_6ca94699)arg1;
- (id)_coordinateListsWithXValueRange:(id)arg1 xAxis:(id)arg2 zoomLevel:(long long)arg3;
- (void)_enumeratePathIndexesInValueRange:(id)arg1 zoomLevel:(long long)arg2 block:(id /* block */)arg3;
- (id)_coordinateListsForGeneratorWithXAxis:(id)arg1 zoomScale:(double)arg2 chartRect:(struct CGRect)arg3 contentOffset:(struct CGPoint)arg4;
- (id)_visibleXValueRangeWithAxis:(id)arg1 chartRect:(struct CGRect)arg2 contentOffset:(struct CGPoint)arg3 zoomScale:(double)arg4;
- (void)_setDirtyWithNewData:(_Bool)arg1;
- (void)dataSourceDidUpdateCache:(id)arg1;
- (_Bool)configureYAxisAccessoryViewForDateRange:(id)arg1 timeScope:(long long)arg2;
- (struct UIEdgeInsets)yAxisAccessoryViewEdgeInsets;
- (struct CGSize)yAxisAccessoryViewSize;
- (void)enumerateCoordinatesInChartRect:(struct CGRect)arg1 xAxis:(id)arg2 zoomScale:(double)arg3 contentOffset:(struct CGPoint)arg4 xAxisTransform:(struct CGAffineTransform)arg5 roundToViewScale:(_Bool)arg6 exclusionOptions:(long long)arg7 block:(id /* block */)arg8;
- (_Bool)containsCoordinatesInChartRect:(struct CGRect)arg1 xAxis:(id)arg2 zoomScale:(double)arg3 contentOffset:(struct CGPoint)arg4 xAxisTransform:(struct CGAffineTransform)arg5;
- (struct CGAffineTransform)coordinateTransformForChartRect:(struct CGRect)arg1 xAxisTransform:(struct CGAffineTransform)arg2;
- (void)drawWithChartRect:(struct CGRect)arg1 seriesCoordinates:(id)arg2 zoomLevelConfiguration:(id)arg3 coordinateTransform:(struct CGAffineTransform)arg4 inContext:(struct CGContext *)arg5 secondaryRenderContext:(id)arg6;
- (struct CGAffineTransform)coordinateTransformFromXAxisTransform:(struct CGAffineTransform)arg1 chartRect:(struct CGRect)arg2;
- (id)seriesCoordinatesWithXAxis:(id)arg1 chartRect:(struct CGRect)arg2 zoomScale:(double)arg3 contentOffset:(struct CGPoint)arg4;
- (_Bool)blockCoordinate:(id)arg1 greaterThan:(id)arg2;
- (_Bool)blockCoordinate:(id)arg1 lessThan:(id)arg2;
- (_Bool)blockCoordinateIsVisibleInsideOfChartRect:(struct CGRect)arg1 blockCoordinate:(id)arg2;
- (double)xAxisSelectedCoordinate:(double)arg1 blockCoordinate:(id)arg2 chartRect:(struct CGRect)arg3;
- (double)yAxisDifferenceToPoint:(struct CGPoint)arg1 blockCoordinate:(id)arg2 chartRect:(struct CGRect)arg3;
- (double)xAxisDistanceFromPoint:(struct CGPoint)arg1 blockCoordinate:(id)arg2 chartRect:(struct CGRect)arg3;
- (double)distanceFromPoint:(struct CGPoint)arg1 blockCoordinate:(id)arg2 chartRect:(struct CGRect)arg3;
- (struct UIEdgeInsets)virtualMarginInsets;
- (id)valueRangeForYAxisWithXAxisRange:(id)arg1 dateZoom:(long long)arg2 chartRect:(struct CGRect)arg3;
- (id)_expandYRange:(id)arg1 withXRange:(id)arg2 dateZoom:(long long)arg3 chartRect:(struct CGRect)arg4;
- (void)cancelInFlightAutoscale;
- (void)autoscaleYAxisWithYAxisRange:(id)arg1 chartRect:(struct CGRect)arg2 animated:(_Bool)arg3 completion:(id /* block */)arg4;
- (void)autoscaleYAxisWithValueRange:(id)arg1 yAxisRange:(id)arg2 xAxis:(id)arg3 dateZoom:(long long)arg4 chartRect:(struct CGRect)arg5 animated:(_Bool)arg6 completion:(id /* block */)arg7;
- (void)autoscaleYAxisIfNecessaryWithValueRange:(id)arg1 yAxisRange:(id)arg2 xAxis:(id)arg3 dateZoom:(long long)arg4 chartRect:(struct CGRect)arg5;
- (_Bool)shouldInvertAxis;
- (id)visibleValueRange;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

