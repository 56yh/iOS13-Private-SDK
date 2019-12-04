//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreUtils/CUTDSXPCClientInterface-Protocol.h>


@class NSString, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface CUTDSProvider : NSObject <CUTDSXPCClientInterface, NSSecureCoding>
{
    _Bool _activateCalled;
    _Bool _invalidateCalled;
    _Bool _invalidateDone;
    struct LogCategory *_ucat;
    NSXPCConnection *_xpcCnx;
    _Bool _directedOnly;
    _Bool _triggered;
    int _dataLinkType;
    unsigned int _state;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    id /* block */ _interruptionHandler;
    id /* block */ _invalidationHandler;
    NSString *_label;
    NSString *_serviceType;
    id /* block */ _stateChangedHandler;
    NSString *_xpcServiceName;
    unsigned long long _tdsHashActivate;
    unsigned long long _tdsHashProvide;
    unsigned long long _tdsHashSeek;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) unsigned long long tdsHashSeek; // @synthesize tdsHashSeek=_tdsHashSeek;
@property(nonatomic) unsigned long long tdsHashProvide; // @synthesize tdsHashProvide=_tdsHashProvide;
@property(nonatomic) unsigned long long tdsHashActivate; // @synthesize tdsHashActivate=_tdsHashActivate;
@property(copy, nonatomic) NSString *xpcServiceName; // @synthesize xpcServiceName=_xpcServiceName;
@property(readonly, nonatomic) _Bool triggered; // @synthesize triggered=_triggered;
@property(copy, nonatomic) id /* block */ stateChangedHandler; // @synthesize stateChangedHandler=_stateChangedHandler;
@property(readonly, nonatomic) unsigned int state; // @synthesize state=_state;
@property(copy, nonatomic) NSString *serviceType; // @synthesize serviceType=_serviceType;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(copy, nonatomic) id /* block */ invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(copy, nonatomic) id /* block */ interruptionHandler; // @synthesize interruptionHandler=_interruptionHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(nonatomic) _Bool directedOnly; // @synthesize directedOnly=_directedOnly;
@property(nonatomic) int dataLinkType; // @synthesize dataLinkType=_dataLinkType;
- (void)xpcTDSSeekerEndpointLost:(id)arg1;
- (void)xpcTDSSeekerEndpointFound:(id)arg1;
- (void)xpcTDSProviderStateChanged:(unsigned int)arg1;
- (_Bool)updateForDevices:(struct NSMutableDictionary *)arg1;
- (void)updateDeviceActivateHash:(const char *)arg1;
- (void)_invalidated;
- (void)_invalidate;
- (void)invalidate;
- (void)_interrupted;
- (void)_ensureXPCStarted;
- (void)_activateXPCWithCompletion:(id /* block */)arg1 reactivate:(_Bool)arg2;
- (void)_activateDirectWithCompletion:(id /* block */)arg1;
- (void)activateWithCompletion:(id /* block */)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

