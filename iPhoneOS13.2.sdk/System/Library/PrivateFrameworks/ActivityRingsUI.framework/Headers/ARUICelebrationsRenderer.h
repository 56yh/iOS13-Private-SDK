//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ActivityRingsUI/ARUIBlurRendering-Protocol.h>
#import <ActivityRingsUI/ARUICelebrationsRendering-Protocol.h>
#import <ActivityRingsUI/ARUICompositeRendering-Protocol.h>

@class ARUICompositingRenderState, ARUIDownsampleRenderState, ARUIHorizontalBlurRenderState, ARUISparksRenderer, ARUIVerticalBlurRenderState, ARUIWavesRenderer, NSString;
@protocol ARUIRingsRendering, MTLBuffer, MTLDevice, MTLLibrary;

__attribute__((visibility("hidden")))
@interface ARUICelebrationsRenderer : NSObject <ARUIBlurRendering, ARUICelebrationsRendering, ARUICompositeRendering>
{
    id <MTLDevice> _device;
    id <MTLLibrary> _library;
    ARUISparksRenderer *_sparksRenderer;
    ARUIWavesRenderer *_wavesRenderer;
    ARUICompositingRenderState *_compositingRenderState;
    ARUIHorizontalBlurRenderState *_horizontalBlurRenderState;
    ARUIVerticalBlurRenderState *_verticalBlurRenderState;
    ARUIDownsampleRenderState *_downsampleRenderState;
    id <MTLBuffer> _quadVertexBuffer;
    id <MTLBuffer> _quadIndexBuffer;
    unsigned long long _quadIndexCount;
    id <ARUIRingsRendering> _ringsRenderer;
}

@property(nonatomic) __weak id <ARUIRingsRendering> ringsRenderer; // @synthesize ringsRenderer=_ringsRenderer;
- (id)gaussianBlurredTexture:(id)arg1 withCommandBuffer:(id)arg2 andSize:(unsigned long long)arg3 blurRadius:(float)arg4 initialDownsampleFraction:(float)arg5 brightnessMultiplier: /* Error: Ran out of types for this method. */;
- (id)_downsampledTexture:(id)arg1 withCommandBuffer:(id)arg2 andSize: /* Error: Ran out of types for this method. */;
- (id)compositeTexturesWithCommandBuffer:(id)arg1 textures:(id)arg2 andSize: /* Error: Ran out of types for this method. */;
- (void)compositeWithCommandEncoder:(id)arg1 textures:(id)arg2;
- (void)compositeWithCommandEncoder:(id)arg1 texture:(id)arg2;
- (id)celebrationsTextureWithCommandBuffer:(id)arg1 forRingGroupControllers:(id)arg2 size: /* Error: Ran out of types for this method. */;
- (void)_prewarmQuadBuffers;
- (void)prewarmBlurRenderPipeline;
- (void)prewarmCompositeRenderPipeline;
- (void)prewarmCelebrationPipelineForType:(unsigned long long)arg1;
- (id)initWithDevice:(id)arg1 library:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

