//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class TSDGLFrameBuffer, TSDGLShader, TSDGLState;
@protocol TSDAnimationRandomGenerator, TSDGLDataBuffer;

__attribute__((visibility("hidden")))
@interface TSDGLMotionBlurEffect : NSObject
{
    CGSize _framebufferSize;
    CGSize _slideSize;
    TSDGLFrameBuffer *_combinedFramebuffer;
    TSDGLShader *_velocityVisualizerShader;
    TSDGLShader *_velocityCollectionShader;
    TSDGLFrameBuffer *_velocityFramebuffer;
    TSDGLShader *_defaultTextureShader;
    TSDGLFrameBuffer *_colorFramebuffer;
    id <TSDGLDataBuffer> _colorFBODataBuffer;
    id <TSDGLDataBuffer> _velocityFBODataBuffer;
    id <TSDGLDataBuffer> _velocitySquashedFBODataBuffer;
    id <TSDGLDataBuffer> _FBODataBuffer;
    TSDGLShader *_velocityTileMaxVerticalShader;
    TSDGLShader *_velocityTileMaxHorizontalShader;
    TSDGLShader *_velocityNeighborMaxHorizontalShader;
    TSDGLShader *_velocityNeighborMaxVerticalShader;
    int _originalViewport[4];
    id <TSDAnimationRandomGenerator> _randomGenerator;
    BOOL _isSingleObject;
    double _motionBlurStrength;
    long long _debugDrawMode;
    double _framebufferScale;
    TSDGLState *_GLState;
}

@property(retain, nonatomic) TSDGLState *GLState; // @synthesize GLState=_GLState;
@property(nonatomic) double framebufferScale; // @synthesize framebufferScale=_framebufferScale;
@property(nonatomic) long long debugDrawMode; // @synthesize debugDrawMode=_debugDrawMode;
@property(nonatomic) double motionBlurStrength; // @synthesize motionBlurStrength=_motionBlurStrength;
@property(nonatomic) BOOL isSingleObject; // @synthesize isSingleObject=_isSingleObject;
- (void)p_setupVelocityFramebufferIfNecessary;
- (void)p_setupShaders;
- (void)setupMotionBlurEffectIfNecessary;
- (void)p_dilateVelocityBufferWithCurrentGLFramebuffer:(int)arg1;
- (void)p_blitIntoVelocityFramebufferWithCurrentGLFramebuffer:(int)arg1;
- (void)p_blitIntoColorFramebufferWithCurrentGLFramebuffer:(int)arg1;
- (CGSize)p_squashedVelocityFramebufferSize;
- (CGSize)p_velocityFramebufferTextureScale;
- (CGSize)p_velocityFramebufferSize;
- (void)drawResultWithCurrentGLFramebuffer:(int)arg1;
- (void)unbindFramebufferAndBindGLFramebuffer:(int)arg1;
- (void)bindVelocityFramebuffer;
- (void)bindColorFramebuffer;
- (void)bindColorAndVelocityFramebuffer;
- (void)p_updateMaxVelocityInShadersWithScale:(double)arg1 isColorFBO:(BOOL)arg2;
- (void)updateVelocityScaleInShader:(id)arg1;
- (CGSize)velocityScaleForColorFBO:(BOOL)arg1;
- (id)description;
- (void)teardown;
- (void)dealloc;
- (id)initWithFramebufferSize:(CGSize)arg1 slideSize:(CGSize)arg2 randomGenerator:(id)arg3;

@end

