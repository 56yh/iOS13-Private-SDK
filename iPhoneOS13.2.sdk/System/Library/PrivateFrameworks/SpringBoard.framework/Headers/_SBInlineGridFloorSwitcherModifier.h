//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpringBoard/SBSwitcherModifier.h>

@interface _SBInlineGridFloorSwitcherModifier : SBSwitcherModifier
{
    _Bool _floating;
    _Bool _overlay;
}

+ (void)load;
@property(nonatomic, getter=isOverlay) _Bool overlay; // @synthesize overlay=_overlay;
@property(nonatomic, getter=isFloating) _Bool floating; // @synthesize floating=_floating;
- (_Bool)wantsAsynchronousSurfaceRetentionAssertion;
- (_Bool)wantsMinificationFilter;
- (long long)liveContentRasterizationStyle;
- (long long)keyboardSuppressionMode;
- (long long)sceneDeactivationReason;
- (_Bool)wantsResignActiveAssertion;
- (double)dockWindowLevel;
- (unsigned long long)dockWindowLevelPriority;
- (_Bool)wantsDockWindowLevelAssertion;
- (long long)dockUpdateMode;
- (double)dockProgress;
- (_Bool)wantsDockBehaviorAssertion;
- (_Bool)shouldConfigureInAppDockHiddenAssertion;
- (_Bool)isIndexKillable:(unsigned long long)arg1;
- (id)appLayoutsForInsertionOrRemoval;
- (unsigned long long)indexToScrollToAfterRemovingIndex:(unsigned long long)arg1;
- (unsigned long long)indexToScrollToAfterInsertingAtIndex:(unsigned long long)arg1;
- (_Bool)shouldBringCardToFrontDuringInsertionOrRemoval;
- (_Bool)shouldAnimateInsertionOrRemovalAtIndex:(unsigned long long)arg1;
- (_Bool)shouldTetherTransitionCompletion;
- (_Bool)shouldPerformCrossfadeForReduceMotion;
- (_Bool)shouldPerformRotationAnimationForOrientationChange;
- (_Bool)shouldTruncateAnimationsUponTransitionCompletion;
- (_Bool)shouldFireTransitionCompletionInDefaultRunLoopMode;
- (_Bool)shouldWaitForLayoutAndStyleUpdatesForTransactionCompletion;
- (_Bool)shouldRubberbandHomeGrabberView;
- (_Bool)shouldAcceleratedHomeButtonPressBegin;
- (id)appLayoutToScrollToBeforeReopeningClosedWindows;
- (id)appLayoutToScrollToBeforeTransitioning;
- (id)topMostAppLayouts;
- (id)cornerRadiusSettingsForIndex:(unsigned long long)arg1;
- (id)scaleSettingsForIndex:(unsigned long long)arg1;
- (id)positionSettingsForIndex:(unsigned long long)arg1;
- (id)layoutSettingsForIndex:(unsigned long long)arg1;
- (id)opacitySettings;
- (id)layoutSettings;
- (long long)preferredSnapshotOrientation;
- (struct _NSRange)fullSizeSnapshotsRange;
- (unsigned long long)numberOfAppLayoutsToCacheSnapshots;
- (unsigned long long)numberOfDefaultAppLayoutsToCacheSnapshots;
- (double)shadowOffsetForIndex:(unsigned long long)arg1;
- (_Bool)isSwitcherWindowUserInteractionEnabled;
- (_Bool)isSwitcherWindowVisible;
- (_Bool)isHomeScreenContentRequired;
- (long long)wallpaperStyle;
- (_Bool)isWallpaperRequiredForSwitcher;
- (_Bool)isHomeGrabberVisible;
- (_Bool)isContentStatusBarVisibleForIndex:(unsigned long long)arg1;
- (double)containerStatusBarAnimationDuration;
- (_Bool)isContainerStatusBarVisible;
- (unsigned long long)insertionStyleForInsertingAppLayout:(id)arg1;
- (_Bool)isTetheredScrollingEnabled;
- (_Bool)isScrollEnabled;
- (_Bool)itemContainersAllowContentViewTouches;
- (_Bool)itemContainersUseBrightMaterial;
- (_Bool)dimmingViewBlocksTouches;
- (double)backdropBlurProgress;
- (long long)backdropBlurType;
- (double)dimmingAlpha;
- (double)wallpaperScale;
- (double)homeScreenScale;
- (double)homeScreenAlpha;
- (struct UIRectCornerRadii)cardCornerRadiiForIndex:(unsigned long long)arg1;
- (double)shadowOpacityForIndex:(unsigned long long)arg1;
- (double)titleOpacityForIndex:(unsigned long long)arg1;
- (double)titleAndIconOpacityForIndex:(unsigned long long)arg1;
- (double)lighteningAlphaForIndex:(unsigned long long)arg1;
- (double)wallpaperOverlayAlphaForIndex:(unsigned long long)arg1;
- (double)darkeningAlphaForIndex:(unsigned long long)arg1;
- (double)opacityForIndex:(unsigned long long)arg1;
- (long long)plusButtonStyle;
- (long long)appExposeAccessoryButtonsOverrideUserInterfaceStyle;
- (double)reopenClosedWindowsButtonScale;
- (double)reopenClosedWindowsButtonAlpha;
- (double)plusButtonAlpha;
- (id)appExposeAccessoryButtonsBundleIdentifier;
- (double)visibleMarginForItemContainerAtIndex:(unsigned long long)arg1;
- (_Bool)clipsToUnobscuredMarginAtIndex:(unsigned long long)arg1;
- (long long)layoutUpdateMode;
- (double)contentViewScale;
- (_Bool)isIndexVisible:(unsigned long long)arg1;
- (double)scaleForIndex:(unsigned long long)arg1;
- (struct CGRect)frameForIndex:(unsigned long long)arg1;
- (id)adjustedAppLayoutsForAppLayouts:(id)arg1;

@end

