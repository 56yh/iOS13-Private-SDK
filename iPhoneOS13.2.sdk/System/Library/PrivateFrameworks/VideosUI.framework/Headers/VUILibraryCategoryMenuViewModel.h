//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <VideosUI/VUIDownloadDataSourceDelegate-Protocol.h>
#import <VideosUI/VUIMediaEntitiesFetchControllerDelegate-Protocol.h>

@class NSArray, NSDictionary, NSSet, NSString, VUICloudClient, VUIDownloadDataSource, VUIMediaEntitiesFetchController, VUIMediaLibrary, VUIMenuDataSource;
@protocol VUILibraryCategoryMenuViewModelDelegate;

__attribute__((visibility("hidden")))
@interface VUILibraryCategoryMenuViewModel : NSObject <VUIMediaEntitiesFetchControllerDelegate, VUIDownloadDataSourceDelegate>
{
    _Bool _hasMediaEntitiesFetchCompleted;
    _Bool _hasStartedFetch;
    _Bool _hasDownloadDataSourceFetchCompleted;
    id <VUILibraryCategoryMenuViewModelDelegate> _delegate;
    NSDictionary *_mediaEntitiesByCategoryType;
    NSDictionary *_mediaEntitiesByGenreIdentifier;
    NSDictionary *_artworkInfoDictionaryByPurchaseID;
    VUIMenuDataSource *_categories;
    VUIMediaLibrary *_mediaLibrary;
    NSArray *_homeShares;
    NSDictionary *_categoryTypeByFetchRequestIdentifier;
    VUIMediaEntitiesFetchController *_mediaEntitiesFetchController;
    NSArray *_categoryTypes;
    NSArray *_genreGroupings;
    NSSet *_validCategories;
    VUICloudClient *_cloudClient;
    VUIMediaEntitiesFetchController *_rentalsUpdateFetchController;
    VUIDownloadDataSource *_downloadDataSource;
}

@property(nonatomic) _Bool hasDownloadDataSourceFetchCompleted; // @synthesize hasDownloadDataSourceFetchCompleted=_hasDownloadDataSourceFetchCompleted;
@property(retain, nonatomic) VUIDownloadDataSource *downloadDataSource; // @synthesize downloadDataSource=_downloadDataSource;
@property(retain, nonatomic) VUIMediaEntitiesFetchController *rentalsUpdateFetchController; // @synthesize rentalsUpdateFetchController=_rentalsUpdateFetchController;
@property(retain, nonatomic) VUICloudClient *cloudClient; // @synthesize cloudClient=_cloudClient;
@property(retain, nonatomic) NSSet *validCategories; // @synthesize validCategories=_validCategories;
@property(retain, nonatomic) NSArray *genreGroupings; // @synthesize genreGroupings=_genreGroupings;
@property(nonatomic) _Bool hasStartedFetch; // @synthesize hasStartedFetch=_hasStartedFetch;
@property(nonatomic) _Bool hasMediaEntitiesFetchCompleted; // @synthesize hasMediaEntitiesFetchCompleted=_hasMediaEntitiesFetchCompleted;
@property(retain, nonatomic) NSArray *categoryTypes; // @synthesize categoryTypes=_categoryTypes;
@property(retain, nonatomic) VUIMediaEntitiesFetchController *mediaEntitiesFetchController; // @synthesize mediaEntitiesFetchController=_mediaEntitiesFetchController;
@property(retain, nonatomic) NSDictionary *categoryTypeByFetchRequestIdentifier; // @synthesize categoryTypeByFetchRequestIdentifier=_categoryTypeByFetchRequestIdentifier;
@property(retain, nonatomic) NSArray *homeShares; // @synthesize homeShares=_homeShares;
@property(retain, nonatomic) VUIMediaLibrary *mediaLibrary; // @synthesize mediaLibrary=_mediaLibrary;
@property(retain, nonatomic) VUIMenuDataSource *categories; // @synthesize categories=_categories;
@property(retain, nonatomic) NSDictionary *artworkInfoDictionaryByPurchaseID; // @synthesize artworkInfoDictionaryByPurchaseID=_artworkInfoDictionaryByPurchaseID;
@property(retain, nonatomic) NSDictionary *mediaEntitiesByGenreIdentifier; // @synthesize mediaEntitiesByGenreIdentifier=_mediaEntitiesByGenreIdentifier;
@property(retain, nonatomic) NSDictionary *mediaEntitiesByCategoryType; // @synthesize mediaEntitiesByCategoryType=_mediaEntitiesByCategoryType;
@property(nonatomic) __weak id <VUILibraryCategoryMenuViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)_addOrRemoveDownloadCategoryIfNeeded;
- (void)_populateViewModel:(id)arg1;
- (void)_loadImageUrls:(id)arg1;
- (id)_constructCategoryList;
- (id /* block */)_categoryTypesSortComparator;
- (id)_categoryTypesWithMediaEntitiesMap:(id)arg1 categoryTypeComparator:(id /* block */)arg2;
- (id)_fetchRequestsWithMediaLibrary:(id)arg1 categoryTypeMap:(id *)arg2;
- (void)_updateRentalShelf;
- (void)_loadMediaEntityShelves;
- (void)downloadManager:(id)arg1 downloadsDidChange:(id)arg2;
- (void)downloadManager:(id)arg1 downloadedFetchDidFinishWithEntities:(id)arg2;
- (void)_removeNotificationObserversWithDeviceLibrary:(id)arg1;
- (void)_homeShareMediaLibrariesDidChange:(id)arg1;
- (void)_removeMediaLibraryNotificationObservers;
- (void)_addNotificationObserversWithDeviceLibrary:(id)arg1;
- (void)_addMediaLibraryNotificationObservers;
- (id)_deviceMediaLibrary;
- (void)controller:(id)arg1 fetchRequests:(id)arg2 didFailWithError:(id)arg3;
- (void)controller:(id)arg1 fetchRequests:(id)arg2 didCompleteWithResult:(id)arg3;
- (void)updateRentalShelf;
- (void)startFetch;
@property(readonly, nonatomic) _Bool hasContent;
- (void)dealloc;
- (id)init;
- (id)initWithMediaLibrary:(id)arg1 validCategories:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

