//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class SBTransientOverlayViewController;

@protocol SBTransientOverlayViewControllerDelegate 
- (void)transientOverlayViewControllerDidEndRotation:(SBTransientOverlayViewController *)arg1;
- (void)transientOverlayViewControllerWillBeginRotation:(SBTransientOverlayViewController *)arg1 toInterfaceOrientation:(long long)arg2;
- (void)transientOverlayViewControllerNeedsWhitePointAdaptivityStyleUpdate:(SBTransientOverlayViewController *)arg1;
- (void)transientOverlayViewControllerNeedsStatusBarAppearanceUpdate:(SBTransientOverlayViewController *)arg1;
- (void)transientOverlayViewControllerNeedsSceneDeactivationUpdate:(SBTransientOverlayViewController *)arg1;
- (void)transientOverlayViewControllerNeedsProximityDetectionUpdate:(SBTransientOverlayViewController *)arg1;
- (void)transientOverlayViewControllerNeedsOrientationUpdatesDisabledUpdate:(SBTransientOverlayViewController *)arg1;
- (void)transientOverlayViewControllerNeedsGestureDismissalStyleUpdate:(SBTransientOverlayViewController *)arg1;
- (void)transientOverlayViewControllerNeedsFeaturePolicyUpdate:(SBTransientOverlayViewController *)arg1;
- (void)transientOverlayViewControllerNeedsContentOpaqueUpdate:(SBTransientOverlayViewController *)arg1;
- (_Bool)defaultShouldAutorotateForTransientOverlayViewController:(SBTransientOverlayViewController *)arg1;
- (long long)defaultPreferredInterfaceOrientationForPresentationForTransientOverlayViewController:(SBTransientOverlayViewController *)arg1;
- (unsigned long long)defaultSupportedInterfaceOrientationsForTransientOverlayViewController:(SBTransientOverlayViewController *)arg1;
@end

