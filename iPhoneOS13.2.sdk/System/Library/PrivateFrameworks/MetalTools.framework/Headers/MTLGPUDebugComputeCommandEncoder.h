//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MetalTools/MTLToolsComputeCommandEncoder.h>

@interface MTLGPUDebugComputeCommandEncoder : MTLToolsComputeCommandEncoder
{
    struct MTLGPUDebugBufferArgumentData _buffers;
    unsigned int _encoderID;
    unsigned int _currentDispatchID;
    unsigned long long _currentPipelineID;
}

- (id).cxx_construct;
- (void)endEncoding;
- (void)setComputePipelineState:(id)arg1;
- (void)dispatchThreadgroupsWithIndirectBuffer:(id)arg1 indirectBufferOffset:(unsigned long long)arg2 threadsPerThreadgroup:(CDStruct_14f26992)arg3;
- (void)dispatchThreadgroups:(CDStruct_14f26992)arg1 threadsPerThreadgroup:(CDStruct_14f26992)arg2;
- (void)dispatchThreadsWithIndirectBuffer:(id)arg1 indirectBufferOffset:(unsigned long long)arg2;
- (void)dispatchThreads:(CDStruct_14f26992)arg1 threadsPerThreadgroup:(CDStruct_14f26992)arg2;
- (void)setBytes:(const void *)arg1 length:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;
- (void)setBuffers:(const id *)arg1 offsets:(const unsigned long long *)arg2 withRange:(struct _NSRange)arg3;
- (void)setBufferOffset:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;
- (void)setBuffer:(id)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;
- (void)onDispatch;
- (id)initWithComputeCommandEncoder:(id)arg1 parent:(id)arg2 encoderID:(unsigned int)arg3;

@end

