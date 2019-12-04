//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AvatarKit/SCNMaterialPropertyTextureProvider-Protocol.h>

@class AVTCompositorPipeline, AVTCompositor_GPU, AVTMemoji, NSMutableSet, NSString;

@interface AVTCompositorTextureProvider : NSObject <SCNMaterialPropertyTextureProvider>
{
    AVTMemoji *_memoji;
    AVTCompositor_GPU *_compositor;
    AVTCompositorPipeline *_pipeline;
    NSString *_propertyName;
    _Bool _skinIsDirty;
    long long _componentDirtyMask;
    NSMutableSet *_helperTokens;
}

- (void)renderToTexture:(id)arg1 computeCommandHandler:(id /* block */)arg2 blitCommandHandler:(id /* block */)arg3 helper:(id)arg4;
- (id)newTextureForDevice:(id)arg1;
- (void)componentDidChangeForType:(long long)arg1;
- (void)skinColorDidChange;
- (void)dealloc;
- (id)initWithCompositor:(id)arg1 memoji:(id)arg2 propertyName:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

