//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class TURepeatingActor;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface TUSoundPlayer : NSObject
{
    unsigned int _soundID;
    NSObject<OS_dispatch_queue> *_queue;
    TURepeatingActor *_repeatingActor;
}

@property(readonly, nonatomic) TURepeatingActor *repeatingActor; // @synthesize repeatingActor=_repeatingActor;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic, getter=isPlaying) _Bool playing;
- (void)stopPlaying;
- (void)playSound:(unsigned int)arg1 iterations:(unsigned long long)arg2 pauseDurationBetweenIterations:(double)arg3 completion:(id /* block */)arg4;
- (void)playSound:(unsigned int)arg1 iterations:(unsigned long long)arg2 pauseDurationBetweenIterations:(double)arg3;
- (void)playSoundIndefinitely:(unsigned int)arg1 pauseDurationBetweenIterations:(double)arg2;
- (void)playSound:(unsigned int)arg1;
@property(nonatomic) unsigned int soundID; // @synthesize soundID=_soundID;
- (id)init;

@end

