//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>


#import <Rapport/RPPrivateDiscoveryXPCClientInterface-Protocol.h>

@class NSDictionary, NSString, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface RPPrivateAdvertiser : NSObject <NSSecureCoding, RPPrivateDiscoveryXPCClientInterface>
{
    _Bool _activateCalled;
    _Bool _changesPending;
    _Bool _direct;
    _Bool _invalidateCalled;
    _Bool _invalidateDone;
    struct LogCategory *_ucat;
    NSXPCConnection *_xpcCnx;
    unsigned int _clientID;
    NSString *_accessGroup;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    id /* block */ _errorHandler;
    id /* block */ _interruptionHandler;
    id /* block */ _invalidationHandler;
    NSString *_label;
    NSDictionary *_serviceInfo;
    NSString *_serviceType;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) unsigned int clientID; // @synthesize clientID=_clientID;
@property(copy, nonatomic) NSString *serviceType; // @synthesize serviceType=_serviceType;
@property(copy, nonatomic) NSDictionary *serviceInfo; // @synthesize serviceInfo=_serviceInfo;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(copy, nonatomic) id /* block */ invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(copy, nonatomic) id /* block */ interruptionHandler; // @synthesize interruptionHandler=_interruptionHandler;
@property(copy, nonatomic) id /* block */ errorHandler; // @synthesize errorHandler=_errorHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(copy, nonatomic) NSString *accessGroup; // @synthesize accessGroup=_accessGroup;
- (void)xpcPrivateDiscoveryEndpointChanged:(id)arg1;
- (void)xpcPrivateDiscoveryEndpointLost:(id)arg1;
- (void)xpcPrivateDiscoveryEndpointFound:(id)arg1;
- (void)_update;
- (void)_updateIfNeededWithBlock:(id /* block */)arg1;
- (void)_invalidated;
- (void)_invalidateDirect;
- (void)invalidate;
- (void)_interrupted;
- (void)_ensureXPCStarted;
- (void)_activateXPC:(_Bool)arg1;
- (void)_activateDirect;
- (void)activate;
- (id)description;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

