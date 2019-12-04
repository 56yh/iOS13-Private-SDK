//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDDiagnosticObject-Protocol.h>

@class NSMapTable, NSString;
@protocol OS_dispatch_queue;

@interface HDContentProtectionManager : NSObject <HDDiagnosticObject>
{
    // Error parsing type: Ai, name: _contentProtectionState
    // Error parsing type: AB, name: _shouldIgnoreUnlockedState
    // Error parsing type: AB, name: _unlockedSinceBoot
    int _notifyToken;
    NSObject<OS_dispatch_queue> *_observationQueue;
    NSMapTable *_observers;
    double _beganObservingTime;
    double _lastNotificationTime;
    double _lastRecheckTime;
}

+ (_Bool)isProtectedDataAvailableWithState:(long long)arg1;
- (void)_observationQueue_adjustContentProtectionStateWithBlock:(id /* block */)arg1;
- (id)diagnosticDescription;
@property(nonatomic) _Bool shouldIgnoreUnlockedState;
- (void)setContentProtectionState:(long long)arg1;
- (void)recheckContentProtectionState;
- (_Bool)deviceUnlockedSinceBoot;
- (_Bool)isProtectedDataAvailable;
- (long long)observedState;
- (void)removeContentProtectionObserver:(id)arg1;
- (void)addContentProtectionObserver:(id)arg1 withQueue:(id)arg2;
- (void)dealloc;
- (id)initWithNotifications:(_Bool)arg1 initialState:(long long)arg2 unlockedSinceBoot:(_Bool)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

