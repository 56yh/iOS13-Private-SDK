//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <RunningBoardServices/RBSClientProtocol-Protocol.h>
#import <RunningBoardServices/RBSServiceLocalProtocol-Protocol.h>

@class NSHashTable, NSMapTable, NSMutableDictionary, NSMutableSet, RBSAssertionIdentifier, RBSProcessHandle, RBSProcessIdentity;
@protocol OS_dispatch_queue, OS_xpc_object, RBSConnectionServiceDelegate;

@interface RBSConnection : NSObject <RBSClientProtocol, RBSServiceLocalProtocol>
{
    NSObject<OS_xpc_object> *_connection;
    NSObject<OS_xpc_object> *_handleConnection;
    RBSProcessHandle *_handle;
    id <RBSConnectionServiceDelegate> _serviceDelegate;
    struct os_unfair_lock_s _lock;
    struct os_unfair_lock_s _assertionLock;
    struct os_unfair_lock_s _processExpirationLock;
    NSObject<OS_dispatch_queue> *_connectionQueue;
    NSObject<OS_dispatch_queue> *_handshakeQueue;
    NSObject<OS_dispatch_queue> *_monitorCalloutQueue;
    NSMapTable *_acquiredAssertionsByIdentifier;
    NSHashTable *_processMonitors;
    NSMutableDictionary *_stateByIdentity;
    NSMutableSet *_inheritances;
    NSHashTable *_expirationWarningAssertions;
    NSMutableDictionary *_deathHandlers;
    unsigned long long _state;
    RBSAssertionIdentifier *_handshakeIdentifier;
}

+ (id)connectionQueue;
+ (id)handshakeQueue;
+ (id)sharedInstance;
- (void)_handleDaemonDidStart;
- (void)_disconnect;
- (_Bool)_invalidateAssertionIdentifier:(id)arg1 error:(out id *)arg2;
- (void)_handshake;
- (id)_handshakeDescriptor;
- (_Bool)_isPlugIn;
- (id)_lock_connect;
- (id)_connection;
- (void)_handleMessage:(id)arg1;
- (id)_init;
- (oneway void)async_processDidExit:(id)arg1 withContext:(id)arg2;
- (oneway void)async_observedProcessStatesDidChange:(id)arg1 completion:(id /* block */)arg2;
- (oneway void)async_assertionWillInvalidate:(id)arg1;
- (oneway void)async_assertionsDidInvalidate:(id)arg1 withError:(id)arg2;
- (oneway void)async_didChangeInheritances:(id)arg1 completion:(id /* block */)arg2;
- (oneway void)async_willExpireAssertionsSoon;
- (void)reset;
- (id)busyExtensionInstancesFromSet:(id)arg1 error:(out id *)arg2;
- (id)identifiersForStateCaptureSubsystems:(out id *)arg1;
- (id)captureStateForSubsystem:(id)arg1 error:(out id *)arg2;
- (id)infoPlistResultForInstance:(id)arg1 forKeys:(id)arg2 error:(out id *)arg3;
- (id)hostProcessForInstance:(id)arg1 error:(out id *)arg2;
- (id)limitationsForInstance:(id)arg1 error:(out id *)arg2;
- (id)lastExitContextForInstance:(id)arg1 error:(out id *)arg2;
- (void)intendToExit:(id)arg1 withStatus:(id)arg2;
- (id)statesForPredicate:(id)arg1 withDescriptor:(id)arg2 error:(out id *)arg3;
- (void)unsubscribeProcessStateMonitor:(id)arg1 configuration:(id)arg2;
- (_Bool)subscribeProcessStateMonitor:(id)arg1 configuration:(id)arg2 error:(out id *)arg3;
- (void)_subscribeToProcessDeath:(id)arg1 handler:(id /* block */)arg2;
- (void)subscribeToProcessDeath:(id)arg1 handler:(id /* block */)arg2;
- (id)handleForPredicate:(id)arg1 error:(out id *)arg2;
- (id)handleForKey:(id)arg1;
- (_Bool)executeTerminateRequest:(id)arg1 assertion:(out id *)arg2 error:(out id *)arg3;
- (_Bool)executeLaunchRequest:(id)arg1 process:(out id *)arg2 assertion:(out id *)arg3 error:(out id *)arg4;
- (id)assertionDescriptorsByPidWithFlattenedAttributes:(_Bool)arg1 error:(out id *)arg2;
- (_Bool)invalidateAssertionWithIdentifier:(id)arg1 error:(out id *)arg2;
- (_Bool)invalidateAssertion:(id)arg1 error:(out id *)arg2;
- (id)acquireAssertion:(id)arg1 error:(out id *)arg2;
- (void)plugInHandshakeComplete;
- (id)observeProcessAssertionsExpirationWarningWithBlock:(id /* block */)arg1;
- (void)registerServiceDelegate:(id)arg1;
@property(readonly, nonatomic) RBSProcessHandle *handle;
@property(readonly, copy, nonatomic) RBSProcessIdentity *identity;
- (void)dealloc;
- (id)init;

@end

