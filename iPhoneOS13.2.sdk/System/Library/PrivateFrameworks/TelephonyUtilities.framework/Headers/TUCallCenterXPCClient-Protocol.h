//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class NSArray, NSData, NSDictionary, NSString, TUCall;

@protocol TUCallCenterXPCClient 
- (oneway void)handleNotificationName:(NSString *)arg1 forCallWithUniqueProxyIdentifier:(NSString *)arg2 userInfo:(NSDictionary *)arg3;
- (oneway void)resetCallProvisionalStates;
- (oneway void)handleCurrentCallsChanged:(NSArray *)arg1 callDisconnected:(TUCall *)arg2;
- (oneway void)handleMeterLevelChangedTo:(float)arg1 inDirection:(int)arg2 forCallsWithUniqueProxyIdentifiers:(NSArray *)arg3;
- (oneway void)handleFrequencyChangedTo:(NSData *)arg1 inDirection:(int)arg2 forCallsWithUniqueProxyIdentifiers:(NSArray *)arg3;
@end

