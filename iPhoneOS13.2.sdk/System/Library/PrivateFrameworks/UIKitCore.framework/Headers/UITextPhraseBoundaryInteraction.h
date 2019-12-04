//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UITextInteraction.h>

@class UITextGestureTuning;

__attribute__((visibility("hidden")))
@interface UITextPhraseBoundaryInteraction : UITextInteraction
{
    UITextGestureTuning *_gestureTuning;
}

- (void)_phraseBoundaryGesture:(id)arg1;
- (id)_phraseBoundaryGestureRecognizer;
- (void)updateVisibilityOffsetForGesture:(id)arg1;
- (void)_createGestureTuningIfNecessary;
- (struct CGPoint)touchAlignedPointForPoint:(struct CGPoint)arg1 translation:(struct CGPoint)arg2;
- (struct CGPoint)pointIfPlacedCarefully:(struct CGPoint)arg1;
- (void)didMoveToView:(id)arg1;
- (id)initWithTextInput:(id)arg1;

@end

