//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface IKConcurrentEvaluator : NSObject
{
    NSMutableArray *_orderedKeys;
    NSMutableDictionary *_fetchers;
    NSMutableDictionary *_getters;
    long long _activeFetchCount;
    long long _numberOfSchedulingLocksAcquired;
    NSObject<OS_dispatch_semaphore> *_schedulingLock;
    NSObject<OS_dispatch_queue> *_queue;
    long long _concurrencyCount;
}

+ (id)idleEvaluator;
@property(readonly, nonatomic) long long concurrencyCount; // @synthesize concurrencyCount=_concurrencyCount;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
// - (void).cxx_destruct;
- (void)_scheduleFetchRelayed:(BOOL)arg1;
- (id /* CDUnknownBlockType */)_getterForKey:(id)arg1;
- (id /* CDUnknownBlockType */)_removeFetcherForKey:(id)arg1;
- (void)_insertFetcher:(id /* CDUnknownBlockType */)arg1 getter:(id /* CDUnknownBlockType */)arg2 forKey:(id)arg3;
- (void)lockSchedulingForEvaluation:(id /* CDUnknownBlockType */)arg1;
- (id)objectForKey:(id)arg1;
- (void)addEvaluationBlock:(id /* CDUnknownBlockType */)arg1 forKey:(id)arg2;
- (id)initWithQueue:(id)arg1 concurrencyCount:(long long)arg2;
- (id)initWithQueue:(id)arg1;

@end

