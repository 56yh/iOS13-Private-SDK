//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSWPTextHostLayout.h>

@class NSArray, NSDictionary, NSIndexSet, TSCHChartDrawableLayoutLegendResizer, TSCHChartInfo, TSCHChartLayout, TSCHChartModel, TSDLayoutGeometry;

__attribute__((visibility("hidden")))
@interface TSCHChartDrawableLayout : TSWPTextHostLayout
{
    struct {
        unsigned int chartLayoutState:1;
        unsigned int chartLayoutStructure:1;
    } mChartInvalidFlags;
    TSCHChartLayout *mChartLayout;
    _Bool mForceLayoutSettingsOmitLabelPlacement;
    TSDLayoutGeometry *mLayoutGeometryWhileCallingSuperComputeLayoutGeometry;
    TSDLayoutGeometry *mLastPureGeometry;
    TSDLayoutGeometry *mLastChartAreaGeometry;
    struct CGSize mMinSizeCache;
    _Bool mInResize;
    _Bool mSuppressChartLayoutInvalidation;
    TSDLayoutGeometry *mLegendGeometryForResize;
    TSCHChartDrawableLayoutLegendResizer *mLegendResizer;
}

@property(retain, nonatomic) TSCHChartDrawableLayoutLegendResizer *p_legendResizer; // @synthesize p_legendResizer=mLegendResizer;
@property(copy, nonatomic) TSDLayoutGeometry *p_legendGeometryForResize; // @synthesize p_legendGeometryForResize=mLegendGeometryForResize;
@property(copy, nonatomic) TSDLayoutGeometry *p_lastChartAreaGeometry; // @synthesize p_lastChartAreaGeometry=mLastChartAreaGeometry;
@property(copy, nonatomic) TSDLayoutGeometry *p_lastPureGeometry; // @synthesize p_lastPureGeometry=mLastPureGeometry;
@property(retain, nonatomic) TSCHChartLayout *p_chartLayoutNoCreate; // @synthesize p_chartLayoutNoCreate=mChartLayout;
@property(nonatomic) _Bool forceLayoutSettingsOmitLabelPlacement; // @synthesize forceLayoutSettingsOmitLabelPlacement=mForceLayoutSettingsOmitLabelPlacement;
- (double)viewScaleForZoomingToSelectionPath:(id)arg1 targetPointSize:(double)arg2;
- (id)i_computeWrapPath;
- (id)i_computeUnitedWrapPath;
- (struct CGRect)insertionFrame;
- (struct CGRect)alignmentFrame;
- (struct CGRect)boundsInfluencingExteriorWrap;
- (int)wrapFitType;
- (id)visibleGeometries;
- (struct CGRect)frameForCulling;
- (struct CGRect)p_addMultiDataControlToInlineWrapBounds:(struct CGRect)arg1;
- (double)p_approximatedAdditionalHeightForMultiDataControlWithMinimumAccommodatingScale:(double)arg1;
- (double)p_approximateMultiDataControlUnscaledMinimumWidth;
- (double)p_approximateMultiDataControlUnscaledHeight;
- (_Bool)p_isRenderingForKPF;
- (_Bool)p_isPrintingInBackground;
- (id)p_constrainAndResizePureGeometry:(id)arg1 withValidChartLayout:(id)arg2 toChartAreaGeometry:(id *)arg3 toShadowGeometry:(id *)arg4 toInfoGeometry:(id *)arg5;
- (void)p_convertValidChartLayout:(id)arg1 andInfoGeometry:(id)arg2 toPureGeometry:(id *)arg3 toChartAreaGeometry:(id *)arg4 toShadowGeometry:(id *)arg5;
- (id)renderersWithRep:(id)arg1;
- (void)take3DDepth;
- (struct CGRect)alignmentFrameForProvidingGuidesInRoot;
- (void)p_addEdgeAlignmentGuidesForRect:(struct CGRect)arg1 array:(id)arg2;
- (struct CGSize)minimumSize;
- (struct CGSize)p_calcMinSize;
- (void)processChanges:(id)arg1;
- (void)processChangedProperty:(int)arg1;
- (_Bool)changesShouldClearLayout:(id)arg1;
- (_Bool)changesShouldSetNeedsLayout:(id)arg1;
- (id)propertiesThatInvalidateLayout;
- (void)willBeAddedToLayoutController:(id)arg1;
- (id)computeInfoGeometryFromPureLayoutGeometry:(id)arg1;
- (_Bool)canRotateChildLayout:(id)arg1;
- (id)computeInfoGeometryDuringResize;
- (id)computeLayoutGeometry;
- (void)offsetGeometryBy:(struct CGPoint)arg1;
- (id)layoutGeometryFromInfo;
- (struct CGRect)boundsForStandardKnobs;
- (void)p_clearChartLayout;
- (void)p_forceValidateChartLayout;
- (void)p_validateChartLayout;
- (void)validate;
- (void)invalidate;
- (void)invalidateSize;
- (void)invalidateChartLayoutStructure;
- (void)invalidateChartLayoutState;
@property(nonatomic) unsigned long long dataSetIndex;
@property(readonly, nonatomic) TSCHChartModel *model;
@property(copy, nonatomic) TSDLayoutGeometry *legendModelGeometry;
@property(copy, nonatomic) TSDLayoutGeometry *legendGeometry;
- (void)p_setLegendGeometry:(id)arg1 fromTransform:(struct CGAffineTransform)arg2 onLayout:(id)arg3 shouldUpdateLayoutItemSize:(_Bool)arg4;
- (void)p_setLegendSize:(struct CGSize)arg1;
@property(copy, nonatomic) NSDictionary *seriesIndexedPieWedgeExplosions;
@property(readonly, copy, nonatomic) NSDictionary *seriesIndexedPieNormalizedLabelDistancesFromWedgeTips;
- (id)p_chartLayout2D;
@property(copy, nonatomic) NSArray *pieWedgeExplosions;
- (id)pieWedgeExplosionsForSeriesIndices:(id)arg1;
@property(readonly, nonatomic) NSIndexSet *pieWedgeExplosionSeriesIndices;
- (void)setChartLayoutPropertyValue:(id)arg1 forKey:(id)arg2;
- (void)p_postLayoutPropertyValueDidChangeNotification;
@property(readonly, nonatomic) _Bool is3DChart;
@property(readonly, retain, nonatomic) TSCHChartLayout *chartLayout;
@property(readonly, nonatomic) __weak TSCHChartInfo *chartInfo;
- (id)chartDrawableInfo;
@property(readonly, nonatomic) TSCHChartLayout *p_chartLayout;
- (Class)repClassOverride;
- (void)dealloc;
- (id)initWithInfo:(id)arg1;
- (id)optimizedLabelRectsToPreventOverlapWithCheckTitle:(_Bool)arg1;

@end

