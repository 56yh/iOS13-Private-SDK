//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SAObjects/SATTSSpeechSynthesisStreaming.h>

@class NSString, SATTSSpeechSynthesisResource, SATTSSpeechSynthesisVoice, SAUIAudioDescription;

@interface SATTSSpeechSynthesisStreamingBegin : SATTSSpeechSynthesisStreaming
{
}

+ (id)speechSynthesisStreamingBeginWithDictionary:(id)arg1 context:(id)arg2;
+ (id)speechSynthesisStreamingBegin;
- (_Bool)requiresResponse;
@property(copy, nonatomic) NSString *text;
@property(nonatomic) float streamingPlaybackBufferSize;
@property(retain, nonatomic) SATTSSpeechSynthesisVoice *speechSynthesisVoice;
@property(retain, nonatomic) SATTSSpeechSynthesisResource *speechSynthesisResource;
@property(retain, nonatomic) SAUIAudioDescription *playerStreamDescription;
@property(retain, nonatomic) SAUIAudioDescription *decoderStreamDescription;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

