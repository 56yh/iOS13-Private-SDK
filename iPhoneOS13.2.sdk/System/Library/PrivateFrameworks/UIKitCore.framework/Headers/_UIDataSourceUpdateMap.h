//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, _UIDataSourceBatchUpdateMapHelper, _UIDataSourceSnapshotter;

__attribute__((visibility("hidden")))
@interface _UIDataSourceUpdateMap : NSObject
{
    _UIDataSourceSnapshotter *_initialSnapshot;
    _UIDataSourceSnapshotter *_finalSnapshot;
    NSArray *_originalUpdateItems;
    NSArray *_updateItems;
    NSArray *_reverseUpdateItems;
    _UIDataSourceBatchUpdateMapHelper *_batchUpdateMapHelper;
}

+ (id)mapForInitialSnapshot:(id)arg1 finalSnapshot:(id)arg2 batchUpdateItems:(id)arg3;
+ (id)mapForInitialSnapshot:(id)arg1 orderedUpdateItems:(id)arg2;
@property(retain, nonatomic) _UIDataSourceBatchUpdateMapHelper *batchUpdateMapHelper; // @synthesize batchUpdateMapHelper=_batchUpdateMapHelper;
@property(retain, nonatomic) NSArray *reverseUpdateItems; // @synthesize reverseUpdateItems=_reverseUpdateItems;
@property(retain, nonatomic) NSArray *updateItems; // @synthesize updateItems=_updateItems;
@property(copy, nonatomic) NSArray *originalUpdateItems; // @synthesize originalUpdateItems=_originalUpdateItems;
@property(retain, nonatomic) _UIDataSourceSnapshotter *finalSnapshot; // @synthesize finalSnapshot=_finalSnapshot;
@property(retain, nonatomic) _UIDataSourceSnapshotter *initialSnapshot; // @synthesize initialSnapshot=_initialSnapshot;
- (id)updates;
- (void)_updateSnapshot:(id)arg1 forUpdateItem:(id)arg2;
- (long long)_transformSectionIndex:(long long)arg1 applyingUpdateItem:(id)arg2 withSnapshot:(id)arg3;
- (id)_transformIndexPath:(id)arg1 applyingUpdateItem:(id)arg2 withSnapshot:(id)arg3;
- (id)_mapUpdateForCollectionUpdateItem:(id)arg1 snapshot:(id)arg2;
- (void)_computeFinalSnapshotAndReverseUpdateItemsForCollectionViewUpdateItems:(id)arg1;
- (id)_rebasedUpdatesForUpdate:(id)arg1;
- (id)_updateMapByRevertingAllUpdatesExceptUpdateWithIdentifier:(id)arg1;
- (id)submapAfterUpdate:(id)arg1;
- (id)submapBeforeUpdate:(id)arg1;
- (id)_findUpdateForIdentifier:(id)arg1;
- (void)_performAppendingInsertsFixups;
- (_Bool)_mapIsSimpleInsertMoveSequence;
- (_Bool)_isSectionOnlyIndexPath:(id)arg1;
- (id)_sectionIndexPathForSection:(long long)arg1;
- (id)description;
- (id)initialUpdateForFinalUpdate:(id)arg1;
- (id)finalUpdateForInitialUpdate:(id)arg1;
- (id)initialIndexPathForIndexPath:(id)arg1 beforeUpdateWithIdentifier:(id)arg2;
- (id)finalIndexPathForIndexPath:(id)arg1 startingAtUpdateWithIdentifier:(id)arg2;
- (id)initialUpdateForUpdateIdentifier:(id)arg1;
- (id)updateMapByRevertingUpdateWithIdentifier:(id)arg1;
@property(readonly, nonatomic) _Bool isBatchUpdateMap;
- (id)rebasedMapFromNewBaseMap:(id)arg1;
- (long long)initialSectionIndexForFinalSectionIndex:(long long)arg1;
- (long long)finalSectionIndexForInitialSectionIndex:(long long)arg1;
- (id)initialIndexPathForFinalIndexPath:(id)arg1;
- (id)finalIndexPathForInitialIndexPath:(id)arg1;
- (id)initWithInitialSnapshot:(id)arg1 finalSnapshot:(id)arg2 updateItems:(id)arg3;

@end

