//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class NSDictionary, NSString;

@protocol STKUSSDSessionCommunication 
- (void)sessionDidTerminate;
- (void)sessionDidReceiveSupplementaryServicesEvent:(NSDictionary *)arg1;
- (void)sessionDidReceiveErrorCode:(long long)arg1 string:(NSString *)arg2;
- (void)sessionDidReceiveString:(NSString *)arg1;
- (void)sessionWantsResponse:(_Bool)arg1;
- (void)dismissCoalescingSession;
@end

