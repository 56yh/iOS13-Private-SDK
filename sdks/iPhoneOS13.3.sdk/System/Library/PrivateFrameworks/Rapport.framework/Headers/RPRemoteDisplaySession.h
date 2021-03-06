//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Rapport/RPAuthenticatable-Protocol.h>
#import <Rapport/RPMessageable-Protocol.h>
#import <Rapport/RPRemoteDisplayXPCClientInterface-Protocol.h>

@class CUBonjourDevice, NSNumber, NSString, NSXPCConnection, RPRemoteDisplayDevice, RPRemoteDisplayServer;
@protocol OS_dispatch_queue;

@interface RPRemoteDisplaySession : NSObject <NSSecureCoding, RPRemoteDisplayXPCClientInterface, RPAuthenticatable, RPMessageable>
{
    BOOL _activateCalled;
    NSMutableDictionary _eventRegistrations;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    NSMutableDictionary _requestRegistrations;
    BOOL _needsAWDL;
    unsigned int _pairSetupFlags;
    unsigned int _pairVerifyFlags;
    int _passwordType;
    int _passwordTypeActual;
    unsigned int _internalAuthFlags;
    NSString *_password;
    id /* CDUnknownBlockType */ _authCompletionHandler;
    id /* CDUnknownBlockType */ _showPasswordHandler;
    id /* CDUnknownBlockType */ _hidePasswordHandler;
    id /* CDUnknownBlockType */ _promptForPasswordHandler;
    NSUInteger _controlFlags;
    RPRemoteDisplayDevice *_destinationDevice;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    id /* CDUnknownBlockType */ _errorHandler;
    id /* CDUnknownBlockType */ _interruptionHandler;
    id /* CDUnknownBlockType */ _invalidationHandler;
    CUBonjourDevice *_bonjourDevice;
    RPRemoteDisplayDevice *_daemonDevice;
    RPRemoteDisplayServer *_server;
    NSNumber *_sessionID;
    NSXPCConnection *_xpcCnx;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) NSXPCConnection *xpcCnx; // @synthesize xpcCnx=_xpcCnx;
@property(copy, nonatomic) NSNumber *sessionID; // @synthesize sessionID=_sessionID;
@property(retain, nonatomic) RPRemoteDisplayServer *server; // @synthesize server=_server;
@property(nonatomic) BOOL needsAWDL; // @synthesize needsAWDL=_needsAWDL;
@property(readonly, nonatomic) unsigned int internalAuthFlags; // @synthesize internalAuthFlags=_internalAuthFlags;
@property(retain, nonatomic) RPRemoteDisplayDevice *daemonDevice; // @synthesize daemonDevice=_daemonDevice;
@property(retain, nonatomic) CUBonjourDevice *bonjourDevice; // @synthesize bonjourDevice=_bonjourDevice;
@property(copy, nonatomic) id /* CDUnknownBlockType */ invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(copy, nonatomic) id /* CDUnknownBlockType */ interruptionHandler; // @synthesize interruptionHandler=_interruptionHandler;
@property(copy, nonatomic) id /* CDUnknownBlockType */ errorHandler; // @synthesize errorHandler=_errorHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(retain, nonatomic) RPRemoteDisplayDevice *destinationDevice; // @synthesize destinationDevice=_destinationDevice;
@property(nonatomic) NSUInteger controlFlags; // @synthesize controlFlags=_controlFlags;
@property(copy, nonatomic) id /* CDUnknownBlockType */ promptForPasswordHandler; // @synthesize promptForPasswordHandler=_promptForPasswordHandler;
@property(copy, nonatomic) id /* CDUnknownBlockType */ hidePasswordHandler; // @synthesize hidePasswordHandler=_hidePasswordHandler;
@property(copy, nonatomic) id /* CDUnknownBlockType */ showPasswordHandler; // @synthesize showPasswordHandler=_showPasswordHandler;
@property(copy, nonatomic) id /* CDUnknownBlockType */ authCompletionHandler; // @synthesize authCompletionHandler=_authCompletionHandler;
@property(readonly, nonatomic) int passwordTypeActual; // @synthesize passwordTypeActual=_passwordTypeActual;
@property(nonatomic) int passwordType; // @synthesize passwordType=_passwordType;
@property(copy, nonatomic) NSString *password; // @synthesize password=_password;
@property(nonatomic) unsigned int pairVerifyFlags; // @synthesize pairVerifyFlags=_pairVerifyFlags;
@property(nonatomic) unsigned int pairSetupFlags; // @synthesize pairSetupFlags=_pairSetupFlags;
// - (void).cxx_destruct;
- (void)remoteDisplayReceivedRequestID:(id)arg1 request:(id)arg2 options:(id)arg3 responseHandler:(id /* CDUnknownBlockType */)arg4;
- (void)_sendRequestID:(id)arg1 request:(id)arg2 destinationID:(id)arg3 options:(id)arg4 responseHandler:(id /* CDUnknownBlockType */)arg5;
- (void)sendRequestID:(id)arg1 request:(id)arg2 destinationID:(id)arg3 options:(id)arg4 responseHandler:(id /* CDUnknownBlockType */)arg5;
- (void)sendRequestID:(id)arg1 request:(id)arg2 options:(id)arg3 responseHandler:(id /* CDUnknownBlockType */)arg4;
- (void)deregisterRequestID:(id)arg1;
- (void)registerRequestID:(id)arg1 options:(id)arg2 handler:(id /* CDUnknownBlockType */)arg3;
- (void)remoteDisplaySessionError:(id)arg1;
- (void)remoteDisplayReceivedEventID:(id)arg1 event:(id)arg2 options:(id)arg3;
- (void)_sendEventID:(id)arg1 event:(id)arg2 destinationID:(id)arg3 options:(id)arg4 completion:(id /* CDUnknownBlockType */)arg5;
- (void)sendEventID:(id)arg1 event:(id)arg2 destinationID:(id)arg3 options:(id)arg4 completion:(id /* CDUnknownBlockType */)arg5;
- (void)sendEventID:(id)arg1 event:(id)arg2 options:(id)arg3 completion:(id /* CDUnknownBlockType */)arg4;
- (void)deregisterEventID:(id)arg1;
- (void)registerEventID:(id)arg1 options:(id)arg2 handler:(id /* CDUnknownBlockType */)arg3;
- (void)remoteDisplayAuthCompleted:(id)arg1;
- (void)remoteDisplayPromptForPasswordWithFlags:(unsigned int)arg1 throttleSeconds:(int)arg2;
- (void)tryPassword:(id)arg1;
- (void)_invalidated;
- (void)invalidate;
- (void)_interrupted;
- (void)_ensureXPCStarted;
- (void)_activateWithCompletion:(id /* CDUnknownBlockType */)arg1 reactivate:(BOOL)arg2;
- (void)activateWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

