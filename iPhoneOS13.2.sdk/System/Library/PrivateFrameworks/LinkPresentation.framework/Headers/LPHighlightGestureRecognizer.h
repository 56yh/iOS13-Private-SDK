//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIGestureRecognizer.h>

__attribute__((visibility("hidden")))
@interface LPHighlightGestureRecognizer : UIGestureRecognizer
{
    struct CGPoint _startPointInWindowCoordinates;
}

- (struct CGPoint)_locationInWindow;
- (void)cancelHighlight;
- (void)updateHighlight;
- (void)startHighlightIfPossible;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;

@end

