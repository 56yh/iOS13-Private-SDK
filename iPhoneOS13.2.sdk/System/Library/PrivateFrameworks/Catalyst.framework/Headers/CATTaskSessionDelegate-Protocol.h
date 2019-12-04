//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class CATTaskOperation, CATTaskRequest, CATTaskSession, CATTransport, NSDictionary, NSError, NSOperation, NSString;

@protocol CATTaskSessionDelegate 
- (_Bool)session:(CATTaskSession *)arg1 shouldAcceptConnectionFromTransport:(CATTransport *)arg2;
- (CATTaskOperation *)session:(CATTaskSession *)arg1 prepareOperationForRequest:(CATTaskRequest *)arg2 error:(id *)arg3;

@optional
- (void)session:(CATTaskSession *)arg1 enqueueOperation:(NSOperation *)arg2;
- (void)sessionDidInvalidate:(CATTaskSession *)arg1;
- (void)sessionWillInvalidate:(CATTaskSession *)arg1;
- (void)sessionDidDisconnect:(CATTaskSession *)arg1;
- (void)sessionDidConnect:(CATTaskSession *)arg1;
- (void)session:(CATTaskSession *)arg1 didInterruptWithError:(NSError *)arg2;
- (void)session:(CATTaskSession *)arg1 didReceiveNotificationWithName:(NSString *)arg2 userInfo:(NSDictionary *)arg3;
@end

