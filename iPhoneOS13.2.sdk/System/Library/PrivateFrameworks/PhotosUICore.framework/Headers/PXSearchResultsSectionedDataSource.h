//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXSearchResultsValueDelegate-Protocol.h>
#import <PhotosUICore/PXSearchTopAssetsResultChangeDelegate-Protocol.h>

@class NSArray, NSCalendar, NSDateComponents, NSDateIntervalFormatter, NSDictionary, NSString, PHFetchResult, PLPhotoLibrary, PLSearchIndexDateFormatter, PLSearchProcessor, PSIDatabase, PSIQuery;
@protocol OS_dispatch_queue, PXSearchResultsSectionedDataSourceChangeObserver;

@interface PXSearchResultsSectionedDataSource : NSObject <PXSearchResultsValueDelegate, PXSearchTopAssetsResultChangeDelegate>
{
    _Bool _resultsReady;
    _Bool _ignorePastResults;
    // Error parsing type: AB, name: _didMerge
    _Bool _wordEmbeddingsRequested;
    id <PXSearchResultsSectionedDataSourceChangeObserver> _changeObserver;
    id /* block */ _topAssetFilter;
    NSArray *_results;
    NSArray *_uncommittedResults;
    unsigned long long _sectionFetchIndex;
    unsigned long long _maxGroupedResultsCount;
    unsigned long long _queryTag;
    unsigned long long _uncommittedMaxGroupedResultsCount;
    unsigned long long _unprocessedSearchResultsCount;
    PLPhotoLibrary *_photoLibrary;
    PLSearchIndexDateFormatter *_dateFormatter;
    NSDateIntervalFormatter *_dateIntervalFormatter;
    PLSearchProcessor *_searchProcessor;
    PSIDatabase *_searchIndex;
    PSIQuery *_query;
    NSObject<OS_dispatch_queue> *_queue;
    PHFetchResult *_homePersons;
    NSArray *_suggestions;
    NSArray *_uncommittedSuggestions;
    NSDictionary *_sceneAncestryInformation;
    NSCalendar *_calendar;
    NSDateComponents *_dateRangeFormattingComponents;
}

+ (id)postQuerySearchResultsLog;
+ (id)topAssetsSectionForSearchResultsValue:(id)arg1;
@property(nonatomic) _Bool wordEmbeddingsRequested; // @synthesize wordEmbeddingsRequested=_wordEmbeddingsRequested;
@property(retain, nonatomic) NSDateComponents *dateRangeFormattingComponents; // @synthesize dateRangeFormattingComponents=_dateRangeFormattingComponents;
@property(retain, nonatomic) NSCalendar *calendar; // @synthesize calendar=_calendar;
@property(retain) NSDictionary *sceneAncestryInformation; // @synthesize sceneAncestryInformation=_sceneAncestryInformation;
@property(retain, nonatomic) NSArray *uncommittedSuggestions; // @synthesize uncommittedSuggestions=_uncommittedSuggestions;
@property(retain, nonatomic) NSArray *suggestions; // @synthesize suggestions=_suggestions;
@property(retain, nonatomic) PHFetchResult *homePersons; // @synthesize homePersons=_homePersons;
// Error parsing type for property didMerge:
// Property attributes: TAB,N,V_didMerge

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) PSIQuery *query; // @synthesize query=_query;
@property(retain, nonatomic) PSIDatabase *searchIndex; // @synthesize searchIndex=_searchIndex;
@property(retain, nonatomic) PLSearchProcessor *searchProcessor; // @synthesize searchProcessor=_searchProcessor;
@property(retain, nonatomic) NSDateIntervalFormatter *dateIntervalFormatter; // @synthesize dateIntervalFormatter=_dateIntervalFormatter;
@property(retain, nonatomic) PLSearchIndexDateFormatter *dateFormatter; // @synthesize dateFormatter=_dateFormatter;
@property(retain, nonatomic) PLPhotoLibrary *photoLibrary; // @synthesize photoLibrary=_photoLibrary;
@property(nonatomic) unsigned long long unprocessedSearchResultsCount; // @synthesize unprocessedSearchResultsCount=_unprocessedSearchResultsCount;
@property(nonatomic) unsigned long long uncommittedMaxGroupedResultsCount; // @synthesize uncommittedMaxGroupedResultsCount=_uncommittedMaxGroupedResultsCount;
@property(nonatomic) unsigned long long queryTag; // @synthesize queryTag=_queryTag;
@property(nonatomic) unsigned long long maxGroupedResultsCount; // @synthesize maxGroupedResultsCount=_maxGroupedResultsCount;
@property(nonatomic) unsigned long long sectionFetchIndex; // @synthesize sectionFetchIndex=_sectionFetchIndex;
@property(retain, nonatomic) NSArray *uncommittedResults; // @synthesize uncommittedResults=_uncommittedResults;
@property(retain, nonatomic) NSArray *results; // @synthesize results=_results;
@property(nonatomic) _Bool ignorePastResults; // @synthesize ignorePastResults=_ignorePastResults;
@property(copy, nonatomic) id /* block */ topAssetFilter; // @synthesize topAssetFilter=_topAssetFilter;
@property(nonatomic) _Bool resultsReady; // @synthesize resultsReady=_resultsReady;
@property(nonatomic) __weak id <PXSearchResultsSectionedDataSourceChangeObserver> changeObserver; // @synthesize changeObserver=_changeObserver;
- (void)_updateResultsWithMergeTargetPerson:(id)arg1 sourcePerson:(id)arg2 tombstonedCandidatesLocalIdentifiers:(id)arg3;
- (void)_suggestionsDidFinish:(id)arg1;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) NSDictionary *debugDictionary;
- (id)tapToRadarAttachments;
- (id)_wordEmbeddingSubstitutionsWantsSubstitutedString:(_Bool)arg1;
- (id)selectedWordEmbeddingTextAtIndex:(unsigned long long)arg1;
- (id)wordEmbeddingSubstitutions;
- (void)didChangeThumbnailAssetsForSearchResult:(id)arg1 atIndexes:(id)arg2;
- (void)didChangeThumbnailAssetsForSearchResult:(id)arg1;
- (id)stringWithStartDate:(id)arg1 endDate:(id)arg2;
- (_Bool)searchIsFinished:(id)arg1;
- (void)cancel;
- (void)_inqCancel;
- (void)mergePendingChanges;
- (_Bool)hasPendingChanges;
- (void)_asyncFetchAssetsWithQueryTag:(unsigned long long)arg1;
- (id)_fetchObjectsWithEntityName:(id)arg1 uuids:(id)arg2;
- (void)_inqBackgroundProcessAssetResults:(id)arg1 collectionResults:(id)arg2 topAssetsResult:(id)arg3 topCollectionResults:(id)arg4 withTag:(unsigned long long)arg5 searchString:(id)arg6 representedObjects:(id)arg7 maxSuggestionCount:(unsigned long long)arg8 priorityAssetUUID:(id)arg9;
- (_Bool)_shouldCancel:(unsigned long long)arg1;
- (void)setSearchString:(id)arg1 representedObjects:(id)arg2 maxSuggestionCount:(unsigned long long)arg3 priorityAssetUUID:(id)arg4;
- (id)titleForHeaderInSection:(long long)arg1;
- (_Bool)isTopAssetsSection:(long long)arg1;
- (id)allSearchResultsForSection:(long long)arg1;
- (id)searchResultAtIndexPath:(id)arg1;
- (long long)numberOfSearchResultsInSection:(long long)arg1;
- (long long)numberOfVisibleSearchResultsInSection:(long long)arg1;
- (void)collapseSection:(long long)arg1;
- (void)expandSection:(long long)arg1;
- (_Bool)isSectionExpanded:(long long)arg1;
- (_Bool)isSectionExpandable:(long long)arg1;
- (long long)numberOfSections;
- (id)initForUnitTests;
- (id)initWithSearchIndex:(id)arg1 photoLibrary:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

