//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpringBoard/SBTransitionSwitcherModifier.h>

@class SBAppLayout, SBCoplanarSwitcherModifier;

@interface SBFullScreenToHomeIconZoomSwitcherModifier : SBTransitionSwitcherModifier
{
    SBAppLayout *_appLayout;
    unsigned long long _direction;
    struct CGRect _homeScreenIconFrame;
    double _homeScreenIconCornerRadius;
    double _homeScreenIconScale;
    _Bool _homeScreenIconLocationIsFloatingDock;
    _Bool _itemContainerOverlapsDock;
    _Bool _wantsDockWindowLevelAssertion;
    SBCoplanarSwitcherModifier *_coplanarModifier;
    _Bool _shouldAcceleratedHomeButtonPressBegin;
}

- (double)_normalizedHomeScreenTargetZoomPercentBetweenCenterAndEdge;
- (double)_normalizedHomeScreenIconZoomPercentBetweenTopAndBottom;
- (id)_settingsByInterpolatingBetween:(id)arg1 and:(id)arg2 progress:(double)arg3;
- (_Bool)_isIndexZoomAppLayout:(unsigned long long)arg1;
- (_Bool)_isEffectivelyHome;
- (double)dockWindowLevel;
- (unsigned long long)dockWindowLevelPriority;
- (_Bool)wantsDockWindowLevelAssertion;
- (double)dockProgress;
- (_Bool)wantsDockBehaviorAssertion;
- (_Bool)shouldFireTransitionCompletionInDefaultRunLoopMode;
- (_Bool)shouldAcceleratedHomeButtonPressBegin;
- (id)topMostAppLayouts;
- (id)layoutSettings;
- (unsigned long long)numberOfAppLayoutsToCacheSnapshots;
- (_Bool)isSwitcherWindowUserInteractionEnabled;
- (_Bool)isSwitcherWindowVisible;
- (_Bool)isHomeScreenContentRequired;
- (long long)wallpaperStyle;
- (_Bool)isWallpaperRequiredForSwitcher;
- (long long)backdropBlurType;
- (double)opacityForIndex:(unsigned long long)arg1;
- (double)homeScreenAlpha;
- (struct UIRectCornerRadii)cardCornerRadiiForIndex:(unsigned long long)arg1;
- (_Bool)isIndexVisible:(unsigned long long)arg1;
- (double)scaleForIndex:(unsigned long long)arg1;
- (struct CGRect)frameForIndex:(unsigned long long)arg1;
- (id)handleTimerEvent:(id)arg1;
- (id)transitionDidEnd;
- (id)transitionWillBegin;
- (_Bool)shouldRasterizeLiveContentUntilDelay:(inout double *)arg1;
- (void)didMoveToParentModifier:(id)arg1;
- (id)initWithTransitionID:(id)arg1 appLayout:(id)arg2 direction:(unsigned long long)arg3;

@end

