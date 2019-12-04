//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UIView.h>

@class UIImageView, UIStatusBarStyleAttributes;

__attribute__((visibility("hidden")))
@interface UIStatusBarBackgroundView : UIView
{
    UIStatusBarStyleAttributes *_style;
    UIImageView *_glowView;
    _Bool _glowEnabled;
    _Bool _suppressGlow;
}

- (id)_glowImage;
- (id)_baseImage;
- (id)_backgroundImageName;
- (void)_stopGlowAnimation;
- (void)_startGlowAnimationWaitForNextCycle:(_Bool)arg1;
- (_Bool)_styleCanGlow;
- (void)setSuppressesGlow:(_Bool)arg1;
- (void)_setGlowAnimationEnabled:(_Bool)arg1 waitForNextCycle:(_Bool)arg2;
- (void)setGlowAnimationEnabled:(_Bool)arg1;
- (id)style;
- (id)initWithFrame:(struct CGRect)arg1 style:(id)arg2 backgroundColor:(id)arg3;

@end

