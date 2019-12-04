//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Metal/_MTLCommandBuffer.h>

#import <MTLSimDriver/MTLCommandBufferSPI-Protocol.h>
#import <MTLSimDriver/MTLSerializerCommandStream-Protocol.h>

@class MTLResourceList, NSDictionary, NSError, NSMutableDictionary, NSString;
@protocol MTLCommandQueue, MTLDevice;

__attribute__((visibility("hidden")))
@interface MTLSimCommandBuffer : _MTLCommandBuffer <MTLCommandBufferSPI, MTLSerializerCommandStream>
{
    struct StorageEntry *commandHead;
    struct BufferStorageEntry *bufferHead;
    unsigned long long segmentCount;
    struct StorageEntry *commandCurrentStorage;
    struct StorageEntry *commandTail;
    struct StorageEntry *commandPrevious;
    struct BufferStorageEntry *bufferCurrentStorage;
    unsigned long long currentStorageOffset;
    _Bool continuation;
    unsigned int _reference;
    unsigned long long _protectionOptions;
    MTLResourceList *_resourceList;
    id <MTLDevice> device;
    id /* block */ splitHandler;
}

@property(copy) id /* block */ splitHandler; // @synthesize splitHandler;
@property(readonly) id <MTLDevice> device; // @synthesize device;
- (unsigned long long)protectionOptions;
- (void)setProtectionOptions:(unsigned long long)arg1;
- (void)addPurgedResource:(id)arg1;
- (void)addPurgedHeap:(id)arg1;
- (void)beginContinuation;
- (void)merge:(id)arg1;
- (void *)getCommandBufferBytes:(unsigned long long)arg1;
- (void)endEncoding;
- (void)split;
- (void *)getBufferBytes:(unsigned long long)arg1 alignment:(unsigned long long)arg2 buffer:(id *)arg3 offset:(unsigned long long *)arg4;
- (_Bool)addStateReference:(id)arg1;
- (_Bool)addResourceReference:(id)arg1 isWrite:(_Bool)arg2;
- (id)resourceStateCommandEncoder;
- (void)encodeWaitForEvent:(id)arg1 value:(unsigned long long)arg2;
- (void)encodeWaitForEvent:(id)arg1 value:(unsigned long long)arg2 timeout:(unsigned int)arg3;
- (void)encodeSignalEvent:(id)arg1 value:(unsigned long long)arg2;
- (void *)getCommandBytes:(unsigned long long)arg1 forCommand:(unsigned int)arg2;
- (id)renderCommandEncoderWithDescriptor:(id)arg1;
- (id)parallelRenderCommandEncoderWithDescriptor:(id)arg1;
- (id)computeCommandEncoderWithDispatchType:(unsigned long long)arg1;
- (id)computeCommandEncoder;
- (id)blitCommandEncoder;
- (_Bool)commitAndWaitUntilSubmitted;
@property(readonly) unsigned int commandBufferRef;
- (void)dealloc;
- (id)initWithQueue:(id)arg1 retainedReferences:(_Bool)arg2;

// Remaining properties
@property(readonly) double GPUEndTime;
@property(readonly) double GPUStartTime;
@property(readonly) id <MTLCommandQueue> commandQueue;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSError *error;
@property(readonly) unsigned long long globalTraceObjectID;
@property(readonly) NSUInteger hash;
@property(readonly) double kernelEndTime;
@property(readonly) double kernelStartTime;
@property(copy) NSString *label;
@property(nonatomic, getter=getListIndex) unsigned long long listIndex;
@property(getter=isProfilingEnabled) _Bool profilingEnabled;
@property(readonly) NSDictionary *profilingResults;
@property(readonly) _Bool retainedReferences;
@property(readonly) unsigned long long status;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSMutableDictionary *userDictionary;

@end

