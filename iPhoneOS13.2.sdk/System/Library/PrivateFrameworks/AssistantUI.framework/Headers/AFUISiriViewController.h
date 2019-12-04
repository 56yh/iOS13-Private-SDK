//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <AssistantUI/AFUISiriRemoteSceneViewControllerDataSource-Protocol.h>
#import <AssistantUI/AFUISiriRemoteSceneViewControllerDelegate-Protocol.h>
#import <AssistantUI/AFUISiriSessionLocalDataSource-Protocol.h>
#import <AssistantUI/AFUISiriSessionLocalDelegate-Protocol.h>
#import <AssistantUI/AFUISiriViewDataSource-Protocol.h>
#import <AssistantUI/AFUISiriViewDelegate-Protocol.h>
#import <AssistantUI/SiriUIAudioRoutePickerControllerDelegate-Protocol.h>
#import <AssistantUI/SiriUIKeyboardViewDelegate-Protocol.h>
#import <AssistantUI/SiriUIPresentationRemoteControlling-Protocol.h>

@class AFUIDelayedActionCommandCache, AFUISiriRemoteSceneViewController, AFUISiriSession, NSDictionary, NSNumber, NSObject, NSString, SASRequestOptions, SiriUIAudioRoutePickerController, SiriUIConfiguration, SiriUIKeyboardView, UIStatusBar, UIView;
@protocol AFUISiriRemoteViewHosting, AFUISiriViewControllerDataSource, AFUISiriViewControllerDelegate, OS_dispatch_queue;

@interface AFUISiriViewController : UIViewController <AFUISiriRemoteSceneViewControllerDataSource, AFUISiriRemoteSceneViewControllerDelegate, AFUISiriViewDelegate, SiriUIAudioRoutePickerControllerDelegate, AFUISiriSessionLocalDataSource, AFUISiriSessionLocalDelegate, AFUISiriViewDataSource, SiriUIKeyboardViewDelegate, SiriUIPresentationRemoteControlling>
{
    _Bool _active;
    _Bool _remoteViewControllerDispatchQueueSuspended;
    long long _vtEnabledCount;
    long long _currentRequestSource;
    id /* block */ _triggerUpdater;
    AFUIDelayedActionCommandCache *_delayedActionCommandCache;
    _Bool _siriSessionWantsToEnd;
    SiriUIConfiguration *_configuration;
    NSString *_uiAppearanceUUIDString;
    NSObject<OS_dispatch_queue> *_uiAppearanceCoreDuetQueue;
    _Bool _presentedConversationFromBreadcrumb;
    SiriUIKeyboardView *_inputAccessoryView;
    CDStruct_a82615c4 _keyboardInfo;
    _Bool _unlockScreenVisible;
    _Bool _remoteViewControllerIsPresenting;
    long long _hostingConnectionState;
    NSDictionary *_dismissalUserInfo;
    _Bool _recordingStartedOnRoute;
    long long _requestCancellationReason;
    _Bool _visible;
    _Bool _eyesFree;
    _Bool _deviceIsInStarkMode;
    _Bool _carDNDActive;
    _Bool _receivedIncomingPhoneCall;
    _Bool _turnsOnScreenOnAppearance;
    _Bool _showsStatusBar;
    _Bool _statusBarEnabled;
    _Bool _hasCalledBeginAppearanceTransition;
    _Bool _hasCalledEndAppearanceTransition;
    _Bool _inHoldToTalkMode;
    _Bool _viewDisappearing;
    _Bool _userUtteranceTapToEditInProgress;
    _Bool _punchingOut;
    id <AFUISiriViewControllerDataSource> _dataSource;
    id <AFUISiriViewControllerDelegate> _delegate;
    AFUISiriSession *_session;
    AFUISiriRemoteSceneViewController *_remoteViewController;
    NSObject<OS_dispatch_queue> *_remoteViewControllerDispatchQueue;
    SiriUIAudioRoutePickerController *_routePickerController;
    UIStatusBar *_statusBar;
    SASRequestOptions *_currentRequestOptions;
    NSNumber *_recordingStartedTimeValue;
    double _viewDidAppearTime;
    struct CGRect _hostedPresentationFrame;
}

@property(nonatomic) struct CGRect hostedPresentationFrame; // @synthesize hostedPresentationFrame=_hostedPresentationFrame;
@property(nonatomic, getter=_isPunchingOut, setter=_setPunchingOut:) _Bool punchingOut; // @synthesize punchingOut=_punchingOut;
@property(nonatomic, getter=_isUserUtteranceTapToEditInProgress, setter=_setUserUtteranceTapToEditInProgress:) _Bool userUtteranceTapToEditInProgress; // @synthesize userUtteranceTapToEditInProgress=_userUtteranceTapToEditInProgress;
@property(nonatomic, getter=isViewDisappearing) _Bool viewDisappearing; // @synthesize viewDisappearing=_viewDisappearing;
@property(nonatomic, getter=_viewDidAppearTime, setter=_setViewDidAppearTime:) double viewDidAppearTime; // @synthesize viewDidAppearTime=_viewDidAppearTime;
@property(retain, nonatomic, getter=_recordingStartedTimeValue, setter=_setRecordingStartedTimeValue:) NSNumber *recordingStartedTimeValue; // @synthesize recordingStartedTimeValue=_recordingStartedTimeValue;
@property(copy, nonatomic, getter=_currentRequestOptions, setter=_setCurrentRequestOptions:) SASRequestOptions *currentRequestOptions; // @synthesize currentRequestOptions=_currentRequestOptions;
@property(nonatomic, getter=_isInHoldToTalkMode, setter=_setInHoldToTalkMode:) _Bool inHoldToTalkMode; // @synthesize inHoldToTalkMode=_inHoldToTalkMode;
@property(retain, nonatomic, getter=_statusBar, setter=_setStatusBar:) UIStatusBar *statusBar; // @synthesize statusBar=_statusBar;
@property(retain, nonatomic) SiriUIAudioRoutePickerController *routePickerController; // @synthesize routePickerController=_routePickerController;
@property(nonatomic, getter=_hasCalledEndAppearanceTransition, setter=_setHasCalledEndAppearanceTransition:) _Bool hasCalledEndAppearanceTransition; // @synthesize hasCalledEndAppearanceTransition=_hasCalledEndAppearanceTransition;
@property(nonatomic, getter=_hasCalledBeginAppearanceTransition, setter=_setHasCalledBeginAppearanceTransition:) _Bool hasCalledBeginAppearanceTransition; // @synthesize hasCalledBeginAppearanceTransition=_hasCalledBeginAppearanceTransition;
@property(readonly, nonatomic, getter=_remoteViewControllerDispatchQueue) NSObject<OS_dispatch_queue> *remoteViewControllerDispatchQueue; // @synthesize remoteViewControllerDispatchQueue=_remoteViewControllerDispatchQueue;
@property(readonly, nonatomic, getter=_remoteViewController) AFUISiriRemoteSceneViewController *remoteViewController; // @synthesize remoteViewController=_remoteViewController;
@property(readonly, nonatomic, getter=_session) AFUISiriSession *session; // @synthesize session=_session;
@property(nonatomic) _Bool statusBarEnabled; // @synthesize statusBarEnabled=_statusBarEnabled;
@property(nonatomic) _Bool showsStatusBar; // @synthesize showsStatusBar=_showsStatusBar;
@property(nonatomic) _Bool turnsOnScreenOnAppearance; // @synthesize turnsOnScreenOnAppearance=_turnsOnScreenOnAppearance;
@property(nonatomic) _Bool receivedIncomingPhoneCall; // @synthesize receivedIncomingPhoneCall=_receivedIncomingPhoneCall;
@property(nonatomic) _Bool carDNDActive; // @synthesize carDNDActive=_carDNDActive;
@property(nonatomic, getter=isDeviceInStarkMode, setter=setDeviceInStarkMode:) _Bool deviceIsInStarkMode; // @synthesize deviceIsInStarkMode=_deviceIsInStarkMode;
@property(nonatomic, getter=isEyesFree) _Bool eyesFree; // @synthesize eyesFree=_eyesFree;
@property(nonatomic, getter=isVisible) _Bool visible; // @synthesize visible=_visible;
@property(nonatomic) __weak id <AFUISiriViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <AFUISiriViewControllerDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (_Bool)_canShowWhileLocked;
- (void)_setRecordingStartedOnRoute:(_Bool)arg1;
- (_Bool)_recordingStartedOnRoute;
- (void)updateToPresentationWithIdentifier:(id)arg1 presentationProperties:(id)arg2 animated:(_Bool)arg3 completion:(id /* block */)arg4;
- (void)updateSettingsOnRemoteSceneForInterfaceOrientationChange:(long long)arg1 willAnimationWithDuration:(double)arg2;
- (void)handlePunchoutCommand:(id)arg1 completion:(id /* block */)arg2;
- (_Bool)shouldNonLocalDelegateHandlePunchouts;
- (void)siriSessionShouldEndExtendAudioSessionForImminentPhoneCall;
- (void)siriSessionShouldExtendAudioSessionForImminentPhoneCall;
- (void)siriSessionDidFinishRequestWithError:(id)arg1;
- (void)siriSession:(id)arg1 speechRecordingDidBeginOnAVRecordRoute:(id)arg2;
- (void)siriSessionDidUpdateSessionInfo:(id)arg1;
- (void)siriSessionDidEnd:(id)arg1;
- (void)siriSessionWillEnd:(id)arg1;
- (void)siriSessionDidResetContext:(id)arg1;
- (void)siriSessionRecordingPreparationHasFinished:(id)arg1;
- (void)siriSessionDidReceiveDelayedActionCancelCommand:(id)arg1 completion:(id /* block */)arg2;
- (void)siriSessionDidReceiveDelayedActionCommand:(id)arg1 completion:(id /* block */)arg2;
- (void)siriSession:(id)arg1 didReceiveDeviceUnlockRequestAndCancelRequest:(_Bool)arg2 withCompletion:(id /* block */)arg3;
- (void)siriSession:(id)arg1 didReceiveDeviceUnlockRequestWithCompletion:(id /* block */)arg2;
- (void)siriSession:(id)arg1 didChangeToState:(long long)arg2;
- (unsigned long long)lockStateForSiriSession:(id)arg1;
- (id)starkAppBundleIdentifierContextForSiriSession:(id)arg1;
- (id)currentCarPlaySupportedOEMAppIDListForSiriSession:(id)arg1;
- (id)contextAppInfosForSiriSession:(id)arg1;
- (id)bulletinsForSiriSession:(id)arg1;
- (void)routePickerControllerWillDismiss:(id)arg1;
- (void)routePickerControllerWillShow:(id)arg1;
- (void)routePickerControllerPickedNewRoute:(id)arg1 isBluetooth:(_Bool)arg2;
- (void)routePickerController:(id)arg1 hasRoutesToPick:(_Bool)arg2;
- (void)_updateAudioRoutePicker;
- (_Bool)siriViewShouldSupportTextInput:(id)arg1;
- (void)siriViewDidReceiveAudioRouteAction:(id)arg1;
- (id)_routePickerController;
- (void)_didDetectAudioRoutePickerTap;
- (void)_setAudioRoutePickerBluetoothOn:(_Bool)arg1;
- (void)_setShowAudioRoutePicker:(_Bool)arg1;
- (long long)userAccountCountForSiriView:(id)arg1;
- (id)activeAccountForSiriView:(id)arg1;
- (id)assistantVersionForSiriView:(id)arg1;
- (void)siriView:(id)arg1 didReceiveSiriActivationMessageWithSource:(long long)arg2;
- (_Bool)siriView:(id)arg1 attemptUnlockWithPassword:(id)arg2;
- (void)siriViewDidReceiveHelpAction:(id)arg1;
- (void)siriViewDidReceiveBugButtonLongPress:(id)arg1;
- (void)siriViewDidReceiveReportBugAction:(id)arg1;
- (void)_handleHelpAction;
- (void)_handleReportBugLongPressAction;
- (void)_handleReportBugAction;
- (void)siriViewDidRecieveStatusViewHoldDidEndAction:(id)arg1;
- (void)siriViewDidRecieveStatusViewHoldDidBeginAction:(id)arg1;
- (void)siriViewDidRecieveStatusViewTappedAction:(id)arg1;
- (float)audioRecordingPowerLevelForSiriView:(id)arg1;
- (void)_resumeRemoteViewControllerDispatchQueue;
- (void)_suspendRemoteViewControllerDispatchQueue;
- (void)telephonyRequestCompleted;
- (void)setWaitingForTelephonyToStart:(_Bool)arg1;
- (void)endSession;
- (void)cancelTTS;
- (void)hasQueuedTTS:(id /* block */)arg1;
- (_Bool)isListening;
- (_Bool)isPreventingActivationGesture;
- (void)_stopRequestWithOptions:(id)arg1 afterDelay:(double)arg2;
- (void)startRequestWithActivationTrigger:(id)arg1 completion:(id /* block */)arg2;
- (void)startRequestWithActivationTrigger:(id)arg1;
- (void)_activationTriggerDidRelease:(id)arg1;
- (double)_manualEndpointingThreshold;
- (void)_exitHoldToTalkMode;
- (void)_transitionToAutomaticEndpointMode;
- (void)_enterHoldToTalkMode;
- (_Bool)_holdToTalkThresholdHasElapsed;
- (_Bool)_isInitialSpeechRequest;
- (_Bool)_canIgnoreHoldToTalkThreshold;
- (_Bool)_isTextInputEnabled;
- (id)_uiPresentationIdentifier;
- (void)_holdToTalkTriggerDidReleaseFromSource:(long long)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewWillLayoutSubviews;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (id)viewServiceApplicationInfo;
- (void)shortTapAction;
- (void)handleViewFullyRevealed;
- (void)updateViewForPercentageRevealed:(double)arg1;
- (void)setLockState:(unsigned long long)arg1;
- (void)_updateRemoteViewControllerStateForAppearance;
- (void)showPresentationWithIdentifier:(id)arg1 properties:(id)arg2 lockState:(unsigned long long)arg3;
- (void)preloadPluginBundles;
- (void)preloadPresentationBundleWithIdentifier:(id)arg1;
- (id)currentRequestOptions;
- (void)updateRequestOptions:(id)arg1;
- (void)stopRequestWithOptions:(id)arg1;
- (void)startRequestWithOptions:(id)arg1 completion:(id /* block */)arg2;
- (void)startRequestWithOptions:(id)arg1;
- (void)setSiriRequestCancellationReason:(long long)arg1;
- (void)setAlertContext;
- (void)updateContexts:(long long)arg1;
- (void)resetContextTypes:(long long)arg1;
- (void)siriDidDeactivate;
- (long long)currentSource;
- (void)siriDidActivateFromSource:(long long)arg1;
- (void)siriWillActivateFromSource:(long long)arg1;
- (void)preheat;
- (void)defrost;
- (void)showPasscodeUnlockScreenForRequest:(id)arg1 unlockCompletion:(id /* block */)arg2;
- (void)handlePasscodeUnlockAndCancelRequest:(_Bool)arg1 withCompletion:(id /* block */)arg2;
- (void)handlePasscodeUnlockWithCompletion:(id /* block */)arg1;
- (void)_handleSiriDidActivateFromSource:(long long)arg1;
- (void)_handleMicButtonLongPressEndedFromSource:(long long)arg1;
- (void)_handleMicButtonLongPressBeganFromSource:(long long)arg1;
- (void)_handleMicButtonTapFromSource:(long long)arg1;
- (void)keyboardViewDidReceiveAudioRouteAction:(id)arg1;
- (void)keyboardViewDidReceiveBugButtonLongPress:(id)arg1;
- (void)keyboardViewDidReceiveHelpButtonAction:(id)arg1;
- (void)keyboardViewDidReceiveReportBugAction:(id)arg1;
- (void)keyboardView:(id)arg1 didReceiveText:(id)arg2;
- (void)_setShowKeyboardIfTextInputEnabled:(_Bool)arg1 minimized:(_Bool)arg2;
- (void)_setShowKeyboardIfTextInputEnabled:(_Bool)arg1;
- (void)_setTypeToSiriViewHidden:(_Bool)arg1;
- (void)_setStatusViewHidden:(_Bool)arg1;
- (void)siriRemoteViewController:(id)arg1 didUpdateAudioCategoriesDisablingVolumeHUD:(id)arg2;
- (void)siriRemoteViewController:(id)arg1 presentedIntentWithBundleId:(id)arg2;
- (void)siriRemoteViewController:(id)arg1 requestsDismissal:(id /* block */)arg2;
- (void)siriRemoteViewController:(id)arg1 requestsPresentation:(id /* block */)arg2;
- (void)siriRemoteViewControllerDidEndTapToEdit:(id)arg1;
- (void)siriRemoteViewControllerWillBeginTapToEdit:(id)arg1;
- (void)siriRemoteViewController:(id)arg1 requestKeyboardForTapToEditWithCompletion:(id /* block */)arg2;
- (void)siriRemoteViewControllerDidResetTextInput:(id)arg1;
- (void)siriRemoteViewController:(id)arg1 didRequestKeyboard:(_Bool)arg2 minimized:(_Bool)arg3;
- (void)siriRemoteViewController:(id)arg1 didRequestKeyboard:(_Bool)arg2;
- (void)siriRemoteViewControllerDidDetectAudioRoutePickerTap:(id)arg1;
- (void)siriRemoteViewControllerDidPresentConversationFromBreadcrumb:(id)arg1;
- (void)siriRemoteViewController:(id)arg1 didChangePresentationPeekMode:(unsigned long long)arg2;
- (void)siriRemoteViewControllerDidDetectMicButtonLongPressEnded:(id)arg1;
- (void)siriRemoteViewControllerDidDetectMicButtonLongPressBegan:(id)arg1;
- (void)siriRemoteViewControllerDidDetectMicButtonTap:(id)arg1;
- (_Bool)siriRemoteViewController:(id)arg1 openURL:(id)arg2 appBundleID:(id)arg3 allowSiriDismissal:(_Bool)arg4;
- (void)siriRemoteViewController:(id)arg1 openURL:(id)arg2 delaySessionEndForTTS:(_Bool)arg3 completion:(id /* block */)arg4;
- (void)siriRemoteViewController:(id)arg1 didReadBulletinWithIdentifier:(id)arg2;
- (void)siriRemoteViewControllerPulseHelpButton:(id)arg1;
- (void)siriRemoteViewControllerDidPresentUserInterface:(id)arg1;
- (void)siriRemoteViewControllerDidExitUITrackingMode:(id)arg1;
- (void)siriRemoteViewControllerDidEnterUITrackingMode:(id)arg1;
- (void)siriRemoteViewController:(id)arg1 failTest:(id)arg2 withReason:(id)arg3;
- (void)siriRemoteViewController:(id)arg1 didFinishTest:(id)arg2;
- (void)siriRemoteViewController:(id)arg1 willStartTest:(id)arg2;
- (void)siriRemoteViewController:(id)arg1 handlePasscodeUnlockWithCompletion:(id /* block */)arg2;
- (void)siriRemoteViewController:(id)arg1 setBugReportingAvailable:(_Bool)arg2;
- (void)siriRemoteViewController:(id)arg1 setHelpButtonEmphasized:(_Bool)arg2;
- (void)siriRemoteViewController:(id)arg1 setStatusBarHidden:(_Bool)arg2 animated:(_Bool)arg3 completion:(id /* block */)arg4;
- (void)siriRemoteViewController:(id)arg1 setStatusBarHidden:(_Bool)arg2 animated:(_Bool)arg3;
- (void)siriRemoteViewController:(id)arg1 didDismissViewControllerWithStatusBarStyle:(long long)arg2;
- (void)siriRemoteViewController:(id)arg1 willDismissViewControllerWithStatusBarStyle:(long long)arg2;
- (void)siriRemoteViewController:(id)arg1 didPresentViewControllerWithStatusBarStyle:(long long)arg2;
- (void)siriRemoteViewController:(id)arg1 willPresentViewControllerWithStatusBarStyle:(long long)arg2;
- (void)siriRemoteViewController:(id)arg1 setStatusViewUserInteractionEnabled:(_Bool)arg2;
- (void)siriRemoteViewController:(id)arg1 setStatusViewDisabled:(_Bool)arg2;
- (void)siriRemoteViewController:(id)arg1 setCarDisplaySnippetMode:(long long)arg2;
- (void)siriRemoteViewController:(id)arg1 setTypeToSiriViewHidden:(_Bool)arg2;
- (void)siriRemoteViewController:(id)arg1 setStatusViewHidden:(_Bool)arg2;
- (void)siriRemoteViewController:(id)arg1 siriIdleAndQuietStatusDidChange:(_Bool)arg2;
- (void)siriRemoteViewController:(id)arg1 launchApplicationWithBundleIdentifier:(id)arg2 withURL:(id)arg3 launchOptions:(long long)arg4 replyHandler:(id /* block */)arg5;
- (void)siriRemoteViewController:(id)arg1 didRequestCurrentTextInputWithReplyHandler:(id /* block */)arg2;
- (void)userRelevantEventDidOccurInSiriRemoteViewController:(id)arg1;
- (void)siriRemoteViewController:(id)arg1 startRequestWithOptions:(id)arg2;
- (void)startGuidedAccessForRemoteViewController:(id)arg1;
- (void)extendCurrentTTSRequested;
- (void)dismissSiriRemoteViewController:(id)arg1 delayForTTS:(_Bool)arg2 userInfo:(id)arg3;
- (long long)siriRemoteViewControllerRequestsActivationSource:(id)arg1;
- (void)siriRemoteViewController:(id)arg1 invalidatedForReason:(unsigned long long)arg2 explanation:(id)arg3;
- (void)siriRemoteViewControllerDidFinishDismissing:(id)arg1;
- (unsigned long long)lockStateForSiriRemoteViewController:(id)arg1;
- (id)siriRemoteViewController:(id)arg1 bulletinWithIdentifier:(id)arg2;
- (void)_enqueueRemoteViewControllerMessageBlock:(id /* block */)arg1;
- (void)_sendEndAppearanceTransitionIfReady;
- (void)_sendBeginAppearanceTransitionIfReadyAnimated:(_Bool)arg1;
- (_Bool)shouldAutomaticallyForwardAppearanceMethods;
- (void)_presentDeferredFlamesViewIfNecessary;
- (void)_informRemoteViewControllerOfParentIfNecessary;
- (void)dismissViewControllerAnimated:(_Bool)arg1 completion:(id /* block */)arg2;
- (void)_presentRemoteViewController;
- (void)presentRemoteViewControllerIfNecessary;
- (void)_setVoiceTriggerEnabled:(_Bool)arg1;
- (id)childViewControllerForHomeIndicatorAutoHidden;
- (_Bool)isInitialBringUp;
- (void)viewSafeAreaInsetsDidChange;
- (void)didMoveToParentViewController:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)_keyboardDidHideNotification:(id)arg1;
- (void)_keyboardDidShowNotification:(id)arg1;
- (CDStruct_a82615c4)_keyboardInfoFromNotification:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)_recordUIDismissal;
- (void)_recordUIAppearance;
- (void)_willEnterFullScreenScreenshotMode:(id)arg1;
- (void)_applicationDidBecomeActive:(id)arg1;
- (void)_applicationWillEnterForeground:(id)arg1;
- (void)_applicationWillResignActive:(id)arg1;
- (struct CGRect)_statusBarFrame;
- (void)_removeStatusBar;
- (void)_hideStatusBarAnimated:(_Bool)arg1 completion:(id /* block */)arg2;
- (void)_showStatusBarAnimated:(_Bool)arg1 completion:(id /* block */)arg2;
- (void)_statusBarFrameDidChange:(id)arg1;
- (id)_siriView;
- (void)loadView;
- (long long)keyboardAppearance;
@property(retain, nonatomic) UIView *inputAccessoryView;
- (_Bool)canBecomeFirstResponder;
- (void)setFluidDismissalState:(id)arg1;
- (void)animatedDisappearanceWithFactory:(id)arg1 completion:(id /* block */)arg2;
- (void)animatedAppearanceWithFactory:(id)arg1 completion:(id /* block */)arg2;
- (void)proximityStatusChanged:(_Bool)arg1;
- (void)exitUITrackingMode;
- (void)enterUITrackingMode;
@property(readonly, nonatomic) _Bool isProcessingAcousticIdRequest;
- (void)setShowsStatusBar:(_Bool)arg1 animated:(_Bool)arg2 completion:(id /* block */)arg3;
- (id)underlyingConnection;
- (void)dealloc;
- (id)initWithConnection:(id)arg1 configuration:(id)arg2 requestSource:(long long)arg3;
- (id)initWithConnection:(id)arg1 configuration:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) UIView<AFUISiriRemoteViewHosting> *view; // @dynamic view;

@end

