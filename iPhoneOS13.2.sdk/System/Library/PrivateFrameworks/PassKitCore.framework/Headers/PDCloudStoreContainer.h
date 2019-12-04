//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CKContainer, NSArray, NSError, NSMutableDictionary, NSMutableOrderedSet, NSMutableSet, PDCloudStoreRecordsRequest;
@protocol OS_dispatch_group, OS_dispatch_queue, OS_dispatch_source, PDCloudStoreContainerDelegate, PDCloudStoreDataSource;

@interface PDCloudStoreContainer : NSObject
{
    NSMutableSet *_initializationCompletionHandlers;
    NSObject<OS_dispatch_queue> *_backgroundQueue;
    NSObject<OS_dispatch_group> *_batchUpdateGroup;
    _Bool _shouldInvalidateCloudStore;
    _Bool _shouldCancelAllTasks;
    NSObject<OS_dispatch_source> *_timeoutTimer;
    NSMutableOrderedSet *_fetchRequests;
    PDCloudStoreRecordsRequest *_currentRequest;
    _Bool _accountChangedNotificationReceived;
    _Bool _cloudContainerSetupInProgress;
    _Bool _resettingCloudContainer;
    CKContainer *_container;
    id <PDCloudStoreContainerDelegate> _delegate;
    id <PDCloudStoreDataSource> _dataSource;
    NSArray *_subscriptionIdentifiers;
    NSArray *_zoneNames;
    NSMutableDictionary *_subscriptionsByIdentifier;
    NSMutableDictionary *_zonesByName;
    NSMutableDictionary *_completedFetchTimestampByZoneID;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSError *_operationError;
    unsigned long long _nextExpectedState;
}

+ (id)serverChangeTokenFromArchiveData:(id)arg1;
@property(nonatomic) _Bool resettingCloudContainer; // @synthesize resettingCloudContainer=_resettingCloudContainer;
@property(nonatomic) _Bool cloudContainerSetupInProgress; // @synthesize cloudContainerSetupInProgress=_cloudContainerSetupInProgress;
@property(nonatomic) _Bool accountChangedNotificationReceived; // @synthesize accountChangedNotificationReceived=_accountChangedNotificationReceived;
@property(nonatomic) unsigned long long nextExpectedState; // @synthesize nextExpectedState=_nextExpectedState;
@property(retain, nonatomic) NSError *operationError; // @synthesize operationError=_operationError;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly, nonatomic) NSMutableDictionary *completedFetchTimestampByZoneID; // @synthesize completedFetchTimestampByZoneID=_completedFetchTimestampByZoneID;
@property(readonly, nonatomic) NSMutableDictionary *zonesByName; // @synthesize zonesByName=_zonesByName;
@property(readonly, nonatomic) NSMutableDictionary *subscriptionsByIdentifier; // @synthesize subscriptionsByIdentifier=_subscriptionsByIdentifier;
@property(retain, nonatomic) NSArray *zoneNames; // @synthesize zoneNames=_zoneNames;
@property(retain, nonatomic) NSArray *subscriptionIdentifiers; // @synthesize subscriptionIdentifiers=_subscriptionIdentifiers;
@property(readonly, nonatomic) __weak id <PDCloudStoreDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <PDCloudStoreContainerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) CKContainer *container; // @synthesize container=_container;
- (void)_markEndCloudStoreDatabaseSetupWithSuccess:(_Bool)arg1 error:(id)arg2;
- (id)_cannotPerformActionErrorWithFailureReason:(id)arg1;
- (void)_resetContainerValues;
- (void)_resetCachedZoneDataForZoneID:(id)arg1;
- (id)description;
- (void)_cloudStoreInitializationTimerFired;
- (void)_cancelCloudStoreInitializationTimer;
- (void)_startCloudStoreInitializationTimer;
- (void)invalidateServerChangeTokens;
- (void)saveServerSubscriptionsForKey:(id)arg1;
- (void)saveServerZonesForKey:(id)arg1;
- (void)saveServerFetchTimestampsForKey:(id)arg1;
- (void)resetCachedContainerValues;
- (void)retrieveCachedServerSubscriptionsForKey:(id)arg1;
- (void)retrieveCachedServerZonesForKey:(id)arg1;
- (void)retrieveCachedServerFetchTimestampsForKey:(id)arg1;
- (id)errorWithCode:(long long)arg1 description:(id)arg2;
- (void)_addOperation:(id)arg1;
- (void)_cancelAllOperations;
- (void)_retryContainerStateWithError:(id)arg1 operationGroupNameSuffix:(id)arg2 retryCount:(unsigned long long)arg3 completion:(id /* block */)arg4;
- (void)_fetchAllSubscriptionsWithOperationGroupNameSuffix:(id)arg1 completion:(id /* block */)arg2;
- (void)_fetchRecordZonesWithOperationGroupNameSuffix:(id)arg1 completion:(id /* block */)arg2;
- (void)_zoneOperationWithZonesToSave:(id)arg1 zonesIDsToDelete:(id)arg2 operationGroupNameSuffix:(id)arg3 completion:(id /* block */)arg4;
- (void)_deleteAllZoneSubscriptionsWithOperationGroupNameSuffix:(id)arg1 completion:(id /* block */)arg2;
- (void)_deleteAllZonesWithOperationGroupNameSuffix:(id)arg1 completion:(id /* block */)arg2;
- (void)_subscriptionOperationWithSubscriptionsToSave:(id)arg1 subscriptionIDsToDelete:(id)arg2 operationGroupNameSuffix:(id)arg3 completion:(id /* block */)arg4;
- (void)_fetchRecordsWithQuery:(id)arg1 operationGroupName:(id)arg2 operationGroupNameSuffix:(id)arg3 qualityOfService:(long long)arg4 cursor:(id)arg5 fetchedRecords:(id)arg6 zone:(id)arg7 completion:(id /* block */)arg8;
- (void)fetchRecordsWithQuery:(id)arg1 operationGroupName:(id)arg2 operationGroupNameSuffix:(id)arg3 qualityOfService:(long long)arg4 zone:(id)arg5 completion:(id /* block */)arg6;
- (void)modifyRecordsOperationWithRecordsToSave:(id)arg1 recordIDsToDelete:(id)arg2 operationGroupName:(id)arg3 operationGroupNameSuffix:(id)arg4 qualityOfService:(long long)arg5 completion:(id /* block */)arg6;
- (void)resetContainerWithCompletion:(id /* block */)arg1;
- (void)removeItemsWithRecordNames:(id)arg1 itemType:(unsigned long long)arg2 groupName:(id)arg3 groupNameSuffix:(id)arg4 qualityOfService:(long long)arg5 completion:(id /* block */)arg6;
- (void)itemOfItemType:(unsigned long long)arg1 recordName:(id)arg2 qualityOfService:(long long)arg3 completion:(id /* block */)arg4;
- (void)allItemsOfItemType:(unsigned long long)arg1 storeLocally:(_Bool)arg2 completion:(id /* block */)arg3;
- (void)fetchRecordsWithRecordIDs:(id)arg1 operationGroupName:(id)arg2 operationGroupNameSuffix:(id)arg3 qualityOfService:(long long)arg4 completion:(id /* block */)arg5;
- (void)_queue_fetchAllRecordsUsingStoredChangeToken:(_Bool)arg1 changeToken:(id)arg2 shouldSaveToken:(_Bool)arg3 operationGroupName:(id)arg4 operationGroupNameSuffix:(id)arg5 qualityOfService:(long long)arg6 batchHandler:(id /* block */)arg7 completion:(id /* block */)arg8;
- (_Bool)shouldContinueWithRequest:(id)arg1;
- (void)coalesceRequest:(id)arg1 withNewRequest:(id)arg2;
- (_Bool)canCoalesceRequest:(id)arg1 withNewRequest:(id)arg2;
- (void)_queue_executeNextFecthRequestIfPossible;
- (void)executeRecordsRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)createZoneSubscriptions:(id)arg1 operationGroupNameSuffix:(id)arg2 completion:(id /* block */)arg3;
- (void)createZones:(id)arg1 operationGroupNameSuffix:(id)arg2 completion:(id /* block */)arg3;
- (void)updateCloudStoreWithLocalItems:(id)arg1 recordSpecificKeys:(id)arg2 groupName:(id)arg3 groupNameSuffix:(id)arg4 qualityOfService:(long long)arg5 completion:(id /* block */)arg6;
- (void)_keychainSyncFinishedFired;
- (void)cloudStoreAccountChanged:(id)arg1;
- (void)processResultWithError:(id)arg1 nextExpectedState:(unsigned long long)arg2 operationGroupNameSuffix:(id)arg3 retryCount:(unsigned long long)arg4 shouldRetry:(_Bool)arg5 completion:(id /* block */)arg6;
- (void)processFetchedCloudStoreDataWithModifiedRecords:(id)arg1 deletedRecords:(id)arg2 request:(id)arg3 completion:(id /* block */)arg4;
- (void)setContainerState:(unsigned long long)arg1 operationGroupNameSuffix:(id)arg2 retryCount:(unsigned long long)arg3 completion:(id /* block */)arg4;
- (void)setContainerState:(unsigned long long)arg1 operationGroupNameSuffix:(id)arg2 completion:(id /* block */)arg3;
- (void)cloudStoreAccountInformationWithCompletion:(id /* block */)arg1;
- (void)detachFromContainerWithState:(unsigned long long)arg1;
- (void)attachToContainer;
- (void)invalidateCloudStoreWithOperationGroupNameSuffix:(id)arg1 clearCache:(_Bool)arg2 completion:(id /* block */)arg3;
- (void)invalidateCloudStoreAndClearCache:(_Bool)arg1 completion:(id /* block */)arg2;
- (void)invalidateCloudStoreIfPossibleWithOperationGroupNameSuffix:(id)arg1 clearCache:(_Bool)arg2;
- (id)lastFetchDateForZoneWithName:(id)arg1;
- (id)cloudStoreSpecificKeysForItem:(id)arg1;
- (id)recordTypeForRecordID:(id)arg1;
- (id)allRecordNamesAssociatedWithRecordName:(id)arg1 inZone:(id)arg2;
- (void)saveCachedContainerValues;
- (void)readCachedContainerValues;
- (id)recordTypesForCloudStoreItemType:(unsigned long long)arg1;
- (id)zoneForCloudStoreItemType:(unsigned long long)arg1;
- (id)cloudRecordObjectFromItemType:(unsigned long long)arg1 records:(id)arg2;
- (void)shouldFetchAndStoreCloudDataAtStartupWithCompletion:(id /* block */)arg1;
- (_Bool)canUpdateAndFetchRecords;
- (_Bool)canInitializeContainer;
- (_Bool)isSetup;
- (_Bool)ensureContainerState:(unsigned long long)arg1;
- (void)initialCloudDatabaseSetupWithOperationGroupNameSuffix:(id)arg1 completion:(id /* block */)arg2;
- (void)initialCloudDatabaseSetupWithCompletion:(id /* block */)arg1;
- (id)initWithDataSource:(id)arg1;

@end

