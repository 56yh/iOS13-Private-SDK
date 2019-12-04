//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableString, NSSet, NSString, PRSRankingConfiguration;

@interface SSRankingManager : NSObject
{
    _Bool _isInternalDevice;
    _Bool _isCancelled;
    PRSRankingConfiguration *_rankingConfiguration;
    NSMutableString *_logValues;
    double _blendingTime;
    NSString *_query;
    NSSet *_allowedTopHitSections;
}

+ (void)initialize;
+ (void)fetchDuetValues;
@property _Bool isCancelled; // @synthesize isCancelled=_isCancelled;
@property _Bool isInternalDevice; // @synthesize isInternalDevice=_isInternalDevice;
@property(retain) NSSet *allowedTopHitSections; // @synthesize allowedTopHitSections=_allowedTopHitSections;
@property(retain) NSString *query; // @synthesize query=_query;
@property(nonatomic) double blendingTime; // @synthesize blendingTime=_blendingTime;
@property(retain) NSMutableString *logValues; // @synthesize logValues=_logValues;
@property(retain, nonatomic) PRSRankingConfiguration *rankingConfiguration; // @synthesize rankingConfiguration=_rankingConfiguration;
- (void)updateWithNewRankingInfo:(id)arg1;
- (id)keyForSection:(id)arg1;
- (void)finalizeLog;
- (void)addCEPValuesForTTR;
- (id)rankAppsAtTopForScopedSearchWithSections:(id)arg1;
- (id)groupSectionsByCategory:(id)arg1 genreMap:(id)arg2 topSections:(id)arg3;
- (void)updateServerScoresUsingBlockOrder:(id)arg1 bundleFeatures:(id)arg2;
- (id)applyTopSectionPolicy:(id)arg1 withTopHitSection:(id)arg2 isPeopleSearch:(_Bool)arg3 triggerEvent:(unsigned long long)arg4 correction:(id)arg5;
- (void)refineSectionShowingVisibleResultsWithBetterTextMatches:(id)arg1;
- (id)rankSectionsUsingBundleIDToSectionMapping:(id)arg1 withRanker:(id)arg2 isPeopleSearch:(_Bool)arg3 isScopedAppSearch:(_Bool)arg4 queryId:(unsigned long long)arg5 isCJK:(_Bool)arg6;
- (long long)compareDate:(id)arg1 withDate:(id)arg2;
- (id)initWithQuery:(id)arg1;
- (id)removeBlackListedSectionsForMapping:(id)arg1;
- (id)makeTopHitSectionUsingSections:(id)arg1 withItemRanker:(id)arg2 sectionHeader:(id)arg3 shortcutResult:(id)arg4;
- (void)applyTopHitRankingPolicyToSection:(id)arg1 topResultSection:(id)arg2 maxTopHitCount:(long long)arg3 isShortcut:(_Bool)arg4;
- (id)relativeRankWithAbsRank:(id)arg1 numberValues:(unsigned long long)arg2;
- (id)removeBlackListedSectionsForMapping:(id)arg1 withRankingConfiguration:(id)arg2;
- (double)roundedValueForScore:(double)arg1;
- (void)cancel;

@end

