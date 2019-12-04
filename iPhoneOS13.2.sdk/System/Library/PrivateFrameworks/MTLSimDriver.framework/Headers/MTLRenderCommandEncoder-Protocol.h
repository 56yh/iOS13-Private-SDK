//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MTLSimDriver/MTLCommandEncoder-Protocol.h>

@protocol MTLBuffer, MTLDepthStencilState, MTLFence, MTLHeap, MTLIndirectCommandBuffer, MTLRenderPipelineState, MTLResource, MTLSamplerState, MTLTexture;

@protocol MTLRenderCommandEncoder <MTLCommandEncoder>
@property(readonly) unsigned long long tileHeight;
@property(readonly) unsigned long long tileWidth;
- (void)memoryBarrierWithResources:(const id *)arg1 count:(unsigned long long)arg2 afterStages:(unsigned long long)arg3 beforeStages:(unsigned long long)arg4;
- (void)memoryBarrierWithScope:(unsigned long long)arg1 afterStages:(unsigned long long)arg2 beforeStages:(unsigned long long)arg3;
- (void)executeCommandsInBuffer:(id <MTLIndirectCommandBuffer>)arg1 indirectBuffer:(id <MTLBuffer>)arg2 indirectBufferOffset:(unsigned long long)arg3;
- (void)executeCommandsInBuffer:(id <MTLIndirectCommandBuffer>)arg1 withRange:(struct _NSRange)arg2;
- (void)useHeaps:(const id *)arg1 count:(unsigned long long)arg2 stages:(unsigned long long)arg3;
- (void)useHeap:(id <MTLHeap>)arg1 stages:(unsigned long long)arg2;
- (void)useHeaps:(const id *)arg1 count:(unsigned long long)arg2;
- (void)useHeap:(id <MTLHeap>)arg1;
- (void)useResources:(const id *)arg1 count:(unsigned long long)arg2 usage:(unsigned long long)arg3 stages:(unsigned long long)arg4;
- (void)useResource:(id <MTLResource>)arg1 usage:(unsigned long long)arg2 stages:(unsigned long long)arg3;
- (void)useResources:(const id *)arg1 count:(unsigned long long)arg2 usage:(unsigned long long)arg3;
- (void)useResource:(id <MTLResource>)arg1 usage:(unsigned long long)arg2;
- (void)setThreadgroupMemoryLength:(unsigned long long)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;
- (void)dispatchThreadsPerTile:(CDStruct_da2e99ad)arg1;
- (void)setTileSamplerStates:(const id *)arg1 lodMinClamps:(const float *)arg2 lodMaxClamps:(const float *)arg3 withRange:(struct _NSRange)arg4;
- (void)setTileSamplerState:(id <MTLSamplerState>)arg1 lodMinClamp:(float)arg2 lodMaxClamp:(float)arg3 atIndex:(unsigned long long)arg4;
- (void)setTileSamplerStates:(const id *)arg1 withRange:(struct _NSRange)arg2;
- (void)setTileSamplerState:(id <MTLSamplerState>)arg1 atIndex:(unsigned long long)arg2;
- (void)setTileTextures:(const id *)arg1 withRange:(struct _NSRange)arg2;
- (void)setTileTexture:(id <MTLTexture>)arg1 atIndex:(unsigned long long)arg2;
- (void)setTileBuffers:(const id *)arg1 offsets:(const unsigned long long *)arg2 withRange:(struct _NSRange)arg3;
- (void)setTileBufferOffset:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;
- (void)setTileBuffer:(id <MTLBuffer>)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;
- (void)setTileBytes:(const void *)arg1 length:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;
- (void)drawIndexedPatches:(unsigned long long)arg1 patchIndexBuffer:(id <MTLBuffer>)arg2 patchIndexBufferOffset:(unsigned long long)arg3 controlPointIndexBuffer:(id <MTLBuffer>)arg4 controlPointIndexBufferOffset:(unsigned long long)arg5 indirectBuffer:(id <MTLBuffer>)arg6 indirectBufferOffset:(unsigned long long)arg7;
- (void)drawIndexedPatches:(unsigned long long)arg1 patchStart:(unsigned long long)arg2 patchCount:(unsigned long long)arg3 patchIndexBuffer:(id <MTLBuffer>)arg4 patchIndexBufferOffset:(unsigned long long)arg5 controlPointIndexBuffer:(id <MTLBuffer>)arg6 controlPointIndexBufferOffset:(unsigned long long)arg7 instanceCount:(unsigned long long)arg8 baseInstance:(unsigned long long)arg9;
- (void)drawPatches:(unsigned long long)arg1 patchIndexBuffer:(id <MTLBuffer>)arg2 patchIndexBufferOffset:(unsigned long long)arg3 indirectBuffer:(id <MTLBuffer>)arg4 indirectBufferOffset:(unsigned long long)arg5;
- (void)drawPatches:(unsigned long long)arg1 patchStart:(unsigned long long)arg2 patchCount:(unsigned long long)arg3 patchIndexBuffer:(id <MTLBuffer>)arg4 patchIndexBufferOffset:(unsigned long long)arg5 instanceCount:(unsigned long long)arg6 baseInstance:(unsigned long long)arg7;
- (void)setTessellationFactorScale:(float)arg1;
- (void)setTessellationFactorBuffer:(id <MTLBuffer>)arg1 offset:(unsigned long long)arg2 instanceStride:(unsigned long long)arg3;
- (void)waitForFence:(id <MTLFence>)arg1 beforeStages:(unsigned long long)arg2;
- (void)updateFence:(id <MTLFence>)arg1 afterStages:(unsigned long long)arg2;
- (void)textureBarrier;
- (void)drawIndexedPrimitives:(unsigned long long)arg1 indexType:(unsigned long long)arg2 indexBuffer:(id <MTLBuffer>)arg3 indexBufferOffset:(unsigned long long)arg4 indirectBuffer:(id <MTLBuffer>)arg5 indirectBufferOffset:(unsigned long long)arg6;
- (void)drawPrimitives:(unsigned long long)arg1 indirectBuffer:(id <MTLBuffer>)arg2 indirectBufferOffset:(unsigned long long)arg3;
- (void)drawIndexedPrimitives:(unsigned long long)arg1 indexCount:(unsigned long long)arg2 indexType:(unsigned long long)arg3 indexBuffer:(id <MTLBuffer>)arg4 indexBufferOffset:(unsigned long long)arg5 instanceCount:(unsigned long long)arg6 baseVertex:(long long)arg7 baseInstance:(unsigned long long)arg8;
- (void)drawPrimitives:(unsigned long long)arg1 vertexStart:(unsigned long long)arg2 vertexCount:(unsigned long long)arg3 instanceCount:(unsigned long long)arg4 baseInstance:(unsigned long long)arg5;
- (void)drawIndexedPrimitives:(unsigned long long)arg1 indexCount:(unsigned long long)arg2 indexType:(unsigned long long)arg3 indexBuffer:(id <MTLBuffer>)arg4 indexBufferOffset:(unsigned long long)arg5;
- (void)drawIndexedPrimitives:(unsigned long long)arg1 indexCount:(unsigned long long)arg2 indexType:(unsigned long long)arg3 indexBuffer:(id <MTLBuffer>)arg4 indexBufferOffset:(unsigned long long)arg5 instanceCount:(unsigned long long)arg6;
- (void)drawPrimitives:(unsigned long long)arg1 vertexStart:(unsigned long long)arg2 vertexCount:(unsigned long long)arg3;
- (void)drawPrimitives:(unsigned long long)arg1 vertexStart:(unsigned long long)arg2 vertexCount:(unsigned long long)arg3 instanceCount:(unsigned long long)arg4;
- (void)setStencilStoreActionOptions:(unsigned long long)arg1;
- (void)setDepthStoreActionOptions:(unsigned long long)arg1;
- (void)setColorStoreActionOptions:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;
- (void)setStencilStoreAction:(unsigned long long)arg1;
- (void)setDepthStoreAction:(unsigned long long)arg1;
- (void)setColorStoreAction:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;
- (void)setVisibilityResultMode:(unsigned long long)arg1 offset:(unsigned long long)arg2;
- (void)setStencilFrontReferenceValue:(unsigned int)arg1 backReferenceValue:(unsigned int)arg2;
- (void)setStencilReferenceValue:(unsigned int)arg1;
- (void)setDepthStencilState:(id <MTLDepthStencilState>)arg1;
- (void)setBlendColorRed:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4;
- (void)setFragmentSamplerStates:(const id *)arg1 lodMinClamps:(const float *)arg2 lodMaxClamps:(const float *)arg3 withRange:(struct _NSRange)arg4;
- (void)setFragmentSamplerState:(id <MTLSamplerState>)arg1 lodMinClamp:(float)arg2 lodMaxClamp:(float)arg3 atIndex:(unsigned long long)arg4;
- (void)setFragmentSamplerStates:(const id *)arg1 withRange:(struct _NSRange)arg2;
- (void)setFragmentSamplerState:(id <MTLSamplerState>)arg1 atIndex:(unsigned long long)arg2;
- (void)setFragmentTextures:(const id *)arg1 withRange:(struct _NSRange)arg2;
- (void)setFragmentTexture:(id <MTLTexture>)arg1 atIndex:(unsigned long long)arg2;
- (void)setFragmentBuffers:(const id *)arg1 offsets:(const unsigned long long *)arg2 withRange:(struct _NSRange)arg3;
- (void)setFragmentBufferOffset:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;
- (void)setFragmentBuffer:(id <MTLBuffer>)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;
- (void)setFragmentBytes:(const void *)arg1 length:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;
- (void)setTriangleFillMode:(unsigned long long)arg1;
- (void)setScissorRects:(const CDStruct_33dcf794 *)arg1 count:(unsigned long long)arg2;
- (void)setScissorRect:(CDStruct_33dcf794)arg1;
- (void)setDepthBias:(float)arg1 slopeScale:(float)arg2 clamp:(float)arg3;
- (void)setDepthClipMode:(unsigned long long)arg1;
- (void)setCullMode:(unsigned long long)arg1;
- (void)setVertexAmplificationCount:(unsigned long long)arg1 viewMappings:(const CDStruct_c0454aff *)arg2;
- (void)setFrontFacingWinding:(unsigned long long)arg1;
- (void)setViewports:(const CDStruct_8727d297 *)arg1 count:(unsigned long long)arg2;
- (void)setViewport:(CDStruct_8727d297)arg1;
- (void)setVertexSamplerStates:(const id *)arg1 lodMinClamps:(const float *)arg2 lodMaxClamps:(const float *)arg3 withRange:(struct _NSRange)arg4;
- (void)setVertexSamplerState:(id <MTLSamplerState>)arg1 lodMinClamp:(float)arg2 lodMaxClamp:(float)arg3 atIndex:(unsigned long long)arg4;
- (void)setVertexSamplerStates:(const id *)arg1 withRange:(struct _NSRange)arg2;
- (void)setVertexSamplerState:(id <MTLSamplerState>)arg1 atIndex:(unsigned long long)arg2;
- (void)setVertexTextures:(const id *)arg1 withRange:(struct _NSRange)arg2;
- (void)setVertexTexture:(id <MTLTexture>)arg1 atIndex:(unsigned long long)arg2;
- (void)setVertexBuffers:(const id *)arg1 offsets:(const unsigned long long *)arg2 withRange:(struct _NSRange)arg3;
- (void)setVertexBufferOffset:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;
- (void)setVertexBuffer:(id <MTLBuffer>)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;
- (void)setVertexBytes:(const void *)arg1 length:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;
- (void)setRenderPipelineState:(id <MTLRenderPipelineState>)arg1;
@end

