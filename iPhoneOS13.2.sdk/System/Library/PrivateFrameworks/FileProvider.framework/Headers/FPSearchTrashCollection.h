//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FileProvider/FPUnionCollection.h>

#import <FileProvider/FPSearchQueryResultsProviding-Protocol.h>

@class FPSearchCollection, FPTrashUnionCollection, NSFileProviderSearchQuery, NSPredicate;

@interface FPSearchTrashCollection : FPUnionCollection <FPSearchQueryResultsProviding>
{
    FPSearchCollection *_searchCollection;
    FPTrashUnionCollection *_trashCollection;
    NSPredicate *_searchQueryPredicate;
    unsigned long long _selectedMembership;
}

- (_Bool)isCollectionValidForItem:(id)arg1;
- (id)scopedSearchQuery;
@property(copy, nonatomic) NSFileProviderSearchQuery *searchQuery;
- (id)init;

@end

