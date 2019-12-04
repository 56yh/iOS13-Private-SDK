//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AXMediaUtilities/AXMOutputComponent.h>

#import <AXMediaUtilities/AVSpeechSynthesizerDelegate-Protocol.h>

@class AVSpeechSynthesizer, NSString;

@interface AXMSpeechComponent : AXMOutputComponent <AVSpeechSynthesizerDelegate>
{
    AVSpeechSynthesizer *_synthesizer;
    id /* block */ _currentRequestCompletionBlock;
}

+ (_Bool)isSupported;
@property(copy, nonatomic) id /* block */ currentRequestCompletionBlock; // @synthesize currentRequestCompletionBlock=_currentRequestCompletionBlock;
@property(retain, nonatomic) AVSpeechSynthesizer *synthesizer; // @synthesize synthesizer=_synthesizer;
- (void)speechSynthesizer:(id)arg1 didContinueSpeechUtterance:(id)arg2;
- (void)speechSynthesizer:(id)arg1 didPauseSpeechUtterance:(id)arg2;
- (void)speechSynthesizer:(id)arg1 didCancelSpeechUtterance:(id)arg2;
- (void)speechSynthesizer:(id)arg1 didFinishSpeechUtterance:(id)arg2;
- (void)speechSynthesizer:(id)arg1 didStartSpeechUtterance:(id)arg2;
- (void)stopSpeakingAtNextWord;
- (void)stopSpeakingImmediately;
- (void)handleRequest:(id)arg1 completion:(id /* block */)arg2;
- (_Bool)canHandleRequest:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

