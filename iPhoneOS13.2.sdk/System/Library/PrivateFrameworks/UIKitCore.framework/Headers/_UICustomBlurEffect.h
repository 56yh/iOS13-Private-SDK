//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UIBlurEffect.h>

@class UIColor, _UIBackdropViewSettings;

@interface _UICustomBlurEffect : UIBlurEffect
{
    _UIBackdropViewSettings *_blurEffect;
}

+ (id)effectWithStyle:(long long)arg1;
- (id)effectSettings;
@property(nonatomic) double zoom;
@property(nonatomic) double scale;
@property(nonatomic) double saturationDeltaFactor;
@property(nonatomic) double blurRadius;
@property(nonatomic) _Bool darkenWithSourceOver;
@property(nonatomic) double darkeningTintSaturation;
@property(nonatomic) double darkeningTintHue;
@property(nonatomic) double darkeningTintAlpha;
@property(nonatomic) double colorBurnTintAlpha;
@property(nonatomic) double colorBurnTintLevel;
@property(nonatomic) double colorTintAlpha;
@property(retain, nonatomic) UIColor *colorTint;
@property(nonatomic) _Bool lightenGrayscaleWithSourceOver;
@property(nonatomic) double grayscaleTintAlpha;
@property(nonatomic) double grayscaleTintLevel;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

