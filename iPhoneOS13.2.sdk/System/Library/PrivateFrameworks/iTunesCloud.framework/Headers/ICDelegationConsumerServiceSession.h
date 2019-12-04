//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <iTunesCloud/ICDelegationConsumerNetServiceDelegate-Protocol.h>
#import <iTunesCloud/ICDelegationServiceConnectionDelegate-Protocol.h>

@class ICDelegationConsumerNetService, ICDelegationConsumerServiceProtocolHandler, ICDelegationConsumerServiceRequest, NSMutableArray, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface ICDelegationConsumerServiceSession : NSObject <ICDelegationConsumerNetServiceDelegate, ICDelegationServiceConnectionDelegate>
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSMutableArray *_acceptedConnections;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    ICDelegationConsumerNetService *_netService;
    NSMutableArray *_pendingUserIdentities;
    ICDelegationConsumerServiceProtocolHandler *_protocolHandler;
    NSMutableDictionary *_sessionIDToRequestInfoMap;
    NSObject<OS_dispatch_source> *_timeoutDispatchSource;
    ICDelegationConsumerServiceRequest *_request;
    id /* block */ _responseHandler;
}

@property(readonly, nonatomic) id /* block */ responseHandler; // @synthesize responseHandler=_responseHandler;
@property(readonly, copy, nonatomic) ICDelegationConsumerServiceRequest *request; // @synthesize request=_request;
- (void)_stop;
- (void)_handleTimeout;
- (void)stop;
- (void)start;
- (_Bool)delegationServiceConnection:(id)arg1 didReceiveRequest:(id)arg2;
- (void)delegationServiceConnection:(id)arg1 didEncouterError:(id)arg2;
- (void)delegationServiceConnectionDidClose:(id)arg1;
- (void)delegationConsumerNetService:(id)arg1 didAcceptConnectionWithInputStream:(id)arg2 outputStream:(id)arg3;
- (void)dealloc;
- (id)initWithRequest:(id)arg1 responseHandler:(id /* block */)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

