//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpringBoard/SBTransientOverlayViewController.h>

#import <SpringBoard/PTSettingsKeyObserver-Protocol.h>
#import <SpringBoard/SBFAuthenticationResponder-Protocol.h>
#import <SpringBoard/SBUIPasscodeLockViewDelegate-Protocol.h>

@class CSLockScreenPearlSettings, NSString, SBFUserAuthenticationController, SBUIPasscodeViewWithLockScreenStyle;
@protocol SBPasscodeEntryTransientOverlayViewControllerDelegate, SBUIPasscodeLockView;

@interface SBPasscodeEntryTransientOverlayViewController : SBTransientOverlayViewController <PTSettingsKeyObserver, SBFAuthenticationResponder, SBUIPasscodeLockViewDelegate>
{
    _Bool _attemptingUnlock;
    SBFUserAuthenticationController *_authenticationController;
    id <SBUIPasscodeLockView> _passcodeRequester;
    SBUIPasscodeViewWithLockScreenStyle *_passcodeView;
    CSLockScreenPearlSettings *_pearlSettings;
    _Bool _showEmergencyCallButton;
    _Bool _useBiometricPresentation;
    id <SBPasscodeEntryTransientOverlayViewControllerDelegate> _delegate;
    NSString *_unlockDestination;
}

@property(copy, nonatomic) NSString *unlockDestination; // @synthesize unlockDestination=_unlockDestination;
@property(nonatomic) _Bool useBiometricPresentation; // @synthesize useBiometricPresentation=_useBiometricPresentation;
@property(nonatomic) _Bool showEmergencyCallButton; // @synthesize showEmergencyCallButton=_showEmergencyCallButton;
@property(nonatomic) __weak id <SBPasscodeEntryTransientOverlayViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_updatePrototypeSettings;
- (void)_passcodeLockViewPasscodeEntered:(id)arg1 viaMesa:(_Bool)arg2;
- (void)_attemptUnlock:(id)arg1 passcode:(id)arg2;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (void)passcodeLockViewEmergencyCallButtonPressed:(id)arg1;
- (void)passcodeLockViewCancelButtonPressed:(id)arg1;
- (void)passcodeLockViewPasscodeEnteredViaMesa:(id)arg1;
- (void)passcodeLockViewPasscodeEntered:(id)arg1;
- (void)passcodeLockViewPasscodeDidChange:(id)arg1;
- (long long)idleWarnMode;
- (long long)idleTimerMode;
- (long long)idleTimerDuration;
- (void)handleInvalidAuthenticationRequest:(id)arg1;
- (void)handleFailedAuthenticationRequest:(id)arg1 error:(id)arg2;
- (void)handleSuccessfulAuthenticationRequest:(id)arg1;
- (id)preferredDisplayLayoutElementIdentifier;
- (id)newTransientOverlayPresentationTransitionCoordinator;
- (id)newTransientOverlayDismissalTransitionCoordinator;
- (_Bool)isContentOpaque;
- (_Bool)_canShowWhileLocked;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (long long)preferredStatusBarStyle;
- (long long)preferredInterfaceOrientationForPresentation;
- (id)initWithAuthenticationController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

