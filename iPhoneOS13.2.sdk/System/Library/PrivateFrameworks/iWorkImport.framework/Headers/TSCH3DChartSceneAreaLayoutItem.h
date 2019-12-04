//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSCHChartAbstractAreaLayoutItem.h>

@class TSCH3DChartResizerHelper, TSCH3DScene, TSCH3DVector;

__attribute__((visibility("hidden")))
@interface TSCH3DChartSceneAreaLayoutItem : TSCHChartAbstractAreaLayoutItem
{
    struct CGRect mChartBodyLayoutRect;
    TSCH3DChartResizerHelper *mResizerHelper;
    TSCH3DScene *mScene;
    tvec2_84d5962d mChartBodyLayoutOffsetInChartAreaLayoutSpace;
    _Bool mIsInvariant;
    _Bool mIsInvalidated;
    tvec4_ac57c72d mInitialInfoChartScale;
}

+ (id)worldBoundsDescriptionForScene:(id)arg1;
@property(nonatomic) _Bool isInvariant; // @synthesize isInvariant=mIsInvariant;
@property(nonatomic) struct CGRect chartBodyLayoutRect; // @synthesize chartBodyLayoutRect=mChartBodyLayoutRect;
- (id).cxx_construct;
- (void)setChartBodyLayoutSize:(struct CGSize)arg1;
- (void)setLayoutOffset:(struct CGPoint)arg1;
- (void)setStabilizedChartBodyLayoutRectUsingConverter:(const struct ChartProjectedBoundsConverter *)arg1;
- (void)p_layoutOutward;
- (id)p_cacheOutwardLayout;
- (_Bool)p_outwardLayoutCanUseCacheItem:(id)arg1;
- (void)p_layoutInward;
- (id)p_cacheInwardLayout;
- (_Bool)p_needsRefinementForInwardLayout;
- (_Bool)p_inwardLayoutCanUseCacheItem:(id)arg1;
- (_Bool)p_validCacheItem:(id)arg1 inward:(_Bool)arg2;
- (tvec2_3b141483)p_currentModelSize;
- (id)p_cache;
- (void)p_updateFromCacheItem:(id)arg1;
- (void)p_updateLayoutSize:(struct CGSize)arg1 chartBodyLayoutOffsetInChartAreaLayoutSpace:(const tvec2_84d5962d *)arg2;
- (void)p_updateBodyLayoutRect;
- (struct CGRect)p_frameForSelectionPath:(id)arg1 sceneObjectClass:(Class)arg2;
- (struct CGRect)titleFrame;
- (struct CGRect)calcDrawingRect;
- (id)debug_rotationBounds;
- (void)invalidateLabelsBoundsForSceneObjectClass:(Class)arg1 boundsIndex:(long long)arg2;
- (void)invalidateBounds;
- (const struct ChartProjectedBoundsSpaces *)projectedBoundsWithScene:(id)arg1 forcesAccurateBounds:(_Bool)arg2 allowsEmptyBodyLayoutBounds:(_Bool)arg3;
@property(readonly, nonatomic) const struct ChartProjectedBoundsSpaces *projectedBounds;
- (id)boundsLayout;
- (id)boundsLayout:(struct CGRect)arg1 scene:(id)arg2 forcesAccurateBounds:(_Bool)arg3 allowsEmptyBodyLayoutBounds:(_Bool)arg4;
- (id)p_updatedResizerHelperForcingAccurateBounds:(_Bool)arg1;
- (id)p_updatedResizerHelper;
@property(readonly, nonatomic) TSCH3DVector *containingViewportVector;
@property(readonly, nonatomic) tvec2_3b141483 containingViewport;
- (void)clearAll;
- (void)clearScene;
@property(readonly, nonatomic) TSCH3DScene *scene; // @synthesize scene=mScene;
- (void)p_validate;
- (void)dealloc;
- (id)initWithParent:(id)arg1;

@end

