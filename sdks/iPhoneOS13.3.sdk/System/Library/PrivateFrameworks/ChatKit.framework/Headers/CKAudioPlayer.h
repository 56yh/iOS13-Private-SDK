//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ChatKit/CKInternalAudioPlayerDelegate-Protocol.h>

@class CADisplayLink, CKInternalAudioPlayer, CKMediaObject;
@protocol CKAudioPlayerDelegate;

__attribute__((visibility("hidden")))
@interface CKAudioPlayer : NSObject <CKInternalAudioPlayerDelegate>
{
    CKMediaObject *_mediaObject;
    id <CKAudioPlayerDelegate> _delegate;
    CKInternalAudioPlayer *_audioPlayer;
    CADisplayLink *_displayLink;
    double _prevCurrentTime;
    id /* CDUnknownBlockType */ _block;
}

@property(copy, nonatomic) id /* CDUnknownBlockType */ block; // @synthesize block=_block;
@property(nonatomic) double prevCurrentTime; // @synthesize prevCurrentTime=_prevCurrentTime;
@property(retain, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(retain, nonatomic) CKInternalAudioPlayer *audioPlayer; // @synthesize audioPlayer=_audioPlayer;
@property(nonatomic) __weak id <CKAudioPlayerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) CKMediaObject *mediaObject; // @synthesize mediaObject=_mediaObject;
// - (void).cxx_destruct;
- (void)displayLinkFired:(id)arg1;
- (void)internalAudioPlayerDidPrepareAudioForPlaying:(id)arg1 successfully:(BOOL)arg2;
- (void)internalAudioPlayerDidFinishPlaying:(id)arg1 successfully:(BOOL)arg2;
@property(nonatomic) float volume;
@property(readonly, nonatomic) double duration;
@property(readonly, nonatomic) double currentTime;
@property(readonly, nonatomic, getter=isPlaying) BOOL playing;
- (void)prepareToPlay;
- (void)pause;
- (void)stop;
@property(readonly, nonatomic) BOOL usesAVPlayer;
- (void)playAfterDelay:(double)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (id)initWithFileURL:(id)arg1;
- (id)initWithMediaObject:(id)arg1 shouldUseAVPlayer:(BOOL)arg2;
- (id)initWithMediaObject:(id)arg1;
- (void)dealloc;

@end

