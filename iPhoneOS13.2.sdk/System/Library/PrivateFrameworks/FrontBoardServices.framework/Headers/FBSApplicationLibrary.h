//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FrontBoardServices/FBSApplicationInfoProvider-Protocol.h>
#import <FrontBoardServices/LSApplicationWorkspaceObserverProtocol-Protocol.h>

@class FBSApplicationLibraryConfiguration, LSApplicationWorkspace, NSMapTable, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString;
@protocol OS_dispatch_queue;

@interface FBSApplicationLibrary : NSObject <LSApplicationWorkspaceObserverProtocol, FBSApplicationInfoProvider>
{
    FBSApplicationLibraryConfiguration *_configuration;
    LSApplicationWorkspace *_applicationWorkspace;
    NSObject<OS_dispatch_queue> *_observerQueue;
    NSMapTable *_observerQueue_tokensToBlocks;
    NSObject<OS_dispatch_queue> *_workQueue;
    _Bool _workQueue_usingNetwork;
    NSMutableDictionary *_workQueue_installedApplicationsByBundleID;
    NSMutableDictionary *_workQueue_placeholdersByBundleID;
    NSMutableSet *_workQueue_injectedAppIdentifiers;
    unsigned long long _workQueue_synchronizationActionCount;
    NSMutableArray *_workQueue_pendingSynchronizationExecutionBlocks;
    NSObject<OS_dispatch_queue> *_callOutQueue;
    NSObject<OS_dispatch_queue> *_completionQueue;
    _Bool _initializing;
}

- (id)applicationInfoForBundleIdentifier:(id)arg1;
- (void)applicationsDidFailToUninstall:(id)arg1;
- (void)applicationsWillUninstall:(id)arg1;
- (void)applicationsDidFailToInstall:(id)arg1;
- (void)applicationsWillInstall:(id)arg1;
- (void)applicationInstallsDidPrioritize:(id)arg1;
- (void)applicationInstallsDidCancel:(id)arg1;
- (void)applicationInstallsDidResume:(id)arg1;
- (void)applicationInstallsDidPause:(id)arg1;
- (void)applicationInstallsArePrioritized:(id)arg1 arePaused:(id)arg2;
- (void)deviceManagementPolicyDidChange:(id)arg1;
- (void)networkUsageChanged:(_Bool)arg1;
- (void)applicationStateDidChange:(id)arg1;
- (void)_handleApplicationStateDidChange:(id)arg1 notifyForUpdateInsteadOfReplacement:(_Bool)arg2;
- (void)applicationsDidUninstall:(id)arg1;
- (void)applicationsDidInstall:(id)arg1;
- (void)applicationInstallsDidUpdateIcon:(id)arg1;
- (void)applicationInstallsDidChange:(id)arg1;
- (void)applicationInstallsDidStart:(id)arg1;
- (void)_workQueue_addApplicationProxy:(id)arg1 withOverrideURL:(id)arg2;
- (void)_workQueue_removeInstalledApplicationFromModelForBundleID:(id)arg1 withReason:(id)arg2;
- (void)_workQueue_removePlaceholderFromModelForBundleID:(id)arg1 withReason:(id)arg2;
- (_Bool)_workQueue_applicationHasBeenModified:(id)arg1 applicationProxy:(id)arg2;
- (void)_workQueue_notePlaceholdersModifiedSignificantly:(id)arg1;
- (id)_workQueue_placeholderForProxy:(id)arg1 filterExisting:(_Bool)arg2 updateExistingIfNecessary:(_Bool)arg3 createIfNecessary:(_Bool)arg4 createReason:(id)arg5;
- (id)_workQueue_applicationInfoForProxy:(id)arg1 filterExisting:(_Bool)arg2 createIfNecessary:(_Bool)arg3 createReason:(id)arg4;
- (id)_workQueue_applicationsForProxies:(id)arg1 createIfNecessary:(_Bool)arg2 createReason:(id)arg3 createdApplications:(id *)arg4 existingApplications:(id *)arg5 filterExistingApplications:(id *)arg6 unmappedProxies:(id *)arg7;
- (id)_workQueue_placeholdersForProxies:(id)arg1 updateExistingIfNecessary:(_Bool)arg2 createIfNecessary:(_Bool)arg3 createReason:(id)arg4 createdPlaceholders:(id *)arg5 existingPlaceholders:(id *)arg6 filterExistingPlaceholders:(id *)arg7 unmappedProxies:(id *)arg8;
- (void)_load;
- (void)_workQueue_decrementSynchronizationActionCount;
- (void)_workQueue_incrementSynchronizationActionCount;
- (void)_workQueue_executeInstallSynchronizationBlocksIfAppropriate;
- (void)_notifyDidChangeNetworkUsage:(_Bool)arg1;
- (void)_notifyDidDemoteApplications:(id)arg1;
- (void)_notifyDidRemoveApplications:(id)arg1;
- (void)_notifyDidUpdateApplications:(id)arg1;
- (void)_notifyDidReplaceApplications:(id)arg1;
- (void)_notifyDidAddApplications:(id)arg1;
- (void)_notifyDidCancelPlaceholders:(id)arg1;
- (void)_notifyDidAddPlaceholders:(id)arg1;
- (void)_notifyForType:(long long)arg1 synchronously:(_Bool)arg2 withCastingBlock:(id /* block */)arg3;
- (id)_observeType:(long long)arg1 withBlock:(id)arg2;
- (id)_workQueue_currentProcessProxyWithOutURL:(id *)arg1;
- (void)_addCurrentProcess;
- (void)_executeOrPendInstallSynchronizationBlock:(id /* block */)arg1;
- (void)synchronize:(id /* block */)arg1;
- (void)_reloadPlaceholdersNotificationFired;
- (void)removeApplicationProxy:(id)arg1;
- (void)addApplicationProxy:(id)arg1 withOverrideURL:(id)arg2;
- (id)observeDidChangeNetworkUsageWithBlock:(id /* block */)arg1;
- (id)observeDidDemoteApplicationsWithBlock:(id /* block */)arg1;
- (id)observeDidRemoveApplicationsWithBlock:(id /* block */)arg1;
- (id)observeDidUpdateApplicationsWithBlock:(id /* block */)arg1;
- (id)observeDidReplaceApplicationsWithBlock:(id /* block */)arg1;
- (id)observeDidAddApplicationsWithBlock:(id /* block */)arg1;
- (id)observeDidCancelPlaceholdersWithBlock:(id /* block */)arg1;
- (id)observeDidAddPlaceholdersWithBlock:(id /* block */)arg1;
- (void)removeObserverForToken:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)uninstallApplication:(id)arg1 withOptions:(id)arg2 completion:(id /* block */)arg3;
- (void)uninstallApplication:(id)arg1 completion:(id /* block */)arg2;
- (id)placeholderWithBundleIdentifier:(id)arg1;
- (id)allPlaceholders;
- (void)installedApplicationWithBundleIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)installedApplicationWithBundleIdentifier:(id)arg1;
- (id)allInstalledApplications;
@property(readonly, nonatomic, getter=isUsingNetwork) _Bool usingNetwork;
- (void)dealloc;
- (id)_initWithApplicationWorkspace:(id)arg1 configuration:(id)arg2;
- (id)initWithConfiguration:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

