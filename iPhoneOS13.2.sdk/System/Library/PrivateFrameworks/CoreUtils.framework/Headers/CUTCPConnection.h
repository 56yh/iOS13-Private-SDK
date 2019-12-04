//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreUtils/CUReadWriteRequestable-Protocol.h>

@class CUBonjourDevice, CUNANDataSession, CUNetLinkEndpoint, CUNetLinkManager, CUReadRequest, CUWiFiManager, CUWriteRequest, NSString;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface CUTCPConnection : NSObject <CUReadWriteRequestable>
{
    struct AsyncConnection *_connector;
    NSObject<OS_dispatch_source> *_readSource;
    unsigned char _readSuspended;
    CUReadRequest *_readRequestCurrent;
    struct NSMutableArray *_readRequests;
    NSObject<OS_dispatch_source> *_writeSource;
    unsigned char _writeSuspended;
    CUWriteRequest *_writeRequestCurrent;
    struct NSMutableArray *_writeRequests;
    _Bool _activateCalled;
    id /* block */ _activateCompletion;
    _Bool _invalidateCalled;
    _Bool _invalidateDone;
    struct _opaque_pthread_mutex_t _mutex;
    CUNetLinkEndpoint *_netLinkEndpoint;
    unsigned int _trafficFlagsApplied;
    _Bool _trafficFlagsPending;
    struct LogCategory *_ucat;
    CUWiFiManager *_wifiTrafficManager;
    unsigned long long _ifExtendedFlags;
    unsigned int _ifFlags;
    unsigned int _ifIndex;
    unsigned int _ifMedia;
    char _ifName[17];
    int _defaultPort;
    unsigned int _flags;
    int _flowControlState;
    int _keepAliveSeconds;
    unsigned int _netTransportType;
    int _socketFD;
    unsigned int _trafficFlags;
    double _connectTimeoutSecs;
    double _dataTimeoutSecs;
    CUBonjourDevice *_destinationBonjour;
    NSString *_destinationString;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    id /* block */ _errorHandler;
    id /* block */ _flowControlChangedHandler;
    NSString *_interfaceName;
    id /* block */ _invalidationHandler;
    NSString *_label;
    CUNANDataSession *_nanDataSession;
    CUNetLinkManager *_netLinkManager;
    id /* block */ _serverInvalidationHandler;
    CDUnion_fab80606 _peerAddr;
    CDUnion_fab80606 _selfAddr;
}

@property(copy, nonatomic) id /* block */ serverInvalidationHandler; // @synthesize serverInvalidationHandler=_serverInvalidationHandler;
@property(nonatomic) unsigned int trafficFlags; // @synthesize trafficFlags=_trafficFlags;
@property(nonatomic) int socketFD; // @synthesize socketFD=_socketFD;
@property(readonly, nonatomic) unsigned int netTransportType; // @synthesize netTransportType=_netTransportType;
@property(retain, nonatomic) CUNetLinkManager *netLinkManager; // @synthesize netLinkManager=_netLinkManager;
@property(retain, nonatomic) CUNANDataSession *nanDataSession; // @synthesize nanDataSession=_nanDataSession;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(nonatomic) int keepAliveSeconds; // @synthesize keepAliveSeconds=_keepAliveSeconds;
@property(copy, nonatomic) id /* block */ invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(copy, nonatomic) NSString *interfaceName; // @synthesize interfaceName=_interfaceName;
@property(readonly, nonatomic) int flowControlState; // @synthesize flowControlState=_flowControlState;
@property(copy, nonatomic) id /* block */ flowControlChangedHandler; // @synthesize flowControlChangedHandler=_flowControlChangedHandler;
@property(nonatomic) unsigned int flags; // @synthesize flags=_flags;
@property(copy, nonatomic) id /* block */ errorHandler; // @synthesize errorHandler=_errorHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(nonatomic) int defaultPort; // @synthesize defaultPort=_defaultPort;
@property(copy, nonatomic) NSString *destinationString; // @synthesize destinationString=_destinationString;
@property(retain, nonatomic) CUBonjourDevice *destinationBonjour; // @synthesize destinationBonjour=_destinationBonjour;
@property(nonatomic) double dataTimeoutSecs; // @synthesize dataTimeoutSecs=_dataTimeoutSecs;
@property(nonatomic) double connectTimeoutSecs; // @synthesize connectTimeoutSecs=_connectTimeoutSecs;
@property(readonly, nonatomic) CDUnion_fab80606 selfAddr; // @synthesize selfAddr=_selfAddr;
@property(readonly, nonatomic) CDUnion_fab80606 peerAddr; // @synthesize peerAddr=_peerAddr;
- (void)_completeWriteRequest:(id)arg1 error:(id)arg2;
- (void)_abortWritesWithError:(id)arg1;
- (_Bool)_prepareWriteRequest:(id)arg1 error:(id *)arg2;
- (void)_processWrites:(_Bool)arg1;
- (void)writeEndOfDataWithCompletion:(id /* block */)arg1;
- (void)writeWithRequest:(id)arg1;
- (void)_completeReadRequest:(id)arg1 error:(id)arg2;
- (_Bool)_readStatus;
- (_Bool)_readableData;
- (void)_abortReadsWithError:(id)arg1;
- (void)_prepareReadRequest:(id)arg1;
- (void)_processReads:(_Bool)arg1;
- (void)readWithRequest:(id)arg1;
- (void)_updateTrafficRegistration;
- (void)_netLinkStateChanged;
- (_Bool)_setupIOAndReturnError:(id *)arg1;
- (_Bool)_startConnectingToDestination:(id)arg1 error:(id *)arg2;
- (_Bool)_startConnectingToBonjourDevice:(id)arg1 error:(id *)arg2;
- (void)_invalidated;
- (void)_invalidate;
- (void)invalidate;
- (_Bool)_activateDirectAndReturnError:(id *)arg1;
- (_Bool)activateDirectAndReturnError:(id *)arg1;
- (void)activateWithCompletion:(id /* block */)arg1;
- (id)description;
- (void)dealloc;
- (id)init;

@end

