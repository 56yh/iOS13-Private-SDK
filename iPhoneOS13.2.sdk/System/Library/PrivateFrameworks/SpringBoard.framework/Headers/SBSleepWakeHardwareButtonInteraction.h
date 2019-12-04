//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/SBHardwareButtonGestureParametersObserver-Protocol.h>
#import <SpringBoard/SBHardwareButtonInteraction-Protocol.h>

@class NSString, SBBacklightController, SBBannerController, SBHIDInterface, SBLockScreenManager, SBScreenWakeAnimationController, SBSoundController, SpringBoard;
@protocol BSInvalidatable;

@interface SBSleepWakeHardwareButtonInteraction : NSObject <SBHardwareButtonInteraction, SBHardwareButtonGestureParametersObserver>
{
    _Bool _inhibitNextSinglePressUp;
    _Bool _SOSGestureActive;
    _Bool _fadeOutInProgressFromLockButtonWhileUnlocked;
    _Bool _undidFadeOutFromLockButton;
    _Bool _didPlayLockSound;
    SBBacklightController *_backlightController;
    SBBannerController *_bannerController;
    SBLockScreenManager *_lockScreenManager;
    SBScreenWakeAnimationController *_screenWakeAnimationController;
    SBSoundController *_soundController;
    SBHIDInterface *_HIDInterface;
    SpringBoard *_SBApp;
    double _multiplePressTimeInterval;
    id <BSInvalidatable> _deferOrientationUpdatesAssertion;
}

@property(retain, nonatomic) id <BSInvalidatable> deferOrientationUpdatesAssertion; // @synthesize deferOrientationUpdatesAssertion=_deferOrientationUpdatesAssertion;
@property(nonatomic) _Bool didPlayLockSound; // @synthesize didPlayLockSound=_didPlayLockSound;
@property(nonatomic) _Bool undidFadeOutFromLockButton; // @synthesize undidFadeOutFromLockButton=_undidFadeOutFromLockButton;
@property(nonatomic) _Bool fadeOutInProgressFromLockButtonWhileUnlocked; // @synthesize fadeOutInProgressFromLockButtonWhileUnlocked=_fadeOutInProgressFromLockButtonWhileUnlocked;
@property(nonatomic) double multiplePressTimeInterval; // @synthesize multiplePressTimeInterval=_multiplePressTimeInterval;
@property(retain, nonatomic) SpringBoard *SBApp; // @synthesize SBApp=_SBApp;
@property(retain, nonatomic) SBHIDInterface *HIDInterface; // @synthesize HIDInterface=_HIDInterface;
@property(retain, nonatomic) SBSoundController *soundController; // @synthesize soundController=_soundController;
@property(retain, nonatomic) SBScreenWakeAnimationController *screenWakeAnimationController; // @synthesize screenWakeAnimationController=_screenWakeAnimationController;
@property(retain, nonatomic) SBLockScreenManager *lockScreenManager; // @synthesize lockScreenManager=_lockScreenManager;
@property(retain, nonatomic) SBBannerController *bannerController; // @synthesize bannerController=_bannerController;
@property(retain, nonatomic) SBBacklightController *backlightController; // @synthesize backlightController=_backlightController;
@property(nonatomic, getter=isSOSGestureActive) _Bool SOSGestureActive; // @synthesize SOSGestureActive=_SOSGestureActive;
@property(nonatomic) _Bool inhibitNextSinglePressUp; // @synthesize inhibitNextSinglePressUp=_inhibitNextSinglePressUp;
- (void)_playLockSound;
- (void)_performSleep;
- (void)_performWake;
- (void)provider:(id)arg1 didUpdateButtonGestureParameters:(id)arg2;
- (_Bool)consumeSinglePressUp;
- (_Bool)consumeInitialPressDown;
- (_Bool)reverseSleepIfNeededAndPossible;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

