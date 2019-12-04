//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreUtils/CUMessageSessionXPCClientInterface-Protocol.h>


@class NSString, NSXPCConnection, NSXPCListenerEndpoint;
@protocol OS_dispatch_queue;

@interface CUMessageSession : NSObject <CUMessageSessionXPCClientInterface, NSSecureCoding>
{
    id /* block */ _activateHandler;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    id /* block */ _invalidateHandler;
    id /* block */ _invalidationHandler;
    NSXPCListenerEndpoint *_listenerEndpoint;
    id /* block */ _registerRequestHandler;
    id /* block */ _sendRequestHandler;
    struct LogCategory *_ucat;
    _Bool _activateCalled;
    _Bool _invalidateCalled;
    _Bool _invalidateDone;
    struct NSMutableDictionary *_requestMap;
    NSXPCConnection *_xpcCnx;
    NSString *_label;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) id /* block */ sendRequestHandler; // @synthesize sendRequestHandler=_sendRequestHandler;
@property(copy, nonatomic) id /* block */ registerRequestHandler; // @synthesize registerRequestHandler=_registerRequestHandler;
@property(retain, nonatomic) NSXPCListenerEndpoint *listenerEndpoint; // @synthesize listenerEndpoint=_listenerEndpoint;
@property(copy, nonatomic) id /* block */ invalidateHandler; // @synthesize invalidateHandler=_invalidateHandler;
@property(copy, nonatomic) id /* block */ activateHandler; // @synthesize activateHandler=_activateHandler;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(copy, nonatomic) id /* block */ invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (void)remoteRequestID:(id)arg1 options:(id)arg2 request:(id)arg3 responseHandler:(id /* block */)arg4;
- (void)_sendRequestID:(id)arg1 options:(id)arg2 request:(id)arg3 responseHandler:(id /* block */)arg4;
- (void)sendRequestID:(id)arg1 options:(id)arg2 request:(id)arg3 responseHandler:(id /* block */)arg4;
- (void)_registerRequestID:(id)arg1 options:(id)arg2 handler:(id /* block */)arg3;
- (void)registerRequestID:(id)arg1 options:(id)arg2 handler:(id /* block */)arg3;
- (void)_invalidated;
- (void)invalidate;
- (void)_interrupted;
- (void)_ensureXPCStarted;
- (void)activate;
- (void)_cleanup;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithTemplate:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

