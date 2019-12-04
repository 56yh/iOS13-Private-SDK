//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ControlCenterUIKit/CCUIBaseSliderView.h>

#import <ControlCenterUIKit/UIGestureRecognizerDelegate-Protocol.h>

@class NSString, UIPanGestureRecognizer, UIView, _UIEdgeFeedbackGenerator;

@interface CCUIContinuousSliderView : CCUIBaseSliderView <UIGestureRecognizerDelegate>
{
    UIView *_valueIndicatorClippingView;
    UIView *_backgroundView;
    double _startingLength;
    float _startingValue;
    _Bool _gestureStartedInside;
    UIPanGestureRecognizer *_valueChangeGestureRecognizer;
    _UIEdgeFeedbackGenerator *_edgeFeedbackGenerator;
    int _axis;
    double _continuousSliderCornerRadius;
}

@property(readonly, nonatomic) UIView *valueIndicatorClippingView; // @synthesize valueIndicatorClippingView=_valueIndicatorClippingView;
@property(nonatomic) int axis; // @synthesize axis=_axis;
@property(nonatomic) double continuousSliderCornerRadius; // @synthesize continuousSliderCornerRadius=_continuousSliderCornerRadius;
- (void)_endTrackingWithGestureRecognizer:(id)arg1;
- (void)_continueTrackingWithGestureRecognizer:(id)arg1;
- (void)_beginTrackingWithGestureRecognizer:(id)arg1;
- (void)_handleValueChangeGestureRecognizer:(id)arg1;
- (void)_updateValueForPanGestureRecognizer:(id)arg1 forContinuedGesture:(_Bool)arg2;
- (float)_valueForTouchTranslation:(struct CGPoint)arg1;
- (id)topLevelBlockingGestureRecognizers;
- (struct CGPoint)glyphCenter;
- (void)layoutSubviews;
- (double)sliderLengthForValue:(float)arg1;
- (float)filteredValueForValue:(float)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

