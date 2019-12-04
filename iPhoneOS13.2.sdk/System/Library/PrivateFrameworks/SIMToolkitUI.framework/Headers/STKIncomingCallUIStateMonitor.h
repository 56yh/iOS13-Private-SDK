//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BSTimer, NSHashTable;

@interface STKIncomingCallUIStateMonitor : NSObject
{
    struct os_unfair_lock_s _observersLock;
    NSHashTable *_observersLock_observers;
    BSTimer *_fallbackTimer;
    struct os_unfair_lock_s _lock;
    _Bool _lock_showingIncomingCallUI;
    int _inCallAlertVisibleNotifyToken;
    _Bool _isShowingIncomingCallUI;
}

+ (id)sharedInstance;
@property(nonatomic) _Bool isShowingIncomingCallUI; // @synthesize isShowingIncomingCallUI=_isShowingIncomingCallUI;
- (void)_setIncomingCallUIState:(_Bool)arg1 forReason:(id)arg2;
- (void)_refreshState;
- (double)_fallbackTimerDuration;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)init;

@end

