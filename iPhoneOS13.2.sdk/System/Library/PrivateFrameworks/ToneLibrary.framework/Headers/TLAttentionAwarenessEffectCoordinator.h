//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSString;
@protocol OS_dispatch_queue;

@interface TLAttentionAwarenessEffectCoordinator : NSObject
{
    NSString *_accessQueueLabel;
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSMutableSet *_effectAudioTapContexts;
    CDStruct_4922f917 _effectParameters;
}

- (void)_processAudioWithEffectAudioTapContext:(id)arg1 bufferList:(struct AudioBufferList *)arg2 numberOfFramesRequested:(unsigned int)arg3 numberOfFramesToProcess:(unsigned int)arg4;
- (void)_finalizeAudioProcessingWithEffectAudioTapContext:(id)arg1;
- (void)_unprepareAudioProcessingWithEffectAudioTapContext:(id)arg1;
- (void)_prepareAudioProcessingWithEffectAudioTapContext:(id)arg1 maximumNumberOfFrames:(unsigned int)arg2 processingFormat:(const struct AudioStreamBasicDescription *)arg3;
- (_Bool)isAttentionAwarenessAudioMix:(id)arg1;
- (void)setEffectParameters:(CDStruct_4922f917)arg1 effectMixFadeDuration:(double)arg2;
@property(nonatomic) CDStruct_4922f917 effectParameters;
- (id)audioMixForAsset:(id)arg1;
- (void)dealloc;
- (id)initWithEffectParameters:(CDStruct_4922f917)arg1;

@end

