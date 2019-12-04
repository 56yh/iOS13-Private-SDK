//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreSuggestionsInternals/SGDHarvestQueue.h>

@class NSArray, SGDHarvestQueueInMemory, SGDHarvestQueueLegacy, SGDHarvestQueueOnDisk;

@interface SGDHarvestQueueCombo : SGDHarvestQueue
{
    NSArray *_backends;
    struct _opaque_pthread_mutex_t _lock;
    SGDHarvestQueueOnDisk *_onDisk;
    SGDHarvestQueueLegacy *_legacyHighPriority;
    SGDHarvestQueueLegacy *_legacyLowPriority;
    SGDHarvestQueueInMemory *_inMemory;
}

@property(readonly, nonatomic) SGDHarvestQueueInMemory *inMemory; // @synthesize inMemory=_inMemory;
@property(readonly, nonatomic) SGDHarvestQueueLegacy *legacyLowPriority; // @synthesize legacyLowPriority=_legacyLowPriority;
@property(readonly, nonatomic) SGDHarvestQueueLegacy *legacyHighPriority; // @synthesize legacyHighPriority=_legacyHighPriority;
@property(readonly, nonatomic) SGDHarvestQueueOnDisk *onDisk; // @synthesize onDisk=_onDisk;
- (void)close;
- (void)countHighPriorityItems:(unsigned long long *)arg1 lowPriorityItems:(unsigned long long *)arg2;
- (unsigned long long)count;
- (void)popBySourceKey:(id)arg1 messageId:(id)arg2 callback:(id /* block */)arg3;
- (void)popByItemId:(long long)arg1 callback:(id /* block */)arg2;
- (void)popHighPriority:(id /* block */)arg1;
- (void)pop:(id /* block */)arg1;
- (void)addItemWithSourceKey:(id)arg1 messageId:(id)arg2 highPriority:(_Bool)arg3 item:(id)arg4 callback:(id /* block */)arg5;
- (id)backends;
- (void)dealloc;
- (id)initWithOnDiskQueue:(id)arg1 legacyHighPriority:(id)arg2 legacyLowPriority:(id)arg3 inMemoryCache:(id)arg4;

@end

