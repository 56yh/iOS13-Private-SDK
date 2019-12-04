//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ControlCenterUI/CCUIOverlayPresentationProvider-Protocol.h>

@class NSString;
@protocol CCUIOverlayFlickGestureBehavior, CCUIOverlayMetricsProvider, CCUIOverlayViewProvider;

@interface CCUIOverlayScaleFadePresentationProvider : NSObject <CCUIOverlayPresentationProvider>
{
    id <CCUIOverlayViewProvider> _viewProvider;
    id <CCUIOverlayMetricsProvider> _metricsProvider;
}

+ (id)_baseC2AnimationParametersForTransitionState:(id)arg1;
@property(nonatomic) __weak id <CCUIOverlayMetricsProvider> metricsProvider; // @synthesize metricsProvider=_metricsProvider;
@property(nonatomic) __weak id <CCUIOverlayViewProvider> viewProvider; // @synthesize viewProvider=_viewProvider;
- (void)_addContainerAlphaAnimationToBatch:(id)arg1 transitionState:(id)arg2;
- (void)_addContainerTransformAnimationToBatch:(id)arg1 transitionState:(id)arg2;
- (void)_addBackgroundViewWeightingAnimationToBatch:(id)arg1 transitionState:(id)arg2;
- (struct CGRect)_statusLabelViewFrame;
- (struct CGRect)_presentedViewFrame;
- (_Bool)tapAllowsDismissalForLocation:(struct CGPoint)arg1;
- (id)animationBatchForTransitionState:(id)arg1 previousTransitionState:(id)arg2;
- (void)layoutViews;
- (unsigned long long)finalTransitionTypeForState:(id)arg1 gestureTranslation:(struct CGPoint)arg2 gestureVelocity:(struct CGPoint)arg3;
- (id)transitionStateForType:(unsigned long long)arg1 interactive:(_Bool)arg2 translation:(struct CGPoint)arg3;
@property(readonly, nonatomic) _Bool allowHotPocketDuringTransition; // @dynamic allowHotPocketDuringTransition;
@property(readonly, nonatomic, getter=isZoomEnabled) _Bool zoomEnabled; // @dynamic zoomEnabled;
- (id /* block */)customBackdropScaleAdjustment;
- (_Bool)backdropViewShouldUseAlphaTransformer;
@property(readonly, nonatomic, getter=isPanDismissalAvailable) _Bool panDismissalAvailable; // @dynamic panDismissalAvailable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) id <CCUIOverlayFlickGestureBehavior> flickGestureBehavior;
@property(readonly) NSUInteger hash;
@property(readonly, nonatomic) unsigned long long headerMode;
@property(readonly) Class superclass;

@end

