//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXPeopleSectionedDataSourceChangeObserver-Protocol.h>
#import <PhotosUICore/PXPhotoLibraryUIChangeObserver-Protocol.h>

@class NSMutableDictionary, PHPhotoLibrary, PXPeopleProgressManager, PXPeopleSectionedDataSource;
@protocol OS_dispatch_queue;

@interface PXPeopleAlbumProvider : NSObject <PXPeopleSectionedDataSourceChangeObserver, PXPhotoLibraryUIChangeObserver>
{
    BOOL _didInitiateReCacheRequest;
    BOOL _didInitiatePeopleCountFetchRequest;
    BOOL _didPrepareDataSource;
    NSObject<OS_dispatch_queue> *_isolationQueue;
    NSObject<OS_dispatch_queue> *_cacheIsolationQueue;
    NSObject<OS_dispatch_queue> *_backgroundQueue;
    PHPhotoLibrary *_photoLibrary;
    _Atomic int _currentRequestId;
    PXPeopleSectionedDataSource *_peopleDataSource;
    PXPeopleProgressManager *_progressMgr;
    id /* CDUnknownBlockType */ _requestCompletion;
    long long _cachedPeopleCount;
    NSMutableDictionary *_imageCache;
    CGSize _imageSize;
}

+ (id)sharedInstance;
@property(retain) NSMutableDictionary *imageCache; // @synthesize imageCache=_imageCache;
@property _Atomic int currentRequestId; // @synthesize currentRequestId=_currentRequestId;
@property(nonatomic) long long cachedPeopleCount; // @synthesize cachedPeopleCount=_cachedPeopleCount;
@property(copy, nonatomic) id /* CDUnknownBlockType */ requestCompletion; // @synthesize requestCompletion=_requestCompletion;
@property(retain, nonatomic) PXPeopleProgressManager *progressMgr; // @synthesize progressMgr=_progressMgr;
@property(nonatomic) CGSize imageSize; // @synthesize imageSize=_imageSize;
@property(readonly, nonatomic) PXPeopleSectionedDataSource *peopleDataSource; // @synthesize peopleDataSource=_peopleDataSource;
// - (void).cxx_destruct;
- (void)_appWillEnterForeground;
- (void)_invalidateCache;
- (void)imageCacheDidChanged:(id)arg1;
- (void)peopleSectionedDataSource:(id)arg1 didApplyIncrementalChanges:(id)arg2;
- (void)peopleSectionedDataSourceMembersChangedNonIncrementally:(id)arg1;
- (BOOL)_shouldShowInterstitialProgress;
- (void)_handleRequestResult:(id)arg1 forRequestID:(_Atomic int)arg2 person:(id)arg3 atIndex:(long long)arg4 error:(id)arg5 completion:(id /* CDUnknownBlockType */)arg6;
- (void)_asyncAddImagesToCacheWithPersons:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)_reCacheImagesCompletion:(id /* CDUnknownBlockType */)arg1;
- (id)_visiblePersons;
@property(readonly, nonatomic) long long peopleCount;
- (void)_updateCachedCountIfNeeded;
@property(readonly, nonatomic) BOOL isCountAvailable;
- (id)peopleViewController;
- (void)requestAlbumImagesWithSize:(CGSize)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)dealloc;
- (void)_prepareIfNeeded;
- (id)init;

@end

