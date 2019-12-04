//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXPeopleSectionedDataSourceChangeObserver-Protocol.h>
#import <PhotosUICore/PXPhotoLibraryUIChangeObserver-Protocol.h>

@class NSMutableDictionary, NSString, PHPhotoLibrary, PXPeopleProgressManager, PXPeopleSectionedDataSource;
@protocol OS_dispatch_queue;

@interface PXPeopleAlbumProvider : NSObject <PXPeopleSectionedDataSourceChangeObserver, PXPhotoLibraryUIChangeObserver>
{
    _Bool _didInitiateReCacheRequest;
    _Bool _didInitiatePeopleCountFetchRequest;
    _Bool _didPrepareDataSource;
    NSObject<OS_dispatch_queue> *_isolationQueue;
    NSObject<OS_dispatch_queue> *_cacheIsolationQueue;
    NSObject<OS_dispatch_queue> *_backgroundQueue;
    PHPhotoLibrary *_photoLibrary;
    // Error parsing type: Ai, name: _currentRequestId
    PXPeopleSectionedDataSource *_peopleDataSource;
    PXPeopleProgressManager *_progressMgr;
    id /* block */ _requestCompletion;
    long long _cachedPeopleCount;
    NSMutableDictionary *_imageCache;
    struct CGSize _imageSize;
}

+ (id)sharedInstance;
@property(retain) NSMutableDictionary *imageCache; // @synthesize imageCache=_imageCache;
// Error parsing type for property currentRequestId:
// Property attributes: TAi,V_currentRequestId

@property(nonatomic) long long cachedPeopleCount; // @synthesize cachedPeopleCount=_cachedPeopleCount;
@property(copy, nonatomic) id /* block */ requestCompletion; // @synthesize requestCompletion=_requestCompletion;
@property(retain, nonatomic) PXPeopleProgressManager *progressMgr; // @synthesize progressMgr=_progressMgr;
@property(nonatomic) struct CGSize imageSize; // @synthesize imageSize=_imageSize;
@property(readonly, nonatomic) PXPeopleSectionedDataSource *peopleDataSource; // @synthesize peopleDataSource=_peopleDataSource;
- (void)_appWillEnterForeground;
- (void)_invalidateCache;
- (void)imageCacheDidChanged:(id)arg1;
- (void)peopleSectionedDataSource:(id)arg1 didApplyIncrementalChanges:(id)arg2;
- (void)peopleSectionedDataSourceMembersChangedNonIncrementally:(id)arg1;
- (_Bool)_shouldShowInterstitialProgress;
- (void)_handleRequestResult:(id)arg1 forRequestID:person:atIndex:error:completion: /* Error: Ran out of types for this method. */;
- (void)_asyncAddImagesToCacheWithPersons:(id)arg1 completion:(id /* block */)arg2;
- (void)_reCacheImagesCompletion:(id /* block */)arg1;
- (id)_visiblePersons;
@property(readonly, nonatomic) long long peopleCount;
- (void)_updateCachedCountIfNeeded;
@property(readonly, nonatomic) _Bool isCountAvailable;
- (id)peopleViewController;
- (void)requestAlbumImagesWithSize:(struct CGSize)arg1 completion:(id /* block */)arg2;
- (void)dealloc;
- (void)_prepareIfNeeded;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

