//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UIGestureRecognizer.h>

#import <UIKitCore/_UIDigitizerGestureRecognizerImpDelegate-Protocol.h>

@class NSString, _UIDigitizerGestureRecognizerImp;

@interface UIDigitizerTapGestureRecognizer : UIGestureRecognizer <_UIDigitizerGestureRecognizerImpDelegate>
{
    _UIDigitizerGestureRecognizerImp *_imp;
}

@property(nonatomic) double maximumPressDuration;
@property(readonly, nonatomic) struct CGPoint digitizerLocation;
- (void)pressesNotHeldLongEnough:(id)arg1;
- (void)pressesHeldForMinimum:(id)arg1;
- (void)touchesBeganSuccessfully:(id)arg1;
- (void)pressesEndedSuccessfully:(id)arg1;
- (void)reset;
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;
- (void)pressesChanged:(id)arg1 withEvent:(id)arg2;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)setAllowedTouchTypes:(id)arg1;
- (void)setAllowedPressTypes:(id)arg1;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

