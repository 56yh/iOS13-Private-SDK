//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableSet, NSString;
@protocol DADataclassLockWatcher;

@interface DALocalDBGateKeeper : NSObject
{
    _Bool _claimedOwnershipOfEvents;
    id <DADataclassLockWatcher> _eventsLockHolder;
    NSMutableArray *_eventsWaiters;
    NSMutableSet *_waiterIDsExpectingEventsLock;
    NSString *_unitTestHackRunLoopMode;
}

+ (id)sharedGateKeeper;
@property(retain, nonatomic) NSString *unitTestHackRunLoopMode; // @synthesize unitTestHackRunLoopMode=_unitTestHackRunLoopMode;
@property(retain, nonatomic) NSMutableSet *waiterIDsExpectingEventsLock; // @synthesize waiterIDsExpectingEventsLock=_waiterIDsExpectingEventsLock;
@property(retain, nonatomic) NSMutableArray *eventsWaiters; // @synthesize eventsWaiters=_eventsWaiters;
@property(retain, nonatomic) id <DADataclassLockWatcher> eventsLockHolder; // @synthesize eventsLockHolder=_eventsLockHolder;
@property(nonatomic) _Bool claimedOwnershipOfEvents; // @synthesize claimedOwnershipOfEvents=_claimedOwnershipOfEvents;
- (void)_setUnitTestHackRunLoopMode:(id)arg1;
- (id)stateString;
- (void)claimedOwnershipOfDataclasses:(long long)arg1;
- (void)relinquishLocksForWaiter:(id)arg1 dataclasses:(long long)arg2 moreComing:(_Bool)arg3;
- (void)unregisterWaiterForDataclassLocks:(id)arg1;
- (void)_sendAllClearNotifications;
- (void)registerWaiter:(id)arg1 forDataclassLocks:(long long)arg2 completionHandler:(id /* block */)arg3;
- (void)registerPreemptiveWaiter:(id)arg1 forDataclassLocks:(long long)arg2 completionHandler:(id /* block */)arg3;
- (void)_registerWaiter:(id)arg1 forDataclassLocks:(long long)arg2 preempt:(_Bool)arg3 completionHandler:(id /* block */)arg4;
- (void)_notifyWaitersForDataclasses:(id)arg1;
- (void)_abortWaiterForWrappers:(id)arg1;
- (_Bool)_canWakenWaiter:(id)arg1;
- (void)dealloc;
- (id)init;

@end
