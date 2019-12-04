//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UIVisualEffect.h>

@class _UIVibrancyEffectImpl;

@interface UIVibrancyEffect : UIVisualEffect
{
    _UIVibrancyEffectImpl *_impl;
}

+ (id)_vibrancyEntryWithType:(id)arg1 inputColor1:(id)arg2 inputColor2:(id)arg3 inputReversed:(_Bool)arg4;
+ (_Bool)supportsSecureCoding;
+ (id)_effectForBlurEffect:(id)arg1 vibrancyStyle:(long long)arg2;
+ (id)_effectWithStyle:(long long)arg1 ignoreSimpleVibrancy:(_Bool)arg2;
+ (id)_vibrantEffectForLightMaterial:(id)arg1 darkMaterial:(id)arg2 vibrancyStyle:(long long)arg3;
+ (id)vibrantChromeShadowEffect;
+ (id)vibrantHeavyShadowEffect;
+ (id)vibrantMediumShadowEffect;
+ (id)_vibrantShadowEffect;
+ (id)_vibrantEffectWithCAColorMatrix:(struct CAColorMatrix)arg1 alpha:(double)arg2;
+ (id)_lightVibrantEffectWithDarkenColor:(id)arg1 burnColor:(id)arg2 compositingColor:(id)arg3;
+ (id)_darkVibrantEffectWithLightenColor:(id)arg1 dodgeColor:(id)arg2 compositingColor:(id)arg3;
+ (id)vibrantEffectWithCompositingMode:(long long)arg1 compositingColor:(id)arg2;
+ (id)lightVibrantEffectWithBurnColor:(id)arg1 darkenColor:(id)arg2 compositingColor:(id)arg3;
+ (id)darkVibrantEffectWithDodgeColor:(id)arg1 lightenColor:(id)arg2 compositingColor:(id)arg3;
+ (id)effectForBlurEffect:(id)arg1 style:(long long)arg2;
+ (id)effectForBlurEffect:(id)arg1;
@property(readonly, nonatomic, getter=_vibrancyStyle) long long _vibrancyStyle;
- (long long)_blurStyle;
- (id)description;
- (id)effectForUserInterfaceStyle:(long long)arg1;
- (_Bool)_isAutomaticStyle;
- (_Bool)_isATVStyle;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)_expectedUsage;
- (_Bool)_needsUpdateForTransitionFromEnvironment:(id)arg1 toEnvironment:(id)arg2 usage:(long long)arg3;
- (void)_updateEffectDescriptor:(id)arg1 forEnvironment:(id)arg2 usage:(long long)arg3;
- (id)effectConfigForReducedTransperancy:(_Bool)arg1;
- (id)effectConfig;
- (id)effectConfigForQuality:(long long)arg1;
- (id)_reduceTransparencyEffectConfig;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_initWithImplementation:(id)arg1;
- (id)init;
- (id)_effectReplacingTintColor:(id)arg1;

@end

