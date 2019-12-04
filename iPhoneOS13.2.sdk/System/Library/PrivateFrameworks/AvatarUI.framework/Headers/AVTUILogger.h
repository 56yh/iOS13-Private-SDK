//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AvatarUI/AVTUILogger-Protocol.h>

@class NSString;
@protocol OS_os_log;

@interface AVTUILogger : NSObject <AVTUILogger>
{
    NSObject<OS_os_log> *_generalLog;
    NSObject<OS_os_log> *_interactionLog;
    NSObject<OS_os_log> *_backendLog;
}

@property(readonly, nonatomic) NSObject<OS_os_log> *backendLog; // @synthesize backendLog=_backendLog;
@property(readonly, nonatomic) NSObject<OS_os_log> *interactionLog; // @synthesize interactionLog=_interactionLog;
@property(readonly, nonatomic) NSObject<OS_os_log> *generalLog; // @synthesize generalLog=_generalLog;
- (void)logCarouselEndsDraggingWithVelocity:(double)arg1 willSwitchIndexPathInsteadOfScrollBack:(_Bool)arg2 forHighVelocity:(_Bool)arg3;
- (void)logCarouselDelegateDidUpdateRecord:(id)arg1;
- (void)logCarouselDelegateNearnessFactorDidChange:(double)arg1 towardRecord:(_Bool)arg2 editable:(_Bool)arg3;
- (void)logCarouselDelegateWillEndFocusRecord:(id)arg1;
- (void)logCarouselDelegateDidFocusRecord:(id)arg1;
- (void)logCarouselErrorGettingFrameForElementAtIndex:(unsigned long long)arg1;
- (void)logAVTViewCancelingRenderingAvatar:(id)arg1;
- (void)logAVTViewDidRenderCurrentAvatar:(id)arg1;
- (void)logAVTViewDidRenderAvatar:(id)arg1 currentAvatar:(id)arg2;
- (void)logAVTViewSetAvatar:(id)arg1;
- (void)logToLivePoseTransitionEnds:(id)arg1;
- (void)logToLivePoseTransitionBegins:(id)arg1;
- (void)logTransition:(id)arg1 state:(unsigned long long)arg2 reachedStage:(unsigned long long)arg3;
- (void)logCancelTransition:(id)arg1;
- (void)logPerformTransition:(id)arg1;
- (void)logSetupHandlerCompletedForTransition:(id)arg1 state:(long long)arg2 finished:(_Bool)arg3;
- (void)logStartTransition:(id)arg1 state:(long long)arg2;
- (void)logCarouselAddsTransitionToCoordinator:(id)arg1;
- (void)logCarouselCellStopUsingLiveView:(id)arg1 associatedTransition:(id)arg2;
- (void)logCarouselCellStartUsingLiveView:(id)arg1 associatedTransition:(id)arg2;
- (void)logSingleModeControllerStopUsingLiveView:(id)arg1;
- (void)logSingleModeControllerStartUsingLiveView:(id)arg1;
- (void)logCarouselStopsFocusingOnCenterItem:(id)arg1 withCell:(id)arg2;
- (void)logCarouselTransitionCenterItem:(id)arg1 withCell:(id)arg2;
- (void)logCarouselChangesCenterItemTo:(id)arg1;
- (void)logCarouselChangingToMultiMode;
- (void)logCarouselChangingToSingleMode;
- (void)logRenderingStickerEnd:(id)arg1;
- (void)logRenderingStickerStart:(id)arg1 forRecord:(id)arg2;
- (void)logPaddleViewVideoPlayerFailed:(id)arg1;
- (void)logStickerGeneratorPoolDidntHaveAvailableGenerator:(long long)arg1 maxCount:(long long)arg2;
- (void)logDeduplicateRecordWithIdentifier:(id)arg1 toNewRecordWithIdentifier:(id)arg2;
- (void)logDiscoveredDuplicates:(id)arg1 count:(unsigned long long)arg2;
- (void)logMaintenanceCompleted;
- (void)logErrorMitigatingDuplicates:(id)arg1;
- (void)runningMaintenance:(id /* block */)arg1;
- (void)checkingIn:(id /* block */)arg1;
- (void)logNoProxyToAvatarsDaemon;
- (void)logErrorGettingAvatarsDaemonClientProxy:(id)arg1;
- (void)logAvatarsDaemonClientConnectionInvalidated;
- (void)logAvatarsDaemonClientConnectionInterrupted;
- (void)logAvatarsDaemonClientChecksIn:(int)arg1;
- (void)logAvatarsDaemonReceivesIncomingConnection;
- (void)logUpdatingBackupExclusionStatus:(_Bool)arg1;
- (void)logErrorUpdatingBackupInclusionStatus:(id)arg1;
- (void)logErrorMigratingBackupInclusionStatus:(id)arg1;
- (void)logErrorGettingAccountInfo:(id)arg1;
- (void)logAccountInfo:(id)arg1 status:(long long)arg2 deviceToDeviceEncryption:(_Bool)arg3;
- (void)checkingAccountInfo:(id /* block */)arg1;
- (void)logTooManyAvatars:(unsigned long long)arg1 limit:(unsigned long long)arg2;
- (void)logErrorGettingChangedRecordsContentForIdentifiers:(id)arg1 error:(id)arg2;
- (void)logCoalesceableEventOccured:(id)arg1;
- (void)logSetupSchedulingExport;
- (void)logSetupSchedulingImport;
- (void)logSetupSchedulingMigrationCheck;
- (void)logErrorMergingCopiedAsideContent:(id)arg1;
- (void)logErrorCopyingStorageAside:(id)arg1;
- (void)logResetSyncReason:(unsigned long long)arg1;
- (void)logPersistentChangeNotOfInterest:(id)arg1;
- (void)logMissingTombstonedIdentifier;
- (void)logMissingResetSyncReasonKey;
- (void)logStartObservingResetSync;
- (void)restoringStorage:(id /* block */)arg1;
- (void)copyingStorageAside:(id /* block */)arg1;
- (void)processingDidResetSyncNotification:(id /* block */)arg1;
- (void)processingWillResetSyncNotification:(id /* block */)arg1;
- (void)logErrorSettingUserDirSuffix;
- (void)logNotImportingOnLaunchWithRemainingTime:(double)arg1;
- (void)logPostingChangeNotificationForIdentifiers:(id)arg1;
- (void)postingAvatarStoreChangeNotification:(id /* block */)arg1;
- (void)logErrorRemovingStoreFolder:(id)arg1;
- (void)logErrorTearingDownCoreDataStack:(id)arg1;
- (void)logTearingDownCoreDataStack:(id)arg1;
- (void)logDidResetZoneWithSuccess:(_Bool)arg1 error:(id)arg2;
- (void)logWillResetZone;
- (void)logSchedulingUpdateThumbnails;
- (void)logSchedulingImport;
- (void)logUpdatingThumbnails;
- (void)logCheckingIfMigrationNeeded;
- (void)logErrorProcessingChangeTransactionsToUpdateThumbnails:(id)arg1;
- (void)updatingThumbnailsForRemoteChanges:(id /* block */)arg1;
- (void)logDeletingStickerRecents;
- (void)deletingStickerRecentsForRemoteChanges:(id /* block */)arg1;
- (void)logCouldntFindRecordIdentifierForChangeType:(long long)arg1 managedObjectID:(id)arg2;
- (void)logFoundRecordIdentifier:(id)arg1 changeType:(long long)arg2 managedObjectID:(id)arg3;
- (void)logErrorSavingChangeToken:(id)arg1 location:(id)arg2;
- (void)logTransactionHasChangesButNoToken;
- (void)logTrackerProcessingChanges:(id)arg1 count:(unsigned long long)arg2 from:(id)arg3;
- (void)logErrorReadingCurrentHistoryToken:(id)arg1;
- (void)logCurrentHistoryTokenFileDoesntExist:(id)arg1;
- (void)savingChangeTrackerToken:(id /* block */)arg1;
- (void)logUnableToReadRemoteRecord:(id)arg1;
- (void)logInspectingChangesForExportAfterToken:(id)arg1;
- (void)logErrorPinningContextToCurrentQueryGenerationToken:(id)arg1;
- (void)logChangesRequireThumbnailUpdate;
- (void)logChangesRequireExport;
- (void)logNotificationDoesntContainChangeHistoryToken;
- (void)logErrorFetchingChangeHistory:(id)arg1;
- (void)logDispatchingRemoteChangeWithTransactionCount:(unsigned long long)arg1 handlersCount:(unsigned long long)arg2;
- (void)logReceivedRemoteChange:(id)arg1;
- (void)logStartObservingRemoteChangeNotificationFrom:(id)arg1;
- (void)processingRemoteChangeNotification:(id /* block */)arg1;
- (void)logUnableToCreatePushConnection:(id)arg1;
- (void)logPushNotificationReceivedForTopic:(id)arg1 payload:(id)arg2;
- (void)logPushConnectionReceivedToken:(id)arg1 topic:(id)arg2 identifier:(id)arg3;
- (void)logPushConnectionReceivedPublicToken:(id)arg1;
- (void)logErrorSettingUpStore:(id)arg1;
- (void)logErrorStartingServer:(id)arg1;
- (void)logErrorAddingPersistentStore:(id)arg1;
- (void)logFoundExistingRecordDuringMigration;
- (void)logErrorDeletingMigratedContent:(id)arg1;
- (void)logFoundExistingRecordDuringMigration:(id)arg1;
- (void)logErrorUpdatingRecordsForMigration:(id)arg1;
- (void)logMigratingSource:(id)arg1;
- (void)migratingPersistedContent:(id /* block */)arg1;
- (void)logMirroringRequestErrorWithCode:(long long)arg1 description:(id)arg2;
- (void)logExportRequestResult:(_Bool)arg1 error:(id)arg2;
- (void)logImportRequestResult:(_Bool)arg1 error:(id)arg2;
- (void)logSyncEnabled;
- (void)logUserRequestedBackupXPCActivityFinished;
- (void)performingUserRequestedBackupActivity:(id /* block */)arg1;
- (void)logMigrationXPCActivityFinished;
- (void)performingMigrationXPCActivity:(id /* block */)arg1;
- (void)importingRecords:(id /* block */)arg1;
- (void)exportingRecords:(id /* block */)arg1;
- (void)settingUpStore:(id /* block */)arg1;
- (void)logStartingServer;
- (void)logUsageTrackingBigDifferencesClusterCount:(unsigned long long)arg1;
- (void)logUsageTrackingSmallDifferencesClusterCount:(unsigned long long)arg1;
- (void)logUsageTrackingRecordCount:(unsigned long long)arg1;
- (void)logSingleModeCantSnapshotForLackOfWindow;
- (void)logAvatarPreloadEnd;
- (void)logAvatarPreloadBeginForIdentifier:(id)arg1;
- (void)logCarouselSnapshotForIndex:(unsigned long long)arg1 size:(struct CGSize)arg2;
- (void)logUnthrottlingAVTView;
- (void)logThrottlingAVTView;
- (void)logRequestingThumbnailForIndex:(unsigned long long)arg1 section:(id)arg2;
- (void)logUpdatingLiveAvatarWithConfiguration:(id)arg1;
- (void)logDonePreLoadingThumbnailForPreLoadingTask:(id)arg1;
- (void)logDonePreLoadingPreset:(id)arg1 task:(id)arg2;
- (void)logPreLoadingPreset:(id)arg1 task:(id)arg2;
- (void)logLookingUpPreLoadedPreset:(id)arg1 task:(id)arg2;
- (void)logCancelingPreLoadingTask:(id)arg1;
- (void)logStartingPreLoadingTask:(id)arg1;
- (void)logRequestingPreLoadingTask:(id)arg1 forIndex:(unsigned long long)arg2 section:(unsigned long long)arg3;
- (void)logPreLoadingNeededForIndex:(unsigned long long)arg1 section:(unsigned long long)arg2;
- (void)logErrorFetchingRecords:(id)arg1;
- (void)logErrorDuplicatingThumbnailsForIdentifier:(id)arg1 error:(id)arg2;
- (void)logErrorDeletingSomeThumbnail:(id)arg1;
- (void)logErrorDeletingThumbnailsForIdentifier:(id)arg1 error:(id)arg2;
- (void)logGeneratingImageError:(id)arg1;
- (void)logGeneratingImageForRecord:(id)arg1 scope:(id)arg2 type:(long long)arg3;
- (void)logInMemoryCacheEvictsResource:(id)arg1;
- (void)logInMemoryCacheHitForResource:(id)arg1;
- (void)logInMemoryCacheStorageForResource:(id)arg1;
- (void)logImageStoreDoneSavingImageForPath:(id)arg1;
- (void)logImageStoreBeginSavingImageForPath:(id)arg1;
- (void)logImageStoreSavingError:(id)arg1 code:(long long)arg2;
- (void)logImageStoreCacheHitForItemDescription:(id)arg1 sizeCost:(unsigned long long)arg2;
- (void)logImageStoreCacheMiss:(id)arg1;
- (void)logCreatingImageStoreForPath:(id)arg1;
- (void)logFileSystemError:(id)arg1;
- (void)logDidFinishEditingWithError:(id)arg1;
- (void)logDidFinishEditingWithSuccess;
- (void)logErrorWhileMigratingBackend:(id)arg1;
- (void)logErrorUpdatingVersion:(id)arg1;
- (void)logDroppingUnsupportedAvatarRecord:(id)arg1;
- (void)logBackendVersionMismatch:(id)arg1 actual:(id)arg2;
- (void)logFetchedRecords:(unsigned long long)arg1 criteria:(long long)arg2;
- (void)duplicatingRecords:(id /* block */)arg1;
- (void)fetchingRecords:(id /* block */)arg1;
- (void)deletingRecords:(id /* block */)arg1;
- (void)savingRecords:(id /* block */)arg1;
- (void)logPerformedRecentStickersMigration:(_Bool)arg1;
- (void)logFetchedOrphanedRecentSticker:(id)arg1;
- (void)logErrorFetchingRecentStickers:(id)arg1;
- (void)logErrorSavingRecentSticker:(id)arg1;
- (void)logRecordsNotFoundInRecordStore:(id)arg1;
- (void)logRecordsNotFoundInPuppetStore:(id)arg1;
- (void)logRecordsNotFoundInAnyStore:(id)arg1;
- (void)logReadingError:(id)arg1;
- (void)logSavingError:(id)arg1;
- (void)logReadingBackendAtPath:(id)arg1;
- (void)logDuplicatingRecordWithIdentifier:(id)arg1;
- (void)logDeletingImagesWithIdentifierPrefix:(id)arg1;
- (void)logDeletingRecordWithIdentifier:(id)arg1;
- (void)logSavingBackend;
- (void)logErrorCreatingBackendContent:(id)arg1;
- (void)logCreatingBackendFolderAtPath:(id)arg1;
- (void)logCreatingBackendDBAtPath:(id)arg1;
- (void)logCreatingStore:(id)arg1;
- (void)logNoAvatarPreset:(id)arg1;
- (void)logSnapshotReturnedImage:(id)arg1;
- (void)logRenderingRecord:(id)arg1 size:(struct CGSize)arg2;
- (void)logRenderingConfiguration:(id)arg1;
- (void)logRenderingModelPreset:(id)arg1;
- (void)logRenderingModelColor:(id)arg1;
- (void)logParsingMetadataDefinitionsError:(id)arg1;
- (void)logParsingMetadataDefinitions;
- (void)logErrorLoadingTemplates:(id)arg1;
- (void)logDebug:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

