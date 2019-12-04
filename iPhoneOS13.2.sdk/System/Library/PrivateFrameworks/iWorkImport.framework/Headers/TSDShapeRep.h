//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSDStyledRep.h>

#import <iWorkImport/TSDMagicMoveMatching-Protocol.h>

@class NSMutableDictionary, TSDShapeInfo, TSDShapeLayout;

__attribute__((visibility("hidden")))
@interface TSDShapeRep : TSDStyledRep <TSDMagicMoveMatching>
{
    struct CGRect mFrameInUnscaledCanvasRelativeToSuper;
    _Bool mFrameInUnscaledCanvasIsValid;
    _Bool mDirectlyManagesLayerContentCacheValid;
    _Bool mDirectlyManagesLayerContent;
    struct CGRect mOriginalAliasedAlignmentFrameInLayerFrame;
    _Bool mShadowOnChildrenDisabled;
    struct CGContext *mCommittedPathContext;
    struct CGImage *mCommittedPathImage;
    struct CGRect mCommittedPathImageUnscaledRect;
    struct _NSRange mCommittedPointRange;
    struct _NSRange mAvailableToCommitPointRange;
    unsigned int mOverrideState:2;
    double mOverriddenValue;
    struct CGRect mLastDynamicInvalidRect;
    _Bool mFillChanged;
    _Bool mShouldForceRenderableGeometryUpdate;
    _Bool mIsInvisibleCacheValid;
    _Bool mIsInvisibleCache;
    _Bool mNeedsDisplay;
    NSMutableDictionary *mHitTestCache;
}

+ (double)magicMoveAttributeMatchPercentBetweenOutgoingObject:(id)arg1 incomingObject:(id)arg2 mixingTypeContext:(id)arg3;
- (_Bool)p_isInsidePlayingFreehandDrawing;
- (id)p_strokeForRenderingIncludingPlaybackFromStroke:(id)arg1;
- (_Bool)p_shouldUpgradeStrokeForPlayback:(id)arg1;
- (void)dynamicOverrideDidChange;
- (_Bool)canDrawShadowInOneStepWithChildren:(_Bool)arg1;
- (_Bool)p_drawsSelfInOneStep;
- (id)p_brushStrokeFromStroke:(id)arg1;
- (_Bool)p_hasFreehandDrawingBrushStroke;
- (_Bool)p_isNormalShapeInsideFreehandDrawing;
- (unsigned long long)p_bitmapContextOptionsForDrawingStroke:(id)arg1;
- (_Bool)p_shouldDrawStrokeWide:(id)arg1;
- (void)p_drawLineEndForHead:(_Bool)arg1 withDelta:(struct CGPoint)arg2 andStroke:(id)arg3 inContext:(struct CGContext *)arg4 useFastDrawing:(_Bool)arg5;
- (void)setTextureAttributes:(id)arg1 textureBounds:(struct CGRect)arg2;
- (id)p_drawingPlaybackSession;
@property(readonly, nonatomic) _Bool isPartiallyAnimated;
- (double)opacity;
@property(readonly, nonatomic) double strokeEnd;
- (_Bool)canDrawWithOtherShapeRep:(id)arg1;
@property(readonly, nonatomic) _Bool isMoreOptimalToDrawWithOtherShapeRepsIfPossible;
- (_Bool)isInvisible;
- (id)imageOfStroke:(struct CGRect *)arg1;
- (struct CGRect)strokeBoundsWithOptions:(unsigned long long)arg1 fallbackBounds:(struct CGRect)arg2;
- (void)p_drawInContext:(struct CGContext *)arg1 withContent:(_Bool)arg2 strokeDrawOptions:(unsigned long long)arg3 withOpacity:(_Bool)arg4 usingPathOverride:(id)arg5 patternOffsetsBySubpathOverride:(id)arg6 transparencyLayersBySubpath:(id)arg7;
- (void)p_drawInContext:(struct CGContext *)arg1 withContent:(_Bool)arg2 strokeDrawOptions:(unsigned long long)arg3 withOpacity:(_Bool)arg4;
- (void)drawInContext:(struct CGContext *)arg1 usingPathOverride:(id)arg2 patternOffsetsBySubpathOverride:(id)arg3 transparencyLayersBySubpath:(id)arg4;
- (void)drawInContextWithoutEffects:(struct CGContext *)arg1 withContent:(_Bool)arg2 strokeDrawOptions:(unsigned long long)arg3 withOpacity:(_Bool)arg4 forAlphaOnly:(_Bool)arg5 drawChildren:(_Bool)arg6 keepingChildrenPassingTest:(id /* block */)arg7;
- (void)drawInLayerContext:(struct CGContext *)arg1;
- (void)p_drawChildrenWithoutOpacityInContext:(struct CGContext *)arg1 keepingChildrenPassingTest:(id /* block */)arg2;
- (void)recursivelyDrawChildrenInContext:(struct CGContext *)arg1 keepingChildrenPassingTest:(id /* block */)arg2;
- (id)colorBehindLayer:(id)arg1;
- (void)p_endApplyOpacity:(struct CGContext *)arg1 apply:(_Bool)arg2;
- (_Bool)p_beginApplyOpacity:(struct CGContext *)arg1 forDrawingInOneStep:(_Bool)arg2;
- (struct CGRect)clipRect;
- (struct CGRect)frameInUnscaledCanvas;
@property(readonly, nonatomic) TSDShapeLayout *shapeLayout;
@property(readonly, nonatomic) TSDShapeInfo *shapeInfo;
- (void)dealloc;
- (id)initWithLayout:(id)arg1 canvas:(id)arg2;

@end
