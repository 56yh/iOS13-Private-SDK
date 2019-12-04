//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/SBUIBiometricResourceObserver-Protocol.h>

@class NSString;
@protocol SBUIBiometricResource;

@interface SBBiometricEventLogger : NSObject <SBUIBiometricResourceObserver>
{
    _Bool _isScreenOn;
    _Bool _passcodeSuccessAfterBioFailureTriggerArmed;
    id <SBUIBiometricResource> _biometricResource;
    _Bool _fingerOnWithScreenOn;
    unsigned long long _fingerOnTime;
    unsigned long long _keybagUnlockTime;
}

+ (void)logClass:(unsigned char)arg1 code:(unsigned int)arg2;
+ (void)logEvent:(unsigned int)arg1;
+ (id)sharedInstance;
@property(nonatomic) unsigned long long keybagUnlockTime; // @synthesize keybagUnlockTime=_keybagUnlockTime;
@property(nonatomic) _Bool fingerOnWithScreenOn; // @synthesize fingerOnWithScreenOn=_fingerOnWithScreenOn;
@property(nonatomic) unsigned long long fingerOnTime; // @synthesize fingerOnTime=_fingerOnTime;
- (unsigned long long)_machTimeInMilliseconds;
- (void)timestampEvent:(unsigned long long)arg1;
- (_Bool)_shouldSyslogTimestamps;
- (void)_resetPasscodeStateMachine;
- (void)_biometricAuthenticationFailed;
- (void)_biometricAuthenticationSucceeded;
- (void)_passcodeAuthenticationSucceeded;
- (void)biometricResource:(id)arg1 observeEvent:(unsigned long long)arg2;
- (void)_passcodeViewTransitionedToPasscode:(id)arg1;
- (void)_coversheetSwipedForDismissal:(id)arg1;
- (void)_passcodePromptCancelled:(id)arg1;
- (void)_systemDidWakeFromSleep:(id)arg1;
- (void)_authRequestCompleted:(id)arg1;
- (void)_prearmMatch:(id)arg1;
- (void)_unlockAnimationWillStart:(id)arg1;
- (void)_keybagBioUnlock:(id)arg1;
- (void)_tryAgain:(id)arg1;
- (void)_fingerOn:(id)arg1;
- (void)_backlightLevelChanged:(id)arg1;
- (void)_screenTurnedOn:(id)arg1;
- (void)_clearEverything;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

