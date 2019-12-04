//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ICDelegationConsumerService;
@protocol OS_dispatch_queue;

@interface ICUserCredentialProvider : NSObject
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    long long _delegationDiscoveryCount;
    ICDelegationConsumerService *_delegationConsumerService;
}

+ (id)sharedProvider;
- (void)performCredentialRequests:(id)arg1 withResponseHandler:(id /* block */)arg2;
- (void)_handleCredentialRequestIdentityPropertiesForSession:(id)arg1;
- (void)_handleIdentityProperties:(id)arg1 forIdentity:(id)arg2 loadingError:(id)arg3 credentialRequest:(id)arg4 session:(id)arg5;
- (void)_handlePendingDelegationRequestsForSession:(id)arg1;
- (void)_handleDelegationAccountUUIDsForSession:(id)arg1;
- (void)_handleRequestIndependentPropertiesForSession:(id)arg1;
- (void)performCredentialRequest:(id)arg1 withResponseHandler:(id /* block */)arg2;
- (id)init;

@end

