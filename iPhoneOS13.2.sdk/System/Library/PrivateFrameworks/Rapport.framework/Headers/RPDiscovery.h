//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>


#import <Rapport/RPCompanionLinkXPCClientInterface-Protocol.h>

@class NSArray, NSString, NSXPCConnection;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface RPDiscovery : NSObject <NSSecureCoding, RPCompanionLinkXPCClientInterface>
{
    _Bool _activateCalled;
    struct NSMutableDictionary *_endpointMap;
    _Bool _invalidateCalled;
    _Bool _invalidateDone;
    NSObject<OS_dispatch_source> *_retryTimer;
    struct LogCategory *_ucat;
    NSXPCConnection *_xpcCnx;
    _Bool _targetUserSession;
    unsigned int _changeFlags;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    id /* block */ _interruptionHandler;
    id /* block */ _invalidationHandler;
    NSString *_label;
    unsigned long long _controlFlags;
    id /* block */ _foundHandler;
    id /* block */ _lostHandler;
    id /* block */ _changedHandler;
    NSString *_serviceType;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSString *serviceType; // @synthesize serviceType=_serviceType;
@property(copy, nonatomic) id /* block */ changedHandler; // @synthesize changedHandler=_changedHandler;
@property(copy, nonatomic) id /* block */ lostHandler; // @synthesize lostHandler=_lostHandler;
@property(copy, nonatomic) id /* block */ foundHandler; // @synthesize foundHandler=_foundHandler;
@property(nonatomic) unsigned long long controlFlags; // @synthesize controlFlags=_controlFlags;
@property(nonatomic) unsigned int changeFlags; // @synthesize changeFlags=_changeFlags;
@property(nonatomic) _Bool targetUserSession; // @synthesize targetUserSession=_targetUserSession;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(copy, nonatomic) id /* block */ invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(copy, nonatomic) id /* block */ interruptionHandler; // @synthesize interruptionHandler=_interruptionHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (void)xpcDiscoveryChangedEndpoint:(id)arg1;
- (void)xpcDiscoveryLostEndpoint:(id)arg1;
- (void)xpcDiscoveryFoundEndpoint:(id)arg1;
- (void)_lostAllEndpoints;
@property(readonly, copy) NSArray *discoveredEndpoints;
- (void)_scheduleRetry;
- (void)_invalidated;
- (void)invalidate;
- (void)_interrupted;
- (_Bool)_ensureXPCStarted;
- (void)_activateWithCompletion:(id /* block */)arg1 reactivate:(_Bool)arg2;
- (void)activateWithCompletion:(id /* block */)arg1;
- (id)descriptionWithLevel:(int)arg1;
- (id)description;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

