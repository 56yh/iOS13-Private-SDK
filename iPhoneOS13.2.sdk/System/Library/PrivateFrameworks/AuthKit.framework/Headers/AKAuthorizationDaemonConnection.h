//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSXPCConnection, NSXPCListenerEndpoint;
@protocol AKAuthorizationClientProtocol;

@interface AKAuthorizationDaemonConnection : NSObject
{
    struct os_unfair_lock_s _unfairLock;
    NSXPCConnection *_connection;
    id <AKAuthorizationClientProtocol> _contextManager;
    NSXPCListenerEndpoint *_listenerEndpoint;
}

@property(readonly, nonatomic) NSXPCListenerEndpoint *listenerEndpoint; // @synthesize listenerEndpoint=_listenerEndpoint;
- (void)_connectionInvalidationHandler;
- (void)_connectionInterruptionHandler;
- (id)_connection;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (void)dealloc;
- (id)initWithListenerEndpoint:(id)arg1 exportedInterface:(id)arg2;
- (id)init;

@end

