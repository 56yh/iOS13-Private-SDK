//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ICRequestContext, ICUserIdentityStore, NSOperationQueue;
@protocol OS_dispatch_queue;

@interface ICDelegationProviderServiceProtocolHandler : NSObject
{
    NSObject<OS_dispatch_queue> *_calloutQueue;
    ICUserIdentityStore *_identityStore;
    NSOperationQueue *_operationQueue;
    unsigned long long _nextSessionUniqueID;
    ICRequestContext *_requestContext;
}

- (unsigned long long)_nextSessionUniqueID;
- (void)_getPlayInfoRequestWithStartDelegationResponse:(id)arg1 streamContexts:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)getStartDelegationRequestForAccountIDs:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)getFinishDelegationRequestsWithStartDelegationResponse:(id)arg1 streamContexts:(id)arg2 replyHandler:(id /* block */)arg3;
- (id)initWithUserIdentityStore:(id)arg1 requestContext:(id)arg2;

@end

