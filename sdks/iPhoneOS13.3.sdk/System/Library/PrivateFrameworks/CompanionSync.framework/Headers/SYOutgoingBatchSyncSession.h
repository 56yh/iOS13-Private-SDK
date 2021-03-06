//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CompanionSync/SYSession.h>

@class NSMutableIndexSet, NSObject, _SYCountedSemaphore, _SYMessageTimerTable;
@protocol OS_dispatch_queue, OS_dispatch_source, OS_os_activity;

__attribute__((visibility("hidden")))
@interface SYOutgoingBatchSyncSession : SYSession
{
    NSObject<OS_dispatch_source> *_stateUpdateSource;
    NSObject<OS_dispatch_source> *_sessionTimer;
    NSUInteger _batchIndex;
    NSMutableIndexSet *_ackedBatchIndices;
    NSObject<OS_dispatch_queue> *_changeFetcherQueue;
    _SYCountedSemaphore *_changeConcurrencySemaphore;
    NSObject<OS_os_activity> *_changeWaitActivity;
    NSObject<OS_os_activity> *_sessionActivity;
    long long _state;
    BOOL _errorIsLocal;
    BOOL _hasSentEnd;
    _SYMessageTimerTable *_timers;
    double _sessionStartTime;
    BOOL _canRestart;
    BOOL _canRollback;
    BOOL _cancelled;
}

- (BOOL)wasCancelled;
- (void)setCanRollback:(BOOL)arg1;
- (BOOL)canRollback;
- (void)setCanRestart:(BOOL)arg1;
- (BOOL)canRestart;
// - (void).cxx_destruct;
- (void)_sentMessageWithIdentifier:(id)arg1 userInfo:(id)arg2;
- (BOOL)_handleBatchSyncEndResponse:(id)arg1 error:(id )arg2;
- (BOOL)_handleBatchAck:(id)arg1 error:(id )arg2;
- (void)cancelWithError:(id)arg1;
- (void)start:(id /* CDUnknownBlockType */)arg1;
- (void)_installStateListener;
- (void)_setMessageTimerForSeqno:(NSUInteger)arg1;
- (void)_installTimers;
- (void)_processNextState;
- (void)_messageExpiredWithSeqno:(NSUInteger)arg1 identifier:(id)arg2;
- (void)_sessionComplete;
- (void)_notifySessionComplete;
- (void)_sendSyncStart;
- (void)_sendSyncRestart;
- (void)_sendSyncCancelled;
- (void)_sendSyncCompleteAndRunBlock:(id /* CDUnknownBlockType */)arg1;
- (void)_sendSyncBatch:(id)arg1 nextState:(long long)arg2;
- (void)_fetchNextBatch;
- (void)_waitForMessageWindow;
- (void)_setupChangeConcurrency;
- (double)remainingSessionTime;
- (NSUInteger)protocolVersion;
- (BOOL)isSending;
- (BOOL)isResetSync;
- (void)_setStateQuietly:(long long)arg1;
- (void)setState:(long long)arg1;
- (long long)state;
- (id)initWithService:(id)arg1;

@end

