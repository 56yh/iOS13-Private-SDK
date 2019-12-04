//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class UIViewController;
@protocol SBApplicationHosting, SBAutoUnlockRule, SBBiometricUnlockBehavior, SBButtonEventsHandler, SBFScreenWakeAnimationTarget, SBIdleTimerProviding, SBLockScreenApplicationLaunching, SBLockScreenBacklightControlling, SBLockScreenBehaviorSuppressing, SBLockScreenBlockedStateObserving, SBLockScreenButtonObserving, SBLockScreenCallHandling, SBLockScreenContentStateProviding, SBLockScreenCustomActionStoring, SBLockScreenIdleTimerControlling, SBLockScreenLockingAndUnlocking, SBLockScreenMediaControlsPresenting, SBLockScreenPasscodeViewPresenting, SBLockScreenPluginPresenting, SBLockScreenProximityBehaviorProviding, SBLockScreenStatusBarTransitioning;

@protocol SBLockScreenEnvironment 
@property(readonly, nonatomic) id <SBLockScreenStatusBarTransitioning> statusBarTransitionController;
@property(readonly, nonatomic) id <SBLockScreenProximityBehaviorProviding> proximityBehaviorProvider;
@property(readonly, nonatomic) id <SBLockScreenPluginPresenting> pluginPresenter;
@property(readonly, nonatomic) id <SBLockScreenPasscodeViewPresenting> passcodeViewPresenter;
@property(readonly, nonatomic) id <SBLockScreenMediaControlsPresenting> mediaControlsPresenter;
@property(readonly, nonatomic) id <SBLockScreenLockingAndUnlocking> lockController;
@property(readonly, nonatomic) id <SBLockScreenIdleTimerControlling> idleTimerController;
@property(readonly, nonatomic) id <SBLockScreenCustomActionStoring> customActionStore;
@property(readonly, nonatomic) id <SBLockScreenContentStateProviding> contentStateProvider;
@property(readonly, nonatomic) id <SBLockScreenCallHandling> callController;
@property(readonly, nonatomic) id <SBLockScreenButtonObserving> buttonObserver;
@property(readonly, nonatomic) id <SBLockScreenBlockedStateObserving> blockedStateObserver;
@property(readonly, nonatomic) id <SBLockScreenBehaviorSuppressing> behaviorSuppressor;
@property(readonly, nonatomic) id <SBLockScreenBacklightControlling> backlightController;
@property(readonly, nonatomic) id <SBLockScreenApplicationLaunching> applicationLauncher;
@property(readonly, nonatomic) id <SBFScreenWakeAnimationTarget> screenWakeAnimationTarget;
@property(readonly, nonatomic) id <SBIdleTimerProviding> idleTimerProvider;
@property(readonly, nonatomic) id <SBApplicationHosting> applicationHoster;
@property(readonly, nonatomic) id <SBButtonEventsHandler> buttonEventsHandler;
@property(readonly, nonatomic) id <SBBiometricUnlockBehavior> biometricUnlockBehavior;
@property(readonly, nonatomic) id <SBAutoUnlockRule> autoUnlockRule;
@property(readonly, nonatomic) UIViewController *rootViewController;
@end

