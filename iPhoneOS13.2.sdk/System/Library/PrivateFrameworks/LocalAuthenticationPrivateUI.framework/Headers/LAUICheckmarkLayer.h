//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuartzCore/CALayer.h>

@class CAShapeLayer, UIColor;

@interface LAUICheckmarkLayer : CALayer
{
    CAShapeLayer *_shapeLayer;
    struct vector<CAShapeLayer *, std::__1::allocator<CAShapeLayer *>> _transientShapeLayers;
    _Bool _animating;
    unsigned int _animationIndex;
    double _lineWidth;
    struct vector<LAUI_CA_utilities::animation_completion_handler_container, std::__1::allocator<LAUI_CA_utilities::animation_completion_handler_container>> _completions;
    _Bool _revealed;
    double _lineWidthScale;
    UIColor *_primaryColor;
}

@property(readonly, nonatomic, getter=isRevealed) _Bool revealed; // @synthesize revealed=_revealed;
@property(readonly, copy, nonatomic) UIColor *primaryColor; // @synthesize primaryColor=_primaryColor;
@property(nonatomic) double lineWidthScale; // @synthesize lineWidthScale=_lineWidthScale;
- (id).cxx_construct;
- (void)_animationsDidResolve;
- (void)_executeCompletions:(_Bool)arg1;
- (void)_updateRevealedAnimated:(_Bool)arg1;
@property(readonly, nonatomic) struct CGSize aspectSize;
- (void)setRevealed:(_Bool)arg1 animated:(_Bool)arg2 withCompletion:(id /* block */)arg3;
- (void)setRevealed:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setPrimaryColor:(struct UIColor *)arg1 animated:(_Bool)arg2;
- (void)setPrimaryColor:(struct UIColor *)arg1;
- (void)layoutSublayers;
- (void)dealloc;
- (id)init;

@end

