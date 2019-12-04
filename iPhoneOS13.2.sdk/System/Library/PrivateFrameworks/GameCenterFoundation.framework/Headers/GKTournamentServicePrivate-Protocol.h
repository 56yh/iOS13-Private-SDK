//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GameCenterFoundation/GKTournamentService-Protocol.h>

@class GKTournamentInternal, NSString;

@protocol GKTournamentServicePrivate <GKTournamentService>
- (oneway void)removeCustomTournament:(GKTournamentInternal *)arg1 handler:(void (^)(NSError *))arg2;
- (oneway void)resetTournamentDataForTournamentsWithTournamentDefinitionIdentifier:(NSString *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (oneway void)loadTournamentWithID:(NSString *)arg1 completionHandler:(void (^)(GKTournamentInternal *, NSError *))arg2;
@end

