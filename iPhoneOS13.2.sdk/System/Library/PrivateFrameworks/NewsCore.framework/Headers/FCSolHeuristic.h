//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface FCSolHeuristic : NSObject
{
    _Bool _alternate;
    _Bool _enforcePublisherCap;
    NSArray *_groupSizes;
    long long _iterations;
    long long _maxPublisherOccurrences;
    long long _maxUnpaidArticles;
    long long _heuristicSampleSize;
    id /* block */ _utilityBlock;
}

@property(readonly, copy, nonatomic) id /* block */ utilityBlock; // @synthesize utilityBlock=_utilityBlock;
@property(readonly, nonatomic) long long heuristicSampleSize; // @synthesize heuristicSampleSize=_heuristicSampleSize;
@property(readonly, nonatomic) long long maxUnpaidArticles; // @synthesize maxUnpaidArticles=_maxUnpaidArticles;
@property(readonly, nonatomic) _Bool enforcePublisherCap; // @synthesize enforcePublisherCap=_enforcePublisherCap;
@property(readonly, nonatomic) long long maxPublisherOccurrences; // @synthesize maxPublisherOccurrences=_maxPublisherOccurrences;
@property(readonly, nonatomic) long long iterations; // @synthesize iterations=_iterations;
@property(readonly, nonatomic) _Bool alternate; // @synthesize alternate=_alternate;
@property(retain, nonatomic) NSArray *groupSizes; // @synthesize groupSizes=_groupSizes;
- (double)computeScoreWithSelectedGroup:(id)arg1 remainingArticles:(id)arg2 remainingTags:(id)arg3 articlesByTag:(id)arg4;
- (id)fillGroupsWithSelectedGroup:(id)arg1 remainingArticles:(id)arg2 remainingTags:(id)arg3 articlesByTag:(id)arg4;
- (id)initWithOption:(long long)arg1 minClusterSize:(long long)arg2 maxClusterSize:(long long)arg3 minIdealClusterSize:(long long)arg4 maxIdealClusterSize:(long long)arg5 maxPublisherOccurrences:(long long)arg6 enforcePublisherCap:(_Bool)arg7 maxUnpaidArticles:(long long)arg8 heuristicSampleSize:(long long)arg9 utilityBlock:(id /* block */)arg10;

@end

