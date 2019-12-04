//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ControlCenterUIKit/CCUIBaseSliderView.h>

#import <ControlCenterUIKit/CCUIContentClipping-Protocol.h>
#import <ControlCenterUIKit/CCUIContentModuleExpandedStateListener-Protocol.h>
#import <ControlCenterUIKit/UIGestureRecognizerDelegate-Protocol.h>

@class NSArray, NSString, UIPanGestureRecognizer, UISelectionFeedbackGenerator, UITapGestureRecognizer;

@interface CCUISteppedSliderView : CCUIBaseSliderView <UIGestureRecognizerDelegate, CCUIContentModuleExpandedStateListener, CCUIContentClipping>
{
    NSArray *_stepBackgroundViews;
    NSArray *_separatorViews;
    double _startingHeight;
    float _startingValue;
    _Bool _gestureStartedInside;
    _Bool _valueHasBeenAdjustedForSteppedSlider;
    UIPanGestureRecognizer *_valueChangeGestureRecognizer;
    UITapGestureRecognizer *_tapGestureRecognizer;
    UISelectionFeedbackGenerator *_selectionFeedbackGenerator;
    _Bool _firstStepIsDisabled;
    _Bool _firstStepIsOff;
    unsigned long long _numberOfSteps;
    unsigned long long _step;
}

@property(nonatomic) unsigned long long step; // @synthesize step=_step;
@property(nonatomic) _Bool firstStepIsOff; // @synthesize firstStepIsOff=_firstStepIsOff;
@property(nonatomic) _Bool firstStepIsDisabled; // @synthesize firstStepIsDisabled=_firstStepIsDisabled;
@property(nonatomic) unsigned long long numberOfSteps; // @synthesize numberOfSteps=_numberOfSteps;
- (void)_updateStepFromValue:(float)arg1 playHaptic:(_Bool)arg2 toggleCurrentStep:(_Bool)arg3;
- (void)_updateStepFromValue:(float)arg1 playHaptic:(_Bool)arg2;
- (void)_updateValueForPanGestureRecognizer:(id)arg1 withAbsolutePosition:(_Bool)arg2 forContinuedGesture:(_Bool)arg3;
- (float)_valueForPanGestureRecognizer:(id)arg1 withAbsoluteReference:(_Bool)arg2;
- (void)_endTrackingWithGestureRecognizer:(id)arg1;
- (void)_continueTrackingWithGestureRecognizer:(id)arg1;
- (void)_beginTrackingWithGestureRecognizer:(id)arg1;
- (void)_handleValueTapGestureRecognizer:(id)arg1;
- (void)_handleValueChangeGestureRecognizer:(id)arg1;
- (float)_valueForTouchTranslation:(struct CGPoint)arg1;
- (float)_valueForTouchLocation:(struct CGPoint)arg1;
- (float)_valueFromStep:(unsigned long long)arg1;
- (unsigned long long)_stepFromValue:(float)arg1 avoidCurrentStep:(_Bool)arg2;
- (unsigned long long)_stepFromValue:(float)arg1;
- (id)_createSeparatorView;
- (id)_createBackgroundViewForStep:(unsigned long long)arg1;
- (void)_createSeparatorViewsForNumberOfSteps:(unsigned long long)arg1;
- (void)_createStepViewsForNumberOfSteps:(unsigned long long)arg1;
- (id)topLevelBlockingGestureRecognizers;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
@property(readonly, nonatomic, getter=isContentClippingRequired) _Bool contentClippingRequired;
- (void)contentModuleWillTransitionToExpandedContentMode:(_Bool)arg1;
- (void)didMoveToWindow;
- (void)_updateStepViewVisibility;
- (void)_layoutStepViews;
- (void)layoutSubviews;
- (void)setValue:(float)arg1 andUpdateStep:(_Bool)arg2;
- (void)setValue:(float)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

