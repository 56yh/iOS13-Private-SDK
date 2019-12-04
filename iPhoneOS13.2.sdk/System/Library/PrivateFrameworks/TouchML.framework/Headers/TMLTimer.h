//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSTimer;

@interface TMLTimer : NSObject
{
    NSTimer *_timer;
    id /* block */ _block;
    _Bool _repeats;
    _Bool _running;
    double _interval;
    double _tolerance;
    NSString *_runLoopMode;
}

+ (void)initializeJSContext:(id)arg1;
+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;
@property(copy, nonatomic) id /* block */ block; // @synthesize block=_block;
@property(copy, nonatomic) NSString *runLoopMode; // @synthesize runLoopMode=_runLoopMode;
@property(nonatomic) _Bool running; // @synthesize running=_running;
@property(nonatomic) double tolerance; // @synthesize tolerance=_tolerance;
@property(nonatomic) double interval; // @synthesize interval=_interval;
@property(nonatomic) _Bool repeats; // @synthesize repeats=_repeats;
- (void)fire;
- (void)stop;
- (void)start;
- (void)timerFired:(id)arg1;
- (void)tmlDispose;

@end

