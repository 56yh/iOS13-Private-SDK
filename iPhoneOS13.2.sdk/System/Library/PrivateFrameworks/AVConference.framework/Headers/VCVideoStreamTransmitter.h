//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AVConference/VCVideoTransmitterBase.h>

@class AVCStatisticsCollector, NSObject, VCMediaStreamStats;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

__attribute__((visibility("hidden")))
@interface VCVideoStreamTransmitter : VCVideoTransmitterBase
{
    struct tagHANDLE *_videoRTP;
    NSObject<OS_dispatch_queue> *_transmitterQueue;
    struct tagVCRealTimeThread *_encoderThread;
    _Bool _terminateEncoderThread;
    NSObject<OS_dispatch_semaphore> *_bufferQueueSemaphore;
    struct opaqueCMSampleBuffer *_savedSampleBuffer;
    struct opaqueCMBufferQueue *_bufferQueue;
    char *_buffer;
    unsigned long long _bufferSize;
    int _packetBufferSize;
    char *_packetBuffer;
    int _maxPacketCount;
    int *_packetSizes;
    int *_packetFlags;
    unsigned long long _lastKeyFrameSampleBufferSize;
    int _iSMBCount;
    unsigned int _keyFrameIntervalDuration;
    unsigned short _recommendedMTU;
    long long _videoCodecType;
    int _videoSource;
    unsigned int _dwRefreshFrameCounter;
    struct _opaque_pthread_mutex_t _xMBs;
    int _shouldGenerateKeyFrame;
    VCMediaStreamStats *_stats;
    double _reportingIntervalStartTime;
    double _reportingLastUpdateTime;
    unsigned char _lastCameraStatusBits;
    _Bool _enableCVO;
    unsigned long long _cvoExtensionID;
    struct opaqueRTCReporting *_reportingAgent;
    int _reportingModuleID;
    struct {
        struct *encoderVTable;
        int type;
        struct tagHANDLE *encoderHandle;
    } _encoder;
    struct tagVCMemoryPool *_encodingArgPool;
    _Bool _forceDisableBitrateCap;
    AVCStatisticsCollector *_statisticsCollector;
    unsigned int _totalPacketsSent;
    unsigned long long _totalBytesSent;
    unsigned int _tilesPerFrame;
    unsigned int _totalKeyFramesSent;
    struct __CFAllocator *_videoPacketAllocator;
}

- (void)handleActiveConnectionChange:(id)arg1;
- (void)reportingVideoStreamEvent:(unsigned short)arg1;
- (void)gatherRealtimeStats:(struct __CFDictionary *)arg1;
- (void)updateSendStatisticsWithTimestamp:(unsigned int)arg1 frameSize:(unsigned int)arg2 packetsInFrame:(unsigned int)arg3;
- (int)transmitVideoPackets:(const char *)arg1 packetSizes:(int *)arg2 startPacket:(int)arg3 packetCount:(int)arg4 lastGroup:(int)arg5 timestamp:(unsigned int)arg6 hostTime:(double)arg7 cameraStatusBits:(unsigned char)arg8 bytesSent:(int *)arg9;
- (int)transmitFrameInGroups:(char *)arg1 numOfPackets:(int)arg2 timestamp:(unsigned int)arg3 hostTime:(double)arg4 cameraStatusBits:(unsigned char)arg5;
- (int)transmitEncodedVideoFrame:(char *)arg1 size:(unsigned long long)arg2 timestamp:(unsigned int)arg3 hostTime:(double)arg4 cameraStatusBits:(unsigned char)arg5;
- (void)transmitEncodedVideoFrame:(struct opaqueCMSampleBuffer *)arg1 cameraStatusBits:(unsigned char)arg2;
- (_Bool)isKeyFrame:(struct opaqueCMSampleBuffer *)arg1;
- (_Bool)prependSPSPPS:(unsigned long long *)arg1 dataPointer:(char *)arg2;
- (void)encodeVideoFrame:(struct opaqueCMSampleBuffer *)arg1;
- (struct __CFDictionary *)forceKeyFrameProperties;
- (void)initVideoCompressionWithWidth:(unsigned int)arg1 height:(unsigned int)arg2 bitrate:(unsigned int)arg3 keyFrameIntervalDuration:(unsigned int)arg4;
- (void)setFECRatio:(double)arg1;
- (void)setStreamIDs:(unsigned short *)arg1 numOfStreamIDs:(unsigned char)arg2 repairedStreamIDs:(unsigned short *)arg3 numOfRepairedStreamIDs:(unsigned char)arg4;
- (void)setKeyFrameOnlyStreamID:(unsigned short)arg1;
- (void)setTargetBitrate:(unsigned int)arg1;
- (unsigned int)setTemporaryMaximumBitrate:(unsigned int)arg1;
- (void)generateKeyFrame;
- (_Bool)enqueueVideoFrame:(struct opaqueCMSampleBuffer *)arg1 frameTime:(CDStruct_1b6d18a9)arg2 droppedFrames:(int)arg3 cameraStatusBits:(unsigned char)arg4;
- (void)stopVideo;
- (void)startVideo;
- (void)dealloc;
- (id)initWithConfig:(id)arg1;

@end

