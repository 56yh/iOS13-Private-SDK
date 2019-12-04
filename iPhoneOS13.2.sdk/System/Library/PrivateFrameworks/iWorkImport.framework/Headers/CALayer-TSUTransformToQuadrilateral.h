//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuartzCore/CALayer.h>

#import <iWorkImport/TSDContentsScaleProviding-Protocol.h>

@interface CALayer (TSUTransformToQuadrilateral) <TSDContentsScaleProviding>
- (void)tsu_transformToQuadrilateralWithTopLeft:(struct CGPoint)arg1 topRight:(struct CGPoint)arg2 bottomLeft:(struct CGPoint)arg3 bottomRight:(struct CGPoint)arg4;
- (void)removeCDEEditorFlipOutAnimation;
- (void)addCDEEditorFlipOutAnimationToPosition:(struct CGPoint)arg1 beginTime:(double)arg2 toLeft:(_Bool)arg3 cameraDistance:(double)arg4;
- (void)removeCDEEditorFlipInAnimation;
- (void)addCDEEditorFlipInAnimationFromPosition:(struct CGPoint)arg1 beginTime:(double)arg2 fromLeft:(_Bool)arg3 cameraDistance:(double)arg4;
- (void)removeCDEChartFlipAnimationFromPosition;
- (void)addCDEChartFlipAnimationFromPosition:(struct CGPoint)arg1 beginTime:(double)arg2 toLeft:(_Bool)arg3 cameraDistance:(double)arg4;
- (void)removeCDEChartFlipAnimationToFinalPosition;
- (void)addCDEChartFlipAnimationToFinalPosition:(struct CGPoint)arg1 beginTime:(double)arg2 fromLeft:(_Bool)arg3 cameraDistance:(double)arg4;
- (void)removeCDEShieldOutAnimation;
- (void)addCDEShieldOutAnimation:(double)arg1;
- (void)removeCDEShieldInAnimation;
- (void)addCDEShieldInAnimation:(double)arg1;
- (void)addPerspectiveProjectionWithDistance:(double)arg1;
- (void)removeCallbackAnimationWithName:(id)arg1;
- (void)addCallbackAnimationWithName:(id)arg1 beginTime:(double)arg2 duration:(double)arg3 target:(id)arg4 selector:(SEL)arg5;
- (void)removeZoomAnimation;
- (void)addZoomAnimationFromPoint:(struct CGPoint)arg1 speed:(double)arg2;
- (_Bool)tsd_hideOverlayLayerDuringZoomOperations;
- (void)tsd_setHideOverlayLayerDuringZoomOperations:(_Bool)arg1;
- (void)resumeAtTime:(double)arg1;
- (void)resume;
- (void)pauseAtTime:(double)arg1;
- (void)pause;
- (id)bakedLayerForLayerRect:(struct CGRect)arg1;
- (id)bakedLayer;
- (struct CGImage *)newRasterizedImageRefForLayerRect:(struct CGRect)arg1;
- (struct CGImage *)newRasterizedImageRef;
- (struct CGRect)frameIncludingSublayers;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (id)zoomDownAnimation;
- (void)removeZoomDownAnimation;
- (void)addZoomDownAnimationFromPoint:(struct CGPoint)arg1 endingScale:(double)arg2 delay:(double)arg3;
- (void)addZoomDownAnimationFromPoint:(struct CGPoint)arg1;
- (void)addZoomDownAnimation;
- (void)removeZoomAnimation;
- (void)addZoomAnimationFromPoint:(struct CGPoint)arg1 startingScale:(double)arg2;
- (void)addZoomAnimationFromPoint:(struct CGPoint)arg1;
- (void)addZoomAnimation;
- (void)removeResetAnimation;
- (void)addResetAnimation;
- (void)addResetAnimationWithDelegate:(id)arg1;
- (void)removeRippleAnimation;
- (void)addRippleAnimationFromPosition:(struct CGPoint)arg1 withScale:(double)arg2 addPerspectiveProjection:(_Bool)arg3;
- (void)addRippleAnimationFromPosition:(struct CGPoint)arg1 withScale:(double)arg2;
- (void)addRippleAnimationFromPosition:(struct CGPoint)arg1;
- (void)removeRotateInAnimation;
- (void)addRotateInAnimationWithDuration:(double)arg1 delay:(double)arg2;
- (void)removeScaleInAnimation;
- (void)addScaleInAnimationWithDuration:(double)arg1 delay:(double)arg2;
- (void)removeDistortAnimation;
- (void)addDistortAnimationWithVector:(struct CGPoint)arg1;
- (void)removePopOutAnimation;
- (void)addPopOutAnimation:(id)arg1;
- (_Bool)hasPopInAnimation;
- (void)removePopInAnimation;
- (void)addPopInAnimation:(id)arg1;
- (void)removeSproingAnimation;
- (void)addSproingAnimationFromPoint:(struct CGPoint)arg1;
- (void)removeFlipTransitionAnimation;
- (void)addFlipTransitionAnimationToLayer:(id)arg1;
- (void)removeDragRotationAnimation;
- (void)addDragRotationAnimationWithDelta:(struct CGPoint)arg1;
- (void)removePulseAnimation;
- (void)addPulseAnimation;
- (void)removeWaveAnimation;
- (void)removeWaveAnimationAnimated:(_Bool)arg1;
- (void)addWaveAnimationWithScale:(double)arg1 offset:(struct CGSize)arg2 zPosition:(double)arg3 addPerspectiveProjection:(_Bool)arg4;
- (void)addWaveAnimationWithScale:(double)arg1 offset:(struct CGSize)arg2 zPosition:(double)arg3;
- (void)addWaveAnimationWithOffset:(struct CGSize)arg1 zPosition:(double)arg2;
- (void)addWaveAnimation;
- (void)removeJiggleAnimation;
- (void)addJiggleAnimationWithDuration:(double)arg1 angle:(double)arg2;
- (void)addJiggleAnimation;
- (double)opacityByApplyingAnimation:(id)arg1 atTime:(double)arg2 animationCache:(id)arg3;
- (struct CATransform3D)transform3DByApplyingAnimation:(id)arg1 atTime:(double)arg2 offset:(struct CGPoint)arg3 animationCache:(id)arg4;
- (void)removeAllAnimationsOnLayerTree;
- (double)durationOfAllAnimations;
- (void)addPerspectiveSublayerProjectionUsingScreenSize:(struct CGSize)arg1;
- (void)addPerspectiveProjection;
- (double)p_perspectiveZDistanceUsingSize:(struct CGSize)arg1;
- (void)addReflectionSubLayerWithHeight:(double)arg1 startOpacity:(double)arg2;
- (id)layerByAddingReflectionWithHeight:(double)arg1 startOpacity:(double)arg2;
- (void)setIfDifferentFrame:(struct CGRect)arg1 orTransform:(struct CGAffineTransform)arg2;

// Remaining properties
@property(readonly, nonatomic) double contentsScale;
@end

