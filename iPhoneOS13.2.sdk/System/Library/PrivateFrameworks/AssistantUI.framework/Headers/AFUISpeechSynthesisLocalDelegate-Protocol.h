//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class AFSpeechSynthesisRecord, AFUISpeechSynthesis;

@protocol AFUISpeechSynthesisLocalDelegate 
- (void)speechSynthesisDidFinish:(AFSpeechSynthesisRecord *)arg1;
- (_Bool)speechSynthesisConnectionIsRecording:(AFUISpeechSynthesis *)arg1;
- (void)speechSynthesis:(AFUISpeechSynthesis *)arg1 prepareForSpeakingWithOptions:(unsigned long long)arg2 completion:(void (^)(unsigned int, NSError *))arg3;
- (void)stopCurrentRecordingForSpeechSynthesis:(AFUISpeechSynthesis *)arg1;
@end

