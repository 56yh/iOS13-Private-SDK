//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ActivitySharing/_HKXPCExportable-Protocol.h>

@class HKPluginProxyProvider, NSString;
@protocol ASServerInterface, OS_dispatch_queue;

@interface ASClient : NSObject <_HKXPCExportable>
{
    NSObject<OS_dispatch_queue> *_serverQueue;
    NSObject<OS_dispatch_queue> *_clientQueue;
    id <ASServerInterface> _serverProxy;
    HKPluginProxyProvider *_pluginProxyProvider;
}

- (id /* block */)_clientQueueSuccessCompletion:(id /* block */)arg1;
- (void)_remoteProxy:(id /* block */)arg1;
- (void)friendWithRemoteUUID:(id)arg1 completion:(id /* block */)arg2;
- (void)expireChangeTokenWithCompletion:(id /* block */)arg1;
- (void)fetchAreMultipleDevicesSharingDataForSnapshotIndex:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)clearFriendListWithCompletion:(id /* block */)arg1;
- (void)cloudKitAccountStatusWithCompletion:(id /* block */)arg1;
- (void)fetchAllDataIfTimeSinceLastFetchIsGreaterThan:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)fetchAllDataWithCompletion:(id /* block */)arg1;
- (void)pushFakeActivityDataToAllFriendsWithCompletion:(id /* block */)arg1;
- (void)pushActivityDataToAllFriendsWithCompletion:(id /* block */)arg1;
- (void)removeFriendWithUUID:(id)arg1 completion:(id /* block */)arg2;
- (void)setMuteEnabled:(_Bool)arg1 forFriendWithUUID:(id)arg2 completion:(id /* block */)arg3;
- (void)setActivityDataVisible:(_Bool)arg1 toFriendWithUUID:(id)arg2 completion:(id /* block */)arg3;
- (void)completeCompetitionWithFriendWithUUID:(id)arg1 completion:(id /* block */)arg2;
- (void)ignoreCompetitionRequestFromFriendWithUUID:(id)arg1 completion:(id /* block */)arg2;
- (void)acceptCompetitionRequestFromFriendWithUUID:(id)arg1 completion:(id /* block */)arg2;
- (void)sendCompetitionRequestToFriendWithUUID:(id)arg1 completion:(id /* block */)arg2;
- (void)ignoreInviteRequestFromFriendWithUUID:(id)arg1 completion:(id /* block */)arg2;
- (void)sendWithdrawInviteRequestToFriendWithUUID:(id)arg1 completion:(id /* block */)arg2;
- (void)acceptInviteRequestFromFriendWithUUID:(id)arg1 completion:(id /* block */)arg2;
- (void)sendInviteRequestToDestination:(id)arg1 callerID:(id)arg2 serviceIdentifier:(id)arg3 completion:(id /* block */)arg4;
- (void)connectionInvalidated;
- (id)exportedInterface;
- (id)remoteInterface;
- (id)initWithHealthStore:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

