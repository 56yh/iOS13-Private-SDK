//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString, SBPasscodeAlertItem, SBPasscodeComplianceAlertItem;
@protocol OS_dispatch_queue;

@interface SBPasscodeController : NSObject
{
    SBPasscodeAlertItem *_passcodeAlertItem;
    int _mode;
    NSString *_previousPasscode;
    NSString *_newPasscode;
    int _unlockScreenType;
    int _simplePasscodeType;
    SBPasscodeComplianceAlertItem *_complianceAlertItem;
    NSDate *_forcedComplianceDate;
    id _manageConfigurationEffectiveSettingsObserver;
    id _telephonyNotificationObserver;
    int _restoreCompletedAlertStateChangedToken;
    _Bool _delayedComplianceAlertUntilAfterRestoreCompletedAlert;
    NSObject<OS_dispatch_queue> *_passcodeComplianceQueue;
}

+ (id)sharedInstance;
- (void)checkPasscodeCompliance;
- (void)_activateComplianceAlert;
- (void)_stopListeningToRestoreCompletedAlertStateChangedNotifications;
- (void)_startListeningToRestoreCompletedAlertStateChangedNotifications;
- (_Bool)_isRestoreCompletedAlertActive;
- (void)_stopListeningToTelephonyNotifications;
- (void)_startListeningToTelephonyNotifications;
- (void)_didEndCall;
- (void)_abort;
- (void)_userWantsToComplyNow:(_Bool)arg1;
- (void)_stopListeningToManagedConfigurationNotification;
- (void)_startListeningToManagedConfigurationNotification;
- (void)_presentPasscodeAlertItemWithMode:(int)arg1 alertItemErrorString:(id)arg2 unlockScreenType:(int)arg3;
- (void)_fetchAndSetUnlockScreenTypeForNewPasscode:(_Bool)arg1;
- (void)_passwordEntered:(id)arg1;
- (void)forceUserToChangePasscode;
- (void)dealloc;
- (id)init;

@end

