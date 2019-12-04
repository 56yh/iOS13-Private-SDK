//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Home/HFCameraLiveStreamControlling-Protocol.h>
#import <Home/HFCameraObserver-Protocol.h>

@class HFCameraAudioManager, HMCameraProfile, HMCameraSource, HMHome, NSError, NSString;
@protocol HFCameraLiveStreamControllerDelegate;

@interface HFCameraLiveStreamController : NSObject <HFCameraObserver, HFCameraLiveStreamControlling>
{
    _Bool _microphoneEnabled;
    _Bool _streamAudioEnabled;
    _Bool _startStreamingAfterStop;
    float _streamAudioVolume;
    id <HFCameraLiveStreamControllerDelegate> _delegate;
    HMCameraSource *_liveCameraSource;
    NSError *_streamError;
    HMHome *_home;
    HMCameraProfile *_cameraProfile;
    HFCameraAudioManager *_audioManager;
    unsigned long long _inferredStreamState;
}

@property(nonatomic) _Bool startStreamingAfterStop; // @synthesize startStreamingAfterStop=_startStreamingAfterStop;
@property(nonatomic) unsigned long long inferredStreamState; // @synthesize inferredStreamState=_inferredStreamState;
@property(retain, nonatomic) HFCameraAudioManager *audioManager; // @synthesize audioManager=_audioManager;
@property(readonly, nonatomic) HMCameraProfile *cameraProfile; // @synthesize cameraProfile=_cameraProfile;
@property(readonly, nonatomic) HMHome *home; // @synthesize home=_home;
@property(nonatomic) float streamAudioVolume; // @synthesize streamAudioVolume=_streamAudioVolume;
@property(nonatomic, getter=isStreamAudioEnabled) _Bool streamAudioEnabled; // @synthesize streamAudioEnabled=_streamAudioEnabled;
@property(nonatomic, getter=isMicrophoneEnabled) _Bool microphoneEnabled; // @synthesize microphoneEnabled=_microphoneEnabled;
@property(nonatomic) __weak id <HFCameraLiveStreamControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)cameraStreamControl:(id)arg1 didStopStreamWithError:(id)arg2;
- (void)cameraStreamControlDidStartStream:(id)arg1;
- (void)cameraSnapshotControlDidUpdateMostRecentSnapshot:(id)arg1;
- (void)cameraStreamControlDidUpdateManagerState:(id)arg1;
- (void)cameraStreamControlDidUpdateStreamState:(id)arg1;
- (unsigned long long)_derivedAudioStreamSetting;
- (void)_updateAudioManagerState;
- (id)mostRecentSnapshot;
- (id)activeStream;
@property(readonly, nonatomic, getter=isStreamingEnabled) _Bool streamingEnabled;
- (void)stopStreaming;
- (void)startStreaming;
@property(readonly, nonatomic) NSError *streamError; // @synthesize streamError=_streamError;
@property(readonly, nonatomic) HMCameraSource *liveCameraSource; // @synthesize liveCameraSource=_liveCameraSource;
@property(readonly, nonatomic) unsigned long long streamState;
- (void)dealloc;
- (id)initWithHome:(id)arg1 cameraProfile:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

