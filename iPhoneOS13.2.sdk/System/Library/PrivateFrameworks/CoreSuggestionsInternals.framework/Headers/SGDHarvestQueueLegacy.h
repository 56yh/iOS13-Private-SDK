//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreSuggestionsInternals/SGDHarvestQueue.h>

@class SGDWorkQueue;

@interface SGDHarvestQueueLegacy : SGDHarvestQueue
{
    SGDWorkQueue *_workQueue;
    _Bool _highPriority;
}

- (void)close;
- (void)countHighPriorityItems:(unsigned long long *)arg1 lowPriorityItems:(unsigned long long *)arg2;
- (unsigned long long)count;
- (void)popBySourceKey:(id)arg1 messageId:(id)arg2 callback:(id /* block */)arg3;
- (void)popByItemId:(long long)arg1 callback:(id /* block */)arg2;
- (void)pop:(id /* block */)arg1;
- (void)addItemWithSourceKey:(id)arg1 messageId:(id)arg2 highPriority:(_Bool)arg3 item:(id)arg4 callback:(id /* block */)arg5;
- (id)initWithDirectory:(id)arg1 highPriority:(_Bool)arg2;

@end

