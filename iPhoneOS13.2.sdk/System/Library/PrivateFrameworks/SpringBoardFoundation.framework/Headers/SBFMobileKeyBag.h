//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable, NSMutableArray, SBFMobileKeyBagState;
@protocol OS_dispatch_queue;

@interface SBFMobileKeyBag : NSObject
{
    NSObject<OS_dispatch_queue> *_calloutQueue;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_queue_observerStateChangedCallbackBlocks;
    NSHashTable *_queue_observers;
    _Bool _queue_hasPasscodeSet;
    _Bool _queue_hasUnlockedSinceBoot;
}

+ (id)sharedInstance;
- (void)_queue_setHasPasscodeIfNecessary:(id)arg1;
- (id)_queue_lockStateExtended:(_Bool)arg1;
- (void)_queue_createStashBag:(id)arg1;
- (void)_queue_handleKeybagStatusChanged;
- (void)_queue_firstUnlockOccurred;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)waitForUnlockWithTimeout:(float)arg1;
- (_Bool)beginRecovery:(id)arg1 error:(id *)arg2;
@property(readonly, copy, nonatomic) SBFMobileKeyBagState *extendedState;
@property(readonly, copy, nonatomic) SBFMobileKeyBagState *state;
@property(readonly, nonatomic) _Bool hasBeenUnlockedSinceBoot;
- (void)createStashBag:(id)arg1 completion:(id /* block */)arg2;
- (void)createStashBag:(id)arg1 completion:(id /* block */)arg2 completionQueue:(id)arg3;
@property(readonly, nonatomic) long long maxUnlockAttempts;
@property(readonly, nonatomic) _Bool hasPasscodeSet;
- (_Bool)unlockWithPasscode:(id)arg1 error:(id *)arg2;
- (void)lockSkippingGracePeriod:(_Bool)arg1;
- (void)dealloc;
- (id)init;

@end

