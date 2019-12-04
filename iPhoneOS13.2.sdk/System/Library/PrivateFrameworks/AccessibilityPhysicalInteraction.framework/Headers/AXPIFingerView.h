//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <AccessibilityPhysicalInteraction/CAAnimationDelegate-Protocol.h>

@class AXPIFingerLayer, CAShapeLayer, NSString;
@protocol AXPIFingerAppearanceDelegate;

@interface AXPIFingerView : UIView <CAAnimationDelegate>
{
    _Bool _pressed;
    double _force;
    AXPIFingerLayer *_cursorLayer;
    id <AXPIFingerAppearanceDelegate> _appearanceDelegate;
    CAShapeLayer *_progressLayer;
    id /* block */ _lastProgressCompletionBlock;
}

@property(copy, nonatomic) id /* block */ lastProgressCompletionBlock; // @synthesize lastProgressCompletionBlock=_lastProgressCompletionBlock;
@property(retain, nonatomic) CAShapeLayer *progressLayer; // @synthesize progressLayer=_progressLayer;
@property(nonatomic) __weak id <AXPIFingerAppearanceDelegate> appearanceDelegate; // @synthesize appearanceDelegate=_appearanceDelegate;
@property(retain, nonatomic) AXPIFingerLayer *cursorLayer; // @synthesize cursorLayer=_cursorLayer;
@property(nonatomic) double force; // @synthesize force=_force;
@property(nonatomic, getter=isPressed) _Bool pressed; // @synthesize pressed=_pressed;
- (_Bool)accessibilityIgnoresInvertColors;
- (_Bool)isUserInteractionEnabled;
- (double)_iconScaleForForce:(double)arg1;
- (void)animateToTapWithDuration:(double)arg1;
- (struct CGPath *)_drawFullCircleWithCenter:(struct CGPoint)arg1 radius:(double)arg2 clockwise:(_Bool)arg3;
- (id)_createProgressLayerWithDuration:(double)arg1 center:(struct CGPoint)arg2 radius:(double)arg3;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)cancelExisingCircularProgressAnimation;
- (void)animateCircularProgressWithDuration:(double)arg1 completion:(id /* block */)arg2;
- (void)setPressed:(_Bool)arg1 animated:(_Bool)arg2;
@property(nonatomic, getter=isSelected) _Bool selected;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1 appearanceDelegate:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

