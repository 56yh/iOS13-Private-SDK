//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSTimer;

@interface NTKDelayedBlock : NSObject
{
    _Bool _canceled;
    _Bool _invalidated;
    double _delay;
    NSString *_runLoopMode;
    id /* block */ _action;
    NSTimer *_timer;
}

@property(nonatomic) _Bool invalidated; // @synthesize invalidated=_invalidated;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) _Bool canceled; // @synthesize canceled=_canceled;
@property(copy, nonatomic) id /* block */ action; // @synthesize action=_action;
@property(copy, nonatomic) NSString *runLoopMode; // @synthesize runLoopMode=_runLoopMode;
@property(nonatomic) double delay; // @synthesize delay=_delay;
- (void)cancel;
- (void)timerFired:(id)arg1;
- (void)resetWithDelay:(double)arg1;
- (void)reset;
- (void)dealloc;
- (id)initWithDelay:(double)arg1 runLoopMode:(id)arg2 action:(id /* block */)arg3;
- (id)initWithDelay:(double)arg1 action:(id /* block */)arg2;

@end

