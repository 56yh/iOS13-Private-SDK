//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDDatabaseJournalMergeObserver-Protocol.h>
#import <HealthDaemon/HDDiagnosticObject-Protocol.h>
#import <HealthDaemon/HDHealthDaemonReadyObserver-Protocol.h>
#import <HealthDaemon/HDPeriodicActivityDelegate-Protocol.h>

@class ACAccountStore, APSConnection, HDAsynchronousTaskTree, HDDaemon, HDPeriodicActivity, HDProfile, HKObserverSet, NSDate, NSMutableArray, NSProgress, NSString;
@protocol OS_dispatch_queue;

@interface HDCloudSyncCoordinator : NSObject <HDDiagnosticObject, HDPeriodicActivityDelegate, HDHealthDaemonReadyObserver, HDDatabaseJournalMergeObserver>
{
    HDDaemon *_daemon;
    _Bool _queue_syncInProgress;
    _Bool _queue_hasUpdatedCachedLastSuccessfulSyncDates;
    NSDate *_queue_lastSuccessfulPullDate;
    NSDate *_queue_lastSuccessfulPushDate;
    HDAsynchronousTaskTree *_activeTaskGroup;
    NSMutableArray *_pendingTaskGroups;
    ACAccountStore *_accountStore;
    NSString *_latestSyncStartLog;
    NSString *_latestSyncEndLog;
    NSProgress *_activeTaskProgress;
    NSMutableArray *_pendingTasksProgress;
    NSMutableArray *_progressCompletionBlocks;
    HKObserverSet *_observers;
    _Bool _hasRestoreCompleted;
    _Bool _cloudSyncEnabled;
    _Bool _cloudSyncValueLoaded;
    APSConnection *_apsConnection;
    HDProfile *_unitTest_primaryProfileOverride;
    NSObject<OS_dispatch_queue> *_queue;
    HDPeriodicActivity *_periodicActivity;
}

@property(readonly, nonatomic) HDPeriodicActivity *periodicActivity; // @synthesize periodicActivity=_periodicActivity;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (id)diagnosticDescription;
- (void)unitTest_performPeriodicSyncWithCompletion:(id /* block */)arg1;
- (void)unitTest_setPrimaryProfileOverride:(id)arg1;
- (void)_queue_generateRestoreEventMergeComplete;
- (void)_queue_setStartDateForRestoreEventSyncComplete;
- (void)databaseJournalMergeDidCompleteForProfile:(id)arg1;
- (void)_updateAggdKeysForPeriodicSyncError:(id)arg1;
- (void)performPeriodicActivity:(id)arg1 completion:(id /* block */)arg2;
- (void)_prepareAllProfilesForSync;
- (void)periodicActivity:(id)arg1 configureXPCActivityCriteria:(id)arg2;
- (id)readRestoreCompletionDateWithError:(id *)arg1;
- (_Bool)persistRestoreCompletionDate:(id)arg1 withError:(id *)arg2;
- (id)readErrorRequiringUserActionOnCloudSyncError:(id *)arg1;
- (_Bool)persistErrorRequiringUserActionOnCloudSync:(id)arg1;
- (_Bool)_queue_isDeviceInManateeUnavailableCFUState;
- (_Bool)isDeviceInManateeUnavailableCFUState;
- (id)hasErrorRequiringUserActionOnCloudSyncTaskTree:(id)arg1;
- (id)activeTaskProgress;
- (id)lastSuccessfulPushDate;
- (id)lastSuccessfulPullDate;
- (void)_queue_finishCloudSyncTaskProgressWithResult:(long long)arg1 error:(id)arg2;
- (void)addCloudSyncProgressCompletion:(id /* block */)arg1;
- (void)_resetPersistedPeriodicSyncErrors;
- (void)_persistPeriodicSyncError:(id)arg1;
- (_Bool)_shouldPerformLastSyncDateCheckInternalSetting;
- (id)_queue_getPersistedAccountInfo;
- (id)_lastLongTimeWithoutSuccessfulCloudSyncReportDateKeyWithError:(id *)arg1;
- (void)_queue_checkLastSyncDate;
- (void)_updateCachedLastSyncDatesWithCompletion:(id /* block */)arg1;
- (void)_queue_setupPeriodicActivity;
- (void)_queue_triggerSyncForAccountChange;
- (id)_fetchDescriptionForProfile:(id)arg1 options:(unsigned long long)arg2 reason:(long long)arg3 taskTree:(id)arg4 resultHandler:(id /* block */)arg5;
- (id)_resetProfile:(id)arg1 options:(unsigned long long)arg2 reason:(long long)arg3 taskTree:(id)arg4;
- (id)_syncProfile:(id)arg1 options:(unsigned long long)arg2 reason:(long long)arg3 taskTree:(id)arg4;
- (_Bool)_queue_hasTooManyPendingTaskGroupsWithError:(id *)arg1;
- (void)_queue_startNextTaskGroup;
- (id)_queue_disableAndDeleteCloudSyncDataWithCompletion:(id /* block */)arg1;
- (id)_queue_fetchCloudDescriptionWithOptions:(unsigned long long)arg1 reason:(long long)arg2 completion:(id /* block */)arg3;
- (id)_queue_resetAllProfilesWithOptions:(unsigned long long)arg1 reason:(long long)arg2 completion:(id /* block */)arg3;
- (id)_queue_syncProfilesWithIdentifiers:(id)arg1 withOptions:(unsigned long long)arg2 reason:(long long)arg3 completion:(id /* block */)arg4;
- (_Bool)_unitTest_shouldSyncProfile:(id)arg1;
- (id)_primaryProfile;
- (_Bool)_queue_canPerformCloudSyncWithError:(id *)arg1;
- (_Bool)canPerformCloudSyncWithError:(id *)arg1;
- (void)_setHealthAccountDataclassEnabled:(_Bool)arg1 completion:(id /* block */)arg2;
- (void)accountConfigurationDidChangeWithCompletion:(id /* block */)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1 queue:(id)arg2;
- (id)fetchCloudSyncProgressWithCompletion:(id /* block */)arg1;
- (id)disableAndDeleteAllSyncDataWithCompletion:(id /* block */)arg1;
- (void)enableSyncLocallyWithCompletion:(id /* block */)arg1;
- (void)disableSyncLocallyWithCompletion:(id /* block */)arg1;
- (void)fetchSyncStatusWithCompletion:(id /* block */)arg1;
- (id)fetchCloudDescriptionWithOptions:(unsigned long long)arg1 reason:(long long)arg2 completion:(id /* block */)arg3;
- (id)resetAllProfilesWithOptions:(unsigned long long)arg1 reason:(long long)arg2 completion:(id /* block */)arg3;
- (id)syncAllProfilesWithOptions:(unsigned long long)arg1 reason:(long long)arg2 completion:(id /* block */)arg3;
- (void)dealloc;
- (void)_queue_disableCloudSyncSupport;
- (void)_queue_enableCloudSyncSupport;
- (void)_queue_setupCloudSyncSupportIfRequired;
- (void)_setupCloudSyncSupportIfRequired;
- (void)daemonReady:(id)arg1;
- (id)initWithDaemon:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

