//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GameCenterFoundation/GKInternalRepresentation.h>

@class GKRecurrenceRule, NSString;

@interface GKTournamentDefinitionInternal : GKInternalRepresentation
{
    _Bool _customTournamentAllowIcon;
    NSString *_tournamentDefinitionID;
    NSString *_tournamentName;
    long long _tournamentNameFormat;
    NSString *_tournamentDescription;
    NSString *_tournamentIcon;
    long long _tournamentType;
    long long _creationMethod;
    long long _seedingMethod;
    long long _participationType;
    long long _scoringMethod;
    long long _maxPlayers;
    long long _minPlayers;
    long long _maxPlayerShards;
    double _typicalGameplayDuration;
    double _tournamentDuration;
    double _PreRegistrationTime;
    GKRecurrenceRule *_recurrenceRule;
    long long _maxReplays;
    long long _autoTournamentIndex;
    NSString *_customTournamentName;
    long long _customTournamentNameFormat;
    NSString *_customTournamentIcon;
    long long _customSeedingMethods;
    long long _customScoringMethods;
    long long _customMaxPlayers;
    long long _customMinPlayers;
    double _customTournamentDuration;
    long long _customMaxReplays;
}

+ (id)secureCodedPropertyKeys;
@property(nonatomic) long long customMaxReplays; // @synthesize customMaxReplays=_customMaxReplays;
@property(nonatomic) double customTournamentDuration; // @synthesize customTournamentDuration=_customTournamentDuration;
@property(nonatomic) long long customMinPlayers; // @synthesize customMinPlayers=_customMinPlayers;
@property(nonatomic) long long customMaxPlayers; // @synthesize customMaxPlayers=_customMaxPlayers;
@property(nonatomic) long long customScoringMethods; // @synthesize customScoringMethods=_customScoringMethods;
@property(nonatomic) long long customSeedingMethods; // @synthesize customSeedingMethods=_customSeedingMethods;
@property(nonatomic) _Bool customTournamentAllowIcon; // @synthesize customTournamentAllowIcon=_customTournamentAllowIcon;
@property(retain, nonatomic) NSString *customTournamentIcon; // @synthesize customTournamentIcon=_customTournamentIcon;
@property(nonatomic) long long customTournamentNameFormat; // @synthesize customTournamentNameFormat=_customTournamentNameFormat;
@property(retain, nonatomic) NSString *customTournamentName; // @synthesize customTournamentName=_customTournamentName;
@property(nonatomic) long long autoTournamentIndex; // @synthesize autoTournamentIndex=_autoTournamentIndex;
@property(nonatomic) long long maxReplays; // @synthesize maxReplays=_maxReplays;
@property(retain, nonatomic) GKRecurrenceRule *recurrenceRule; // @synthesize recurrenceRule=_recurrenceRule;
@property(nonatomic) double PreRegistrationTime; // @synthesize PreRegistrationTime=_PreRegistrationTime;
@property(nonatomic) double tournamentDuration; // @synthesize tournamentDuration=_tournamentDuration;
@property(nonatomic) double typicalGameplayDuration; // @synthesize typicalGameplayDuration=_typicalGameplayDuration;
@property(nonatomic) long long maxPlayerShards; // @synthesize maxPlayerShards=_maxPlayerShards;
@property(nonatomic) long long minPlayers; // @synthesize minPlayers=_minPlayers;
@property(nonatomic) long long maxPlayers; // @synthesize maxPlayers=_maxPlayers;
@property(nonatomic) long long scoringMethod; // @synthesize scoringMethod=_scoringMethod;
@property(nonatomic) long long participationType; // @synthesize participationType=_participationType;
@property(nonatomic) long long seedingMethod; // @synthesize seedingMethod=_seedingMethod;
@property(nonatomic) long long creationMethod; // @synthesize creationMethod=_creationMethod;
@property(nonatomic) long long tournamentType; // @synthesize tournamentType=_tournamentType;
@property(retain, nonatomic) NSString *tournamentIcon; // @synthesize tournamentIcon=_tournamentIcon;
@property(retain, nonatomic) NSString *tournamentDescription; // @synthesize tournamentDescription=_tournamentDescription;
@property(nonatomic) long long tournamentNameFormat; // @synthesize tournamentNameFormat=_tournamentNameFormat;
@property(retain, nonatomic) NSString *tournamentName; // @synthesize tournamentName=_tournamentName;
@property(retain, nonatomic) NSString *tournamentDefinitionID; // @synthesize tournamentDefinitionID=_tournamentDefinitionID;

@end

