//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/PTSettingsKeyObserver-Protocol.h>
#import <SpringBoard/SBHIDButtonStateDelegate-Protocol.h>
#import <SpringBoard/SBSceneManagerObserver-Protocol.h>

@class BKSHIDEventDeliveryManager, BSMutableIntegerMap, BSTimer, CMPocketStateManager, NSMutableIndexSet, NSString, RBSProcessMonitor, SBApplicationController, SBBacklightController, SBCameraHardwareButtonDefaults, SBCameraHardwareButtonSettings, SBCoverSheetPresentationManager, SBHIDButtonStateArbiter, SBLockScreenManager, SBProximitySensorManager, SBSceneManager, _SBCameraLaunchCondition;
@protocol BSInvalidatable;

@interface SBCameraHardwareButton : NSObject <SBHIDButtonStateDelegate, PTSettingsKeyObserver, SBSceneManagerObserver>
{
    _Bool _disableDeferringToApplications;
    _Bool _shouldUsePocketStateDetection;
    int _lastCameraApplicationPID;
    id <BSInvalidatable> _dispatchingRuleAssertion;
    id <BSInvalidatable> _deferringRuleAssertion;
    NSMutableIndexSet *_allCameraShutterButtonPIDs;
    NSMutableIndexSet *_foregroundCameraShutterButtonPIDs;
    NSMutableIndexSet *_foregroundPendingRemovalCameraShutterButtonPIDs;
    BSMutableIntegerMap *_deferringTokensPerPID;
    SBHIDButtonStateArbiter *_buttonArbiter;
    RBSProcessMonitor *_processMonitor;
    CMPocketStateManager *_pocketStateManager;
    _SBCameraLaunchCondition *_shouldLaunchCameraCondition;
    _SBCameraLaunchCondition *_longPressCondition;
    _SBCameraLaunchCondition *_outOfPocketCondition;
    BSTimer *_longPressCancellationTimer;
    double _longPressCancellationTimeout;
    BKSHIDEventDeliveryManager *_deliveryManager;
    SBApplicationController *_applicationController;
    SBLockScreenManager *_lockScreenManager;
    SBCoverSheetPresentationManager *_coverSheetPresentationManager;
    SBBacklightController *_backlightController;
    SBProximitySensorManager *_proximitySensorManager;
    SBSceneManager *_mainDisplaySceneManager;
    SBCameraHardwareButtonSettings *_settings;
    SBCameraHardwareButtonDefaults *_defaults;
}

@property(retain, nonatomic) SBCameraHardwareButtonDefaults *defaults; // @synthesize defaults=_defaults;
@property(retain, nonatomic) SBCameraHardwareButtonSettings *settings; // @synthesize settings=_settings;
@property(retain, nonatomic) SBSceneManager *mainDisplaySceneManager; // @synthesize mainDisplaySceneManager=_mainDisplaySceneManager;
@property(retain, nonatomic) SBProximitySensorManager *proximitySensorManager; // @synthesize proximitySensorManager=_proximitySensorManager;
@property(retain, nonatomic) SBBacklightController *backlightController; // @synthesize backlightController=_backlightController;
@property(retain, nonatomic) SBCoverSheetPresentationManager *coverSheetPresentationManager; // @synthesize coverSheetPresentationManager=_coverSheetPresentationManager;
@property(retain, nonatomic) SBLockScreenManager *lockScreenManager; // @synthesize lockScreenManager=_lockScreenManager;
@property(retain, nonatomic) SBApplicationController *applicationController; // @synthesize applicationController=_applicationController;
@property(retain, nonatomic) BKSHIDEventDeliveryManager *deliveryManager; // @synthesize deliveryManager=_deliveryManager;
@property(nonatomic) _Bool shouldUsePocketStateDetection; // @synthesize shouldUsePocketStateDetection=_shouldUsePocketStateDetection;
@property(nonatomic) double longPressCancellationTimeout; // @synthesize longPressCancellationTimeout=_longPressCancellationTimeout;
@property(retain, nonatomic) BSTimer *longPressCancellationTimer; // @synthesize longPressCancellationTimer=_longPressCancellationTimer;
@property(retain, nonatomic) _SBCameraLaunchCondition *outOfPocketCondition; // @synthesize outOfPocketCondition=_outOfPocketCondition;
@property(retain, nonatomic) _SBCameraLaunchCondition *longPressCondition; // @synthesize longPressCondition=_longPressCondition;
@property(retain, nonatomic) _SBCameraLaunchCondition *shouldLaunchCameraCondition; // @synthesize shouldLaunchCameraCondition=_shouldLaunchCameraCondition;
@property(retain, nonatomic) CMPocketStateManager *pocketStateManager; // @synthesize pocketStateManager=_pocketStateManager;
@property(retain, nonatomic) RBSProcessMonitor *processMonitor; // @synthesize processMonitor=_processMonitor;
@property(retain, nonatomic) SBHIDButtonStateArbiter *buttonArbiter; // @synthesize buttonArbiter=_buttonArbiter;
@property(retain, nonatomic) BSMutableIntegerMap *deferringTokensPerPID; // @synthesize deferringTokensPerPID=_deferringTokensPerPID;
@property(retain, nonatomic) NSMutableIndexSet *foregroundPendingRemovalCameraShutterButtonPIDs; // @synthesize foregroundPendingRemovalCameraShutterButtonPIDs=_foregroundPendingRemovalCameraShutterButtonPIDs;
@property(retain, nonatomic) NSMutableIndexSet *foregroundCameraShutterButtonPIDs; // @synthesize foregroundCameraShutterButtonPIDs=_foregroundCameraShutterButtonPIDs;
@property(retain, nonatomic) NSMutableIndexSet *allCameraShutterButtonPIDs; // @synthesize allCameraShutterButtonPIDs=_allCameraShutterButtonPIDs;
@property(nonatomic) int lastCameraApplicationPID; // @synthesize lastCameraApplicationPID=_lastCameraApplicationPID;
@property(retain, nonatomic) id <BSInvalidatable> deferringRuleAssertion; // @synthesize deferringRuleAssertion=_deferringRuleAssertion;
@property(retain, nonatomic) id <BSInvalidatable> dispatchingRuleAssertion; // @synthesize dispatchingRuleAssertion=_dispatchingRuleAssertion;
@property(nonatomic) _Bool disableDeferringToApplications; // @synthesize disableDeferringToApplications=_disableDeferringToApplications;
- (void)sceneManager:(id)arg1 didRemoveExternalForegroundApplicationSceneHandle:(id)arg2;
- (void)sceneManager:(id)arg1 didAddExternalForegroundApplicationSceneHandle:(id)arg2;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (void)performActionsForButtonUp:(id)arg1;
- (void)performActionsForButtonLongPress:(id)arg1;
- (void)performActionsForButtonDown:(id)arg1;
- (void)_stopWaitingForLongPressCancellation;
- (void)_longPressDidCancel;
- (void)_startWaitingForLongPressCancellation;
- (void)_launchToUnlockedCamera;
- (void)_launchToCoverSheetCamera;
- (void)_launchCameraIfReady;
- (void)_updateCameraDeferringRule;
- (_Bool)_shouldDeferToCoverSheetCamera;
- (_Bool)_isCoverSheetCameraVisible;
- (_Bool)_shouldDeferToNonSpringBoardProcess;
- (void)_deferCameraPressesToCameraApplication;
- (void)_deferCameraPressesToApplication:(id)arg1;
- (void)_deferCameraPressesToPID:(int)arg1;
- (void)_deferCameraPressesToSpringBoard;
- (void)_reconfigureProcessMonitorForPredicates:(id)arg1;
- (void)_reconfigureProcessMonitor;
- (void)_process:(id)arg1 stateDidUpdate:(id)arg2;
- (void)_updateSettingsForReason:(id)arg1;
- (void)removeProcessRequestingCameraButton:(int)arg1;
- (void)addProcessRequestingCameraButton:(int)arg1 token:(id)arg2;
- (void)handleButtonEvent:(struct __IOHIDEvent *)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

