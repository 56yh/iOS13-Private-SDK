//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoardHome/BSDescriptionProviding-Protocol.h>
#import <SpringBoardHome/UIScrollViewDelegate-Protocol.h>

@class NSHashTable, NSMutableSet, NSString, SBSearchScrollView, UIPanGestureRecognizer, UIView;

@interface SBSearchGesture : NSObject <UIScrollViewDelegate, BSDescriptionProviding>
{
    NSHashTable *_observers;
    SBSearchScrollView *_scrollView;
    _Bool _suppressObserverCallbacks;
    UIPanGestureRecognizer *_panGestureRecognizer;
    double _lastOffset;
    NSMutableSet *_disabledReasons;
    _Bool _isDismissing;
    _Bool _ignoreScrollingEnded;
    _Bool _animatingResetOrReveal;
    UIView *_targetView;
}

+ (double)searchHeaderHeight;
@property(readonly, nonatomic, getter=isAnimatingResetOrReveal) _Bool animatingResetOrReveal; // @synthesize animatingResetOrReveal=_animatingResetOrReveal;
@property(retain, nonatomic) UIView *targetView; // @synthesize targetView=_targetView;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)requireGestureRecognizerToFail:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)_updateScrollingEnabled;
@property(readonly, nonatomic, getter=isShowingSearch) _Bool showingSearch;
- (_Bool)_isShowingSearch;
- (void)_updateForFinalContentOffset;
- (void)_updateForScrollingEnded;
- (void)_notifyThaWeStartedShowingOrHiding;
- (void)setDisabled:(_Bool)arg1 forReason:(id)arg2;
- (void)resetAnimated:(_Bool)arg1;
- (void)revealAnimated:(_Bool)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)updateForRotation;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

