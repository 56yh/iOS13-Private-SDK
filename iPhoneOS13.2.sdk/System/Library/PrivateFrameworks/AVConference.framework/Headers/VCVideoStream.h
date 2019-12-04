//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AVConference/VCMediaStream.h>

#import <AVConference/AVCRateControllerDelegate-Protocol.h>
#import <AVConference/VCMediaStreamSyncDestination-Protocol.h>
#import <AVConference/VCRedundancyControllerDelegate-Protocol.h>
#import <AVConference/VCVideoCaptureClient-Protocol.h>
#import <AVConference/VCVideoCaptureConverterDelegate-Protocol.h>
#import <AVConference/VCVideoReceiverDelegate-Protocol.h>

@class AVCRateController, NSArray, NSNumber, NSObject, NSString, VCRedundancyControllerVideo, VCVideoCaptureConverter, VCVideoReceiverBase, VCVideoRule, VCVideoTransmitterBase;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

__attribute__((visibility("hidden")))
@interface VCVideoStream : VCMediaStream <VCVideoReceiverDelegate, VCMediaStreamSyncDestination, VCVideoCaptureClient, VCVideoCaptureConverterDelegate, AVCRateControllerDelegate, VCRedundancyControllerDelegate>
{
    long long _type;
    NSObject<OS_dispatch_queue> *_lastDecodedFrameQueue;
    struct _opaque_pthread_mutex_t _remoteLayerLock;
    struct _opaque_pthread_mutex_t _localLayerLock;
    unsigned int _uplinkOperatingBitrate;
    struct __CVBuffer *_cachedRemoteVideoFrame;
    VCVideoTransmitterBase *_videoTransmitter;
    VCVideoReceiverBase *_videoReceiver;
    VCVideoRule *_videoRule;
    int _reportingModuleID;
    unsigned int _reportingDefaultRealtimePeriod;
    NSObject<OS_dispatch_semaphore> *_bufferQueueSemaphore;
    struct opaqueCMBufferQueue *_bufferQueue;
    VCVideoCaptureConverter *_captureConverter;
    _Bool _isServerBasedBandwidthProbingEnabled;
    unsigned char _lastMediaPriority;
    NSNumber *_targetStreamID;
    NSArray *_compoundStreamIDs;
    NSNumber *_sendingStreamID;
    _Bool _isCompoundStreamIDsIncreased;
    _Bool _shouldEnableFaceZoom;
    _Bool _didReceiveFirstFrame;
    // Error parsing type: AB, name: _isVideoCaptureRegistered
    double _fecRatio;
    int _captureSource;
    unsigned int _screenDisplayID;
    unsigned int _customWidth;
    unsigned int _customHeight;
    unsigned int _tilesPerFrame;
    struct OpaqueFigCFWeakReference *_weakStream;
    AVCRateController *_vcrcRateController;
    VCRedundancyControllerVideo *_redundancyController;
    int _lastDisplayedFromImageQueueCount;
    int _lastDroppedFromImageQueueCount;
    int _networkInterfaceType;
    int _channelSequenceCountWithInactiveSlots;
}

+ (id)capabilities;
+ (id)supportedVideoPayloads;
@property(nonatomic) unsigned int customHeight; // @synthesize customHeight=_customHeight;
@property(nonatomic) unsigned int customWidth; // @synthesize customWidth=_customWidth;
@property(nonatomic) unsigned int screenDisplayID; // @synthesize screenDisplayID=_screenDisplayID;
@property(nonatomic) double fecRatio; // @synthesize fecRatio=_fecRatio;
@property(nonatomic) _Bool didReceiveFirstFrame; // @synthesize didReceiveFirstFrame=_didReceiveFirstFrame;
@property(nonatomic) _Bool shouldEnableFaceZoom; // @synthesize shouldEnableFaceZoom=_shouldEnableFaceZoom;
@property(readonly, nonatomic) _Bool isCompoundStreamIDsIncreased; // @synthesize isCompoundStreamIDsIncreased=_isCompoundStreamIDsIncreased;
@property(readonly, nonatomic) NSNumber *sendingStreamID; // @synthesize sendingStreamID=_sendingStreamID;
@property(readonly, nonatomic) NSArray *compoundStreamIDs; // @synthesize compoundStreamIDs=_compoundStreamIDs;
@property(nonatomic) _Bool isServerBasedBandwidthProbingEnabled; // @synthesize isServerBasedBandwidthProbingEnabled=_isServerBasedBandwidthProbingEnabled;
@property(retain, nonatomic) NSNumber *targetStreamID; // @synthesize targetStreamID=_targetStreamID;
- (void)redundancyController:(id)arg1 redundancyIntervalDidChange:(double)arg2;
- (void)redundancyController:(id)arg1 redundancyPercentageDidChange:(unsigned int)arg2;
- (void)rateController:(void *)arg1 targetBitrateDidChange:(unsigned int)arg2 rateChangeCounter:(unsigned int)arg3;
- (void)handleActiveConnectionChange:(id)arg1;
- (void)collectTxChannelMetrics:(CDStruct_3ab08b48 *)arg1;
- (void)collectRxChannelMetrics:(CDStruct_3ab08b48 *)arg1;
- (void)collectRxChannelMetrics:(CDStruct_3ab08b48 *)arg1 interval:(float)arg2;
- (void)converter:(id)arg1 didConvertFrame:(struct opaqueCMSampleBuffer *)arg2 frameTime:(CDStruct_1b6d18a9)arg3 droppedFrames:(int)arg4 cameraStatusBits:(unsigned char)arg5;
- (void)sourceFrameRateDidChange:(unsigned int)arg1;
- (void)thermalLevelDidChange:(int)arg1;
- (id)clientCaptureRule;
- (void)avConferencePreviewError:(id)arg1;
- (_Bool)onCaptureFrame:(struct opaqueCMSampleBuffer *)arg1 frameTime:(CDStruct_1b6d18a9)arg2 droppedFrames:(int)arg3 cameraStatusBits:(unsigned char)arg4;
- (void)vcVideoReceiver:(id)arg1 didSwitchFromStreamID:(unsigned short)arg2 toStreamID:(unsigned short)arg3;
- (unsigned int)vcVideoReceiver:(id)arg1 receivedTMMBR:(unsigned int)arg2;
- (void)vcVideoReceiver:(id)arg1 downlinkQualityDidChange:(id)arg2;
- (void)vcVideoReceiverRequestKeyFrame:(id)arg1 rtcpPSFBType:(unsigned int)arg2;
- (void)vcVideoReceiver:(id)arg1 requestKeyFrameGenerationWithStreamID:(unsigned short)arg2;
- (_Bool)vcVideoReceiver:(id)arg1 didReceiveRemoteFrame:(struct __CVBuffer *)arg2 atTime:(CDStruct_1b6d18a9)arg3 newVideoAttributes:(id)arg4 isFirstFrame:(_Bool)arg5;
- (void)stopSynchronization;
- (_Bool)startSynchronization:(id)arg1;
- (void)reportingVideoStreamEvent:(unsigned short)arg1 newVideoAttributes:(id)arg2 currentStreamID:(id)arg3;
- (void)reportingVideoStreamEvent:(unsigned short)arg1 newVideoAttributes:(id)arg2;
- (void)reportingVideoStreamEvent:(unsigned short)arg1;
- (void)collectVideoStreamStartMetrics:(struct __CFDictionary *)arg1;
- (void)collectVideoConfigMetrics:(struct __CFDictionary *)arg1;
- (struct __CFDictionary *)getClientSpecificUserInfo;
- (struct __CFString *)getReportingClientName;
- (int)getReportingClientType;
- (void)handleVTPSendFailedWithData:(void *)arg1;
@property(nonatomic) unsigned int targetMediaBitrate;
@property unsigned int lastSentAudioSampleTime;
@property double lastSentAudioHostTime;
- (void)setStreamIDs:(id)arg1 repairStreamIDs:(id)arg2;
- (double)rtcpHeartbeatLeeway;
- (void)onSendRTCPPacket;
- (void)onRTCPTimeout;
- (void)onRTPTimeout;
- (void)onResumeWithCompletionHandler:(id /* block */)arg1;
- (void)onPauseWithCompletionHandler:(id /* block */)arg1;
- (void)onStopWithCompletionHandler:(id /* block */)arg1;
- (void)onStartWithCompletionHandler:(id /* block */)arg1;
- (void)reportTransportInfo;
- (void)initializeInterfaceType;
- (void)initializeInterfaceTypeForSocket;
- (void)initializeInterfaceTypeForNWConnection;
- (void)setupReportingAgent;
- (void)collectChannelSequenceMetrics:(id)arg1;
- (void)collectImageQueuePerformanceMetrics:(struct __CFDictionary *)arg1;
- (void)registerForVideoCapture;
- (void)deregisterForVideoCapture;
- (int)operatingModeForVideoStreamType:(long long)arg1;
- (_Bool)onConfigureStreamWithConfiguration:(id)arg1 error:(id *)arg2;
- (void)onCallIDChanged;
- (id)supportedPayloads;
- (_Bool)validateStreamConfiguration:(id)arg1 error:(id *)arg2;
@property(readonly, nonatomic) unsigned int lastDisplayedFrameRTPTimestamp;
- (void)cleanupBeforeReconfigure:(id)arg1;
- (_Bool)validateVideoStreamConfigurations:(id)arg1;
- (void)sendLastRemoteVideoFrame:(struct __CVBuffer *)arg1;
- (void)cacheRemoteVideoFrame:(struct __CVBuffer *)arg1;
- (void)generateKeyFrame;
- (void)updateSourcePlayoutTimestamp:(CDStruct_1b6d18a9 *)arg1;
- (void)requestLastDecodedFrame;
- (void)updateVideoConfig:(id)arg1;
- (void)dealloc;
- (void)setupVideoStream;
- (id)initWithTransportSessionID:(unsigned int)arg1 ssrc:(unsigned int)arg2 streamToken:(long long)arg3;
- (id)init;
- (double)lastReceivedRTCPPacketTime;
- (double)lastReceivedRTPPacketTime;
- (_Bool)setRTPPayloads:(int *)arg1 numPayloads:(int)arg2 withError:(id *)arg3;
- (void)handleNWConnectionPacketEvent:(struct packet_id *)arg1 eventType:(int)arg2;
- (void)handleNWConnectionNotification:(struct ifnet_interface_advisory *)arg1;
- (void)stopVCRC;
- (void)startVCRCWithStreamConfig:(id)arg1;
- (void)setupCompoundStreamIDsWithStreamIDs:(id)arg1;
- (void)destroyVideoModules;
- (void)destroyVideoReceiver;
- (void)updateVideoReceiver:(id)arg1;
- (_Bool)useUEPForVideoConfig:(int)arg1;
- (void)setupVideoReceiver:(id)arg1 withTransmitterHandle:(struct tagHANDLE *)arg2;
- (struct tagVCVideoReceiverConfig)videoReceiverConfigWithVideoStreamConfig:(id)arg1;
- (unsigned int)numTilesPerFrame;
- (void)destroyVideoTransmitter;
- (void)initVideoTransmitter;
- (id)newVideoTransmitterConfigWithVideoStreamConfig:(id)arg1;
- (void)overrideConfigWithDefaults;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

