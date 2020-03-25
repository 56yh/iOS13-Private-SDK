//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MetalTools/MTLToolsHeap.h>

@class MTLDebugDevice;

@interface MTLDebugHeap : MTLToolsHeap
{
//     struct os_unfair_lock_s _historyLock;
    struct HeapHistoryEvent _oldestEvent;
    struct HeapHistoryEvent _latestEvent;
    MTLDebugDevice *_debugDevice;
}

@property(readonly, nonatomic) MTLDebugDevice *debugDevice; // @synthesize debugDevice=_debugDevice;
@property(nonatomic) struct HeapHistoryEvent latestEvent; // @synthesize latestEvent=_latestEvent;
@property(nonatomic) struct HeapHistoryEvent oldestEvent; // @synthesize oldestEvent=_oldestEvent;
- (id)newTextureWithDescriptor:(id)arg1 offset:(NSUInteger)arg2;
- (id)newBufferWithLength:(NSUInteger)arg1 options:(NSUInteger)arg2 offset:(NSUInteger)arg3;
- (void)validateOffset:(NSUInteger)arg1 withRequirements:(CDStruct_4bcfbbae)arg2;
- (NSUInteger)setPurgeableState:(NSUInteger)arg1;
- (id)newTextureWithDescriptor:(id)arg1;
- (id)newBufferWithLength:(NSUInteger)arg1 options:(NSUInteger)arg2;
- (NSUInteger)maxAvailableSizeWithAlignment:(NSUInteger)arg1;
- (void)accessHistoryEventsUsingBlock:(id /* CDUnknownBlockType */)arg1;
- (void)removeResourceFromHistory:(id)arg1;
- (void)addResourceToHistory:(id)arg1 madeAliasable:(BOOL)arg2;
- (void)dealloc;
- (id)initWithHeap:(id)arg1 device:(id)arg2;
- (void)validateHeapTextureUsage:(NSUInteger)arg1 options:(NSUInteger)arg2;
- (void)validateHeapResourceOptions:(NSUInteger)arg1 isTexture:(BOOL)arg2 isIOSurface:(BOOL)arg3;
- (void)validatePixelFormatWithHeap:(NSUInteger)arg1;

@end
