//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoverSheet/BSDescriptionProviding-Protocol.h>
#import <CoverSheet/CSEventHandling-Protocol.h>
#import <CoverSheet/UIGestureRecognizerDelegate-Protocol.h>

@class CSHorizontalScrollFailureRecognizer, NSString, UIGestureRecognizer, UIScrollView, UIView;
@protocol CSScrollGestureControllerDelegate, CSScrollableView;

@interface CSScrollGestureController : NSObject <UIGestureRecognizerDelegate, BSDescriptionProviding, CSEventHandling>
{
    UIScrollView *_scrollView;
    UIView<CSScrollableView> *_scrollableView;
    long long _scrollingStrategy;
    UIGestureRecognizer *_scrollViewGestureRecognizer;
    id <CSScrollGestureControllerDelegate> _delegate;
    CSHorizontalScrollFailureRecognizer *_horizontalFailureGestureRecognizer;
}

@property(retain, nonatomic) CSHorizontalScrollFailureRecognizer *horizontalFailureGestureRecognizer; // @synthesize horizontalFailureGestureRecognizer=_horizontalFailureGestureRecognizer;
@property(nonatomic) __weak id <CSScrollGestureControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long scrollingStrategy; // @synthesize scrollingStrategy=_scrollingStrategy;
- (_Bool)_shouldAllowScrollForScrollingStrategy:(long long)arg1;
- (_Bool)_shouldFailHorizontalSwipesForScrollingStrategy:(long long)arg1;
- (void)_updateForScrollingStrategy:(long long)arg1 fromScrollingStrategy:(long long)arg2;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (void)_horizontalScrollFailureGestureRecognizerChanged:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)wouldHandleButtonEvent:(id)arg1;
- (_Bool)handleEvent:(id)arg1;
- (void)invalidate;
- (void)dealloc;
- (id)initWithScrollableView:(id)arg1;

// Remaining properties
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

