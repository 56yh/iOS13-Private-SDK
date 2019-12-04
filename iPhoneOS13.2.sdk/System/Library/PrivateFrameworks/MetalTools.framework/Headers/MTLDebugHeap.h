//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MetalTools/MTLToolsHeap.h>

@class MTLDebugDevice;

@interface MTLDebugHeap : MTLToolsHeap
{
    struct os_unfair_lock_s _historyLock;
    struct HeapHistoryEvent *_oldestEvent;
    struct HeapHistoryEvent *_latestEvent;
    MTLDebugDevice *_debugDevice;
}

@property(readonly, nonatomic) MTLDebugDevice *debugDevice; // @synthesize debugDevice=_debugDevice;
@property(nonatomic) struct HeapHistoryEvent *latestEvent; // @synthesize latestEvent=_latestEvent;
@property(nonatomic) struct HeapHistoryEvent *oldestEvent; // @synthesize oldestEvent=_oldestEvent;
- (id)newTextureWithDescriptor:(id)arg1 offset:(unsigned long long)arg2;
- (id)newBufferWithLength:(unsigned long long)arg1 options:(unsigned long long)arg2 offset:(unsigned long long)arg3;
- (void)validateOffset:(unsigned long long)arg1 withRequirements:(CDStruct_4bcfbbae)arg2;
- (unsigned long long)setPurgeableState:(unsigned long long)arg1;
- (id)newTextureWithDescriptor:(id)arg1;
- (id)newBufferWithLength:(unsigned long long)arg1 options:(unsigned long long)arg2;
- (unsigned long long)maxAvailableSizeWithAlignment:(unsigned long long)arg1;
- (void)accessHistoryEventsUsingBlock:(id /* block */)arg1;
- (void)removeResourceFromHistory:(id)arg1;
- (void)addResourceToHistory:(id)arg1 madeAliasable:(_Bool)arg2;
- (void)dealloc;
- (id)initWithHeap:(id)arg1 device:(id)arg2;
- (void)validateHeapTextureUsage:(unsigned long long)arg1 options:(unsigned long long)arg2;
- (void)validateHeapResourceOptions:(unsigned long long)arg1 isTexture:(_Bool)arg2 isIOSurface:(_Bool)arg3;
- (void)validatePixelFormatWithHeap:(unsigned long long)arg1;

@end

