//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MetalTools/MTLToolsRenderPipelineState.h>

@class MTLRenderPipelineDescriptor, MTLRenderPipelineReflection, MTLTileRenderPipelineDescriptor;

@interface MTLDebugRenderPipelineState : MTLToolsRenderPipelineState
{
    unsigned long long _maxVertexCount;
    unsigned long long _maxInstanceCount;
    unsigned long long _maxPatchCount;
    unsigned long long _rasterSampleCount;
    unsigned long long _colorPixelFormat[8];
    unsigned long long _depthPixelFormat;
    unsigned long long _stencilPixelFormat;
    unsigned long long _vertexDescriptorLayoutCount;
    struct {
        unsigned long long bufferIndex;
        unsigned long long bufferStride;
    } _vertexDescriptorLayouts[31];
    _Bool _threadgroupSizeMatchesTileSize;
    MTLRenderPipelineDescriptor *_descriptor;
    MTLRenderPipelineReflection *_reflection;
    MTLTileRenderPipelineDescriptor *_tileDescriptor;
}

@property(readonly, nonatomic) MTLTileRenderPipelineDescriptor *tileDescriptor; // @synthesize tileDescriptor=_tileDescriptor;
@property(readonly, nonatomic) MTLRenderPipelineReflection *reflection; // @synthesize reflection=_reflection;
@property(readonly, nonatomic) MTLRenderPipelineDescriptor *descriptor; // @synthesize descriptor=_descriptor;
- (id)getParameter:(id)arg1;
- (id)description;
- (id)formattedDescription:(unsigned long long)arg1;
- (void)_updateCachedPipelineState:(id)arg1;
- (void)dealloc;
- (_Bool)isImageBlockLayoutInputCompatibleWithOutputOf:(id)arg1;
- (id)outputImageBlockData;
- (id)_findMasterStruct:(id)arg1 includeImageBlockData:(_Bool)arg2;
- (void)_updateCachedTilePipelineState:(id)arg1;
- (id)initWithPipelineState:(id)arg1 reflection:(id)arg2 parent:(id)arg3 tileDescriptor:(id)arg4;
- (id)initWithPipelineState:(id)arg1 reflection:(id)arg2 parent:(id)arg3 descriptor:(id)arg4;

@end

