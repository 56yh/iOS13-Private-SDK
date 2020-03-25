//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <LinkPresentation/LPComponentView.h>


@class LPTapToLoadViewStyle, LPTextView, UILongPressGestureRecognizer, UIView;
@protocol LPTapToLoadViewDelegate;

__attribute__((visibility("hidden")))
@interface LPTapToLoadView : LPComponentView <CAAnimationDelegate, UIGestureRecognizerDelegate>
{
    LPTextView *_captionView;
    UIView *_progressView;
    LPTapToLoadViewStyle *_style;
    UIView *_highlightView;
    UILongPressGestureRecognizer *_highlightGestureRecognizer;
    BOOL _wasTapped;
    id /* CDUnknownBlockType */ _animateOutCompletionHandler;
    id <LPTapToLoadViewDelegate> _delegate;
}

@property(nonatomic) __weak id <LPTapToLoadViewDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)animateOutWithCompletionHandler:(id /* CDUnknownBlockType */)arg1;
- (void)_animateToProgressView;
- (void)_tapRecognized:(id)arg1;
- (void)_highlightLongPressRecognized:(id)arg1;
- (void)_didScroll;
- (BOOL)gestureRecognizer:(id)arg1 canPreventGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)_createIndeterminateProgressIndicator;
- (void)_buildViews;
- (void)layoutComponentView;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (id)initWithStyle:(id)arg1;
- (id)init;

@end
