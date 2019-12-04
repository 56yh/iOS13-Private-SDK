//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpringBoard/SBHardwareButtonGestureParametersProviderBase.h>

#import <SpringBoard/SBHardwareButtonGestureParametersObserver-Protocol.h>

@class NSString, SBAccessibilityHardwareButtonInteraction, SBApplication, SBHardwareButtonGestureParameters, SBHardwareButtonService, SBProximitySensorManager, SBSiriHardwareButtonInteraction, SBSleepWakeHardwareButtonInteraction, SBWalletPreArmController, SOSManager;
@protocol SBHardwareButtonInteraction><SBHardwareButtonGestureParametersProvider;

@interface SBLockHardwareButtonActions : SBHardwareButtonGestureParametersProviderBase <SBHardwareButtonGestureParametersObserver>
{
    long long _homeButtonType;
    SBApplication *_lastLockButtonEventRecipient;
    SBProximitySensorManager *_proximitySensorManager;
    SBHardwareButtonService *_hardwareButtonService;
    SBWalletPreArmController *_walletPreArmController;
    SOSManager *_sosManager;
    SBHardwareButtonGestureParameters *_accessibilityGestureParameters;
    SBHardwareButtonGestureParameters *_siriGestureParameters;
    SBHardwareButtonGestureParameters *_proximitySensorGestureParameters;
    long long _sosTriggerMechanism;
    _Bool _isButtonDown;
    SBSiriHardwareButtonInteraction *_siriButtonInteraction;
    SBAccessibilityHardwareButtonInteraction *_accessibilityButtonInteraction;
    SBSleepWakeHardwareButtonInteraction *_sleepWakeButtonInteraction;
    id <SBHardwareButtonInteraction><SBHardwareButtonGestureParametersProvider> _proximitySensorButtonInteraction;
}

@property(retain, nonatomic) id <SBHardwareButtonInteraction><SBHardwareButtonGestureParametersProvider> proximitySensorButtonInteraction; // @synthesize proximitySensorButtonInteraction=_proximitySensorButtonInteraction;
@property(retain, nonatomic) SBSleepWakeHardwareButtonInteraction *sleepWakeButtonInteraction; // @synthesize sleepWakeButtonInteraction=_sleepWakeButtonInteraction;
@property(retain, nonatomic) SBAccessibilityHardwareButtonInteraction *accessibilityButtonInteraction; // @synthesize accessibilityButtonInteraction=_accessibilityButtonInteraction;
@property(retain, nonatomic) SBSiriHardwareButtonInteraction *siriButtonInteraction; // @synthesize siriButtonInteraction=_siriButtonInteraction;
@property(readonly, nonatomic) _Bool isButtonDown; // @synthesize isButtonDown=_isButtonDown;
- (void)_sendButtonEventToApp:(id)arg1 down:(_Bool)arg2;
- (_Bool)_sendButtonDownToRegisteredApp;
- (_Bool)_sendButtonUpToRegisteredApp;
- (id)_foregroundAppRegisteredForLockButtonEvents;
- (void)_registeredLockButtonAppsDidChange:(id)arg1;
- (_Bool)_isSOSActive;
- (void)_performSOSDidTriggerActions;
- (void)provider:(id)arg1 didUpdateButtonGestureParameters:(id)arg2;
- (id)hardwareButtonGestureParameters;
- (_Bool)shouldBeginDoublePressGestureWhileObjectWithinProximity;
- (_Bool)disallowsLongPressForReason:(id *)arg1;
- (_Bool)disallowsTriplePressForReason:(id *)arg1;
- (_Bool)disallowsDoublePressForReason:(id *)arg1;
- (_Bool)disallowsSinglePressForReason:(id *)arg1;
- (_Bool)_shouldWaitForDoublePress;
- (void)performLongPressCancelledActions;
- (void)performSOSActionsWithUUID:(id)arg1 triggerMechanism:(long long)arg2 completion:(id /* block */)arg3;
- (void)performTriplePressActions;
- (void)performDoublePressActions;
- (void)performSinglePressAction;
- (_Bool)performButtonUpPreActions;
- (void)performSinglePressDidFailActions;
- (void)performForceResetSequenceBeganActions;
- (void)_showPowerDownTransientOverlayOnForceReset;
- (void)performLongPressActions;
- (void)performSecondButtonDownActions;
- (void)performInitialButtonUpActions;
- (void)performInitialButtonDownActions;
- (void)performFinalButtonUpActions;
- (void)performSOSGestureEndedActions;
- (void)performSOSGestureBeganActions;
- (_Bool)reverseFadeOutIfNeeded;
- (id)initWithHomeButtonType:(long long)arg1 proximitySensorManager:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

