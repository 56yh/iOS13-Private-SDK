//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXDisplayCollection-Protocol.h>

@class NSString;

@interface PXBaseDisplayCollection : NSObject <PXDisplayCollection>
{
}

@property(readonly, nonatomic) _Bool px_isTransientPlacesCollection;
@property(readonly, nonatomic) _Bool px_canRearrangeContent;
@property(readonly, nonatomic) _Bool px_isImportSessionCollection;
@property(readonly, nonatomic) _Bool px_isImportHistoryCollection;
@property(readonly, nonatomic) _Bool px_isSharedActivityVirtualCollection;
@property(readonly, nonatomic) _Bool px_isPeopleVirtualCollection;
@property(readonly, nonatomic) _Bool px_isMemoriesVirtualCollection;
@property(readonly, nonatomic) _Bool px_isMomentsVirtualCollection;
@property(readonly, nonatomic) _Bool px_isPhotosVirtualCollection;
@property(readonly, nonatomic) _Bool px_isProject;
@property(readonly, nonatomic) _Bool px_isMacSyncedFacesFolder;
@property(readonly, nonatomic) _Bool px_isMacSyncedEventsFolder;
@property(readonly, nonatomic) _Bool px_isMacSyncedAlbum;
@property(readonly, nonatomic) _Bool px_isProjectsFolder;
@property(readonly, nonatomic) _Bool px_isMediaTypesFolder;
@property(readonly, nonatomic) _Bool px_isSharedAlbumsFolder;
@property(readonly, nonatomic) _Bool px_isTopLevelFolder;
@property(readonly, nonatomic) _Bool px_isFavoriteMemoriesSmartFolder;
@property(readonly, nonatomic) _Bool px_isRegularFolder;
@property(readonly, nonatomic) _Bool px_isSmartFolder;
@property(readonly, nonatomic) _Bool px_isFolder;
@property(readonly, nonatomic) _Bool px_isCloudMultipleContributorsEnabled;
@property(readonly, nonatomic) _Bool px_isOwnedSharedAlbum;
@property(readonly, nonatomic) _Bool px_isSharedAlbum;
@property(readonly, nonatomic) _Bool px_isScreenRecordingsSmartAlbum;
@property(readonly, nonatomic) _Bool px_isRecentlyEditedSmartAlbum;
@property(readonly, nonatomic) _Bool px_isRecentsSmartAlbum;
@property(readonly, nonatomic) _Bool px_isPlacesSmartAlbum;
@property(readonly, nonatomic) _Bool px_isRecentlyDeletedSmartAlbum;
@property(readonly, nonatomic) _Bool px_isRecentlyAddedSmartAlbum;
@property(readonly, nonatomic) _Bool px_isHiddenSmartAlbum;
@property(readonly, nonatomic) _Bool px_isFavoritesSmartAlbum;
@property(readonly, nonatomic) _Bool px_isAllPhotosSmartAlbum;
@property(readonly, nonatomic) _Bool px_isMediaTypeSmartAlbum;
@property(readonly, nonatomic) _Bool px_isRootSmartAlbum;
@property(readonly, nonatomic) _Bool px_isSmartAlbum;
@property(readonly, nonatomic) _Bool px_isUserSmartAlbum;
@property(readonly, nonatomic) _Bool px_isMyPhotoStreamAlbum;
@property(readonly, nonatomic) _Bool px_isImportedAlbum;
@property(readonly, nonatomic) _Bool px_isRegularAlbum;
@property(readonly, nonatomic) _Bool px_isStandInAlbum;
@property(readonly, nonatomic) _Bool px_isUserCreated;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

