//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UIView.h>

#import <UIKitCore/UIStepperVisualElement-Protocol.h>

@class NSMutableDictionary, NSString, NSTimer, UIButton, UIImageView, UIViewPropertyAnimator;
@protocol UIStepperControl;

__attribute__((visibility("hidden")))
@interface UIStepperHorizontalVisualElement : UIView <UIStepperVisualElement>
{
    _Bool _isRtoL;
    UIImageView *_leftBackground;
    UIImageView *_rightBackground;
    UIImageView *_leftHighlight;
    UIImageView *_rightHighlight;
    UIImageView *_middleView;
    UIButton *_plusButton;
    UIButton *_minusButton;
    NSTimer *_repeatTimer;
    long long _repeatCount;
    NSMutableDictionary *_dividerImages;
    UIViewPropertyAnimator *_leftAlphaAnimator;
    UIViewPropertyAnimator *_rightAlphaAnimator;
    UIViewPropertyAnimator *_leftFrameAnimator;
    UIViewPropertyAnimator *_rightFrameAnimator;
    _Bool _autorepeat;
    _Bool _continuous;
    _Bool _enabled;
    _Bool _wraps;
    double _value;
    double _maximumValue;
    double _minimumValue;
    id <UIStepperControl> _stepperControl;
    double _stepValue;
}

+ (id)_highlightOpacityAnimation;
+ (id)_highlightSizeAnimation;
+ (struct UIEdgeInsets)initialAlignmentRectInsets;
+ (struct CGSize)initialIntrinsicSize;
+ (struct CGSize)initialSize;
@property(nonatomic) _Bool wraps; // @synthesize wraps=_wraps;
@property(nonatomic) double stepValue; // @synthesize stepValue=_stepValue;
@property(nonatomic) __weak id <UIStepperControl> stepperControl; // @synthesize stepperControl=_stepperControl;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(nonatomic, getter=isContinuous) _Bool continuous; // @synthesize continuous=_continuous;
@property(nonatomic) _Bool autorepeat; // @synthesize autorepeat=_autorepeat;
@property(nonatomic) double minimumValue; // @synthesize minimumValue=_minimumValue;
@property(nonatomic) double maximumValue; // @synthesize maximumValue=_maximumValue;
@property(nonatomic) double value; // @synthesize value=_value;
- (void)setTintColor:(id)arg1;
- (id)decrementImageForState:(unsigned long long)arg1;
- (void)setDecrementImage:(id)arg1 forState:(unsigned long long)arg2;
- (id)incrementImageForState:(unsigned long long)arg1;
- (void)setIncrementImage:(id)arg1 forState:(unsigned long long)arg2;
- (id)dividerImageForLeftSegmentState:(unsigned long long)arg1 rightSegmentState:(unsigned long long)arg2;
- (void)setDividerImage:(id)arg1 forLeftSegmentState:(unsigned long long)arg2 rightSegmentState:(unsigned long long)arg3;
- (id)backgroundImageForState:(unsigned long long)arg1;
- (void)setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2;
- (void)layoutSubviews;
- (void)_updateCount:(id)arg1;
- (void)_stopTimer;
- (void)_startTimer;
- (struct UIEdgeInsets)alignmentRectInsetsForControl:(id)arg1;
- (void)cancelTrackingWithEvent:(id)arg1;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (_Bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (_Bool)pointMostlyInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)_updateDividerImageForButtonState;
- (void)_updateBackgroundForButtonState;
- (void)_updateButton:(id)arg1 backgroundView:(id)arg2 highlightView:(id)arg3 backgroundImage:(id)arg4 highlightImage:(id)arg5 onRight:(_Bool)arg6;
- (void)_updateHighlight:(id)arg1 button:(id)arg2 onRight:(_Bool)arg3;
- (id)_alphaAnimator:(_Bool)arg1;
- (struct CGRect)_rightHighlightInsetFrame;
- (struct CGRect)_rightHighlightFrame;
- (struct CGRect)_leftHighlightInsetFrame;
- (struct CGRect)_leftHighlightFrame;
- (void)_dynamicUserInterfaceTraitDidChange;
- (void)_updateHighlightingAtPoint:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)_updateButtonEnabled;
- (void)_commonStepperInit;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1 forControl:(id)arg2;
- (struct CGSize)intrinsicSizeWithinSize:(struct CGSize)arg1 forControl:(id)arg2;
- (struct CGSize)_intrinsicSizeWithinSize:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

