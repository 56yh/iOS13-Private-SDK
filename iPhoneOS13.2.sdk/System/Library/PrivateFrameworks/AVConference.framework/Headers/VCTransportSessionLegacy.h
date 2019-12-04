//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AVConference/VCTransportSession.h>

#import <AVConference/InterfaceListenerDelegate-Protocol.h>
#import <AVConference/LoopbackSocketTunnelDelegate-Protocol.h>
#import <AVConference/VCConnectionManagerDelegate-Protocol.h>

@class GKInterfaceListener, LoopbackSocketTunnel, NSCondition, NSData, NSDictionary, NSMutableDictionary, NSObject, NSString, TCPTunnelClient, VCTransport;
@protocol OS_dispatch_source, VCConnectionProtocol, VCTransportSessionLegacyDelegate, VideoConferenceRealTimeChannel;

__attribute__((visibility("hidden")))
@interface VCTransportSessionLegacy : VCTransportSession <LoopbackSocketTunnelDelegate, InterfaceListenerDelegate, VCConnectionManagerDelegate>
{
    unsigned char _localU8Version;
    long long relayState;
    int pendingRelayCount;
    float callerPreEmptiveTimeoutInSecs;
    unsigned int _connectionSetupRTTEstimate;
    _Bool allowsRelay;
    _Bool initialSecondaryRelaySetupDone;
    _Bool requestedTimeoutRelay;
    _Bool _isCaller;
    _Bool _didReceivePiggybackBlob;
    _Bool _useLoopback;
    _Bool _isRemoteOSPreLion;
    _Bool _isStarted;
    NSObject<OS_dispatch_source> *relaySetupTimer;
    VCTransport *transport;
    unsigned int _callID;
    unsigned int _remoteCallID;
    int _NATType;
    NSMutableDictionary *_localRelayRequestResponse;
    NSDictionary *_localRelayUpdate;
    NSMutableDictionary *_remoteRelayRequestResponse;
    NSDictionary *_remoteRelayUpdate;
    NSData *_localConnectionData;
    NSData *_localRelayConnectionData;
    NSData *_remoteConnectionData;
    NSData *_remoteRelayConnectionData;
    NSString *_localParticipantID;
    NSString *_remoteParticipantID;
    NSString *_sessionID;
    struct __SecIdentity *_identity;
    TCPTunnelClient *_tcpTunnelClient;
    NSObject<VideoConferenceRealTimeChannel> *rtChannel;
    LoopbackSocketTunnel *_tunnel;
    id <VCConnectionProtocol> _loopbackConnection;
    NSCondition *_connectionDataTimeoutCondVar;
    GKInterfaceListener *_interfaceListener;
    int _operatingMode;
    id _delegate;
}

@property int operatingMode; // @synthesize operatingMode=_operatingMode;
@property int NATType; // @synthesize NATType=_NATType;
@property(retain, nonatomic) NSDictionary *remoteRelayUpdate; // @synthesize remoteRelayUpdate=_remoteRelayUpdate;
@property(retain, nonatomic) NSDictionary *localRelayUpdate; // @synthesize localRelayUpdate=_localRelayUpdate;
@property(retain, nonatomic) NSMutableDictionary *remoteRelayRequestResponse; // @synthesize remoteRelayRequestResponse=_remoteRelayRequestResponse;
@property(retain) NSMutableDictionary *localRelayRequestResponse; // @synthesize localRelayRequestResponse=_localRelayRequestResponse;
- (_Bool)isRemoteOSPreLion;
- (unsigned int)connectionSetupRTTEstimate;
@property unsigned int remoteCallID; // @synthesize remoteCallID=_remoteCallID;
@property(copy) NSString *sessionID; // @synthesize sessionID=_sessionID;
@property _Bool allowsRelay; // @synthesize allowsRelay;
@property(retain, nonatomic) NSData *remoteRelayConnectionData; // @synthesize remoteRelayConnectionData=_remoteRelayConnectionData;
@property(retain) NSData *localRelayConnectionData; // @synthesize localRelayConnectionData=_localRelayConnectionData;
@property(retain) NSData *remoteConnectionData; // @synthesize remoteConnectionData=_remoteConnectionData;
@property(retain) NSData *localConnectionData; // @synthesize localConnectionData=_localConnectionData;
@property(copy) NSString *remoteParticipantID; // @synthesize remoteParticipantID=_remoteParticipantID;
@property(copy) NSString *localParticipantID; // @synthesize localParticipantID=_localParticipantID;
@property _Bool isCaller; // @synthesize isCaller=_isCaller;
@property(nonatomic) _Bool initialSecondaryRelaySetupDone; // @synthesize initialSecondaryRelaySetupDone;
@property(nonatomic) int pendingRelayCount; // @synthesize pendingRelayCount;
- (void)setIdentity:(struct __SecIdentity *)arg1;
- (void)handleMediaReceivedOverRelayLinkWithConnectionId:(int)arg1;
- (void)handleMediaReceivedOverPeerToPeerLinkWithConnectionId:(int)arg1;
- (void)reportNetworkConditionsDegraded;
- (int)detailedErrorCode;
- (_Bool)isConnectedAndAllowAdditionalConnection;
- (unsigned int)connectionTypeForConnectionResult:(struct tagCONNRESULT *)arg1;
- (struct tagIPPORT)IPPortForPrimaryConnectionOnLocalInterface:(_Bool)arg1;
- (double)iceTimeoutInSeconds:(_Bool)arg1;
- (void)resetICETimeoutToLongTimeout;
- (void)setupTransport;
- (int)generateConnectionData:(char **)arg1 forCallID:(unsigned int)arg2 connectionDataSize:(int *)arg3 nonCellularCandidateTimeout:(double)arg4;
- (id)connectionDataUsingRelay:(_Bool)arg1 isInitialRelay:(_Bool)arg2 nonCellularCandidateTimeout:(double)arg3 error:(id *)arg4;
- (id)connectionData:(char *)arg1 connectionDataSizeInBytes:(int)arg2 shouldUseRelay:(_Bool)arg3;
- (void)getConnectionDataUsingRelay:(_Bool)arg1 isInitialRelay:(_Bool)arg2 nonCellularCandidateTimeout:(double)arg3 queue:(id)arg4 completionHandler:(id /* block */)arg5;
- (_Bool)getConnectionSetupData:(id *)arg1 withOptions:(id)arg2 error:(id *)arg3;
- (id)createRelayUpdateDictionary:(id)arg1;
- (id)createInitiateRelayDictionaryForCall:(unsigned int)arg1 primaryConnection:(struct tagCONNRESULT *)arg2;
- (id)createInitiateRelayDictionary;
- (void)stopLoopbackProc:(id)arg1;
- (void)stopLoopback;
- (void)receivedRealTimeData:(id)arg1 fromParticipantID:(id)arg2;
- (void)setupLoopbackWithConnectionType:(unsigned int)arg1;
- (void)resetLoopback;
- (void)loopbackSocketTunnel:(id)arg1 receivedData:(id)arg2 from:(struct tagIPPORT *)arg3;
- (void)deleteTCPTunnel;
- (_Bool)createTCPTunnelForParticipantID:(id)arg1 relayDictionary:(id)arg2 didOriginateRequest:(_Bool)arg3 relayType:(unsigned char)arg4 error:(id *)arg5;
- (void)updateParticipantGenerationCounter:(unsigned char)arg1;
- (void)didEnableDuplication:(_Bool)arg1 activeConnection:(id)arg2;
- (void)connectionCallback:(id)arg1 isInitialConnection:(_Bool)arg2;
- (void)primaryConnectionChanged:(id)arg1 oldPrimaryConnection:(id)arg2;
- (_Bool)handleExchangedKey:(id)arg1 result:(int)arg2;
- (void)connectionResultCallback:(struct tagCONNRESULT *)arg1 didReceiveICEPacket:(_Bool)arg2 didUseRelay:(_Bool)arg3 secretKey:(id)arg4 skeResult:(int)arg5;
- (void)processRemoteIPChange:(id)arg1;
- (void)processRemoteIPChange:(char *)arg1 dataLength:(int)arg2 remoteCandidateVersion:(unsigned short)arg3;
- (void)handleNewCandidates:(id)arg1 version:(unsigned short)arg2;
- (void)networkStateDidChange;
- (void)triggerInterfaceChange;
- (_Bool)isHandoverSupported;
- (void)handleConnectionSetupDataChangeMessageDelivered;
- (void)initiateRelayRequest;
- (void)setupInitialSecondaryRelayWithCallbackRelayFlag:(_Bool)arg1 callID:(unsigned int)arg2 connectionId:(int)arg3;
- (void)setupSecondaryRelayForCall:(unsigned int)arg1 callerRequired:(_Bool)arg2;
- (void)notifyDelegateToCancelRelay;
- (void)setupPendingSecondaryRelayWithNewPrimary:(id)arg1;
- (void)destroySecondaryRelayDispatchTimer;
- (void)createSecondaryRelayDispatchTimer:(float)arg1 callID:(unsigned int)arg2 callerRequired:(_Bool)arg3;
- (void)processRelayUpdate:(id)arg1 didOriginateRequest:(_Bool)arg2;
- (void)processRelayRequestResponse:(id)arg1 didOriginateRequest:(_Bool)arg2;
- (void)setForceRelay;
- (void)stop;
- (_Bool)startConnectionWithBlob:(id)arg1 useRelay:(_Bool)arg2 isInitialRelay:(_Bool)arg3 error:(id *)arg4;
- (void)start;
@property id <VCTransportSessionLegacyDelegate> delegate;
- (void)dealloc;
- (id)initWithCallID:(unsigned int)arg1 reportingAgent:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

