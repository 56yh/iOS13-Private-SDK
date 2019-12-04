//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class KNAnimatedBuild, KNAnimationRandomGenerator, NSArray, NSDictionary, TSDAnimationSet, TSDGLState, TSDMetalContext, TSDMetalTextureRenderer;

@protocol KNAnimationPluginContext 
@property(readonly, nonatomic) _Bool isWarmingUp;
@property(readonly, nonatomic) TSDGLState *GLState;
@property(readonly, nonatomic) _Bool hasLiveTextureSources;
@property(readonly, nonatomic) _Bool isMovieExport;
@property(readonly, nonatomic) _Bool isPreview;
@property(readonly, nonatomic) _Bool isMetalRenderer;
@property(readonly, nonatomic) _Bool isOpenGLRenderer;
@property(readonly, nonatomic) _Bool isFrameRenderer;
@property(readonly, nonatomic) _Bool isMagicMove;
@property(readonly, nonatomic) _Bool isTransition;
@property(readonly, nonatomic) _Bool isBuild;
@property(readonly, nonatomic) NSArray *magicMoveMatches;
@property(readonly, nonatomic) NSDictionary *transitionAttributes;
@property(readonly, nonatomic) KNAnimatedBuild *animatedBuild;
@property(nonatomic) struct CGRect boundingRect;
@property(readonly, nonatomic) struct CGRect boundingRectOnCanvas;
@property(readonly, nonatomic) struct CGRect animationFrame;
@property(readonly, nonatomic) struct CGRect drawableFrame;
@property(readonly, nonatomic) TSDMetalContext *metalContext;
@property(readonly, nonatomic) KNAnimationRandomGenerator *randomGenerator;
@property(readonly, nonatomic) _Bool isMotionBlurred;
@property(readonly, nonatomic) double percent;
@property(readonly, nonatomic) double duration;
@property(readonly, nonatomic) unsigned long long direction;
@property(readonly, nonatomic) NSArray *tags;
@property(readonly, nonatomic) NSArray *scaledTextures;
@property(readonly, nonatomic) TSDAnimationSet *animationSet;
@property(readonly, nonatomic) TSDMetalTextureRenderer *metalTextureRenderer;
@property(readonly, nonatomic) NSArray *textures;
@end

