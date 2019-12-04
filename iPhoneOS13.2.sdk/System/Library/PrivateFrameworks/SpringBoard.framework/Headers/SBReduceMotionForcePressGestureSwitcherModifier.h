//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpringBoard/SBGestureSwitcherModifier.h>

@class SBAppLayout, SBForcePressGestureStateTrackingSwitcherModifier;

@interface SBReduceMotionForcePressGestureSwitcherModifier : SBGestureSwitcherModifier
{
    SBAppLayout *_selectedAppLayout;
    long long _startingEnvironmentMode;
    SBForcePressGestureStateTrackingSwitcherModifier *_stateTrackingModifier;
}

- (unsigned long long)_indexOfSelectedAppLayout;
- (double)_effectivePanProgress;
- (double)initialPanThreshold;
- (_Bool)wantsMinificationFilter;
- (long long)liveContentRasterizationStyle;
- (long long)keyboardSuppressionMode;
- (long long)sceneDeactivationReason;
- (_Bool)wantsResignActiveAssertion;
- (id)layoutSettings;
- (unsigned long long)numberOfAppLayoutsToCacheSnapshots;
- (_Bool)isSwitcherWindowUserInteractionEnabled;
- (_Bool)isSwitcherWindowVisible;
- (_Bool)isHomeScreenContentRequired;
- (long long)wallpaperStyle;
- (_Bool)isWallpaperRequiredForSwitcher;
- (_Bool)isContentStatusBarVisibleForIndex:(unsigned long long)arg1;
- (_Bool)isContainerStatusBarVisible;
- (long long)backdropBlurType;
- (double)darkeningAlphaForIndex:(unsigned long long)arg1;
- (struct UIRectCornerRadii)cardCornerRadiiForIndex:(unsigned long long)arg1;
- (double)opacityForIndex:(unsigned long long)arg1;
- (_Bool)isIndexVisible:(unsigned long long)arg1;
- (struct CGRect)frameForIndex:(unsigned long long)arg1;
- (id)handleGestureEvent:(id)arg1;
- (void)didMoveToParentModifier:(id)arg1;
- (id)initWithGestureID:(id)arg1 selectedAppLayout:(id)arg2 effectiveStartingEnvironmentMode:(long long)arg3;

@end

