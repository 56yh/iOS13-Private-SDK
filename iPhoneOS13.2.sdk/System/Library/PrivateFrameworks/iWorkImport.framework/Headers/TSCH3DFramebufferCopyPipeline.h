//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSCH3DFramebufferTransformPipeline.h>

@class NSArray, TSCH3DResource;

__attribute__((visibility("hidden")))
@interface TSCH3DFramebufferCopyPipeline : TSCH3DFramebufferTransformPipeline
{
    NSArray *mEffects;
    TSCH3DResource *mVertices;
    TSCH3DResource *mTexcoords;
    struct RenderState mRenderState;
    tmat4x4_3074befe mTransform;
    box_0260e9b3 mTargetViewport;
    _Bool mWipeTarget;
    tvec4_ac57c72d mWipeColor;
    id /* block */ mUpdateShaderEffectsStatesBlock;
}

@property(copy, nonatomic) id /* block */ updateShaderEffectsStatesBlock; // @synthesize updateShaderEffectsStatesBlock=mUpdateShaderEffectsStatesBlock;
@property(nonatomic) tvec4_ac57c72d wipeColor; // @synthesize wipeColor=mWipeColor;
@property(nonatomic) _Bool wipeTarget; // @synthesize wipeTarget=mWipeTarget;
@property(nonatomic) box_0260e9b3 targetViewport; // @synthesize targetViewport=mTargetViewport;
@property(nonatomic) tmat4x4_3074befe transform; // @synthesize transform=mTransform;
@property(nonatomic) struct RenderState renderState; // @synthesize renderState=mRenderState;
@property(retain, nonatomic) TSCH3DResource *texcoords; // @synthesize texcoords=mTexcoords;
@property(retain, nonatomic) TSCH3DResource *vertices; // @synthesize vertices=mVertices;
@property(copy, nonatomic) NSArray *effects; // @synthesize effects=mEffects;
- (id).cxx_construct;
- (void)updateShaderEffectsStates;
- (void)transformFramebuffer;
- (void)dealloc;
- (id)initWithProcessor:(id)arg1 session:(id)arg2;

@end

