//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CSSearchableIndex, _CDEventIndexerContext, _CDSpotlightEventIndexerDataSource;

@interface _CDSpotlightEventIndexer : NSObject
{
    _CDEventIndexerContext *_context;
    CSSearchableIndex *_index;
    _CDSpotlightEventIndexerDataSource *_dataSource;
}

+ (id)keyPathsForValuesAffectingIndexing;
@property(readonly, nonatomic) _CDSpotlightEventIndexerDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(readonly, nonatomic) CSSearchableIndex *index; // @synthesize index=_index;
@property(retain, nonatomic) _CDEventIndexerContext *context; // @synthesize context=_context;
- (void)resetIndex;
- (void)indexAdditionsAsBatch;
- (void)indexDeletionsAsBatch;
- (void)_beginIndexingFromLatestSpotlightClientState;
- (void)finishIndexing;
- (void)beginIndexingWithBatchSize:(unsigned long long)arg1 completion:(id /* block */)arg2;
@property(readonly, nonatomic, getter=isIndexing) _Bool indexing;
- (id)initWithDataSource:(id)arg1;

@end

