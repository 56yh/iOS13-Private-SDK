//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class GKMatch, GKPlayer, NSData, NSError, NSString;

@protocol GKMatchDelegate 

@optional
- (_Bool)match:(GKMatch *)arg1 shouldReinvitePlayer:(NSString *)arg2;
- (_Bool)match:(GKMatch *)arg1 shouldReinviteDisconnectedPlayer:(GKPlayer *)arg2;
- (void)match:(GKMatch *)arg1 didFailWithError:(NSError *)arg2;
- (void)match:(GKMatch *)arg1 player:(NSString *)arg2 didChangeState:(long long)arg3;
- (void)match:(GKMatch *)arg1 player:(GKPlayer *)arg2 didChangeConnectionState:(long long)arg3;
- (void)match:(GKMatch *)arg1 didReceiveData:(NSData *)arg2 fromPlayer:(NSString *)arg3;
- (void)match:(GKMatch *)arg1 didReceiveData:(NSData *)arg2 forRecipient:(GKPlayer *)arg3 fromRemotePlayer:(GKPlayer *)arg4;
- (void)match:(GKMatch *)arg1 didReceiveData:(NSData *)arg2 fromRemotePlayer:(GKPlayer *)arg3;
@end

