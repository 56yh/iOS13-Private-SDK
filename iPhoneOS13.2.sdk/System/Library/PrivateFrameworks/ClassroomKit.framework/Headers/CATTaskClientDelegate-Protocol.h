//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class CATTaskClient, NSDictionary, NSError, NSString;

@protocol CATTaskClientDelegate 
- (void)client:(CATTaskClient *)arg1 didInterruptWithError:(NSError *)arg2;

@optional
- (void)clientDidInvalidate:(CATTaskClient *)arg1;
- (void)clientWillInvalidate:(CATTaskClient *)arg1;
- (void)clientDidDisconnect:(CATTaskClient *)arg1;
- (void)client:(CATTaskClient *)arg1 didReceiveNotificationWithName:(NSString *)arg2 userInfo:(NSDictionary *)arg3;
- (void)clientDidConnect:(CATTaskClient *)arg1;
@end

