//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MetalTools/MTLToolsCommandBuffer.h>

@class NSMutableSet, _MTLCommandEncoder;

@interface MTLDebugCommandBuffer : MTLToolsCommandBuffer
{
    _MTLCommandEncoder *_currentEncoder;
    NSMutableSet *_buffersBoundForWrite;
    NSMutableSet *_texturesBoundForWrite;
    NSMutableSet *_unsignaledResources;
    struct unique_ptr<ILayerLockingPolicy, std::__1::default_delete<ILayerLockingPolicy>> _boundForWriteLockingPolicy;
    struct vector<std::__1::pair<MTLDebugSharedEvent *, unsigned long long>, std::__1::allocator<std::__1::pair<MTLDebugSharedEvent *, unsigned long long>>> _waitEvents;
    struct unordered_multiset<AttachmentDescriptorSimple, AttachmentDescriptorSimple::hash_t, AttachmentDescriptorSimple::equal_t, std::__1::allocator<AttachmentDescriptorSimple>> _attachmentSet;
    struct array<AttachmentDescriptorSimple, 8> _prevAttachments;
    struct array<AttachmentDescriptorSimple, 8> _currAttachments;
}

- (id).cxx_construct;
- (void *)debugBufferContentsWithLength:(unsigned long long *)arg1;
- (void)encodeWaitForEvent:(id)arg1 value:(unsigned long long)arg2 timeout:(unsigned int)arg3;
- (void)encodeWaitForEvent:(id)arg1 value:(unsigned long long)arg2;
- (void)encodeSignalEvent:(id)arg1 value:(unsigned long long)arg2;
- (void)executeSynchronizationNotifications:(int)arg1 scope:(unsigned long long)arg2 resources:(const id *)arg3 count:(unsigned long long)arg4;
- (void)executeSynchronizationNotifications:(int)arg1;
- (void)addSynchronizationNotification:(id /* block */)arg1;
- (void)commit;
- (id)sampledComputeCommandEncoderWithDispatchType:(unsigned long long)arg1 programInfoBuffer:(CDStruct_4af8c268 *)arg2 capacity:(unsigned long long)arg3;
- (id)sampledComputeCommandEncoderWithProgramInfoBuffer:(CDStruct_4af8c268 *)arg1 capacity:(unsigned long long)arg2;
- (id)sampledRenderCommandEncoderWithDescriptor:(id)arg1 programInfoBuffer:(CDStruct_4af8c268 *)arg2 capacity:(unsigned long long)arg3;
- (void)validateStoreLoadTransition:(id)arg1 atIndex:(unsigned long long)arg2 renderTargetArrayLength:(unsigned long long)arg3;
- (void)onParallelRenderCommanderEndEncoding;
- (id)parallelRenderCommandEncoderWithDescriptor:(id)arg1;
- (id)computeCommandEncoderWithDispatchType:(unsigned long long)arg1;
- (id)computeCommandEncoder;
- (id)sampledFragmentRenderCommandEncoderWithDescriptor:(id)arg1 programInfoBuffer:(CDStruct_4af8c268 *)arg2 capacity:(unsigned long long)arg3;
- (id)fragmentRenderCommandEncoderWithDescriptor:(id)arg1;
- (id)renderCommandEncoderWithDescriptor:(id)arg1;
- (void)addCompletedHandler:(id /* block */)arg1;
- (void)trackRenderPassDescriptor:(id)arg1;
- (void)_trackRenderPassAttachmentDescriptor:(id)arg1;
- (void)_trackTexture:(id)arg1;
- (id)resourceStateCommandEncoder;
- (id)blitCommandEncoder;
- (void)waitUntilCompleted;
- (void)waitUntilScheduled;
- (void)resourceTrackingRecordAccessesToArguments:(id)arg1 bufferFuncArgsPtr:(CDStruct_0f4bf8df *)arg2 textureFuncArgsPtr:(CDStruct_0f4bf8df *)arg3;
- (void)trackUseResources:(const id *)arg1 count:(unsigned long long)arg2 usage:(unsigned long long)arg3;
- (void)trackUseResource:(id)arg1 usage:(unsigned long long)arg2;
- (id)initWithCommandBuffer:(id)arg1 commandQueue:(id)arg2;
- (void)dealloc;

@end

