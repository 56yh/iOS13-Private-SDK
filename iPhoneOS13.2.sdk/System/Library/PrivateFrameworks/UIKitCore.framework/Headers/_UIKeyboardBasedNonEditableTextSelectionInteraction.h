//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/_UIKeyboardBasedTextSelectionInteraction.h>

__attribute__((visibility("hidden")))
@interface _UIKeyboardBasedNonEditableTextSelectionInteraction : _UIKeyboardBasedTextSelectionInteraction
{
    _Bool _isShiftKeyBeingHeld;
}

- (void)oneFingerForcePress:(id)arg1;
- (void)oneFingerForcePan:(id)arg1;
- (void)transitionFromBlockMagnifyToBlockSelectWithLocation:(struct CGPoint)arg1 viaDrag:(_Bool)arg2;
- (void)_synchronousGranularityExpandingGestureWithTimeInterval:(double)arg1 timeGranularity:(double)arg2 isMidPan:(_Bool)arg3;

@end

