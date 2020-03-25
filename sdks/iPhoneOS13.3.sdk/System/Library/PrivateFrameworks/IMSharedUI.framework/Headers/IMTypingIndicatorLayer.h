//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuartzCore/CALayer.h>

#import <IMSharedUI/IMTypingIndicatorLayerProtocol-Protocol.h>

@class CAReplicatorLayer, UIColor, UITraitCollection;

@interface IMTypingIndicatorLayer : CALayer <IMTypingIndicatorLayerProtocol>
{
    BOOL _hasDarkBackground;
    id _iconImage;
    UIColor _bubbleColor;
    UIColor _thinkingDotColor;
    UITraitCollection *_traitCollection;
    double _bubbleOpacity;
    double _thinkingDotOpacity;
    UIColor _customBubbleColor;
    CALayer *_bubbleContainer;
    CALayer *_smallBubble;
    CALayer *_mediumBubble;
    CALayer *_largeBubble;
    CALayer *_thinkingDotContainer;
    CALayer *_thinkingDot;
    CAReplicatorLayer *_thinkingDots;
    CALayer *_iconImageLayer;
}

+ (double)thinkingDotSpace;
+ (double)thinkingDotDiameter;
+ (CGPoint)thinkingDotsOffset;
+ (double)iconImageTrailingSpace;
+ (CGRect)iconImageFrame;
+ (CGPoint)largeBubbleGrowOffset;
+ (CGRect)largeBubbleFrame;
+ (CGPoint)mediumBubbleGrowOffset;
+ (CGRect)mediumBubbleFrame;
+ (CGPoint)smallBubbleGrowOffset;
+ (CGRect)smallBubbleFrame;
+ (BOOL)supportsTypingIndicatorAnimation;
+ (double)defaultBubbleOpacity;
+ (double)defaultThinkingDotOpacity;
+ (UIColor )defaultThinkingDotColor;
+ (UIColor )defaultBubbleColor;
+ (CGSize)defaultSize;
@property(retain, nonatomic) CALayer *iconImageLayer; // @synthesize iconImageLayer=_iconImageLayer;
@property(retain, nonatomic) CAReplicatorLayer *thinkingDots; // @synthesize thinkingDots=_thinkingDots;
@property(retain, nonatomic) CALayer *thinkingDot; // @synthesize thinkingDot=_thinkingDot;
@property(retain, nonatomic) CALayer *thinkingDotContainer; // @synthesize thinkingDotContainer=_thinkingDotContainer;
@property(retain, nonatomic) CALayer *largeBubble; // @synthesize largeBubble=_largeBubble;
@property(retain, nonatomic) CALayer *mediumBubble; // @synthesize mediumBubble=_mediumBubble;
@property(retain, nonatomic) CALayer *smallBubble; // @synthesize smallBubble=_smallBubble;
@property(retain, nonatomic) CALayer *bubbleContainer; // @synthesize bubbleContainer=_bubbleContainer;
@property(copy, nonatomic) UIColor *customBubbleColor; // @synthesize customBubbleColor=_customBubbleColor;
@property(nonatomic) double thinkingDotOpacity; // @synthesize thinkingDotOpacity=_thinkingDotOpacity;
@property(nonatomic) double bubbleOpacity; // @synthesize bubbleOpacity=_bubbleOpacity;
@property(retain, nonatomic) UITraitCollection *traitCollection; // @synthesize traitCollection=_traitCollection;
@property(copy, nonatomic) UIColor *thinkingDotColor; // @synthesize thinkingDotColor=_thinkingDotColor;
@property(copy, nonatomic) UIColor *bubbleColor; // @synthesize bubbleColor=_bubbleColor;
@property(retain, nonatomic) id iconImage; // @synthesize iconImage=_iconImage;
@property(nonatomic) BOOL hasDarkBackground; // @synthesize hasDarkBackground=_hasDarkBackground;
// - (void).cxx_destruct;
- (void)stopAnimation;
- (void)startShrinkAnimationWithCompletionBlock:(id /* CDUnknownBlockType */)arg1;
- (void)stopPulseAnimation;
- (void)startPulseAnimation;
- (void)startGrowAnimation;
- (void)startGrowAnimationWithCompletionBlock:(id /* CDUnknownBlockType */)arg1;
- (id)_largeBubblePulseAnimationWithSpeed:(double)arg1 delay:(double)arg2;
- (id)_largeBubbleGrowAnimationsWithSpeed:(double)arg1 offset:(CGPoint)arg2;
- (id)_mediumBubblePulseAnimationWithSpeed:(double)arg1 delay:(double)arg2;
- (id)_mediumBubbleGrowAnimationsWithSpeed:(double)arg1 offset:(CGPoint)arg2;
- (id)_smallBubblePulseAnimationWithSpeed:(double)arg1 delay:(double)arg2;
- (id)_smallBubbleGrowAnimationsWithSpeed:(double)arg1 offset:(CGPoint)arg2;
- (void)_updateBubbleOpacity;
- (void)_updateBubbleColors;
- (void)_buildThinkingDots;
- (void)_buildIconImage;
- (void)_updateForImage;
- (void)_setup;
- (id)resolvedColor:(id)arg1 forTraitCollection:(id)arg2;
- (double)convertedCurrentMediaTime;
- (id)init;

@end
