//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class NSArray, NSError, NSString, UIDictationConnection, UIDictationConnectionOptions, UIDictationSerializableResults;

@protocol UIDictationConnectionDelegate 
- (void)dictationConnection:(UIDictationConnection *)arg1 didDetectLanguage:(NSString *)arg2;
- (void)dictationConnection:(UIDictationConnection *)arg1 didReceiveSearchResults:(NSArray *)arg2 recognizedText:(NSString *)arg3 stable:(_Bool)arg4 final:(_Bool)arg5;
- (void)dictationConnnectionDidChangeAvailability:(UIDictationConnection *)arg1;
- (void)dictationConnectionDidCancel:(UIDictationConnection *)arg1;
- (void)dictationConnectionDidFinish:(UIDictationConnection *)arg1;
- (void)dictationConnection:(UIDictationConnection *)arg1 finalizePhrases:(UIDictationSerializableResults *)arg2 languageModel:(NSString *)arg3 correctionIdentifier:(id)arg4 secureInput:(_Bool)arg5;
- (void)dictationConnection:(UIDictationConnection *)arg1 receivedInterpretation:(NSString *)arg2 languageModel:(NSString *)arg3 secureInput:(_Bool)arg4;
- (void)dictationConnection:(UIDictationConnection *)arg1 didFailRecognitionWithError:(NSError *)arg2;
- (void)dictationConnection:(UIDictationConnection *)arg1 didFailRecordingWithError:(NSError *)arg2;
- (void)dictationConnectionDidCancelIncompatibleLocalRecognizer:(UIDictationConnection *)arg1;
- (void)dictationConnectionDidCancelRecording:(UIDictationConnection *)arg1;
- (void)dictationConnectionDidEndRecording:(UIDictationConnection *)arg1;
- (void)dictationConnectionDidStartRecording:(UIDictationConnection *)arg1;
- (void)dictationConnectionWillStartRecording:(UIDictationConnection *)arg1;
- (void)dictationConnection:(UIDictationConnection *)arg1 updateOptions:(UIDictationConnectionOptions *)arg2;
@end

