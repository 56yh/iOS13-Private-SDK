//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeKitDaemon/HMDRemoteLoginInitiatorSession.h>

@class HMDRemoteLoginInitiatorAuthentication;

@interface HMDRemoteLoginInitiatorAuthenticationSession : HMDRemoteLoginInitiatorSession
{
    HMDRemoteLoginInitiatorAuthentication *_remoteAuthentication;
    id /* block */ _completion;
}

@property(readonly, nonatomic) id /* block */ completion; // @synthesize completion=_completion;
@property(readonly, nonatomic) HMDRemoteLoginInitiatorAuthentication *remoteAuthentication; // @synthesize remoteAuthentication=_remoteAuthentication;
- (id)description;
- (void)dealloc;
- (id)initWithSessionID:(id)arg1 remoteAuthentication:(id)arg2 completion:(id /* block */)arg3 home:(id)arg4;

@end

