//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotoLibraryServices/PLAlbumContainer-Protocol.h>
#import <PhotoLibraryServices/PLDerivedAlbumListOrigin-Protocol.h>
#import <PhotoLibraryServices/PLIndexMapperDataSource-Protocol.h>
#import <PhotoLibraryServices/PLIndexMappingCache-Protocol.h>

@class NSIndexSet, NSMutableIndexSet, NSMutableOrderedSet, NSPredicate, NSString, PLIndexMapper, PLManagedAlbumList, PLPhotoLibrary;
@protocol NSObject><NSCopying, PLIndexMappingCache;

@interface PLFilteredAlbumList : NSObject <PLAlbumContainer, PLIndexMapperDataSource, PLIndexMappingCache, PLDerivedAlbumListOrigin>
{
    PLIndexMapper *_indexMapper;
    NSMutableIndexSet *_filteredIndexes;
    NSMutableOrderedSet *_weak_albums;
    NSObject<PLIndexMappingCache> *_derivedAlbumLists[5];
    int filter;
    PLManagedAlbumList *backingAlbumList;
    NSPredicate *predicate;
}

+ (id)filteredAlbumList:(id)arg1 filter:(int)arg2;
@property(retain, nonatomic) NSPredicate *predicate; // @synthesize predicate;
@property(nonatomic) int filter; // @synthesize filter;
@property(retain, nonatomic) PLManagedAlbumList *backingAlbumList; // @synthesize backingAlbumList;
- (void)enumerateDerivedAlbumLists:(id /* block */)arg1;
- (void)unregisterAllDerivedAlbums;
- (void)registerDerivedAlbumList:(struct NSObject *)arg1;
- (void)replaceFilteredAlbumsAtIndexes:(id)arg1 withFilteredValues:(id)arg2;
- (void)replaceObjectInFilteredAlbumsAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (void)removeFilteredAlbumsAtIndexes:(id)arg1;
- (void)insertFilteredAlbums:(id)arg1 atIndexes:(id)arg2;
- (void)removeObjectFromFilteredAlbumsAtIndex:(unsigned long long)arg1;
- (void)insertObject:(id)arg1 inFilteredAlbumsAtIndex:(unsigned long long)arg2;
- (id)filteredAlbumsAtIndexes:(id)arg1;
- (id)objectInFilteredAlbumsAtIndex:(unsigned long long)arg1;
- (unsigned long long)indexInFilteredAlbumsOfObject:(id)arg1;
- (unsigned long long)countOfFilteredAlbums;
@property(retain, nonatomic) NSMutableOrderedSet *_albums;
- (Class)derivedChangeNotificationClass;
- (_Bool)mappedDataSourceChanged:(id)arg1 remoteNotificationData:(id)arg2;
- (_Bool)shouldIncludeObjectAtIndex:(unsigned long long)arg1;
@property(readonly, copy, nonatomic) id <NSCopying> cachedIndexMapState;
@property(readonly, copy, nonatomic) NSIndexSet *filteredIndexes;
@property(readonly, nonatomic) PLIndexMapper *indexMapper;
@property(readonly, nonatomic) unsigned long long unreadAlbumsCount;
- (void)_invalidateFilteredIndexes;
@property(readonly, retain, nonatomic) NSString *_prettyDescription;
@property(readonly, retain, nonatomic) NSString *_typeDescription;
- (id)managedObjectContext;
- (id)identifier;
- (void)_backingContextDidChange:(id)arg1;
- (id)containersRelationshipName;
- (_Bool)canEditContainers;
- (_Bool)isEmpty;
@property(readonly, nonatomic) unsigned long long containersCount;
- (id)containers;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) PLPhotoLibrary *photoLibrary;
- (_Bool)hasAtLeastOneAlbum;
@property(readonly, nonatomic) unsigned long long albumsCount;
@property(readonly, nonatomic) NSMutableOrderedSet *albums;
- (void)preheatAlbumsAtIndexes:(id)arg1 forProperties:(id)arg2 relationships:(id)arg3;
- (void)preheatAlbumsForProperties:(id)arg1 relationships:(id)arg2;
- (void)updateAlbumsOrderIfNeeded;
- (_Bool)needsReordering;
- (void)setNeedsReordering;
@property(readonly, copy, nonatomic) id /* block */ albumsSortingComparator;
- (_Bool)albumHasFixedOrder:(struct NSObject *)arg1;
@property(readonly, nonatomic) _Bool isFolder;
@property(readonly, nonatomic) _Bool canEditAlbums;
@property(readonly, nonatomic) short albumListType;
- (void)dealloc;
- (id)initWithBackingAlbumList:(id)arg1 filter:(int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

