//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpringBoard/SBTransitionSwitcherModifier.h>

@class SBAppLayout, SBSwitcherModifier;

@interface SBHomeGestureToZoomDownSwitcherModifier : SBTransitionSwitcherModifier
{
    SBAppLayout *_appLayout;
    SBSwitcherModifier *_nonGestureInitiatedZoomModifier;
    long long _startingEnvironmentMode;
    struct CGPoint _liftOffVelocity;
}

- (double)_normalizedHomeScreenIconZoomPercentBetweenTopAndBottom;
- (id)_settingsByInterpolatingBetween:(id)arg1 and:(id)arg2 progress:(double)arg3;
- (id)scaleSettingsForIndex:(unsigned long long)arg1;
- (id)positionSettingsForIndex:(unsigned long long)arg1;
- (id)layoutSettings;
- (struct _NSRange)fullSizeSnapshotsRange;
- (unsigned long long)numberOfAppLayoutsToCacheSnapshots;
- (_Bool)isSwitcherWindowUserInteractionEnabled;
- (_Bool)isSwitcherWindowVisible;
- (_Bool)isHomeScreenContentRequired;
- (long long)wallpaperStyle;
- (_Bool)isWallpaperRequiredForSwitcher;
- (long long)backdropBlurType;
- (id)handleEvent:(id)arg1;
- (id)initWithTransitionID:(id)arg1 appLayout:(id)arg2 nonGestureInitiatedZoomModifier:(id)arg3 effectiveStartingEnvironmentMode:(long long)arg4 liftOffVelocity:(struct CGPoint)arg5;

@end

