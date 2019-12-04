//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <LocationSupport/CLTimerScheduler-Protocol.h>

@class CLTimer, NSRunLoop, NSTimer;

@interface CLRunLoopTimerScheduler : NSObject <CLTimerScheduler>
{
    NSTimer *_underlyingTimer;
    id /* block */ _fireBlock;
    NSRunLoop *_runloop;
    CLTimer *_timer;
}

@property(retain, nonatomic) NSRunLoop *runloop; // @synthesize runloop=_runloop;
@property(copy, nonatomic) id /* block */ fireBlock; // @synthesize fireBlock=_fireBlock;
@property(retain, nonatomic) NSTimer *underlyingTimer; // @synthesize underlyingTimer=_underlyingTimer;
@property(nonatomic) __weak CLTimer *timer; // @synthesize timer=_timer;
- (void)reflectNextFireDelay:(double)arg1 fireInterval:(double)arg2;
- (void)dealloc;
- (id)initWithRunLoopSilo:(id)arg1;

@end

