//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpringBoard/SBPolicyAggregator.h>

@class MCProfileConnection, SBAlertItemsController, SBApplicationController, SBAssistantController, SBCommandTabController, SBConferenceManager, SBLocalDefaults, SBLockScreenManager, SBLockStateAggregator, SBMainWorkspace, SBNotificationBannerDestination, SBRemoteTransientOverlaySessionManager, SBSetupManager, SBTelephonyManager;

@interface SBMainDisplayPolicyAggregator : SBPolicyAggregator
{
    MCProfileConnection *_override_profileConnection;
    SBSetupManager *_override_setupManager;
    SBAlertItemsController *_override_alertItemsController;
    SBApplicationController *_override_applicationController;
    SBAssistantController *_override_assistantController;
    SBCommandTabController *_override_commandTabController;
    SBConferenceManager *_override_conferenceManager;
    SBRemoteTransientOverlaySessionManager *_override_remoteTransientOverlaySessionManager;
    SBLockScreenManager *_override_lockScreenManager;
    SBLockStateAggregator *_override_lockStateAggregator;
    SBTelephonyManager *_override_telephonyManager;
    SBMainWorkspace *_override_mainWorkspace;
    SBNotificationBannerDestination *_override_bannerDestination;
    struct __CFBoolean *_hasCameraCapability;
    SBLocalDefaults *_defaults;
    _Bool _storeDemoAppLockEnabled;
}

@property(retain, nonatomic, getter=_bannerDestination, setter=_setBannerDestination:) SBNotificationBannerDestination *bannerDestination; // @synthesize bannerDestination=_override_bannerDestination;
@property(retain, nonatomic, getter=_mainWorkspace, setter=_setMainWorkspace:) SBMainWorkspace *mainWorkspace; // @synthesize mainWorkspace=_override_mainWorkspace;
@property(retain, nonatomic, getter=_telephonyManager, setter=_setTelephonyManager:) SBTelephonyManager *telephonyManager; // @synthesize telephonyManager=_override_telephonyManager;
@property(retain, nonatomic, getter=_lockStateAggregator, setter=_setLockStateAggregator:) SBLockStateAggregator *lockStateAggregator; // @synthesize lockStateAggregator=_override_lockStateAggregator;
@property(retain, nonatomic, getter=_lockScreenManager, setter=_setLockScreenManager:) SBLockScreenManager *lockScreenManager; // @synthesize lockScreenManager=_override_lockScreenManager;
@property(retain, nonatomic, getter=_remoteTransientOverlaySessionManager, setter=_setRemoteTransientOverlaySessionManager:) SBRemoteTransientOverlaySessionManager *remoteTransientOverlaySessionManager; // @synthesize remoteTransientOverlaySessionManager=_override_remoteTransientOverlaySessionManager;
@property(retain, nonatomic, getter=_conferenceManager, setter=_setConferenceManager:) SBConferenceManager *conferenceManager; // @synthesize conferenceManager=_override_conferenceManager;
@property(retain, nonatomic, getter=_commandTabController, setter=_setCommandTabController:) SBCommandTabController *commandTabController; // @synthesize commandTabController=_override_commandTabController;
@property(retain, nonatomic, getter=_assistantController, setter=_setAssistantController:) SBAssistantController *assistantController; // @synthesize assistantController=_override_assistantController;
@property(retain, nonatomic, getter=_applicationController, setter=_setApplicationController:) SBApplicationController *applicationController; // @synthesize applicationController=_override_applicationController;
@property(retain, nonatomic, getter=_alertItemsController, setter=_setAlertItemsController:) SBAlertItemsController *alertItemsController; // @synthesize alertItemsController=_override_alertItemsController;
@property(retain, nonatomic, getter=_setupManager, setter=_setSetupManager:) SBSetupManager *setupManager; // @synthesize setupManager=_override_setupManager;
@property(retain, nonatomic, getter=_profileConnection, setter=_setProfileConnection:) MCProfileConnection *profileConnection; // @synthesize profileConnection=_override_profileConnection;
- (_Bool)_dictationInfoOnScreen;
- (_Bool)_allowsCapabilityQuickNoteWithExplanation:(id *)arg1;
- (_Bool)_allowsCapabilityLiftToWakeWithExplanation:(id *)arg1;
- (_Bool)_allowsCapabilityTodayViewWithExplanation:(id *)arg1;
- (_Bool)_allowsCapabilityLockScreenTodayViewWithExplanation:(id *)arg1;
- (_Bool)_allowsCapabilityLockScreenNotificationCenterWithExplanation:(id *)arg1;
- (_Bool)_allowsCapabilityLockScreenControlCenterWithExplanation:(id *)arg1;
- (_Bool)_allowsCapabilityCommandTabWithExplanation:(id *)arg1;
- (_Bool)_allowsCapabilityScreenshotWithExplanation:(id *)arg1;
- (_Bool)_allowsCapabilityHomeScreenEditingWithExplanation:(id *)arg1;
- (_Bool)_allowsCapabilityLoginWindowWithExplanation:(id *)arg1;
- (_Bool)_allowsCapabilityLogoutWithExplanation:(id *)arg1;
- (_Bool)_allowsCapabilityControlCenterWithExplanation:(id *)arg1;
- (_Bool)_allowsCapabilityDismissCoverSheetWithExplanation:(id *)arg1;
- (_Bool)_allowsCapabilityCoverSheetWithExplanation:(id *)arg1;
- (_Bool)_allowsNotificationOrControlCenterWithExplanation:(id *)arg1;
- (_Bool)_allowsCapabilityLockScreenCameraWithExplanation:(id *)arg1;
- (_Bool)_allowsCapabilityLockScreenCameraSupportedWithExplanation:(id *)arg1;
- (_Bool)_allowsCapabilitySpotlightWithExplanation:(id *)arg1;
- (_Bool)_allowsCapabilityVoiceControlWithExplanation:(id *)arg1;
- (_Bool)_allowsCapabilitySystemGestureWithExplanation:(id *)arg1;
- (_Bool)_allowsCapabilitySendMediaCommandWithExplanation:(id *)arg1;
- (_Bool)_allowsCapabilityAssistantWithExplanation:(id *)arg1;
- (_Bool)_allowsCapabilityAssistantEnabledWithExplanation:(id *)arg1;
- (_Bool)_allowsCapabilityUnlockToPluginSpecifiedApplicationWithExplanation:(id *)arg1;
- (_Bool)_allowsCapabilityLockScreenBulletinWithExplanation:(id *)arg1;
- (_Bool)_allowsCapabilitySuggestedApplicationWithExplanation:(id *)arg1;
- (_Bool)_hasFullySetUpUserWithExplanation:(id *)arg1;
- (void)reloadDemoDefaults;
- (_Bool)allowsTransitionRequest:(id)arg1;
- (_Bool)allowsCapability:(long long)arg1 explanation:(id *)arg2;
- (_Bool)allowsCapability:(long long)arg1;
- (id)init;
- (id)_initWithDefaults:(id)arg1;

@end

