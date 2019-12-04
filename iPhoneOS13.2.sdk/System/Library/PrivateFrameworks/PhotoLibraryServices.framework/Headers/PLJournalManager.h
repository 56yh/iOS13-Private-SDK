//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotoLibraryServices/PLJournalManagerCore.h>

@class NSObject, NSPersistentHistoryToken, PLPhotoLibrary;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface PLJournalManager : PLJournalManagerCore
{
    PLPhotoLibrary *_photoLibrary;
    PLPhotoLibrary *_transientPhotoLibrary;
    int _notifyToken;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_group> *_startupWaitGroup;
    unsigned short _state;
    NSPersistentHistoryToken *_currentHistoryToken;
}

+ (id)entriesByPayloadClassIDFromHistoryToken:(id)arg1 currentHistoryToken:(id *)arg2 withManagedObjectContext:(id)arg3 payloadIDsToSkipInserts:(id)arg4;
+ (_Bool)existingJournalsCompatibleForRebuild:(id)arg1 error:(id *)arg2;
+ (_Bool)assetJournalExists:(id)arg1;
+ (Class)payloadClassForAdditionalEntityName:(id)arg1;
+ (id)payloadClasses;
- (void)_removeLegacyPersistedMetadataIfNecessary;
- (id)_assetsToImportFromAssetJournalInManagedObjectContext:(id)arg1 outOnDiskURLs:(id)arg2;
- (id)assetsToImportFromAssetJournalInManagedObjectContext:(id)arg1 outOnDiskURLs:(id)arg2;
- (void)_recreateNonAssetsInManagedObjectContext:(id)arg1 progress:(id)arg2;
- (void)_recreateAssetsInManagedObjectContext:(id)arg1 progress:(id)arg2;
- (void)recreateNonAssetsInManagedObjectContext:(id)arg1 progress:(id)arg2;
- (void)recreateAssetsInManagedObjectContext:(id)arg1 progress:(id)arg2;
- (void)recreateAllObjectsInManagedObjectContext:(id)arg1;
- (_Bool)_replayFromCurrentHistoryTokenWithPayloadIDsToSkipInserts:(id)arg1;
- (_Bool)_replayFromCurrentHistoryToken;
- (_Bool)_appendEntriesByPayloadClassID:(id)arg1 withCurrentHistoryToken:(id)arg2;
- (_Bool)_coalesceJournalsForPayloadClassIDs:(id)arg1 withChangeJournalOverThreshold:(float)arg2;
- (_Bool)_createSnapshotsForceFull:(_Bool)arg1 error:(id *)arg2;
- (_Bool)_needPartialSnapshot:(id)arg1;
- (_Bool)_needFullSnapshot;
- (_Bool)_needSnapshot;
- (id)_transientPhotoLibrary;
- (void)_loadHistoryToken;
- (_Bool)forceFullSnapshot:(id *)arg1;
- (void)coalesceJournalsForPayloadClassIDs:(id)arg1 withChangeJournalOverThreshold:(float)arg2 completionHandler:(id /* block */)arg3;
- (void)snapshotJournalsForPayloadClassIDs:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)_unregisterToChangeHubNotification;
- (void)_handleChangeHubNotification;
- (unsigned int)_registerToChangeHubNotification;
- (void)_start;
- (void)_startAfterRebuild;
- (void)notifyDidImportFileSystemAssets;
- (void)notifyWillImportFileSystemAssets;
- (void)stop;
- (void)start;
- (id)initWithPhotoLibrary:(id)arg1;

@end

