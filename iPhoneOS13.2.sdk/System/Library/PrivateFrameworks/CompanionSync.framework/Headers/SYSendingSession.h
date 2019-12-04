//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CompanionSync/SYSession.h>

@class NSMutableArray, NSMutableIndexSet, NSObject, SYMessageStatusRecord, _SYCountedSemaphore;
@protocol OS_dispatch_queue, OS_dispatch_source, OS_os_activity;

@interface SYSendingSession : SYSession
{
    NSObject<OS_dispatch_source> *_stateUpdateSource;
    NSObject<OS_dispatch_source> *_sessionTimer;
    NSObject<OS_dispatch_source> *_messageTimer;
    NSObject<OS_dispatch_queue> *_changeFetcherQueue;
    _SYCountedSemaphore *_changeConcurrencySemaphore;
    NSObject<OS_os_activity> *_changeWaitActivity;
    unsigned long long _batchIndex;
    NSMutableIndexSet *_ackedBatchIndices;
    NSObject<OS_os_activity> *_sessionActivity;
    double _sessionStartTime;
    struct NSMutableDictionary *_batchObjectIDsByBatchIndex;
    SYMessageStatusRecord *_startMessageID;
    SYMessageStatusRecord *_endMessageID;
    NSMutableArray *_batchMessageIDs;
    struct os_unfair_lock_s _flagsLock;
    struct {
        unsigned int state:4;
        unsigned int canRestart:1;
        unsigned int canRollback:1;
        unsigned int isResetSync:1;
        unsigned int started:1;
        unsigned int cancelled:1;
        unsigned int completed:1;
        unsigned int remoteStartSent:1;
        unsigned int remoteStartConfirmed:1;
        unsigned int remoteEndSent:1;
        unsigned int remoteEndConfirmed:1;
        unsigned int localErrorOccurred:1;
    } _flags;
}

- (void)_continue;
- (void)_peerProcessedMessageWithIdentifier:(id)arg1 userInfo:(id)arg2;
- (void)_sentMessageWithIdentifier:(id)arg1 userInfo:(id)arg2;
- (void)_resolvedIdentifier:(id)arg1 forResponse:(id)arg2;
- (void)_resolvedIdentifierForRequest:(id)arg1;
- (_Bool)_handleEndSessionResponse:(id)arg1 error:(id *)arg2;
- (_Bool)_handleRestartSessionResponse:(id)arg1 error:(id *)arg2;
- (_Bool)_handleSyncBatchResponse:(id)arg1 error:(id *)arg2;
- (_Bool)_handleStartSessionResponse:(id)arg1 error:(id *)arg2;
- (void)_handleEndSession:(id)arg1 response:(id)arg2 completion:(id /* block */)arg3;
- (void)_handleRestartSession:(id)arg1 response:(id)arg2 completion:(id /* block */)arg3;
- (void)_handleSyncBatch:(id)arg1 response:(id)arg2 completion:(id /* block */)arg3;
- (void)cancelWithError:(id)arg1;
- (void)start:(id /* block */)arg1;
- (void)_startFailedForStateChangeWithError:(id)arg1;
- (void)_installStateListener;
- (void)_setMessageTimer;
- (void)_installTimers;
- (void)_processNextState;
- (void)_sessionFinished;
- (void)_notifyErrorAndShutdown;
- (void)_sendEndSessionAndError:(id)arg1;
- (void)_sendSyncRestart;
- (void)_sendSyncCancelled;
- (void)_sendSyncCompleteAndRunBlock:(id /* block */)arg1;
- (void)_sendSyncBatch:(id)arg1 nextState:(long long)arg2;
- (void)_fetchNextBatch;
- (void)_waitForMessageWindow;
- (void)_setupChangeConcurrency;
- (void)_tweakMessageHeader:(id)arg1;
- (id)_newMessageHeader;
- (_Bool)_localErrorOccurred;
- (void)_setLocalErrorOccurred;
- (void)_setComplete;
- (void)_setCancelled;
- (void)_confirmedEnd;
- (_Bool)_hasSentEnd;
- (void)_sentEnd;
- (void)_confirmedStart;
- (void)_sentStart;
- (double)remainingSessionTime;
- (_Bool)wasCancelled;
- (_Bool)isSending;
- (_Bool)isResetSync;
- (void)setCanRollback:(_Bool)arg1;
- (_Bool)canRollback;
- (void)setCanRestart:(_Bool)arg1;
- (_Bool)canRestart;
- (void)_setStateQuietly:(long long)arg1;
- (void)setState:(long long)arg1;
- (long long)state;
- (id)initWithService:(id)arg1 isReset:(_Bool)arg2;

@end

