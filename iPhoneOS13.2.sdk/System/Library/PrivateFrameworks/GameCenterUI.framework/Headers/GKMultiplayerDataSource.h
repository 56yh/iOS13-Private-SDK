//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GameCenterUI/GKBasicCollectionViewDataSource.h>

@class GKMultiplayerButtonHeaderView, GKMultiplayerFooterView, GKMultiplayerHeaderView, NSMutableDictionary, NSMutableOrderedSet, NSString;

@interface GKMultiplayerDataSource : GKBasicCollectionViewDataSource
{
    _Bool _automatchAddedToMinInHeader;
    _Bool _removingEnabled;
    _Bool _autoMatching;
    long long _minPlayers;
    long long _maxPlayers;
    long long _automatchPlayerCount;
    NSString *_footerStatus;
    GKMultiplayerFooterView *_footerView;
    NSMutableOrderedSet *_players;
    GKMultiplayerButtonHeaderView *_buttonHeaderView;
    NSMutableDictionary *_playerStatus;
    GKMultiplayerHeaderView *_headerView;
    NSMutableOrderedSet *_orderedPlayerIDList;
}

@property(retain, nonatomic) NSMutableOrderedSet *orderedPlayerIDList; // @synthesize orderedPlayerIDList=_orderedPlayerIDList;
@property(retain, nonatomic) GKMultiplayerHeaderView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) NSMutableDictionary *playerStatus; // @synthesize playerStatus=_playerStatus;
@property(nonatomic) GKMultiplayerButtonHeaderView *buttonHeaderView; // @synthesize buttonHeaderView=_buttonHeaderView;
@property(nonatomic) _Bool autoMatching; // @synthesize autoMatching=_autoMatching;
@property(retain, nonatomic) NSMutableOrderedSet *players; // @synthesize players=_players;
@property(retain, nonatomic) GKMultiplayerFooterView *footerView; // @synthesize footerView=_footerView;
@property(copy, nonatomic) NSString *footerStatus; // @synthesize footerStatus=_footerStatus;
@property(nonatomic) _Bool removingEnabled; // @synthesize removingEnabled=_removingEnabled;
@property(nonatomic) _Bool automatchAddedToMinInHeader; // @synthesize automatchAddedToMinInHeader=_automatchAddedToMinInHeader;
@property(nonatomic) long long automatchPlayerCount; // @synthesize automatchPlayerCount=_automatchPlayerCount;
@property(nonatomic) long long maxPlayers; // @synthesize maxPlayers=_maxPlayers;
@property(nonatomic) long long minPlayers; // @synthesize minPlayers=_minPlayers;
- (void)restoreOrderOfPlayers;
- (void)replaceContactPlayers:(id)arg1 withNormalPlayers:(id)arg2 complete:(id /* block */)arg3;
- (id)firstInvitedContactPlayer;
- (void)setAutoMatching:(_Bool)arg1 withVisibleCells:(id)arg2;
- (_Bool)participantShouldBeRemovable:(id)arg1 atIndexPath:(id)arg2;
- (id)participantForAutoMatchNumber:(long long)arg1;
- (id)participantForPlayer:(id)arg1;
- (void)setAutomatchPlayerCount:(long long)arg1 complete:(id /* block */)arg2;
- (void)failedToInvitePlayers;
- (id)playersInvited;
- (id)playersToBeInvited;
- (id)readyPlayers;
- (id)playersWithStatus:(long long)arg1;
- (id)guestPlayers;
- (id)currentPlayers;
- (void)finishRevertingPlayers;
- (void)setParticipantsWithPlayers:(id)arg1 automatchPlayerCount:(long long)arg2 andStatuses:(id)arg3 complete:(id /* block */)arg4;
- (void)setStatus:(long long)arg1 forPlayers:(id)arg2 complete:(id /* block */)arg3;
- (_Bool)shouldRevertStatus:(long long)arg1;
- (void)removePlayers:(id)arg1 complete:(id /* block */)arg2;
- (void)addPlayers:(id)arg1 withStatus:(long long)arg2 replaceAutomatches:(_Bool)arg3 complete:(id /* block */)arg4;
- (void)addPlayers:(id)arg1 withStatus:(long long)arg2 complete:(id /* block */)arg3;
- (long long)maxAvailablePlayers;
- (struct _NSRange)playerRange;
- (_Bool)havePendingPlayers;
- (long long)statusForPlayer:(id)arg1;
- (void)refreshContentsForDataType:(unsigned int)arg1 userInfo:(id)arg2 updateNotifier:(id)arg3;
- (void)updateHeaderText;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)dealloc;
- (id)init;
- (void)updateParticipants;
- (void)configureCollectionView:(id)arg1;

@end

