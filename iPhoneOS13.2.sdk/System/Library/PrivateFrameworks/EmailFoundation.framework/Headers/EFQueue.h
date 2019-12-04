//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray;
@protocol EFQueueingStrategy;

@interface EFQueue : NSObject
{
    NSMutableArray *_buffer;
    id <EFQueueingStrategy> _strategy;
}

+ (id)bufferedQueueWithCapacity:(unsigned long long)arg1 batchHandler:(id /* block */)arg2;
+ (id)boundedQueueWithCapacity:(unsigned long long)arg1;
+ (id)boundedQueueWithCapacity:(unsigned long long)arg1 overflowHandler:(id /* block */)arg2;
+ (id)priorityQueueWithComparator:(id /* block */)arg1;
@property(readonly, nonatomic) id <EFQueueingStrategy> strategy; // @synthesize strategy=_strategy;
@property(readonly, nonatomic) NSMutableArray *buffer; // @synthesize buffer=_buffer;
@property(readonly, nonatomic) NSArray *allObjects;
- (id)drain;
- (void)dequeueObject:(id)arg1;
- (id)dequeue;
- (id)peek;
- (void)enqueue:(id)arg1 replaceIfExists:(_Bool)arg2;
- (void)enqueue:(id)arg1;
@property(readonly, nonatomic) unsigned long long count;
- (id)description;
- (id)debugDescription;
- (id)initWithStrategy:(id)arg1;
- (id)init;

@end

