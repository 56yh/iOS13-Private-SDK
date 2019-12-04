//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface SearchUITableModel : NSObject
{
    unsigned long long _queryId;
    NSArray *_tableRowModel;
    NSArray *_sections;
}

+ (id)rowModelsForResult:(id)arg1;
+ (id)resultsForMultiResultRowInSection:(id)arg1 startingAtIndex:(unsigned long long)arg2;
+ (id)gridLayoutsForCardSections:(id)arg1;
+ (id)asyncRowManagersForCardSections:(id)arg1;
+ (id)rowModelsForCardSections:(id)arg1 result:(id)arg2 isInline:(_Bool)arg3 queryId:(unsigned long long)arg4;
+ (id)rowModelForCardSection:(id)arg1 result:(id)arg2;
+ (id)combinedRowModelsForRowModels:(id)arg1 result:(id)arg2;
+ (id)tableModelWithResults:(id)arg1;
+ (id)tableModelWithResult:(id)arg1;
+ (id)tableModelWithCardSections:(id)arg1 isInline:(_Bool)arg2 queryId:(unsigned long long)arg3;
+ (_Bool)resultHasHorizontallyScrollingCardSections:(id)arg1;
+ (id)tableModelWithSections:(id)arg1 expandedSections:(id)arg2 queryId:(unsigned long long)arg3;
@property(retain, nonatomic) NSArray *sections; // @synthesize sections=_sections;
@property(retain, nonatomic) NSArray *tableRowModel; // @synthesize tableRowModel=_tableRowModel;
@property(readonly) unsigned long long queryId; // @synthesize queryId=_queryId;
- (id)description;
- (id)indexPathForRowModel:(id)arg1;
- (_Bool)shouldLeaveSpaceForChevronForIndexPath:(id)arg1;
- (_Bool)shouldDisplayChevronForIndexPath:(id)arg1;
- (id)cardSectionForIndexPath:(id)arg1;
- (unsigned long long)indexOfSection:(id)arg1;
- (id)sectionForIndex:(unsigned long long)arg1;
- (id)resultForIndexPath:(id)arg1;
- (id)rowModelForIndexPath:(id)arg1;
- (_Bool)indexPathExists:(id)arg1;
- (long long)numberOfRowsForSection:(long long)arg1;
- (id)removeRowModel:(id)arg1;
- (void)replaceResult:(id)arg1 withResult:(id)arg2 completion:(id /* block */)arg3;
- (unsigned long long)numberOfSections;
- (id)updatedTableModelWithExpandedSections:(id)arg1;
- (id)initWithQueryId:(unsigned long long)arg1;

@end

