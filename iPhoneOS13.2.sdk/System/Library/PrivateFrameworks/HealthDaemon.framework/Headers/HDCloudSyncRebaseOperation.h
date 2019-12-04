//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



@class HDCloudSyncFetchOperationResult, HDCloudSyncOperationConfiguration, HDCloudSyncStoreRecord, NSDate, NSMutableSet, NSProgress, NSSet, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface HDCloudSyncRebaseOperation : NSObject <NSProgressReporting>
{
    HDCloudSyncOperationConfiguration *_configuration;
    HDCloudSyncFetchOperationResult *_fetchOperationResult;
    HDCloudSyncStoreRecord *_primaryPushStore;
    NSUUID *_operationIdentifier;
    NSDate *_startTime;
    NSString *_cloudKitIdentifier;
    NSObject<OS_dispatch_queue> *_queue;
    NSSet *_abandonedStoreZones;
    NSSet *_previouslySeizedStores;
    NSSet *_pullStores;
    NSSet *_allOwnerIdentifiers;
    NSMutableSet *_prepOperations;
    NSSet *_primaryContainerSeizedStores;
    NSSet *_secondaryContainerSeizedStores;
    _Bool _queue_hasStarted;
    id /* block */ _completion;
    NSProgress *_progress;
}

@property(readonly, nonatomic) NSProgress *progress; // @synthesize progress=_progress;
- (_Bool)_queue_finishRebasePreparationWithError:(id *)arg1;
- (_Bool)_queue_updatePersistedStateForStore:(id)arg1 error:(id *)arg2;
- (id)_queue_recordIDsToDeleteWithStoreRecord:(id)arg1;
- (id)_queue_updatedAbandonedStoresByContainerID;
- (id)_includedIdentifiers;
- (void)_queue_runNewRebaseOperationIfPossible;
- (void)_queue_startBaselinePrepOperationForSecondaryContainers:(id)arg1 abandonedStores:(id)arg2;
- (void)_queue_startBaselinePrepOperationForPrimaryContainer:(id)arg1 abandonedStores:(id)arg2;
- (void)_queue_startBaselinePrepIfRequired;
- (void)_queue_runRebaseOperation;
- (void)_finishWithSuccess:(_Bool)arg1 error:(id)arg2;
- (void)startWithCompletion:(id /* block */)arg1;
- (id)initWithConfiguration:(id)arg1 fetchOperationResult:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

