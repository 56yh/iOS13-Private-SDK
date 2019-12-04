//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ActivityRingsUI/ARUIAnimatableObject.h>



@class ARUIIcon, NSArray, NSMutableArray, UIColor;

__attribute__((visibility("hidden")))
@interface ARUIRing : ARUIAnimatableObject <NSCopying>
{
    _Bool _vertexAttributesDirty;
    _Bool _calculatedUniformsDirty;
    NSMutableArray *_celebrations;
    NSMutableArray *_celebrationsToRemove;
    _Bool _premultiplyAlpha;
    _Bool _sizeDirty;
    float _screenScale;
    float _ringBoundsDiameter;
    float _scale;
    float _thickness;
    float _interspacing;
    float _size;
    float _zRotation;
    ARUIIcon *_icon;
    // Error parsing type: , name: _drawableSize
    UIColor *_topColor;
    UIColor *_bottomColor;
    UIColor *_contrastColor;
    // Error parsing type: , name: _center
    // Error parsing type: , name: _topColorVector
    // Error parsing type: , name: _topColorPremultiplied
    // Error parsing type: , name: _bottomColorVector
    // Error parsing type: , name: _bottomColorPremultiplied
    // Error parsing type: , name: _contrastColorVector
    // Error parsing type: {?="columns"[4]}, name: _skewAdjustmentMatrix
    // Error parsing type: {?="transformMatrix"[2{?="columns"[4]}]}, name: _vertexAttributes
    // Error parsing type: {?="color1""color2""center""startPosition""endPosition""ringValues""blendingValues""trigResults"}, name: _uniforms
}

// Error parsing type for property contrastColorVector:
// Property attributes: T,R,N,V_contrastColorVector

// Error parsing type for property bottomColorPremultiplied:
// Property attributes: T,R,N,V_bottomColorPremultiplied

// Error parsing type for property bottomColorVector:
// Property attributes: T,R,N,V_bottomColorVector

// Error parsing type for property topColorPremultiplied:
// Property attributes: T,R,N,V_topColorPremultiplied

// Error parsing type for property topColorVector:
// Property attributes: T,R,N,V_topColorVector

// Error parsing type for property center:
// Property attributes: T,N,V_center

@property(nonatomic) float zRotation; // @synthesize zRotation=_zRotation;
@property(nonatomic) float size; // @synthesize size=_size;
@property(nonatomic, getter=isSizeDirty) _Bool sizeDirty; // @synthesize sizeDirty=_sizeDirty;
@property(nonatomic) float interspacing; // @synthesize interspacing=_interspacing;
@property(nonatomic) float thickness; // @synthesize thickness=_thickness;
@property(nonatomic) float scale; // @synthesize scale=_scale;
@property(retain, nonatomic) UIColor *contrastColor; // @synthesize contrastColor=_contrastColor;
@property(retain, nonatomic) UIColor *bottomColor; // @synthesize bottomColor=_bottomColor;
@property(retain, nonatomic) UIColor *topColor; // @synthesize topColor=_topColor;
@property(nonatomic) _Bool premultiplyAlpha; // @synthesize premultiplyAlpha=_premultiplyAlpha;
// Error parsing type for property skewAdjustmentMatrix:
// Property attributes: T{?=[4]},N,V_skewAdjustmentMatrix

// Error parsing type for property drawableSize:
// Property attributes: T,N,V_drawableSize

@property(nonatomic) float ringBoundsDiameter; // @synthesize ringBoundsDiameter=_ringBoundsDiameter;
@property(readonly, nonatomic) float screenScale; // @synthesize screenScale=_screenScale;
@property(retain, nonatomic) ARUIIcon *icon; // @synthesize icon=_icon;
@property(readonly, nonatomic) struct uniforms; // @synthesize uniforms=_uniforms;
// Error parsing type for property vertexAttributes:
// Property attributes: T{?=[2{?=[4]}]},R,N,V_vertexAttributes

- (void)updateCelebrationWithColors:(id)arg1;
- (void)updateCelebrationsWithColors;
- (void)_updateCalculatedUniforms;
- (void)_updateVertexAttributes;
- (void)updateCalculatedAttributes;
- (void *)vertexAttributesBytes;
@property(nonatomic) float emptyOpacity;
@property(nonatomic) float opacity;
@property(nonatomic) float trackOpacity;
@property(nonatomic) float percentage;
- (void *)uniformsBytes;
- (void)_updateBottomColorUniform;
- (void)_updatePremultipliedBottomColor;
- (void)_updateTopColorUniform;
- (void)_updatePremultipliedTopColor;
- (id)_newAnimatablePropertyForType:(unsigned long long)arg1;
- (void)removeAllAnimationsForRingPropertyType:(unsigned long long)arg1;
- (void)addAnimation:(id)arg1 forRingPropertyType:(unsigned long long)arg2;
- (void)update:(double)arg1;
- (_Bool)areAnimationsInProgress;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
@property(readonly, nonatomic) NSArray *celebrations;
- (void)removeCelebration:(id)arg1;
- (void)addCelebration:(id)arg1;

@end

