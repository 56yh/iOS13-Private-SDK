//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/FCHeadlineClustering-Protocol.h>

@class FCHeadlineClusteringRules, FCSolHeuristic, NSDictionary, NSMutableArray, NSMutableSet, NSSet, NSString;

@interface FCHeadlineClusteringSol : NSObject <FCHeadlineClustering>
{
    FCHeadlineClusteringRules *_rules;
    NSSet *_articleIds;
    NSDictionary *_articlesByTag;
    NSDictionary *_tagsByArticle;
    NSDictionary *_tagScores;
    NSDictionary *_headlinesById;
    NSSet *_hardOrphans;
    FCSolHeuristic *_heuristic;
    FCSolHeuristic *_autoFavoriteHeuristic;
    NSMutableArray *_articleGroups;
    NSMutableSet *_groupableTags;
}

@property(retain, nonatomic) NSMutableSet *groupableTags; // @synthesize groupableTags=_groupableTags;
@property(retain, nonatomic) NSMutableArray *articleGroups; // @synthesize articleGroups=_articleGroups;
@property(retain, nonatomic) FCSolHeuristic *autoFavoriteHeuristic; // @synthesize autoFavoriteHeuristic=_autoFavoriteHeuristic;
@property(retain, nonatomic) FCSolHeuristic *heuristic; // @synthesize heuristic=_heuristic;
@property(retain, nonatomic) NSSet *hardOrphans; // @synthesize hardOrphans=_hardOrphans;
@property(retain, nonatomic) NSDictionary *headlinesById; // @synthesize headlinesById=_headlinesById;
@property(retain, nonatomic) NSDictionary *tagScores; // @synthesize tagScores=_tagScores;
@property(retain, nonatomic) NSDictionary *tagsByArticle; // @synthesize tagsByArticle=_tagsByArticle;
@property(retain, nonatomic) NSDictionary *articlesByTag; // @synthesize articlesByTag=_articlesByTag;
@property(retain, nonatomic) NSSet *articleIds; // @synthesize articleIds=_articleIds;
@property(retain, nonatomic) FCHeadlineClusteringRules *rules; // @synthesize rules=_rules;
- (id)clusterHeadlinesByTopic:(id)arg1 subscribedTags:(id)arg2 personalizer:(id)arg3 rules:(id)arg4 translationProvider:(id)arg5 unpaidHeadlineIDs:(id)arg6;
- (id)computeBestGrouping:(id)arg1 tagScores:(id)arg2 headlinesById:(id)arg3;
- (void)computeGrouping:(id)arg1 topK:(double)arg2;
- (id)sortedScoredArticles:(id)arg1 length:(long long)arg2 asc:(_Bool)arg3;
- (double)specificityScoreForTag:(id)arg1;
- (double)computeGroupingUtility:(id)arg1;
- (void)filterOverflowedOrphans:(id)arg1;
- (void)optimizeForLayout:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

