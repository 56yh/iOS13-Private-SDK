//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MapsSupport/MSPCloudNotificationReceiver-Protocol.h>

@class CKContainer, MSPCloudContainerCache, MSPCloudKitAccountAccess, MSPContainer, MSPJournal, NSError, NSHashTable, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface MSPCloudContainer : NSObject <MSPCloudNotificationReceiver>
{
    _Bool _requiresRemoteFetch;
    _Bool _canceled;
    _Bool _hasActiveSubscription;
    _Bool _useSecureContainer;
    MSPContainer *_container;
    MSPCloudKitAccountAccess *_access;
    MSPCloudContainerCache *_cache;
    NSObject<OS_dispatch_queue> *_observerQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    MSPJournal *_journal;
    NSMutableDictionary *_pendingOperations;
    NSError *_cancelError;
    NSHashTable *_observers;
    unsigned long long _operationBatchSize;
}

@property(nonatomic) unsigned long long operationBatchSize; // @synthesize operationBatchSize=_operationBatchSize;
@property(nonatomic) _Bool useSecureContainer; // @synthesize useSecureContainer=_useSecureContainer;
@property(retain, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(copy, nonatomic) NSError *cancelError; // @synthesize cancelError=_cancelError;
@property(retain, nonatomic) NSMutableDictionary *pendingOperations; // @synthesize pendingOperations=_pendingOperations;
@property(retain, nonatomic) MSPJournal *journal; // @synthesize journal=_journal;
@property(nonatomic) _Bool hasActiveSubscription; // @synthesize hasActiveSubscription=_hasActiveSubscription;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // @synthesize callbackQueue=_callbackQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *observerQueue; // @synthesize observerQueue=_observerQueue;
@property(retain, nonatomic) MSPCloudContainerCache *cache; // @synthesize cache=_cache;
@property(retain, nonatomic) MSPCloudKitAccountAccess *access; // @synthesize access=_access;
@property(retain, nonatomic) MSPContainer *container; // @synthesize container=_container;
@property(nonatomic) _Bool canceled; // @synthesize canceled=_canceled;
- (id)zoneSubscriptionName;
- (_Bool)useZoneWidePCS;
- (id)zoneID;
- (id)zoneName;
@property(readonly, nonatomic) CKContainer *ckContainer;
- (void)configureCKOperation:(id)arg1 withGroup:(id)arg2;
- (id)mergeOptionsForEarliestKnownSyncDate:(id)arg1;
- (Class)replicaRecordClass;
- (void)containerDidEraseContents;
- (void)cancelMergeWithError:(id)arg1;
- (void)mergeLocalChangesFromReplica:(id)arg1 withAppliedRemoteChanges:(id)arg2 group:(id)arg3 completion:(id /* block */)arg4;
- (void)mergeRemoteChanges:(id)arg1 withGroup:(id)arg2 completion:(id /* block */)arg3;
- (void)mergeWithGroup:(id)arg1 completion:(id /* block */)arg2;
- (void)handleMergeError:(id)arg1 completion:(id /* block */)arg2;
- (void)pushChanges:(id)arg1 withGroup:(id)arg2 completion:(id /* block */)arg3;
- (id)batchedOperationsFromRecords:(id)arg1 toDelete:(id)arg2 group:(id)arg3 batchSize:(unsigned long long)arg4 modifyRecordsCompletionBlock:(id /* block */)arg5;
- (id)_modifyRecordsOperationWithRecordsToSave:(id)arg1 toDelete:(id)arg2 group:(id)arg3 modifyRecordsCompletion:(id /* block */)arg4;
- (void)fetchChangesWithGroup:(id)arg1 completion:(id /* block */)arg2;
- (void)subscribeToChangesWithCompletion:(id /* block */)arg1;
- (void)removeCloudContainerWithGroup:(id)arg1 completion:(id /* block */)arg2;
- (void)setupCloudContainerWithGroup:(id)arg1 completion:(id /* block */)arg2;
- (void)didReceiveRemoteNotification:(id)arg1;
- (_Bool)isCanceled;
- (void)cancelPendingOperationsWithError:(id)arg1;
- (void)removePendingOperationWithID:(id)arg1;
- (void)addCKOperation:(id)arg1;
- (void)_forEachObserver:(id /* block */)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)description;
- (id)initWithContainer:(id)arg1 accountID:(id)arg2;
- (id)initWithContainer:(id)arg1 cache:(id)arg2;
- (id)initWithContainer:(id)arg1 cache:(id)arg2 access:(id)arg3;

@end

