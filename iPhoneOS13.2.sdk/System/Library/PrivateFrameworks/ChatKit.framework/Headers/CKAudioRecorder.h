//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ChatKit/CKVoiceControllerDelegate-Protocol.h>

@class CKVoiceController, NSDate, NSString, NSURL;
@protocol CKAudioRecorderDelegate;

@interface CKAudioRecorder : NSObject <CKVoiceControllerDelegate>
{
    _Bool _recording;
    _Bool _recordingEmpty;
    _Bool _cancelled;
    _Bool _shouldPlayStartSound;
    _Bool _shouldPlayStopSound;
    id <CKAudioRecorderDelegate> _delegate;
    CKVoiceController *_voiceController;
    NSURL *_fileURL;
    NSDate *_startDate;
    id /* block */ _completion;
    struct OpaqueAudioFileID *_fileID;
    long long _totalPacketsCount;
}

@property(nonatomic) long long totalPacketsCount; // @synthesize totalPacketsCount=_totalPacketsCount;
@property(nonatomic) struct OpaqueAudioFileID *fileID; // @synthesize fileID=_fileID;
@property(nonatomic) _Bool shouldPlayStopSound; // @synthesize shouldPlayStopSound=_shouldPlayStopSound;
@property(nonatomic) _Bool shouldPlayStartSound; // @synthesize shouldPlayStartSound=_shouldPlayStartSound;
@property(copy, nonatomic) id /* block */ completion; // @synthesize completion=_completion;
@property(retain, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(retain, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
@property(retain, nonatomic) CKVoiceController *voiceController; // @synthesize voiceController=_voiceController;
@property(nonatomic, getter=isCancelled) _Bool cancelled; // @synthesize cancelled=_cancelled;
@property(nonatomic, getter=isRecordingEmpty) _Bool recordingEmpty; // @synthesize recordingEmpty=_recordingEmpty;
@property(nonatomic, getter=isRecording) _Bool recording; // @synthesize recording=_recording;
@property(nonatomic) __weak id <CKAudioRecorderDelegate> delegate; // @synthesize delegate=_delegate;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)resetState;
- (void)voiceController:(id)arg1 didUpdateAveragePower:(float)arg2;
- (void)voiceControllerRecordBufferAvailable:(id)arg1 buffer:(id)arg2;
- (void)voiceControllerDidFinishRecording:(id)arg1 successfully:(_Bool)arg2;
- (void)voiceControllerDidStartRecording:(id)arg1;
- (void)voiceControllerDidDetectStartpoint:(id)arg1;
- (void)cancelRecording;
- (void)stopRecordingAndPlaySound:(_Bool)arg1 completion:(id /* block */)arg2;
- (void)stopRecording:(id /* block */)arg1;
- (void)startRecordingForRaiseGesture:(_Bool)arg1 shouldPlaySound:(_Bool)arg2;
- (void)startRecordingAndPlaySound:(_Bool)arg1;
- (void)startRecordingForRaiseGesture;
@property(readonly, nonatomic) double duration;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

