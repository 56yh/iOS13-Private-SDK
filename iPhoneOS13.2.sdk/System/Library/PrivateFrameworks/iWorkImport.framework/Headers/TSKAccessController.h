//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCondition, NSMutableArray, NSMutableDictionary, NSThread, TSUWeakReference;
@protocol OS_dispatch_semaphore;

__attribute__((visibility("hidden")))
@interface TSKAccessController : NSObject
{
    TSUWeakReference *_delegate;
    struct _opaque_pthread_rwlock_t _rwLock;
    _Bool _secondaryThreadWriting;
    _Bool _thenReadingOnPrimaryThread;
    NSCondition *_cond;
    NSMutableDictionary *_signalIdentifiers;
    NSMutableDictionary *_waitIdentifiers;
    struct __CFRunLoopSource *_primaryThreadPingSource;
    NSMutableArray *_pendingPrimaryThreadBlocks;
    struct {
        struct _opaque_pthread_t *threadId;
        unsigned int count;
        CDStruct_2a021fcd ticketInfo;
    } _readerInfo[64];
    CDStruct_2a021fcd _primaryThreadTicketInfo;
    unsigned int _readerCount;
    NSMutableArray *_writerQueue;
    NSObject<OS_dispatch_semaphore> *_outstandingTicketReadLock;
    unsigned int _outstandingTicketCount;
    _Bool _writeLockHeld;
    unsigned long long _writeBlockedPrimaryThreadCount;
    unsigned long long _primaryThreadWriteCount;
    // Error parsing type: A^{__CFRunLoop}, name: _runLoop
    // Error parsing type: Aq, name: _runLoopReadCount
    NSThread *_primaryThread;
    struct os_unfair_lock_s _primaryThreadIVarLock;
    // Error parsing type: AI, name: _primaryThreadQualityOfServiceClass
}

- (void)p_willRelinquishWriteLock;
- (void)p_didAcquireWriteLock;
- (void)p_willAcquireWriteLock;
- (void)p_willRelinquishReadLock;
- (void)p_didAcquireReadLock;
- (void)p_willAcquireReadLock;
- (void)p_signalThread:(id)arg1;
- (_Bool)p_waitWithCondition:(id)arg1 untilDate:(id)arg2;
- (void)p_flushPendingPrimaryThreadBlocksQueueAcquiringLock:(_Bool)arg1;
- (void)p_performReadOnPrimaryThread:(id /* block */)arg1 result:(_Bool)arg2;
- (void)p_schedulePrimaryThreadRead:(id /* block */)arg1 result:(_Bool)arg2;
- (void)p_dequeueWrite;
- (void)p_enqueueWriteAndBlockAllowingPendingWrites:(_Bool)arg1;
- (unsigned long long)p_writerQueueIndexOfThreadIdentifier:(struct NSThread *)arg1;
- (struct NSThread *)p_threadIdentifier;
- (void)p_unblockPrimaryThread;
- (void)p_signalPrimaryThreadWriteComplete;
- (void)p_writeUnlock;
- (void)p_blockPrimaryThread;
- (void)p_writeLockAndBlockPrimaryThread:(_Bool)arg1;
- (void)p_asyncPerformBlockOnPrimaryThread:(id /* block */)arg1;
- (void)p_blockPrimaryThreadForWrite;
- (void)p_decrementCountForReaderAtIndex:(unsigned int)arg1 releasingRealLock:(_Bool)arg2;
- (void)p_readUnlockReleasingRealLock:(_Bool)arg1;
- (void)p_readUnlock;
@property(readonly) _Bool hasWrite;
@property(readonly) _Bool hasRead;
- (_Bool)p_hasWrite;
- (_Bool)p_hasRead;
- (void)p_readLockTakingRealLock:(_Bool)arg1;
- (void)p_readLock;
@property(readonly) _Bool isPrimaryThread;
- (void)assertHasReadOrWrite;
- (void)assertHasWrite;
- (void)assertHasRead;
- (void)p_performRead:(id /* block */)arg1 eagerlyBlockingPrimaryThread:(_Bool)arg2 thenWrite:(id /* block */)arg3 allowingPendingWrites:(_Bool)arg4 thenReadOnPrimaryThread:(id /* block */)arg5;
- (void)performRead:(id /* block */)arg1 thenWriteBeforePendingWrites:(id /* block */)arg2 thenReadOnPrimaryThread:(id /* block */)arg3;
- (void)performReadAllowingOverlappingImplicitRead:(id /* block */)arg1 thenWrite:(id /* block */)arg2 thenReadOnPrimaryThread:(id /* block */)arg3;
- (void)performRead:(id /* block */)arg1 thenWrite:(id /* block */)arg2 thenReadOnPrimaryThread:(id /* block */)arg3;
- (void)performWrite:(id /* block */)arg1 blockPrimaryThread:(_Bool)arg2;
- (void)performWrite:(id /* block */)arg1;
- (CDStruct_2a021fcd *)p_ticketInfoForCurrentThread;
- (CDStruct_2a021fcd *)p_ticketInfoForTicket:(id)arg1;
- (void)p_finishReadForTicketInfo:(CDStruct_2a021fcd *)arg1;
- (void)i_finishReadForTicket:(id)arg1;
- (void)i_startReadForTicket:(id)arg1;
- (void)performReadWithTicket:(id)arg1 block:(id /* block */)arg2;
- (void)performReadGrantingTicket:(id /* block */)arg1;
- (void)performRead:(id /* block */)arg1;
- (void)signalIdentifier:(id)arg1;
- (_Bool)waitOnIdentifier:(id)arg1 untilDate:(id)arg2 releaseReadWhileWaiting:(_Bool)arg3;
- (void)waitOnIdentifier:(id)arg1;
@property(readonly) unsigned int primaryThreadQualityOfServiceClass;
- (void)p_setPrimaryThreadIfNeeded;
@property(readonly) NSThread *primaryThread;
- (void)p_releaseRunLoop:(struct __CFRunLoop *)arg1;
@property struct __CFRunLoop *runLoop;
- (void)dealloc;
- (id)initWithPrimaryRunloop:(struct __CFRunLoop *)arg1 delegate:(id)arg2;
- (id)initWithDelegate:(id)arg1;
- (id)init;

@end

