//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SafariShared/WBSCloudHistoryDataStore-Protocol.h>

@class CKDatabase, CKRecordZone, CKRecordZoneID, NSOperationQueue, WBSCloudHistoryConfiguration;
@protocol OS_dispatch_queue;

@interface WBSCloudHistoryStore : NSObject <WBSCloudHistoryDataStore>
{
    NSObject<OS_dispatch_queue> *_databaseQueue;
    NSOperationQueue *_cloudKitOperationQueue;
    CKDatabase *_database;
    CKRecordZoneID *_recordZoneID;
    CKRecordZone *_recordZone;
    WBSCloudHistoryConfiguration *_configuration;
    _Bool _useManateeContainer;
}

- (void)fetchNumberOfDevicesInSyncCircleWithCompletion:(id /* block */)arg1;
- (void)deleteHistoryZoneWithCompletion:(id /* block */)arg1;
- (void)_resetRecordZone;
- (void)_prepareRecordZoneWithCompletion:(id /* block */)arg1;
- (id)_dictionaryForRecordData:(id)arg1;
- (id)_recordDataForDictionary:(id)arg1;
- (id)_recordWithType:(id)arg1 version:(unsigned long long)arg2 dataDictionary:(id)arg3;
- (void)_appendRecord:(id)arg1 toResult:(id)arg2;
- (void)_scheduleOperation:(id)arg1;
- (void)_fetchRecordsWithServerChangeToken:(id)arg1 numberOfFetchRecordsOperationsPerformedSoFar:(unsigned long long)arg2 result:(id)arg3 completion:(id /* block */)arg4;
- (void)_configureFetchChangesOperation:(id)arg1;
- (void)fetchRecordsWithServerChangeTokenData:(id)arg1 completion:(id /* block */)arg2;
- (void)replayPersistedLongLivedSaveOperationWithID:(id)arg1 completion:(id /* block */)arg2;
- (id)_recordWithHistoryTombstones:(id)arg1 version:(unsigned long long)arg2;
- (id)_recordWithCloudHistoryVisits:(id)arg1;
- (id)_recordsWithCloudHistoryVisits:(id)arg1;
- (void)_batchSaveRecords:(id)arg1 useLongLivedOperation:(_Bool)arg2 longLivedOperationPersistenceCompletion:(id /* block */)arg3 completion:(id /* block */)arg4;
- (void)_saveRecords:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)_saveCloudHistoryVisits:(id)arg1 tombstones:(id)arg2 longLivedOperationPersistenceCompletion:(id /* block */)arg3 completion:(id /* block */)arg4;
- (void)saveCloudHistoryVisits:(id)arg1 tombstones:(id)arg2 longLivedOperationPersistenceCompletion:(id /* block */)arg3 completion:(id /* block */)arg4;
- (_Bool)_shouldTryToResetRecordZoneForError:(id)arg1;
- (void)initializePushNotifications:(id /* block */)arg1;
- (id)initWithConfiguration:(id)arg1 useManateeContainer:(_Bool)arg2;

@end

