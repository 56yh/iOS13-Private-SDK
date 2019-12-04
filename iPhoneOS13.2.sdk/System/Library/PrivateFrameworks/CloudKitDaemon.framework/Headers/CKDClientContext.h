//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudKitDaemon/CKDAccountAccessInfoProvider-Protocol.h>
#import <CloudKitDaemon/CKDContainerScopedUserIDProvider-Protocol.h>
#import <CloudKitDaemon/CKDContextInfoProvider-Protocol.h>

@class CKAccountOverrideInfo, CKContainerID, CKDAccount, CKDAppContainerIntersectionMetadata, CKDAppContainerTuple, CKDApplicationMetadata, CKDCachePurger, CKDFlowControlManager, CKDKeyValueDiskCache, CKDMMCS, CKDPCSCache, CKDPCSManager, CKDPublicIdentityLookupService, CKDServerConfiguration, CKDZoneGatekeeper, NSHashTable, NSMutableDictionary, NSString, NSURL;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface CKDClientContext : NSObject <CKDContextInfoProvider, CKDAccountAccessInfoProvider, CKDContainerScopedUserIDProvider>
{
    _Bool _isForClouddInternalUse;
    _Bool _hasDataContainer;
    _Bool _captureResponseHTTPHeaders;
    _Bool _useZoneWidePCS;
    _Bool _returnPCSMetadata;
    _Bool _bypassPCSEncryption;
    _Bool _forceEnableReadOnlyManatee;
    _Bool _isSiloedContext;
    _Bool _sandboxed;
    _Bool _finishedAppProxySetup;
    _Bool _finishedProxySetup;
    _Bool _wasInitializedWithProxy;
    unsigned int _clientSDKVersion;
    CKDServerConfiguration *_config;
    NSURL *_publicCloudDBURL;
    NSURL *_publicShareServiceURL;
    NSURL *_publicDeviceServiceURL;
    NSURL *_publicCodeServiceURL;
    NSURL *_publicMetricsServiceURL;
    NSURL *_publicDatabaseRPCServiceURL;
    NSString *_containerScopedUserID;
    NSString *_orgAdminUserID;
    NSHashTable *_proxies;
    long long _cachedEnvironment;
    CKContainerID *_containerID;
    NSString *_applicationBundleID;
    NSString *_sourceApplicationBundleID;
    NSString *_personaID;
    NSString *_applicationVersion;
    NSURL *_applicationIcon;
    NSString *_applicationDisplayName;
    NSString *_applicationContainerPath;
    NSString *_applicationContainerCloudKitDirectory;
    NSString *_applicationCachesDirectory;
    NSString *_applicationTemporaryDirectory;
    NSString *_applicationMMCSDirectory;
    NSString *_applicationAssetDbDirectory;
    NSString *_applicationFileStagingDirectory;
    NSString *_applicationFileDownloadDirectory;
    NSString *_applicationRecordCacheDirectory;
    NSString *_applicationFrameworkCachesDirectory;
    NSString *_applicationPackageStagingDirectory;
    CKDAppContainerTuple *_appContainerTuple;
    NSString *_hardwareID;
    long long _contextType;
    CKDAccount *_account;
    CKAccountOverrideInfo *_accountInfoOverride;
    CKDMMCS *_MMCS;
    CKDPCSCache *_pcsCache;
    CKDZoneGatekeeper *_foregroundZoneGatekeeper;
    CKDZoneGatekeeper *_backgroundZoneGatekeeper;
    NSMutableDictionary *_fakeErrorsByClassName;
    NSMutableDictionary *_fakeResponseOperationLifetimeByClassName;
    NSMutableDictionary *_fakeResponseOperationResultByClassNameByItemID;
    NSObject<OS_dispatch_queue> *_setupQueue;
    NSString *_contextID;
    CKDCachePurger *_cachePurger;
    NSString *_containerEncryptionServiceName;
    NSString *_entitlementSpecifiedPCSServiceName;
    CKDKeyValueDiskCache *_publicIdentitiesDiskCache;
    CKDPublicIdentityLookupService *_foregroundPublicIdentityLookupService;
    CKDPublicIdentityLookupService *_backgroundPublicIdentityLookupService;
    CKDAppContainerIntersectionMetadata *_appContainerIntersectionMetadata;
    CKDApplicationMetadata *_applicationMetadata;
    CKDFlowControlManager *_flowControlManager;
    CKDPCSManager *_pcsManager;
    unsigned long long _mmcsEncryptionSupport;
    NSObject<OS_dispatch_group> *_proxyPreparationGroup;
}

+ (id)contextWithAppContainerTuple:(id)arg1 accountInfoOverride:(id)arg2 proxy:(id)arg3;
+ (id)applicationCachesPathForBundleID:(id)arg1 usingHomeCachesDirectory:(_Bool)arg2;
+ (id)applicationCachesPathForBundleID:(id)arg1;
+ (id)sharedContextForInternalUseWithAppContainerTuple:(id)arg1 unitTestingAccountInfoProvider:(id)arg2;
+ (id)sharedContextForInternalUseWithAppContainerAccountTuple:(id)arg1;
+ (id)sharedContextWithAppContainerTuple:(id)arg1 accountInfoOverride:(id)arg2 proxy:(id)arg3;
+ (id)_sharedContextWithAppContainerTuple:(id)arg1 accountInfoOverride:(id)arg2 proxy:(id)arg3 forInternalUse:(_Bool)arg4 addToSharedContexts:(_Bool)arg5;
+ (id)_sharedContextWithAppContainerTuple:(id)arg1 accountInfoOverride:(id)arg2 proxy:(id)arg3 forInternalUse:(_Bool)arg4;
+ (id)sharedContexts;
+ (id)applicationContainerPathForBundleID:(id)arg1 bundleURL:(id *)arg2 contextType:(long long *)arg3;
@property(retain, nonatomic) NSObject<OS_dispatch_group> *proxyPreparationGroup; // @synthesize proxyPreparationGroup=_proxyPreparationGroup;
@property(readonly, nonatomic) unsigned long long mmcsEncryptionSupport; // @synthesize mmcsEncryptionSupport=_mmcsEncryptionSupport;
@property(retain, nonatomic) CKDPCSManager *pcsManager; // @synthesize pcsManager=_pcsManager;
@property(retain, nonatomic) CKDFlowControlManager *flowControlManager; // @synthesize flowControlManager=_flowControlManager;
@property(retain, nonatomic) CKDApplicationMetadata *applicationMetadata; // @synthesize applicationMetadata=_applicationMetadata;
@property(retain, nonatomic) CKDAppContainerIntersectionMetadata *appContainerIntersectionMetadata; // @synthesize appContainerIntersectionMetadata=_appContainerIntersectionMetadata;
@property(retain, nonatomic) CKDPublicIdentityLookupService *backgroundPublicIdentityLookupService; // @synthesize backgroundPublicIdentityLookupService=_backgroundPublicIdentityLookupService;
@property(retain, nonatomic) CKDPublicIdentityLookupService *foregroundPublicIdentityLookupService; // @synthesize foregroundPublicIdentityLookupService=_foregroundPublicIdentityLookupService;
@property(retain, nonatomic) CKDKeyValueDiskCache *publicIdentitiesDiskCache; // @synthesize publicIdentitiesDiskCache=_publicIdentitiesDiskCache;
@property(retain, nonatomic) NSString *entitlementSpecifiedPCSServiceName; // @synthesize entitlementSpecifiedPCSServiceName=_entitlementSpecifiedPCSServiceName;
@property(retain, nonatomic) NSString *containerEncryptionServiceName; // @synthesize containerEncryptionServiceName=_containerEncryptionServiceName;
@property(nonatomic) _Bool wasInitializedWithProxy; // @synthesize wasInitializedWithProxy=_wasInitializedWithProxy;
@property(retain, nonatomic) CKDCachePurger *cachePurger; // @synthesize cachePurger=_cachePurger;
@property(readonly, nonatomic) NSString *contextID; // @synthesize contextID=_contextID;
@property(nonatomic) _Bool finishedProxySetup; // @synthesize finishedProxySetup=_finishedProxySetup;
@property(nonatomic) _Bool finishedAppProxySetup; // @synthesize finishedAppProxySetup=_finishedAppProxySetup;
@property(nonatomic, getter=isSandboxed) _Bool sandboxed; // @synthesize sandboxed=_sandboxed;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *setupQueue; // @synthesize setupQueue=_setupQueue;
@property(retain, nonatomic) NSMutableDictionary *fakeResponseOperationResultByClassNameByItemID; // @synthesize fakeResponseOperationResultByClassNameByItemID=_fakeResponseOperationResultByClassNameByItemID;
@property(retain, nonatomic) NSMutableDictionary *fakeResponseOperationLifetimeByClassName; // @synthesize fakeResponseOperationLifetimeByClassName=_fakeResponseOperationLifetimeByClassName;
@property(retain, nonatomic) NSMutableDictionary *fakeErrorsByClassName; // @synthesize fakeErrorsByClassName=_fakeErrorsByClassName;
@property(retain, nonatomic) CKDZoneGatekeeper *backgroundZoneGatekeeper; // @synthesize backgroundZoneGatekeeper=_backgroundZoneGatekeeper;
@property(retain, nonatomic) CKDZoneGatekeeper *foregroundZoneGatekeeper; // @synthesize foregroundZoneGatekeeper=_foregroundZoneGatekeeper;
@property(readonly, nonatomic) CKDPCSCache *pcsCache; // @synthesize pcsCache=_pcsCache;
@property(retain) CKDMMCS *MMCS; // @synthesize MMCS=_MMCS;
@property(readonly, nonatomic) _Bool isSiloedContext; // @synthesize isSiloedContext=_isSiloedContext;
@property(nonatomic) unsigned int clientSDKVersion; // @synthesize clientSDKVersion=_clientSDKVersion;
@property(readonly, nonatomic) _Bool forceEnableReadOnlyManatee; // @synthesize forceEnableReadOnlyManatee=_forceEnableReadOnlyManatee;
@property(readonly, nonatomic) _Bool bypassPCSEncryption; // @synthesize bypassPCSEncryption=_bypassPCSEncryption;
@property(nonatomic) _Bool returnPCSMetadata; // @synthesize returnPCSMetadata=_returnPCSMetadata;
@property(readonly, nonatomic) _Bool useZoneWidePCS; // @synthesize useZoneWidePCS=_useZoneWidePCS;
@property(nonatomic) _Bool captureResponseHTTPHeaders; // @synthesize captureResponseHTTPHeaders=_captureResponseHTTPHeaders;
@property(nonatomic) _Bool hasDataContainer; // @synthesize hasDataContainer=_hasDataContainer;
@property(readonly, nonatomic) CKAccountOverrideInfo *accountInfoOverride; // @synthesize accountInfoOverride=_accountInfoOverride;
@property(retain) CKDAccount *account; // @synthesize account=_account;
@property(nonatomic) long long contextType; // @synthesize contextType=_contextType;
@property(readonly, nonatomic) NSString *hardwareID; // @synthesize hardwareID=_hardwareID;
@property(readonly, nonatomic) CKDAppContainerTuple *appContainerTuple; // @synthesize appContainerTuple=_appContainerTuple;
@property(retain, nonatomic) NSString *applicationPackageStagingDirectory; // @synthesize applicationPackageStagingDirectory=_applicationPackageStagingDirectory;
@property(retain, nonatomic) NSString *applicationFrameworkCachesDirectory; // @synthesize applicationFrameworkCachesDirectory=_applicationFrameworkCachesDirectory;
@property(retain, nonatomic) NSString *applicationRecordCacheDirectory; // @synthesize applicationRecordCacheDirectory=_applicationRecordCacheDirectory;
@property(retain, nonatomic) NSString *applicationFileDownloadDirectory; // @synthesize applicationFileDownloadDirectory=_applicationFileDownloadDirectory;
@property(retain, nonatomic) NSString *applicationFileStagingDirectory; // @synthesize applicationFileStagingDirectory=_applicationFileStagingDirectory;
@property(retain, nonatomic) NSString *applicationAssetDbDirectory; // @synthesize applicationAssetDbDirectory=_applicationAssetDbDirectory;
@property(retain, nonatomic) NSString *applicationMMCSDirectory; // @synthesize applicationMMCSDirectory=_applicationMMCSDirectory;
@property(readonly, nonatomic) NSString *applicationTemporaryDirectory; // @synthesize applicationTemporaryDirectory=_applicationTemporaryDirectory;
@property(retain, nonatomic) NSString *applicationCachesDirectory; // @synthesize applicationCachesDirectory=_applicationCachesDirectory;
@property(retain, nonatomic) NSString *applicationContainerCloudKitDirectory; // @synthesize applicationContainerCloudKitDirectory=_applicationContainerCloudKitDirectory;
@property(retain, nonatomic) NSString *applicationContainerPath; // @synthesize applicationContainerPath=_applicationContainerPath;
@property(readonly, nonatomic) NSString *applicationDisplayName; // @synthesize applicationDisplayName=_applicationDisplayName;
@property(readonly, nonatomic) NSURL *applicationIcon; // @synthesize applicationIcon=_applicationIcon;
@property(retain, nonatomic) NSString *applicationVersion; // @synthesize applicationVersion=_applicationVersion;
@property(readonly, nonatomic) NSString *personaID; // @synthesize personaID=_personaID;
@property(readonly, nonatomic) NSString *sourceApplicationBundleID; // @synthesize sourceApplicationBundleID=_sourceApplicationBundleID;
@property(retain, nonatomic) NSString *applicationBundleID; // @synthesize applicationBundleID=_applicationBundleID;
@property(readonly, nonatomic) CKContainerID *containerID; // @synthesize containerID=_containerID;
@property long long cachedEnvironment; // @synthesize cachedEnvironment=_cachedEnvironment;
@property(retain, nonatomic) NSHashTable *proxies; // @synthesize proxies=_proxies;
@property(nonatomic) _Bool isForClouddInternalUse; // @synthesize isForClouddInternalUse=_isForClouddInternalUse;
@property(copy) NSString *orgAdminUserID; // @synthesize orgAdminUserID=_orgAdminUserID;
@property(copy) NSString *containerScopedUserID; // @synthesize containerScopedUserID=_containerScopedUserID;
@property(copy) NSURL *publicDatabaseRPCServiceURL; // @synthesize publicDatabaseRPCServiceURL=_publicDatabaseRPCServiceURL;
@property(copy) NSURL *publicMetricsServiceURL; // @synthesize publicMetricsServiceURL=_publicMetricsServiceURL;
@property(copy) NSURL *publicCodeServiceURL; // @synthesize publicCodeServiceURL=_publicCodeServiceURL;
@property(copy) NSURL *publicDeviceServiceURL; // @synthesize publicDeviceServiceURL=_publicDeviceServiceURL;
@property(copy) NSURL *publicShareServiceURL; // @synthesize publicShareServiceURL=_publicShareServiceURL;
@property(copy) NSURL *publicCloudDBURL; // @synthesize publicCloudDBURL=_publicCloudDBURL;
@property(retain, nonatomic) CKDServerConfiguration *config; // @synthesize config=_config;
- (unsigned long long)aggregatedOutstandingOperationCount;
- (void)clearAuthTokensForRecordWithID:(id)arg1 databaseScope:(long long)arg2;
- (void)clearPILSCacheForLookupInfos:(id)arg1;
- (void)clearContextFromMetadataCache;
- (void)clearRecordCacheWithDatabaseScope:(long long)arg1;
- (void)clearRecordCache;
- (void)showAssetCacheWithDatabaseScope:(long long)arg1;
- (void)clearAssetCacheWithDatabaseScope:(long long)arg1;
- (void)showAssetCache;
- (void)clearAssetCache;
- (unsigned long long)countAssetCacheItemsWithDatabaseScope:(long long)arg1;
- (unsigned long long)countAssetCacheItems;
- (void)setFakeResponseOperationResult:(id)arg1 forNextRequestOfClassName:(id)arg2 forItemID:(id)arg3 withLifetime:(int)arg4;
- (void)setFakeError:(id)arg1 forNextRequestOfClassName:(id)arg2;
@property(nonatomic) _Bool hasExplicitCodeOperationURLEntitlement;
@property(nonatomic) _Bool hasAllowUnverifiedAccountEntitlement;
@property(nonatomic) _Bool hasNonLegacyShareURLEntitlement;
@property(readonly, nonatomic) NSString *applicationBundleIDForServer;
@property(readonly, nonatomic) NSString *applicationBundleIDForPush;
@property(retain, nonatomic) NSString *clientPrefixEntitlement;
@property(retain, nonatomic) NSString *associatedApplicationBundleID;
@property(readonly, nonatomic) NSString *encryptionServiceName;
@property(nonatomic) _Bool hasDisplaysSystemAcceptPromptEntitlement;
@property(nonatomic) _Bool hasParticipantPIIEntitlement;
@property(nonatomic) _Bool hasOutOfProcessUIEntitlement;
@property(nonatomic) _Bool hasTCCAuthorization;
@property(nonatomic) _Bool hasLightweightPCSEntitlement;
@property(nonatomic) _Bool hasAllowAccessDuringBuddyEntitlement;
@property(nonatomic) _Bool canSetDeviceIdentifier;
@property(nonatomic) _Bool canAccessZoneProtectionData;
@property(nonatomic) _Bool canAccessProtectionData;
@property(nonatomic) _Bool hasAllowCustomAccountsEntitlement;
@property(nonatomic) _Bool hasAllowSetEnvironmentEntitlement;
@property(nonatomic) _Bool hasMasqueradingEntitlement;
@property(nonatomic, setter=setHasSystemServiceEntitlement:) _Bool hasSystemServiceEntitlement;
@property(retain, nonatomic, setter=setAPSEnvironmentString:) NSString *apsEnvironmentString;
@property(nonatomic) _Bool allowsPowerNapScheduling;
- (_Bool)shouldUsePCSEncryption;
@property(readonly, nonatomic) NSString *processName;
@property(readonly, nonatomic) NSString *regionCode;
@property(readonly, nonatomic) NSString *languageCode;
@property(readonly, nonatomic) NSString *deviceName;
- (void)fetchPrivateURLForServerType:(long long)arg1 operation:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)deviceIDForOperation:(id)arg1;
- (void)fetchServerEnvironmentForOperation:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)fetchImportantUserIDsForOperation:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)fetchPublicURLForServerType:(long long)arg1 operation:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_fetchContainerInfoForOperation:(id)arg1 requireUserIDs:(_Bool)arg2 completionHandler:(id /* block */)arg3;
- (void)fetchConfigurationForOperation:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (id)baseURLForServerType:(long long)arg1 partitionType:(long long)arg2;
- (id)_urlBySettingCustomBaseURL:(id)arg1 onURL:(id)arg2;
- (void)finishSetupWithClientProxy:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)startSetupWithClientProxy:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)removeClientProxy:(id)arg1;
- (void)addClientProxy:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)CKPropertiesDescription;
- (double)publicIdentitiesExpirationTimeout;
- (void)showUserNotification:(void *)arg1 withCompletionBlock:(id /* block */)arg2;
- (void)performRequest:(id)arg1;
- (void)tearDownAssetTransfers;
- (_Bool)setupAssetTransfersWithClientProxy:(id)arg1 error:(id *)arg2;
- (_Bool)setupMMCSWrapperWithError:(id *)arg1;
- (id)assetDirectoryContext;
- (id)createAppContainerTuple;
- (id)_issueSandboxExtensionForPath:(id)arg1 withAuditToken:(CDStruct_6ad76789)arg2 error:(id *)arg3;
- (_Bool)_setupDirectoriesWithClientProxy:(id)arg1 sandboxExtensions:(id *)arg2 error:(id *)arg3;
- (void)_determineHardwareInfo;
- (void)_loadApplicationContainerPathAndType;
@property(readonly, nonatomic) _Bool allowsCellularAccess;
@property(readonly, nonatomic) _Bool canAuthWithCloudKit;
- (_Bool)hasAccountAccessAndTCCAuth;
@property(readonly, nonatomic) _Bool canAccessAccount;
- (_Bool)_anyAssociatedProxyHasTCCAuthorization;
- (_Bool)_cloudKitEnabledForCurrentClient;
- (id)_dataclassNameForContainerIdentifier:(id)arg1;
- (void)_reloadAccount:(_Bool)arg1;
- (void)_cancelAllLongLivedOperations;
- (void)dealloc;
- (void)dropMMCS;
- (void)_clearCaches;
- (id)initWithAppContainerTuple:(id)arg1 accountInfoOverride:(id)arg2 proxy:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

