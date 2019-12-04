//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/_UIVibrancyEffectImpl.h>

@class UIColor;

__attribute__((visibility("hidden")))
@interface _UIVibrancyEffectVibrantColorMatrixImpl : _UIVibrancyEffectImpl
{
    long long _systemName;
    struct CAColorMatrix _lightVibrantColorMatrix;
    struct CAColorMatrix _darkVibrantColorMatrix;
    UIColor *_reducedTransperancyColor;
    double _alpha;
    _Bool _hasDarkVariant;
}

- (void)appendDescriptionTo:(id)arg1;
- (void)_updateEffectDescriptor:(id)arg1 forEnvironment:(id)arg2 usage:(long long)arg3;
- (_Bool)_needsUpdateForTransitionFromEnvironment:(id)arg1 toEnvironment:(id)arg2 usage:(long long)arg3;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)implementationReplacingTintColor:(id)arg1;
- (id)initWithLightCAColorMatrix:(struct CAColorMatrix)arg1 darkCAColorMatrix:(struct CAColorMatrix)arg2 alpha:(double)arg3;
- (id)initWithCAColorMatrix:(struct CAColorMatrix)arg1 alpha:(double)arg2;
- (id)initWithSystemName:(long long)arg1;

@end

