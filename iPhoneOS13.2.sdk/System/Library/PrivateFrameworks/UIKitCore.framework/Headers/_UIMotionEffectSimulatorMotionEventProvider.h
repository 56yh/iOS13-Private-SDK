//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/_UIMotionEffectEventProvider.h>

@class NSOperationQueue;

__attribute__((visibility("hidden")))
@interface _UIMotionEffectSimulatorMotionEventProvider : _UIMotionEffectEventProvider
{
    NSOperationQueue *_motionEventQueue;
    _Bool _shouldGenerateEvents;
    _Bool _startedSimulatorUpdates;
}

- (void)stopGeneratingEvents;
- (void)startGeneratingEvents;
- (void)dealloc;
- (id)init;

@end

