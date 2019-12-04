//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/PXAssetsDataSourceManager.h>

#import <PhotosUICore/PXMutableAssetsDataSourceManager-Protocol.h>
#import <PhotosUICore/PXPhotosDataSourceChangeObserver-Protocol.h>

@class NSNumber, NSString, PXPhotoKitAssetsDataSource, PXPhotosDataSource;
@protocol PXPhotosDataSourceProvider;

@interface PXPhotoKitAssetsDataSourceManager : PXAssetsDataSourceManager <PXPhotosDataSourceChangeObserver, PXMutableAssetsDataSourceManager>
{
    PXPhotosDataSource *_photosDataSource;
    NSNumber *_backgroundFetchOriginSection;
    id <PXPhotosDataSourceProvider> _photosDataSourceProvider;
}

+ (id)dataSourceManagerForAssetCollection:(id)arg1;
+ (id)dataSourceManagerWithAsset:(id)arg1;
@property(retain, nonatomic) id <PXPhotosDataSourceProvider> photosDataSourceProvider; // @synthesize photosDataSourceProvider=_photosDataSourceProvider;
- (void)photosDataSourceDidFinishBackgroundFetching:(id)arg1;
- (id)photosDataSourceInterestingAssetReferences:(id)arg1;
- (void)photosDataSource:(id)arg1 didChange:(id)arg2;
- (void)startBackgroundFetchIfNeeded;
@property(nonatomic) long long backgroundFetchOriginSection;
- (void)resumeChangeDeliveryAndBackgroundLoading:(id)arg1;
- (id)pauseChangeDeliveryWithTimeout:(double)arg1;
- (_Bool)forceAccurateSection:(long long)arg1 andSectionsBeforeAndAfter:(long long)arg2;
- (_Bool)forceAccurateSectionsIfNeeded:(id)arg1;
- (void)setCurationEnabled:(_Bool)arg1 forAssetCollection:(id)arg2;
@property(retain, nonatomic) PXPhotosDataSource *photosDataSource;
- (void)setPhotosDataSource:(id)arg1 publishIntermediateEmptySnapshot:(_Bool)arg2;
- (void)updateWithPhotosDataSource:(id)arg1 andDataSourceChange:(id)arg2;
- (id)_createAssetsDataSourceWithPhotosDataSource:(id)arg1 withChange:(id)arg2;
- (id)createInitialDataSource;
- (void)_ensurePhotosDataSource;
- (void)dealloc;
- (id)init;
- (id)initWithPhotosDataSourceProvider:(id)arg1;
- (id)initWithPhotosDataSource:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) PXPhotoKitAssetsDataSource *dataSource; // @dynamic dataSource;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

