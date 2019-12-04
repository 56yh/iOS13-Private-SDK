//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GameCenterFoundation/GKInternalRepresentation.h>

@class GKPlayerInternal, NSMutableArray, NSString;

@interface GKTournamentParticipantHistoricalDataInternal : GKInternalRepresentation
{
    NSString *_tournamentDefinitionID;
    GKPlayerInternal *_player;
    long long _tournamentsPlayed;
    long long _highestRank;
    long long _latestRank;
    long long _averageRank;
    long long _bestScore;
    long long _latestScore;
    long long _averageScore;
    NSMutableArray *_historicalRanks;
}

+ (id)secureCodedPropertyKeys;
@property(retain, nonatomic) NSMutableArray *historicalRanks; // @synthesize historicalRanks=_historicalRanks;
@property(nonatomic) long long averageScore; // @synthesize averageScore=_averageScore;
@property(nonatomic) long long latestScore; // @synthesize latestScore=_latestScore;
@property(nonatomic) long long bestScore; // @synthesize bestScore=_bestScore;
@property(nonatomic) long long averageRank; // @synthesize averageRank=_averageRank;
@property(nonatomic) long long latestRank; // @synthesize latestRank=_latestRank;
@property(nonatomic) long long highestRank; // @synthesize highestRank=_highestRank;
@property(nonatomic) long long tournamentsPlayed; // @synthesize tournamentsPlayed=_tournamentsPlayed;
@property(retain, nonatomic) GKPlayerInternal *player; // @synthesize player=_player;
@property(retain, nonatomic) NSString *tournamentDefinitionID; // @synthesize tournamentDefinitionID=_tournamentDefinitionID;

@end

