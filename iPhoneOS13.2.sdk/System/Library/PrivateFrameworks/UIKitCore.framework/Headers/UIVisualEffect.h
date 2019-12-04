//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>




@class _UIBackdropViewSettings, _UIVisualEffectConfig;

@interface UIVisualEffect : NSObject <NSCopying, NSSecureCoding>
{
}

+ (_Bool)supportsSecureCoding;
+ (id)effectCompositingColor:(id)arg1 withMode:(long long)arg2 alpha:(double)arg3;
+ (id)effectCompositingImage:(id)arg1 withMode:(long long)arg2 alpha:(double)arg3;
+ (id)effectCompositingColor:(id)arg1;
+ (id)effectCompositingImage:(id)arg1;
+ (id)effectCombiningEffects:(id)arg1;
+ (id)emptyEffect;
- (long long)_expectedUsage;
- (_Bool)_needsUpdateForTransitionFromEnvironment:(id)arg1 toEnvironment:(id)arg2 usage:(long long)arg3;
- (void)_updateEffectDescriptor:(id)arg1 forEnvironment:(id)arg2 usage:(long long)arg3;
- (_Bool)_selectorOverridden:(SEL)arg1;
- (void)_enumerateEffects:(id /* block */)arg1;
- (id)_allEffects;
- (id)effectForUserInterfaceStyle:(long long)arg1;
- (id)effectConfigForQuality:(long long)arg1;
@property(readonly, nonatomic) _UIVisualEffectConfig *effectConfig;
@property(readonly, nonatomic) _Bool _isAutomaticStyle;
@property(readonly, nonatomic) _Bool _isATVStyle;
@property(readonly, nonatomic) _UIBackdropViewSettings *effectSettings;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

