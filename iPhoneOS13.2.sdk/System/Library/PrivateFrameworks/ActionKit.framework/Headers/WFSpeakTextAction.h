//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WorkflowKit/WFAction.h>

#import <ActionKit/AVSpeechSynthesizerDelegate-Protocol.h>

@class AVSpeechSynthesizer, NSString;

@interface WFSpeakTextAction : WFAction <AVSpeechSynthesizerDelegate>
{
    AVSpeechSynthesizer *_synthesizer;
}

@property(retain, nonatomic) AVSpeechSynthesizer *synthesizer; // @synthesize synthesizer=_synthesizer;
- (id)languagePickerParameter;
- (id)voicePickerParameter;
- (void)cleanupSpeechSynthesizer;
- (void)speechSynthesizer:(id)arg1 didCancelSpeechUtterance:(id)arg2;
- (void)speechSynthesizer:(id)arg1 didFinishSpeechUtterance:(id)arg2;
- (void)speechSynthesizer:(id)arg1 willSpeakRangeOfSpeechString:(struct _NSRange)arg2 utterance:(id)arg3;
- (void)speakTextUsingSynthesizer:(id)arg1 voice:(id)arg2 rate:(float)arg3 pitch:(float)arg4 waitUntilFinished:(_Bool)arg5;
- (void)speakTextUsingVoiceOver:(id)arg1 languageCode:(id)arg2 pitch:(float)arg3 waitUntilFinished:(_Bool)arg4;
- (void)initializeParameters;
- (void)cancel;
- (void)runAsynchronouslyWithInput:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
