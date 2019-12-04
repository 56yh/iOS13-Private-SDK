//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class AKMainEventHandler, AKPageController, UIScrollView;

@interface AKOverlayView : UIView
{
    _Bool _isObserving;
    _Bool _deferWasMovedToSuperviewUntilMoveToWindow;
    _Bool _scrollViewIsInLiveMagnify;
    AKPageController *_pageController;
    AKMainEventHandler *_mainEventHandler;
    UIScrollView *_observedScrollView;
}

+ (void)initialize;
@property _Bool scrollViewIsInLiveMagnify; // @synthesize scrollViewIsInLiveMagnify=_scrollViewIsInLiveMagnify;
@property(retain) UIScrollView *observedScrollView; // @synthesize observedScrollView=_observedScrollView;
@property _Bool deferWasMovedToSuperviewUntilMoveToWindow; // @synthesize deferWasMovedToSuperviewUntilMoveToWindow=_deferWasMovedToSuperviewUntilMoveToWindow;
@property _Bool isObserving; // @synthesize isObserving=_isObserving;
@property __weak AKMainEventHandler *mainEventHandler; // @synthesize mainEventHandler=_mainEventHandler;
@property __weak AKPageController *pageController; // @synthesize pageController=_pageController;
- (void)_scrollViewDidScrollToTop:(id)arg1;
- (void)_scrollViewDidEndAnimation:(id)arg1;
- (void)_scrollViewDidEndDecelerating:(id)arg1;
- (void)_scrollViewDidEndDragging:(id)arg1;
- (void)_willEndLiveMagnify:(id)arg1;
- (void)_willStartLiveMagnify:(id)arg1;
- (void)_wasMovedToNewSuperview;
- (void)_willRemoveFromOldSuperview;
- (void)_teardownObservation;
- (void)_setupObservation;
- (void)_updateLayersUsingScrollViewWithForcedUpdate:(_Bool)arg1;
- (void)_updateLayersUsingScrollView;
- (void)_postScrollViewScrollOrMagnifyEndNotification;
- (void)_postScrollViewRectChangedNotification;
- (void)editTextAnnotation:(id)arg1;
- (void)duplicate:(id)arg1;
- (void)delete:(id)arg1;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)layoutSublayersOfLayer:(id)arg1;
- (void)updateLayers;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (_Bool)canBecomeFirstResponder;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)didMoveToWindow;
- (void)didMoveToSuperview;
- (void)willMoveToSuperview:(id)arg1;
- (void)dealloc;
- (id)initWithPageController:(id)arg1;

@end

