//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GameCenterUI/GKDashboardCollectionViewController.h>

@class GKChallengeDataSource, GKCollectionMultiDataSource, GKDashboardHeaderView, GKGameRecord, NSArray, NSMutableDictionary, NSString;

@interface GKDashboardViewController : GKDashboardCollectionViewController
{
    _Bool _shouldShowPlayForChallenge;
    _Bool _shouldShowPlayForTurnBasedMatch;
    _Bool _shouldShowQuitForTurnBasedMatch;
    long long _viewState;
    NSString *_leaderboardIdentifier;
    GKGameRecord *_gameRecord;
    GKDashboardHeaderView *_headerView;
    GKCollectionMultiDataSource *_multiDataSource;
    NSMutableDictionary *_viewStateIndexes;
    NSArray *_titles;
    GKChallengeDataSource *_challengeDataSource;
}

@property(nonatomic) GKChallengeDataSource *challengeDataSource; // @synthesize challengeDataSource=_challengeDataSource;
@property(retain, nonatomic) NSArray *titles; // @synthesize titles=_titles;
@property(retain, nonatomic) NSMutableDictionary *viewStateIndexes; // @synthesize viewStateIndexes=_viewStateIndexes;
@property(retain, nonatomic) GKCollectionMultiDataSource *multiDataSource; // @synthesize multiDataSource=_multiDataSource;
@property(retain, nonatomic) GKDashboardHeaderView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) GKGameRecord *gameRecord; // @synthesize gameRecord=_gameRecord;
@property(nonatomic) _Bool shouldShowQuitForTurnBasedMatch; // @synthesize shouldShowQuitForTurnBasedMatch=_shouldShowQuitForTurnBasedMatch;
@property(nonatomic) _Bool shouldShowPlayForTurnBasedMatch; // @synthesize shouldShowPlayForTurnBasedMatch=_shouldShowPlayForTurnBasedMatch;
@property(nonatomic) _Bool shouldShowPlayForChallenge; // @synthesize shouldShowPlayForChallenge=_shouldShowPlayForChallenge;
@property(retain, nonatomic) NSString *leaderboardIdentifier; // @synthesize leaderboardIdentifier=_leaderboardIdentifier;
@property(nonatomic) long long viewState; // @synthesize viewState=_viewState;
- (void)selectedSegmentChanged:(id)arg1;
- (void)showLeaderboardVC;
@property(nonatomic) long long leaderboardTimeScope;
- (void)_gkRefreshContentsForDataType:(unsigned int)arg1 userInfo:(id)arg2;
- (_Bool)_gkShouldRefreshContentsForDataType:(unsigned int)arg1 userInfo:(id)arg2;
- (void)setupNoContentView:(id)arg1 withError:(id)arg2;
- (void)loadData;
- (void)selectDataSourceAtIndex:(long long)arg1 updateCollectionView:(_Bool)arg2;
- (void)addDataSource:(id)arg1 withTitle:(id)arg2 forViewState:(long long)arg3;
- (void)setupSegmentedControl;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithGameRecord:(id)arg1;

@end

