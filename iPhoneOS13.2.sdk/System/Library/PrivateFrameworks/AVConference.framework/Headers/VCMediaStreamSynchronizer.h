//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AVConference/VCMediaStreamSyncSourceDelegate-Protocol.h>

@class NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VCMediaStreamSynchronizer : NSObject <VCMediaStreamSyncSourceDelegate>
{
    struct tagVCMediaStreamSyncTime _source;
    struct tagVCMediaStreamSyncTime _destination;
    unsigned int _destinationPlayoutSampleRTPTimestamp;
    int _destinationRTPTimestampWraps;
    double _sourcePlayoutSampleSystemTime;
    unsigned int _sourcePlayoutSampleRTPTimestamp;
    int _sourceRTPTimestampWraps;
    int _sourceState;
    NSObject<OS_dispatch_queue> *_mediaStreamSynchronizerQueue;
    struct tagHANDLE *_videoPlayerHandle;
    id /* block */ _destinationHandler;
}

+ (long long)differenceBetweenRtpTimestamp:(unsigned int)arg1 rtpTimestamp:(unsigned int)arg2;
- (void)updateSourceNTPTime:(double)arg1 withRTPTimeStamp:(unsigned int)arg2;
- (void)updateSourcePlayoutSampleRTPTimestamp:(unsigned int)arg1 systemTime:(double)arg2 uuid:(id)arg3;
- (void)updateSourceState:(int)arg1;
- (void)callDestinationAlarmHandlerWithTimestamp:(unsigned int)arg1 isClosing:(_Bool)arg2;
- (double)sourceTimeForDestinationRTPTimestamp:(unsigned int)arg1;
- (void)setDestinationAlarmHandler:(id /* block */)arg1;
- (void)scheduleDestinationPlaybackWithRTPTimestamp:(unsigned int)arg1;
- (void)updateDestinationNTPTime:(double)arg1 withRTPTimeStamp:(unsigned int)arg2;
- (CDStruct_1b6d18a9)calculatePlayoutTimeWithRTPTimestamp:(unsigned int)arg1;
- (void)dealloc;
- (id)initWithSourceSampleRate:(unsigned int)arg1 destinationSampleRate:(unsigned int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

