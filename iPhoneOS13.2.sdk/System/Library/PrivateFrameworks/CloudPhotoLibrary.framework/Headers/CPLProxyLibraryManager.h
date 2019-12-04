//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudPhotoLibrary/CPLPlatformObject.h>

#import <CloudPhotoLibrary/CPLClientLibraryManagerProtocol-Protocol.h>
#import <CloudPhotoLibrary/CPLLibraryManagerImplementation-Protocol.h>


@class NSCountedSet, NSMutableArray, NSMutableDictionary, NSObject, NSString, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface CPLProxyLibraryManager : CPLPlatformObject <CPLClientLibraryManagerProtocol, NSXPCConnectionDelegate, CPLLibraryManagerImplementation>
{
    NSXPCConnection *_connection;
    id /* block */ _blockToCallOnDaemonDying;
    NSMutableDictionary *_downloadTasks;
    NSMutableDictionary *_inMemoryDownloadTasks;
    NSMutableDictionary *_uploadTasks;
    NSMutableDictionary *_forceSyncTasks;
    NSMutableDictionary *_vouchersPerTaskIdentifier;
    _Bool _diagnosticsEnabled;
    unsigned long long _foregroundCalls;
    NSCountedSet *_disablingReasons;
    unsigned long long _disablingMinglingCount;
    unsigned long long _significantWorkCalls;
    NSMutableDictionary *_outstandingInvocations;
    unsigned long long _outstandingInvocationsCount;
    NSMutableDictionary *_syncOutstandingInvocations;
    unsigned long long _syncOutstandingInvocationsCount;
    NSMutableArray *_pendingBlocksAfterOpening;
    int _openingStatus;
    int _notifyToken;
    _Bool _killed;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)clientProtocolInterface;
+ (id)daemonProtocolInterface;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)_dropVoucherForTaskWithIdentifier:(id)arg1;
- (void)_storeVoucher:(id)arg1 forTaskWithIdentifier:(id)arg2;
- (void)_withVoucherForTaskWithIdentifier:(id)arg1 do:(id /* block */)arg2;
- (void)provideCloudResource:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)provideRecordWithCloudScopeIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)provideLibraryInfoForScopeWithIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)unblockEngineElementOnce:(id)arg1;
- (void)unblockEngineElement:(id)arg1;
- (void)blockEngineElement:(id)arg1;
- (void)reportMiscInformation:(id)arg1;
- (void)reportSetting:(id)arg1 hasBeenSetToValue:(id)arg2;
- (void)addInfoToLog:(id)arg1;
- (void)cloudCacheGetDescriptionForRecordWithScopedIdentifier:(id)arg1 related:(_Bool)arg2 completionHandler:(id /* block */)arg3;
- (void)getCloudCacheForRecordWithScopedIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)getStatusesForScopesWithIdentifiers:(id)arg1 includeStorages:(_Bool)arg2 completionHandler:(id /* block */)arg3;
- (void)getStatusArrayForComponents:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)getStatusForComponents:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)getListOfComponentsWithCompletionHandler:(id /* block */)arg1;
- (void)resetCacheWithOption:(unsigned long long)arg1 reason:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)compactFileCacheWithCompletionHandler:(id /* block */)arg1;
- (void)getResourcesForItemWithScopedIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)barrier;
- (void)cancelSyncTask:(id)arg1;
- (void)cancelTask:(id)arg1;
- (void)connection:(id)arg1 handleInvocation:(id)arg2 isReply:(_Bool)arg3;
- (void)libraryManagerHasBeenReplaced;
- (void)provideLocalResource:(id)arg1 recordClassString:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)forceSyncDidFinishForTask:(id)arg1 withErrors:(id)arg2;
- (void)libraryManagerHasStatusChanges;
- (void)libraryManagerDidUpdateSizeOfResourcesToUploadToSize:(unsigned long long)arg1 sizeOfOriginalResourcesToUpload:(unsigned long long)arg2 numberOfImages:(unsigned long long)arg3 numberOfVideos:(unsigned long long)arg4 numberOfOtherItems:(unsigned long long)arg5;
- (void)libraryManagerDidUpdateStatusWithProperties:(id)arg1;
- (void)libraryManagerHasChangesToPull;
- (void)uploadOfResource:(id)arg1 didFinishForResourceTransferTask:(id)arg2 withError:(id)arg3;
- (void)uploadOfResource:(id)arg1 didProgress:(float)arg2 forResourceTransferTask:(id)arg3;
- (void)uploadDidStartForResource:(id)arg1 withResourceTransferTask:(id)arg2;
- (id)_uploadTaskDidStartForResource:(id)arg1 withTaskIdentifier:(id)arg2;
- (void)backgroundDownloadDidFailForResource:(id)arg1;
- (void)backgroundDownloadDidFinishForResource:(id)arg1;
- (void)inMemoryDownloadDidFinishForResourceTransferTask:(id)arg1 data:(id)arg2 withError:(id)arg3;
- (void)downloadDidFinishForResourceTransferTask:(id)arg1 finalResource:(id)arg2 withError:(id)arg3;
- (void)downloadDidProgress:(float)arg1 forResourceTransferTask:(id)arg2;
- (void)downloadDidStartForResourceTransferTask:(id)arg1;
- (void)forceSynchronizingScopeWithIdentifiers:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_dispatchFailedForceSyncTaskForScopeIdentifiers:(id)arg1 withError:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)_invokeSyncOutstandingInvocationsWithTaskIdentifier:(id)arg1;
- (_Bool)_setStatusFromDictionary:(id)arg1;
- (void)addStatusChangesForRecordsWithScopedIdentifiers:(id)arg1 persist:(_Bool)arg2;
- (void)acknowledgeChangedStatuses:(id)arg1;
- (void)getChangedStatusesWithCompletionHandler:(id /* block */)arg1;
- (void)getStatusForRecordsWithScopedIdentifiers:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)checkHasBackgroundDownloadOperationsWithCompletionHandler:(id /* block */)arg1;
- (void)noteClientIsEndingSignificantWork;
- (void)setShouldOverride:(_Bool)arg1 forSystemBudgets:(unsigned long long)arg2;
- (void)getSystemBudgetsWithCompletionHandler:(id /* block */)arg1;
- (void)noteClientIsBeginningSignificantWork;
- (void)enableMingling;
- (void)disableMingling;
- (void)enableSynchronizationWithReason:(id)arg1;
- (void)disableSynchronizationWithReason:(id)arg1;
- (void)noteClientIsInBackground;
- (void)noteClientIsInForeground;
- (void)noteClientReceivedNotificationOfServerChanges;
- (void)startSyncSession;
- (void)resetStatus;
- (void)checkResourcesAreSafeToPrune:(id)arg1 checkServerIfNecessary:(_Bool)arg2 completionHandler:(id /* block */)arg3;
- (void)deleteResources:(id)arg1 checkServerIfNecessary:(_Bool)arg2 completionHandler:(id /* block */)arg3;
- (void)setDiagnosticsEnabled:(_Bool)arg1;
- (_Bool)diagnosticsEnabled;
- (void)queryUserIdentitiesWithParticipants:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)acceptMomentShare:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)fetchMomentShareFromShareURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)publishMomentShare:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)getMappedScopedIdentifiersForScopedIdentifiers:(id)arg1 inAreLocalIdentifiers:(_Bool)arg2 completionHandler:(id /* block */)arg3;
- (void)beginInMemoryDownloadOfResource:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_dispatchFailedInMemoryDownloadTaskForResource:(id)arg1 withError:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)rampingRequestForResourceType:(unsigned long long)arg1 numRequested:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
- (void)getStreamingURLForResource:(id)arg1 intent:(unsigned long long)arg2 hints:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)beginDownloadForResource:(id)arg1 clientBundleID:(id)arg2 highPriority:(_Bool)arg3 proposedTaskIdentifier:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)_dispatchFailedDownloadTaskForResource:(id)arg1 highPriority:(_Bool)arg2 proposedTaskIdentifier:(id)arg3 withError:(id)arg4 withCompletionHandler:(id /* block */)arg5;
- (void)_invokeOutstandingInvocationsWithTaskIdentifier:(id)arg1;
- (void)boostPriorityForScopeWithIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)disableMainScopeWithCompletionHandler:(id /* block */)arg1;
- (void)enableMainScopeWithCompletionHandler:(id /* block */)arg1;
- (void)deactivateWithCompletionHandler:(id /* block */)arg1;
- (void)closeWithCompletionHandler:(id /* block */)arg1;
- (void)openWithCompletionHandler:(id /* block */)arg1;
- (void)dispatchBlockWhenLibraryIsOpen:(id /* block */)arg1;
- (void)_dispatchBlockWhenOpen:(id /* block */)arg1;
- (void)_reallyOpenWithCompletionHandler:(id /* block */)arg1;
- (void)_setCallBlockOnDaemonDying:(id /* block */)arg1;
- (void)_callBlockOnDaemonDying;
- (id)proxyWithErrorHandler:(id /* block */)arg1;
- (void)dealloc;
- (id)initWithAbstractObject:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

