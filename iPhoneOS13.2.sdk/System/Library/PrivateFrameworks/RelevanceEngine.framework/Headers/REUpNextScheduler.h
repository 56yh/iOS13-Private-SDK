//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface REUpNextScheduler : NSObject
{
    _Bool _updateScheduled;
    struct os_unfair_lock_s _scheduledLock;
    NSObject<OS_dispatch_queue> *_originalQueue;
    NSObject<OS_dispatch_queue> *_queue;
    double _delay;
    id /* block */ _updateBlock;
    id /* block */ _updateCompletionBlock;
}

+ (id)schedulerWithQueue:(id)arg1 delay:(double)arg2 updateCompletionBlock:(id /* block */)arg3;
+ (id)schedulerWithQueue:(id)arg1 delay:(double)arg2 updateBlock:(id /* block */)arg3;
+ (id)schedulerWithQueue:(id)arg1 updateBlock:(id /* block */)arg2;
@property(readonly, copy, nonatomic) id /* block */ updateCompletionBlock; // @synthesize updateCompletionBlock=_updateCompletionBlock;
@property(readonly, copy, nonatomic) id /* block */ updateBlock; // @synthesize updateBlock=_updateBlock;
@property(readonly, nonatomic) double delay; // @synthesize delay=_delay;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)_queue_performUpdate;
- (void)schedule;
- (_Bool)performImmediately;
@property(readonly, nonatomic) _Bool isScheduled;
- (void)dealloc;
- (id)initWithQueue:(id)arg1 delay:(double)arg2 updateBlock:(id /* block */)arg3 updateCompletionBlock:(id /* block */)arg4;

@end

