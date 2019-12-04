//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableSet, SBFluidSwitcherAnimationSettings;
@protocol SBHomeScreenBackdropViewBaseDelegate;

@interface SBHomeScreenBackdropViewBase : UIView
{
    NSMutableSet *_backdropViewRequiringReasons;
    NSMutableSet *_liveBackdropViewRequiringReasons;
    SBFluidSwitcherAnimationSettings *_animationSettings;
    id <SBHomeScreenBackdropViewBaseDelegate> _delegate;
}

@property(nonatomic) __weak id <SBHomeScreenBackdropViewBaseDelegate> delegate; // @synthesize delegate=_delegate;
- (id)backdropBlurSettings;
- (_Bool)requiresLiveBackdropView;
- (_Bool)requiresBackdropView;
- (void)cancelInProcessAnimations;
- (_Bool)isOpaque;
- (void)setBlurProgress:(double)arg1 behaviorMode:(long long)arg2 completion:(id /* block */)arg3;
- (void)endRequiringLiveBackdropViewForReason:(id)arg1;
- (void)endRequiringBackdropViewForReason:(id)arg1;
- (void)beginRequiringLiveBackdropViewForReason:(id)arg1;
- (void)beginRequiringBackdropViewForReason:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

