//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class NSData, NSError;

@protocol CSVTUIAudioSessionDelegate 
- (void)audioSessionErrorDidOccur:(NSError *)arg1;
- (void)audioSessionUnsupportedAudioRoute;
- (void)audioSessionRecordBufferAvailable:(NSData *)arg1;
- (void)audioSessionDidStopRecording:(long long)arg1;
- (void)audioSessionDidStartRecording:(_Bool)arg1 error:(NSError *)arg2;
@end

