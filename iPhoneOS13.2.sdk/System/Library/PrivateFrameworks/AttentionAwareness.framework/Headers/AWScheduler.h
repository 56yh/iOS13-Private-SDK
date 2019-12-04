//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AWAttentionSampler, NSMutableArray;
@protocol AWSchedulerObserver, OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface AWScheduler : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_timer;
    NSMutableArray *_clients;
    AWAttentionSampler *_attentionSampler;
    id <AWSchedulerObserver> _observer;
}

+ (id)sharedUnitTestScheduler;
+ (id)sharedScheduler;
@property(readonly, nonatomic) AWAttentionSampler *attentionSampler; // @synthesize attentionSampler=_attentionSampler;
@property(nonatomic) __weak id <AWSchedulerObserver> observer; // @synthesize observer=_observer;
- (void)reevaluate;
- (void)armEvents;
- (void)setSmartCoverClosed:(_Bool)arg1;
- (void)processHIDEvent:(struct __IOHIDEvent *)arg1 mask:(unsigned long long)arg2 timestamp:(unsigned long long)arg3;
- (void)removeInvalidClients;
- (void)removeInvalidClientsWithConnection:(id)arg1;
- (void)addClient:(id)arg1;
- (id)description;
- (id)initForUnitTest:(_Bool)arg1;

@end

