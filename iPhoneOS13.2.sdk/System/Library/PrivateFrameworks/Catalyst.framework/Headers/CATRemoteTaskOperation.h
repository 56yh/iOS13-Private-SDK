//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Catalyst/CATTaskOperation.h>

@class CATTaskClient, NSError, NSNumber;

@interface CATRemoteTaskOperation : CATTaskOperation
{
    NSError *mClientError;
    CATTaskClient *_client;
    NSNumber *_remotePhase;
}

+ (_Bool)isCancelable;
+ (id)invalidRemoteTaskWithRequest:(id)arg1 error:(id)arg2;
@property(copy, nonatomic) NSNumber *remotePhase; // @synthesize remotePhase=_remotePhase;
@property(readonly, nonatomic) CATTaskClient *client; // @synthesize client=_client;
- (void)updateProgressWithRemoteProgress:(id)arg1;
- (void)updateCompletedUnitCount:(long long)arg1 andTotalUnitCount:(long long)arg2;
- (void)clientFailedWithError:(id)arg1;
- (void)processMessage:(id)arg1;
- (void)postNotificationWithName:(id)arg1 userInfo:(id)arg2;
- (void)fetchProgress;
- (void)processNotificationWithName:(id)arg1 userInfo:(id)arg2;
- (void)main;
- (void)operationWillFinish;
- (void)cancelOperationIfNeeded;
- (void)cancel;
- (_Bool)isAsynchronous;
- (id)initWithRequest:(id)arg1 clientError:(id)arg2;
- (id)initWithRequest:(id)arg1 client:(id)arg2;

@end

