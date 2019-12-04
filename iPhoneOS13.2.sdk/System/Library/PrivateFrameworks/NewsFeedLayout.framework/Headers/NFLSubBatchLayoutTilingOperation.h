//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NewsCore/FCOperation.h>

@class NFLFeedSettings, NFLRankedLayoutSource, NFLSubBatchLayout, NSArray;

@interface NFLSubBatchLayoutTilingOperation : FCOperation
{
    _Bool _showingAccessoryText;
    id /* block */ _tilingCompletionBlock;
    NFLFeedSettings *_feedSettings;
    NSArray *_tileInfos;
    NFLRankedLayoutSource *_rankedLayoutSource;
    double _tileProminenceScoreBalanceValue;
    NFLSubBatchLayout *_result;
    CDStruct_bfc4548b _layoutSeed;
}

+ (unsigned long long)tileInfosUsedCount;
+ (_Bool)validTileInfoType:(id)arg1;
+ (_Bool)tileInfosHaveValidType:(id)arg1;
+ (_Bool)mayTileInfosTileSubBatchLayout:(id)arg1 withLayoutSeed:(CDStruct_bfc4548b)arg2;
@property(nonatomic) CDStruct_bfc4548b layoutSeed; // @synthesize layoutSeed=_layoutSeed;
@property(copy, nonatomic) NFLSubBatchLayout *result; // @synthesize result=_result;
@property double tileProminenceScoreBalanceValue; // @synthesize tileProminenceScoreBalanceValue=_tileProminenceScoreBalanceValue;
@property(retain) NFLRankedLayoutSource *rankedLayoutSource; // @synthesize rankedLayoutSource=_rankedLayoutSource;
@property(copy) NSArray *tileInfos; // @synthesize tileInfos=_tileInfos;
@property(copy) NFLFeedSettings *feedSettings; // @synthesize feedSettings=_feedSettings;
@property(nonatomic, getter=isShowingAccessoryText) _Bool showingAccessoryText; // @synthesize showingAccessoryText=_showingAccessoryText;
@property(copy) id /* block */ tilingCompletionBlock; // @synthesize tilingCompletionBlock=_tilingCompletionBlock;
- (_Bool)isReliable;
- (id)tiledSubBatchLayoutWithRankedLayoutsByTileInfo:(id)arg1;
- (id)rankedLayoutRequests;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (id)initWithTileInfos:(id)arg1 feedSettings:(id)arg2 rankedLayoutSource:(id)arg3 tileProminenceScoreBalanceValue:(double)arg4 layoutSeed:(CDStruct_bfc4548b)arg5 showingAccessoryText:(_Bool)arg6;
- (id)init;

@end

