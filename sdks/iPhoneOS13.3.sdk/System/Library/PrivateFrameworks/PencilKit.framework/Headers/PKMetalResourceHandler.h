//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MTLPipelineBufferDescriptor, MTLRenderPipelineDescriptor, NSMutableDictionary, PKLRUCache, PKMetalResourceHandlerBuffer, PKMetalShader;
@protocol MTLBuffer, MTLComputePipelineState, MTLDevice, MTLLibrary, MTLPipelineLibrarySPI, MTLTexture, OS_dispatch_queue;

@interface PKMetalResourceHandler : NSObject
{
    id <MTLComputePipelineState> _particleShaderKernelPipelineState;
    id <MTLComputePipelineState> _particleShaderKernelPipelineStateWithVariableSpacing;
    id <MTLComputePipelineState> _paintShaderKernelPipelineState;
    id <MTLComputePipelineState> _paintShaderKernelPipelineStateWithLiveStroke;
    PKMetalShader *_particleShader;
    PKMetalShader *_particleShaderWithAspectRatioSupport;
    PKMetalShader *_paintShader;
    PKMetalShader *_particleShaderForAccumulator;
    PKMetalShader *_particleShaderForAccumulatorWithAspectRatioSupport;
    PKMetalShader *_paintShaderForAccumulator;
    PKMetalShader *_erasePaintShader;
    PKMetalShader *_erasePaintAccumulatorShader;
    PKMetalShader *_eraseOriginalBackShader;
    PKMetalShader *_paperShader;
    PKMetalShader *_blitIntoPaintShader;
    PKMetalShader *_blitShader;
    PKMetalShader *_singleAttachmentBlitShader;
    PKMetalShader *_eraseShader;
    PKMetalShader *_copyAccumulatorIntoPaintShader;
    PKMetalShader *_linesShader;
    PKMetalShader *_paintCircleShader;
    PKMetalShader *_invertShader;
    id <MTLBuffer> _cachedQuadVertexBuffer;
    id <MTLBuffer> _cachedQuadTexCoordBuffer;
    NSMutableDictionary *_inkTextures;
    struct unordered_map<unsigned long long, PKMetalShader *, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, PKMetalShader *>>> _uberShaders;
    id <MTLLibrary> _defaultLibrary;
    id <MTLTexture> _paperTexture;
    CGSize _paperTextureSize;
    MTLRenderPipelineDescriptor *_sharedPipelineDescriptor;
    MTLRenderPipelineDescriptor *_singleColorPipelineDescriptor;
    MTLRenderPipelineDescriptor *_singlePaintPipelineDescriptor;
    PKLRUCache *_strokeRenderCache;
    id <MTLBuffer> _particleIndexBuffer;
    id <MTLBuffer> _randomNumberBuffer;
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSUInteger _signpost_id;
    PKMetalResourceHandlerBuffer *_purgeableResourceBuffer;
    PKMetalResourceHandlerBuffer *_resourceBuffer;
    PKMetalResourceHandlerBuffer *_gpuResourceBuffer;
    id <MTLPipelineLibrarySPI> _pipelineLibrary;
    id <MTLDevice> _device;
    NSUInteger _pixelFormat;
    NSUInteger _paintAndParticlePixelFormat;
    NSUInteger _stencilPixelFormat;
}

+ (id)inkBundle;
+ (id)sharedResourceHandlerWithDevice:(id)arg1;
+ (id)sharedResourceHandlerWithDevice:(id)arg1 pixelFormat:(NSUInteger)arg2 paintAndParticlePixelFormat:(NSUInteger)arg3 stencilPixelFormat:(NSUInteger)arg4;
@property(readonly, nonatomic) NSUInteger stencilPixelFormat; // @synthesize stencilPixelFormat=_stencilPixelFormat;
@property(readonly, nonatomic) NSUInteger paintAndParticlePixelFormat; // @synthesize paintAndParticlePixelFormat=_paintAndParticlePixelFormat;
@property(readonly, nonatomic) NSUInteger pixelFormat; // @synthesize pixelFormat=_pixelFormat;
@property(readonly, nonatomic) id <MTLDevice> device; // @synthesize device=_device;
- (id).cxx_construct;
// - (void).cxx_destruct;
- (id)_signpostLog;
- (id)newGPUBufferWithLength:(NSUInteger)arg1 outOffset:(NSUInteger )arg2;
- (id)newBufferWithLength:(NSUInteger)arg1 bytes:(const void )arg2 outOffset:(NSUInteger )arg3;
- (id)newPurgeableBufferWithLength:(NSUInteger)arg1 bytes:(const void )arg2 outOffset:(NSUInteger )arg3;
- (void)preloadParticleResources;
- (void)preloadPaperTexture;
- (void)_setupParticleIndexBufferIfNecessary;
- (void)_setupRandomNumberBufferIfNecessary;
- (const float )randomNumberArray;
- (id)particleIndexBuffer;
- (id)randomNumberBuffer;
@property(readonly, nonatomic) CGSize paperTextureSize;
@property(readonly, nonatomic) id <MTLTexture> paperTexture;
- (void)_setupPaperTextureIfNecessary;
- (id)inkTextureNamed:(id)arg1;
- (id)_inkTextureNamed:(id)arg1;
- (void)replaceInkTexture:(id)arg1 image:(CGImage )arg2;
- (id)textureByUnpremultiplyingAlphaInTexture:(id)arg1;
- (id)cachedQuadTexCoordBuffer;
- (id)cachedQuadVertexBuffer;
- (void)_setupCachedQuad;
- (void)_preloadUberShaders;
- (void)_preloadUberShadersForBaseKey:(CDStruct_3c89fc14)arg1;
- (id)uberShaderForKey:(CDStruct_3c89fc14)arg1;
- (id)_uberShaderForKey:(CDStruct_3c89fc14)arg1;
- (id)constantValuesForKey:(long long)arg1 clipping:(BOOL)arg2 colorAttachmentIndex:(unsigned int)arg3 renderMask:(BOOL)arg4;
- (id)compositeEraseShaderWithMode:(long long)arg1 clipping:(BOOL)arg2 colorAttachmentIndex:(NSUInteger)arg3;
- (id)compositeSoftWhiteShaderWithMode:(long long)arg1 clipping:(BOOL)arg2 colorAttachmentIndex:(NSUInteger)arg3 renderMask:(BOOL)arg4;
- (id)compositeMultiplyShaderWithMode:(long long)arg1 clipping:(BOOL)arg2 targetMultiple:(BOOL)arg3 colorAttachmentIndex:(NSUInteger)arg4 renderMask:(BOOL)arg5;
- (id)compositeOverShaderWithMode:(long long)arg1 clipping:(BOOL)arg2 colorAttachmentIndex:(NSUInteger)arg3 renderMask:(BOOL)arg4;
- (id)compositePaperShaderWithMode:(long long)arg1 colorAttachmentIndex:(NSUInteger)arg2;
- (void)_preloadInkTextures;
- (void)_preloadShaders;
- (id)newComputePipelineDescriptor;
- (id)newRenderPipelineDescriptor;
- (id)newLinesShader;
- (id)copyFramebufferShaderWithSourceColorAttachmentIndex:(unsigned int)arg1 destinationColorAttachmentIndex:(unsigned int)arg2;
- (id)blitShaderWithColorAttachmentIndex:(unsigned int)arg1 sharedPipelineDescriptor:(BOOL)arg2;
- (id)newInvertShader;
- (id)newPaintCircleShader;
- (id)newPaperShader;
- (id)particleShaderWithColorAttachmentIndex:(unsigned int)arg1 aspectRatioSupport:(BOOL)arg2;
- (id)paintShaderWithColorAttachmentIndex:(unsigned int)arg1;
- (id)eraseShaderWithColorAttachmentIndex:(unsigned int)arg1;
- (id)eraseShaderWithColorAttachmentIndex:(unsigned int)arg1 sharedPipelineDescriptor:(BOOL)arg2;
- (id)invertShader;
- (id)paintCircleShader;
- (id)linesShader;
- (id)copyAccumulatorIntoPaintShader;
- (id)eraseShader;
- (id)singleAttachmentBlitShader;
- (id)blitShader;
- (id)blitIntoPaintShader;
@property(readonly, nonatomic) MTLPipelineBufferDescriptor *sharedPipelineDescriptor;
- (id)eraseOriginalBackShader;
- (id)erasePaintAccumulatorShader;
- (id)erasePaintShader;
- (id)paperShader;
- (id)paintShaderKernelPipelineStateWithLiveStroke;
- (id)paintShaderKernelPipelineState;
- (id)particleShaderKernelPipelineState;
- (id)particleShaderKernelPipelineStateWithVariableSpacing;
- (id)particleShaderForAccumulatorWithAspectRatioSupport;
- (id)particleShaderForAccumulator;
- (id)paintShaderForAccumulator;
- (id)particleShaderWithAspectRatioSupport;
- (id)particleShader;
- (id)paintShader;
- (id)strokeRenderCache;
- (id)initWithDevice:(id)arg1;
- (id)initWithDevice:(id)arg1 pixelFormat:(NSUInteger)arg2 paintAndParticlePixelFormat:(NSUInteger)arg3 stencilPixelFormat:(NSUInteger)arg4;
- (id)init;

@end
