//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosGraph/PGSharingSuggestionSource.h>

@class _TtC17KnowledgeGraphKit21MALearningStreamUtils;

@interface PGSharingSuggestionSourceMomentLearning : PGSharingSuggestionSource
{
    _TtC17KnowledgeGraphKit21MALearningStreamUtils *_learningStreamUtils;
}

- (id)suggestedResultsForInput:(id)arg1 withOptions:(id)arg2;
- (double)weight;
- (id)details;
- (id)name;
- (id)initWithLearningStreamUtils:(id)arg1;

@end

