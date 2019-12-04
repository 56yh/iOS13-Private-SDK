//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeKitDaemon/HMDRemoteLoginAuthentication.h>

@protocol HMDRemoteLoginReceiverAuthenticationDelegate;

@interface HMDRemoteLoginReceiverAuthentication : HMDRemoteLoginAuthentication
{
    id <HMDRemoteLoginReceiverAuthenticationDelegate> _delegate;
}

+ (id)logCategory;
@property(readonly, nonatomic) __weak id <HMDRemoteLoginReceiverAuthenticationDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_completedAuthenticationRequest:(id)arg1 loggedInAccount:(id)arg2;
- (void)_handleAuthenticationResults:(id)arg1 error:(id)arg2 targetedAccountType:(unsigned long long)arg3;
- (void)_authenticateAccount:(id)arg1 targetedAccountType:(unsigned long long)arg2;
- (void)_authenticateStoreWithAuthenticationResults:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_authenticateForAccountType:(unsigned long long)arg1 usingAuthenticationResults:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_saveRemoteVerifiedAccount:(id)arg1 completion:(id /* block */)arg2;
- (id)initWithSessionID:(id)arg1 remoteDevice:(id)arg2 workQueue:(id)arg3 remoteMessageSender:(id)arg4 delegate:(id)arg5;

@end

