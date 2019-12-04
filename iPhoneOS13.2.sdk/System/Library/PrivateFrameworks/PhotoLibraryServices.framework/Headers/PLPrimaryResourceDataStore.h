//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotoLibraryServices/PLResourceDataStore.h>

#import <PhotoLibraryServices/PLResourceDataStore-Protocol.h>

@class NSDictionary, NSMutableDictionary, NSString, PAImageConversionServiceClient, PAVideoConversionServiceClient, PLCloudPhotoLibraryManager, PLPhotoLibraryPathManager, PLPrimaryResourceDataStoreKeyHelper;

@interface PLPrimaryResourceDataStore : PLResourceDataStore <PLResourceDataStore>
{
    NSMutableDictionary *_inflightCPLDownloadTaskIdentifiersByRequestID;
    NSMutableDictionary *_pendingCPLDownloadShouldRunByRequestID;
    struct os_unfair_lock_s _lock;
    PAImageConversionServiceClient *_imageConversionServiceClient;
    PAVideoConversionServiceClient *_videoConversionServiceClient;
    unsigned int _masterThumbRecipeID;
    PLPrimaryResourceDataStoreKeyHelper *_mainScopeKeyHelper;
    NSDictionary *_keyHelperByBundleScope;
}

+ (unsigned int)currentDeviceMasterThumbRecipeID;
+ (unsigned short)keyLengthWithDataPreview:(unsigned char)arg1;
+ (id)supportedRecipes;
+ (unsigned int)storeClassID;
@property(retain, nonatomic) NSDictionary *keyHelperByBundleScope; // @synthesize keyHelperByBundleScope=_keyHelperByBundleScope;
@property(retain, nonatomic) PLPrimaryResourceDataStoreKeyHelper *mainScopeKeyHelper; // @synthesize mainScopeKeyHelper=_mainScopeKeyHelper;
@property(nonatomic) unsigned int masterThumbRecipeID; // @synthesize masterThumbRecipeID=_masterThumbRecipeID;
- (void)transitional_reconsiderLocalAvailabilityBasedOnExistingLocationOfCPLResource:(id)arg1 givenFilePath:(id)arg2;
- (void)requestStreamingURLForResource:(id)arg1 asset:(id)arg2 intent:(unsigned long long)arg3 inContext:(id)arg4 completion:(id /* block */)arg5;
- (_Bool)canStreamResource:(id)arg1;
- (_Bool)videoResource:(id)arg1 matchesOrExceedsQualityLevel:(unsigned int)arg2;
- (void)requestRemoteAvailabilityChange:(short)arg1 forResource:(id)arg2 asset:(id)arg3 inContext:(id)arg4 options:(id)arg5 completion:(id /* block */)arg6;
- (void)cancelLocalAvailabilityChangeRequest:(unsigned long long)arg1;
- (unsigned long long)requestLocalAvailabilityChange:(short)arg1 forResource:(id)arg2 asset:(id)arg3 inContext:(id)arg4 options:(id)arg5 completion:(id /* block */)arg6;
- (_Bool)storeExternalResource:(id)arg1 forAsset:(id)arg2 inContext:(id)arg3 options:(id)arg4 error:(id *)arg5 resultingResource:(id *)arg6;
- (_Bool)canStoreExternalResource:(id)arg1;
- (id)virtualResourcesForAsset:(id)arg1;
- (id)updateDerivativeResourcesForAsset:(id)arg1 forLifecycleEvent:(unsigned int)arg2;
- (id)resourceURLForKey:(id)arg1 assetID:(id)arg2;
- (id)resourceDataForKey:(id)arg1 assetID:(id)arg2;
- (id)keyFromKeyStruct:(const void *)arg1;
- (id)descriptionForSubtype:(long long)arg1;
- (id)name;
@property(readonly, getter=_cplManager) PLCloudPhotoLibraryManager *cplManager;
- (void)dealloc;
- (id)initWithPathManager:(id)arg1;
- (id)_masterThumbnailVirtualResourceForAsset:(id)arg1;
- (id)_expectedFilePathForMasterThumbnailForAsset:(id)arg1;
- (unsigned long long)_makeResourceLocallyAvailable:(id)arg1 asset:(id)arg2 inContext:(id)arg3 options:(id)arg4 completion:(id /* block */)arg5;
- (id)_videoConversionServiceClient;
- (id)_imageConversionServiceClient;
- (unsigned long long)_pruneResource:(id)arg1 asset:(id)arg2 inContext:(id)arg3 completion:(id /* block */)arg4;
- (void)_downloadCPLResource:(id)arg1 forAsset:(id)arg2 options:(id)arg3 taskDidBeginHandler:(id /* block */)arg4 completionHandler:(id /* block */)arg5;
- (_Bool)_isSystemLibraryStore;
- (id)keyHelperForBundleScope:(unsigned char)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly, nonatomic) PLPhotoLibraryPathManager *pathManager;
@property(readonly) Class superclass;

@end

