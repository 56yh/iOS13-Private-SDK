//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSuggestionsInternals/APSConnectionDelegate-Protocol.h>

@class APSConnection, CKContainer, CKDatabase, NSError, NSMutableArray, NSOperation, NSOperationQueue, NSString, SGFuture, _PASKVOHandler, _SGDCloudKitSyncPersistedState;
@protocol OS_dispatch_queue;

@interface SGDCloudKitSync : NSObject <APSConnectionDelegate>
{
    _PASKVOHandler *_kvoHandler;
    CKDatabase *_database;
    id /* block */ _callback;
    id /* block */ _deleteAllSyncedItemsCallback;
    _Bool _readyForNewEntities;
    APSConnection *_apsConnection;
    NSObject<OS_dispatch_queue> *_queue;
    NSOperationQueue *_opQueue;
    NSMutableArray *_operationsToAddToOpQueue;
    CKContainer *_container;
    SGFuture *_accountInfoFuture;
    _SGDCloudKitSyncPersistedState *_persistedState;
    long long _suspendCount;
    _Bool _noZone;
    _Bool _disabledBecauseOutOfDateSoftware;
    NSOperation *_inProgressProcureSaltOperation;
    NSOperation *_inProgressCreateZoneOperation;
    NSOperation *_inProgressDeleteZoneOperation;
    NSOperation *_inProgressFetchNewEntitiesOperation;
    _Bool _requestedFetchNewEntitiesWhileRequestAlreadyInFlight;
    NSError *_createZoneError;
    NSError *_deleteZoneError;
    NSError *_procureSaltError;
    _Bool _processingStateChanges;
    _Bool _pendingProcessStateChanges;
    struct ct_green_tea_logger_s *_greenTeaLogger;
}

+ (id)apsEnvironmentStringForContainer:(id)arg1;
+ (void)setSharedInstanceConfigurationBlock:(id /* block */)arg1;
+ (id)sharedInstance;
+ (id)_sharedInstanceConfigurationQueue;
- (void)connectionDidReconnect:(id)arg1;
- (void)connection:(id)arg1 didChangeConnectedStatus:(_Bool)arg2;
- (void)connection:(id)arg1 didFailToSendOutgoingMessage:(id)arg2 error:(id)arg3;
- (void)connection:(id)arg1 didSendOutgoingMessage:(id)arg2;
- (void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2;
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;
- (void)connection:(id)arg1 didReceiveToken:(id)arg2 forTopic:(id)arg3 identifier:(id)arg4;
- (id)privacySalt;
- (void)deleteZoneWithCompletion:(id /* block */)arg1;
- (void)deleteStorageEvent:(id)arg1;
- (id)recordZoneId;
- (id)invokeNewEntitiesCallbackWithEntity:(id)arg1;
- (void)setDeleteAllSyncedItemsCallback:(id /* block */)arg1;
- (void)setNewEntitiesCallback:(id /* block */)arg1;
- (void)setReadyForNewEntities:(_Bool)arg1;
- (void)deleteGroupId:(id)arg1;
- (void)addEntity:(id)arg1 withParentEntity:(id)arg2;
- (void)setDatabase:(id)arg1;
- (void)createSubscriptionWithRetries:(unsigned long long)arg1;
- (id)shouldRemoveEventsFromEventKit;
- (id)accountInfo;
- (void)accountChanged:(id)arg1;
- (void)processStateChanges;
- (void)dealloc;
- (id)init;
- (id)addOperation;
- (id)addOperation:(id)arg1;
- (id)addWriteOperationForRecordGetter:(id /* block */)arg1 deleteGetter:(id /* block */)arg2 withRetries:(unsigned long long)arg3 isFirstTry:(_Bool)arg4;
- (id)addWriteOperationForRecordGetter:(id /* block */)arg1 deleteGetter:(id /* block */)arg2 withRetries:(unsigned long long)arg3;
- (id)addDeleteAndRecreateZoneOperation;
- (_Bool)shouldRecreateZoneForRecordError:(id)arg1 operationError:(id)arg2;
- (id)addFetchNewEntitiesAttemptOperationWithRetries:(unsigned long long)arg1;
- (id)addFetchNewEntitiesOperation;
- (id)addProcureSaltAttemptOperationWithRetries:(unsigned long long)arg1;
- (id)_ckErrorForId:(id)arg1 inError:(id)arg2;
- (id)ckErrorForRecordZoneId:(id)arg1 inError:(id)arg2;
- (id)ckErrorForRecordId:(id)arg1 inError:(id)arg2;
- (id)addProcureSaltOperation;
- (id)addManateeSanityCheckOperation;
- (id)addCreateZoneAttemptOperationWithRetries:(unsigned long long)arg1;
- (id)addCreateZoneOperation;
- (id)addDeleteZoneAttemptOperationWithRetries:(unsigned long long)arg1;
- (id)addDeleteZoneOperation;
- (_Bool)pauseIfNeededAndReturnRetryEligibilityForError:(id)arg1;
- (id)getUnderlyingError:(id)arg1;
- (void)resume;
- (void)suspendAndResumeAfter:(double)arg1;
- (void)suspend;
- (void)failSalt;
- (void)disable;
- (void)clearErrors;
- (void)_addDependency:(id)arg1 toTrain:(id)arg2;
- (void)_coupleOperationTrainWithStart:(id)arg1 end:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

