//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeUI/HUIconContentView.h>

@class HUDynamicStateAnimationApplier, HUNonAnimatingTintImageView, UIImageView, UIVisualEffectView;

@interface HUFanIconContentView : HUIconContentView
{
    UIImageView *_baseView;
    HUNonAnimatingTintImageView *_bladesView;
    UIVisualEffectView *_baseVisualEffectView;
    UIVisualEffectView *_bladesVisualEffectView;
    unsigned long long _rotationState;
    double _rotationSpeed;
    HUDynamicStateAnimationApplier *_speedRampApplier;
}

@property(retain, nonatomic) HUDynamicStateAnimationApplier *speedRampApplier; // @synthesize speedRampApplier=_speedRampApplier;
@property(nonatomic) double rotationSpeed; // @synthesize rotationSpeed=_rotationSpeed;
@property(nonatomic) unsigned long long rotationState; // @synthesize rotationState=_rotationState;
@property(retain, nonatomic) UIVisualEffectView *bladesVisualEffectView; // @synthesize bladesVisualEffectView=_bladesVisualEffectView;
@property(retain, nonatomic) UIVisualEffectView *baseVisualEffectView; // @synthesize baseVisualEffectView=_baseVisualEffectView;
@property(retain, nonatomic) HUNonAnimatingTintImageView *bladesView; // @synthesize bladesView=_bladesView;
@property(retain, nonatomic) UIImageView *baseView; // @synthesize baseView=_baseView;
- (void)_setBladesLayerSpeed:(float)arg1;
- (void)_rampBladesLayerToRotationSpeedAnimated:(_Bool)arg1;
- (void)_updateImages;
- (void)_updateRotationAnimationFromState:(unsigned long long)arg1 shouldRampSpeed:(_Bool)arg2;
- (void)_updateVisualEffects;
- (void)setVibrancyEffect:(id)arg1;
- (_Bool)wantsManagedVibrancyEffect;
- (void)setDisableContinuousAnimation:(_Bool)arg1;
- (_Bool)shouldFlipForRTL;
- (void)updateWithIconDescriptor:(id)arg1 displayStyle:(unsigned long long)arg2 animated:(_Bool)arg3;
- (void)setIconSize:(unsigned long long)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

