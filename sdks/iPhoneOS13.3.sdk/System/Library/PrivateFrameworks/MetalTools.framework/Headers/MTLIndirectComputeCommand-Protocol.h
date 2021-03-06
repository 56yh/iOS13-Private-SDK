//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@protocol MTLBuffer, MTLComputePipelineState;

@protocol MTLIndirectComputeCommand <NSObject>
- (void)setStageInRegion:(CDStruct_1e3be3a8)arg1;
- (void)setThreadgroupMemoryLength:(NSUInteger)arg1 atIndex:(NSUInteger)arg2;
- (void)reset;
- (void)clearBarrier;
- (void)setBarrier;
- (void)concurrentDispatchThreads:(CDStruct_14f26992)arg1 threadsPerThreadgroup:(CDStruct_14f26992)arg2;
- (void)concurrentDispatchThreadgroups:(CDStruct_14f26992)arg1 threadsPerThreadgroup:(CDStruct_14f26992)arg2;
- (void)setKernelBuffer:(id <MTLBuffer>)arg1 offset:(NSUInteger)arg2 atIndex:(NSUInteger)arg3;
- (void)setComputePipelineState:(id <MTLComputePipelineState>)arg1;
@end

