//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeKitDaemon/HMDRemoteLoginReceiverAuthentication.h>

@class HMDRemoteLoginCompanionAuthenticationRequest;

@interface HMDRemoteLoginReceiverCompanionAuthentication : HMDRemoteLoginReceiverAuthentication
{
    HMDRemoteLoginCompanionAuthenticationRequest *_request;
}

+ (id)logCategory;
@property(readonly, nonatomic) HMDRemoteLoginCompanionAuthenticationRequest *request; // @synthesize request=_request;
- (void)_authenticateAccount:(id)arg1 alreadyExists:(_Bool)arg2 withCompanionDevice:(id)arg3;
- (void)_authenticate;
- (void)authenticate;
- (id)description;
- (void)dealloc;
- (id)initWithSessionID:(id)arg1 remoteDevice:(id)arg2 workQueue:(id)arg3 remoteMessageSender:(id)arg4 delegate:(id)arg5 request:(id)arg6;

@end

