//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDS/IDSTransactionLogTaskHandler.h>

@class IDSTransactionLogSyncTask, NSObject;
@protocol IDSTransactionLogTaskHandlerDelegate, OS_dispatch_queue;

@interface IDSTransactionLogSyncTaskHandler : IDSTransactionLogTaskHandler
{
    IDSTransactionLogSyncTask *_syncTask;
    NSObject<OS_dispatch_queue> *_queue;
    id <IDSTransactionLogTaskHandlerDelegate> _delegate;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) __weak id <IDSTransactionLogTaskHandlerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) IDSTransactionLogSyncTask *syncTask; // @synthesize syncTask=_syncTask;
- (id)_transactionMessageFromTransportMessage:(id)arg1 withDecryptedPayload:(id)arg2 accountInfo:(id)arg3;
- (id)_transactionMessageFromTransportMessage:(id)arg1 withParticipants:(id)arg2 accountInfo:(id)arg3;
- (id)_transactionMessageFromTransportMessage:(id)arg1 withGroupID:(id)arg2 groups:(id)arg3 accountInfo:(id)arg4;
- (id)_transactionMessageFromTransportMessage:(id)arg1 groups:(id)arg2 participants:(id)arg3 accountInfo:(id)arg4;
- (id)_participantsByAliasFromParticipants:(id)arg1;
- (id)_groupsByGroupIDFromGroups:(id)arg1;
- (id)_groupIDsFromMessages:(id)arg1;
- (id)_destinationsInMessages:(id)arg1;
- (void)_completeWithError:(id)arg1;
- (void)_transactionMessagesFromTransportMessages:(id)arg1 withParticipants:(id)arg2 groups:(id)arg3 accountInfo:(id)arg4 completion:(id /* block */)arg5;
- (void)qFetchParticipantsFromDeviceMessges:(id)arg1 andGroupsFromGroupMessages:(id)arg2 completion:(id /* block */)arg3;
- (void)qIngestMessages:(id)arg1 completion:(id /* block */)arg2;
- (void)qPerformWithToken:(id)arg1;
- (void)perform;
- (id)initWithTask:(id)arg1 delegate:(id)arg2 queue:(id)arg3;

@end

