//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ActivityRingsUI/ARUIRingsRendering-Protocol.h>

@class ARUICelebrationsRenderer, ARUIRingsRenderPipelineFactory, ARUIRingsRenderer, ARUISpritesRenderPipelineFactory, ARUISpritesRenderer, NSString;
@protocol MTLCommandQueue, MTLDeviceSPI;

@interface ARUIRingsViewRenderer : NSObject <ARUIRingsRendering>
{
    id <MTLDeviceSPI> _device;
    id <MTLCommandQueue> _commandQueue;
    ARUIRingsRenderPipelineFactory *_ringsRenderPipelineFactory;
    ARUIRingsRenderer *_ringsRenderer;
    ARUISpritesRenderPipelineFactory *_spritesRenderPipelineFactory;
    ARUISpritesRenderer *_spritesRenderer;
    ARUICelebrationsRenderer *_celebrationsRenderer;
    double _screenScale;
    _Bool _presentsWithTransaction;
    unsigned long long _maximumRingCount;
}

+ (unsigned long long)maximumRingCountForControllers:(id)arg1;
+ (id)rendererForRingGroupControllers:(id)arg1;
+ (id)rendererForRingGroupController:(id)arg1;
@property(nonatomic) _Bool presentsWithTransaction; // @synthesize presentsWithTransaction=_presentsWithTransaction;
@property(readonly, nonatomic) unsigned long long maximumRingCount; // @synthesize maximumRingCount=_maximumRingCount;
- (void)prewarmRendererForCelebrationOfType:(unsigned long long)arg1;
- (id)snapshotRingGroupControllers:(id)arg1 withSize: /* Error: Ran out of types for this method. */;
- (id)ringTextureWithCommandBuffer:(id)arg1 rings:(id)arg2 andSize: /* Error: Ran out of types for this method. */;
- (void)renderRingGroupControllers:(id)arg1 withSize:(id)arg2 intoTexture:(id)arg3 withDrawable:(_Bool)arg4 waitUntilCompleted:(id /* block */)arg5 completionHandler: /* Error: Ran out of types for this method. */;
- (id)spriteRenderPipelineConfigurationForRingGroupController:(id)arg1;
- (id)ringsRenderPipelineConfigurationForRings:(id)arg1;
- (id)ringsRenderPipelineConfigurationForRingGroupController:(id)arg1;
- (void)_updateSpriteUniformsForRingGroupController:(id)arg1 andRingIndex:(unsigned long long)arg2;
- (void)_updateSpriteAttributesForRingGroupController:(id)arg1 andRingIndex:(unsigned long long)arg2;
- (id)renderPipelineFactoryWithDevice:(id)arg1 library:(id)arg2;
- (id)renderPipelineFactoryWithDeviceSPI:(id)arg1 librarySPI:(id)arg2;
- (void)dealloc;
- (id)initWithMaximumRingCount:(unsigned long long)arg1 commandQueue:(id)arg2;
- (id)initWithMaximumRingCount:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

