//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <PassKitUIFoundation/PKMotionManagerClientProtocol-Protocol.h>

@class MPSUnaryImageKernel, NSArray, NSSet, NSString;
@protocol MTLBuffer, MTLRenderPipelineState, MTLTexture;

@interface PKCategoryVisualizationCardView : UIView <PKMotionManagerClientProtocol>
{
    id <MTLTexture> _texture;
    id <MTLTexture> _overlayTexture;
    id <MTLTexture> _overlayNormalTexture;
    id <MTLRenderPipelineState> _overlayPipelineState;
    id <MTLRenderPipelineState> _circlePipelineState;
    id <MTLRenderPipelineState> _circleOutlinePipelineState;
    id <MTLBuffer> _vertexCoordsBuffer;
    id <MTLBuffer> _textureCoordsBuffer;
    id <MTLBuffer> _circleUniformsBuffer;
    id <MTLBuffer> _circleDataBuffer;
    id <MTLBuffer> _singleCircleDataBuffer;
    MPSUnaryImageKernel *_blurShader;
    _Bool _hasPendingUpdate;
    long long _pendingUpdateStyle;
    _Bool _invalidated;
    _Bool _effectivePaused;
    _Bool _needsDraw;
    _Bool _emptying;
    // Error parsing type: {?="startTime"d"bucketCount"Q"magnitudeForBucket"^d"colorForBucket"^"uniforms"{?="projectionMatrix"{?="columns"[4]}"motionMatrix"{?="columns"[4]}"data"}"singleCircle"{?="position""velocity""radius"f"scale"f"scaleTarget"f"created"f"color""matrix"{?="columns"[4]}}"circleCount"Q"circles"[88{?="position""velocity""radius"f"scale"f"scaleTarget"f"created"f"color""matrix"{?="columns"[4]}}]"categoryCount"Q"gravity""framesToRender"I"isAnimating"B}, name: _state
    _Bool _motionEnabled;
    _Bool _paused;
    _Bool _blurDisabled;
    NSArray *_bucketColors;
    NSSet *_magnitudes;
}

@property(nonatomic, getter=isBlurDisabled) _Bool blurDisabled; // @synthesize blurDisabled=_blurDisabled;
@property(nonatomic, getter=isPaused) _Bool paused; // @synthesize paused=_paused;
@property(nonatomic, getter=isMotionEnabled) _Bool motionEnabled; // @synthesize motionEnabled=_motionEnabled;
@property(readonly, copy, nonatomic) NSSet *magnitudes; // @synthesize magnitudes=_magnitudes;
@property(copy, nonatomic) NSArray *bucketColors; // @synthesize bucketColors=_bucketColors;
- (void)_stopMotionUpdates;
- (void)_startMotionUpdates;
- (void)motionManager:(id)arg1 didReceiveMotion:(id)arg2;
- (void)_calculateNewCirclePositions;
- (void)_updateCircles;
- (void)_empty;
- (void)_updateTextureAndBlurShader;
- (void)_createMetalResourcesWithTextures:(id)arg1;
- (void)_updatePausedState;
- (void)setMagnitudes:(id)arg1 withStyle:(long long)arg2;
- (void)invalidate;
- (id)rendererState;
- (void)renderWithTextures:(id)arg1 rendererState:(id)arg2;
- (void)didMoveToWindow;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

