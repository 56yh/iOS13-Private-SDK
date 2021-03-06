//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDAssertionObserver-Protocol.h>

@class HDAssertion, HDAssertionManager, HDDaemon;
@protocol OS_dispatch_queue;

@interface HDPowerSavingModeManager : NSObject <HDAssertionObserver>
{
    HDDaemon *_daemon;
    NSObject<OS_dispatch_queue> *_queue;
    HDAssertionManager *_assertionManager;
    BOOL _powerSavingModeEnabled;
    BOOL _supportsCellularTelephony;
    HDAssertion *_disableAOTAssertion;
}

// - (void).cxx_destruct;
- (void)_queue_powerSavingModeDidChange;
- (void)_powerSavingModeDidChange;
- (void)_stopObservingPowerSavingModeSetting;
- (void)_startObservingPowerSavingModeSetting;
- (void)_queue_disablePowerSavingIfNeeded;
- (void)_queue_enablePowerSavingIfNeededForOwnerIdentifier:(id)arg1;
- (void)assertionManager:(id)arg1 assertionInvalidated:(id)arg2;
- (void)assertionManager:(id)arg1 assertionTaken:(id)arg2;
- (id)takeSessionAssertionForOwnerIdentifier:(id)arg1 activityType:(NSUInteger)arg2;
- (BOOL)supportsPowerSavingForActivityType:(NSUInteger)arg1;
- (void)dealloc;
- (id)initWithDaemon:(id)arg1;

@end

