//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue, OS_dispatch_source;

@interface FPGracePeriodTimer : NSObject
{
    id /* block */ _action;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    double _delay;
    NSObject<OS_dispatch_source> *_timer;
    double _expectedFiringTimeSinceReferenceDate;
}

- (id)prettyDescription;
- (void)suppress;
- (void)arm;
- (void)_createTimer;
- (id)initWithAction:(id /* block */)arg1 callbackQueue:(id)arg2 delay:(double)arg3;

@end

