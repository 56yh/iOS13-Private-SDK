//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, _PASLock, _PASNotificationTracker;
@protocol OS_dispatch_queue, OS_os_log;

@interface _PASAsset2 : NSObject
{
    NSString *_assetTypeIdentifier;
    NSString *_defaultBundlePathBackup;
    NSDictionary *_requiredMobileAssetProperties;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    NSObject<OS_os_log> *_logHandle;
    int _installNotificationToken;
    int _metadataNotificationToken;
    _PASNotificationTracker *_updateNotificationTracker;
    _PASLock *_lock;
    NSUInteger _compatibilityVersion;
}

@property(readonly, nonatomic) NSUInteger compatibilityVersion; // @synthesize compatibilityVersion=_compatibilityVersion;
// - (void).cxx_destruct;
- (void)callAssetUpdateHandlers;
- (void)clearOverrides;
- (void)addOverridePath:(id)arg1 forResourceWithRelativePath:(id)arg2;
- (void)invokeWithBundleOverride:(id)arg1 block:(id /* CDUnknownBlockType */)arg2;
@property(readonly, nonatomic) NSString *bundlePath;
- (BOOL)overrideDefaultBundleWithBundleAtPath:(id)arg1;
- (void)_issueUpdateNotificationsWithCallback:(id /* CDUnknownBlockType */)arg1;
- (void)_purgeObsoleteInstalledAssetsFromCandidates:(id)arg1 guardedData:(id)arg2;
- (BOOL)updateAssetMetadataUsingQueryResults:(id)arg1;
- (void)_updateAssetMetadata;
- (id)filesystemPathForAssetDataRelativePath:(id)arg1;
- (id)filesystemPathForAssetDataRelativePath:(id)arg1 assetVersion:(NSUInteger )arg2;
- (id)filesystemPathsForAssetDataRelativePaths:(id)arg1;
- (id)filesystemPathsForAssetDataRelativePaths:(id)arg1 assetVersion:(NSUInteger )arg2;
- (id)_defaultBundleFilesystemPathsForAssetDataRelativePaths:(id)arg1 guardedData:(id)arg2 assetVersion:(NSUInteger )arg3;
- (id)_maFilesystemPathsForAssetDataRelativePaths:(id)arg1 guardedData:(id)arg2 isMissingData:(BOOL )arg3 assetVersion:(NSUInteger )arg4;
- (BOOL)deregisterUpdateHandlerAsyncWithToken:(id)arg1;
- (BOOL)deregisterUpdateHandlerWithToken:(id)arg1;
- (id)registerUpdateHandler:(id /* CDUnknownBlockType */)arg1;
- (BOOL)_loadDefaultBundleVersionWithGuardedData:(id)arg1;
@property(readonly, nonatomic) NSUInteger bestAssetVersionObserved;
- (id)_assetDescription;
@property(readonly, nonatomic) NSString *assetType;
@property(readonly, nonatomic) NSUInteger assetVersion;
- (void)downloadMetadataWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)dealloc;
- (id)init;
- (id)_initWithAssetTypeIdentifier:(id)arg1 defaultBundlePath:(id)arg2 compatibilityVersion:(NSUInteger)arg3 matchingKeysAndValues:(id)arg4 notificationQueue:(id)arg5 logHandle:(id)arg6 enableAssetUpdates:(BOOL)arg7 purgeObsoleteInstalledAssets:(BOOL)arg8;
- (id)initWithAssetTypeDescriptorPath:(id)arg1 defaultBundlePath:(id)arg2 matchingKeysAndValues:(id)arg3 notificationQueue:(id)arg4 logHandle:(id)arg5 enableAssetUpdates:(BOOL)arg6 purgeObsoleteInstalledAssets:(BOOL)arg7;
- (id)initWithAssetTypeDescriptorPath:(id)arg1 defaultBundlePath:(id)arg2 matchingKeysAndValues:(id)arg3 notificationQueue:(id)arg4 logHandle:(id)arg5 enableAssetUpdates:(BOOL)arg6;
- (id)initWithAssetTypeDescriptorPath:(id)arg1 defaultBundlePath:(id)arg2 matchingKeysAndValues:(id)arg3 notificationQueue:(id)arg4 logHandle:(id)arg5;

@end
