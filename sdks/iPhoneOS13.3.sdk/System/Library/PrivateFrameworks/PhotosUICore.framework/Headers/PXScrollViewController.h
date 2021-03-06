//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXTilingScrollController-Protocol.h>

@class NSHashTable, PXTilingScrollInfo;
@protocol PXAnonymousScrollView, PXTilingScrollControllerUpdateDelegate, UICoordinateSpace;

@interface PXScrollViewController : NSObject <PXTilingScrollController>
{
    NSHashTable *_willLayoutSubviewsObservers;
    NSHashTable *_didLayoutSubviewsObservers;
    NSHashTable *_didScrollObservers;
    BOOL _isDecelerating;
    BOOL _isDragging;
    BOOL _isTracking;
    BOOL _isScrubbing;
    BOOL _isManuallyChanging;
    BOOL _deferContentOffsetUpdates;
    id <PXTilingScrollControllerUpdateDelegate> _updateDelegate;
    PXTilingScrollInfo *_scrollInfo;
    NSObject _scrollView;
    NSObject<UICoordinateSpace> *_contentCoordinateSpace;
    NSHashTable *__observers;
    long long _activeScrollAnimations;
    CGSize _scrollViewContentSize;
    UIEdgeInsets _contentInset;
}

@property(readonly, nonatomic) CGSize scrollViewContentSize; // @synthesize scrollViewContentSize=_scrollViewContentSize;
@property(readonly, nonatomic) long long activeScrollAnimations; // @synthesize activeScrollAnimations=_activeScrollAnimations;
@property(readonly, nonatomic) NSHashTable *_observers; // @synthesize _observers=__observers;
@property(nonatomic) BOOL deferContentOffsetUpdates; // @synthesize deferContentOffsetUpdates=_deferContentOffsetUpdates;
@property(nonatomic) UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
@property(readonly, nonatomic) NSObject<UICoordinateSpace> *contentCoordinateSpace; // @synthesize contentCoordinateSpace=_contentCoordinateSpace;
@property(readonly, nonatomic) BOOL isManuallyChanging; // @synthesize isManuallyChanging=_isManuallyChanging;
@property(readonly, nonatomic) BOOL isScrubbing; // @synthesize isScrubbing=_isScrubbing;
@property(readonly, nonatomic) BOOL isTracking; // @synthesize isTracking=_isTracking;
@property(readonly, nonatomic) BOOL isDragging; // @synthesize isDragging=_isDragging;
@property(readonly, nonatomic) BOOL isDecelerating; // @synthesize isDecelerating=_isDecelerating;
@property(readonly, nonatomic) NSObject<PXAnonymousScrollView> *scrollView; // @synthesize scrollView=_scrollView;
@property(copy, nonatomic) PXTilingScrollInfo *scrollInfo; // @synthesize scrollInfo=_scrollInfo;
@property(nonatomic) __weak id <PXTilingScrollControllerUpdateDelegate> updateDelegate; // @synthesize updateDelegate=_updateDelegate;
// - (void).cxx_destruct;
@property(nonatomic) CGRect contentBounds;
@property(nonatomic) CGPoint visibleOrigin;
- (void)updateIfNeeded;
- (void)setNeedsUpdate;
@property(readonly, nonatomic) CGRect targetRect;
@property(readonly, nonatomic) CGRect constrainedVisibleRect;
@property(readonly, nonatomic) CGRect visibleRect;
@property(readonly, nonatomic) CGRect activeRect;
@property(readonly, nonatomic) CGSize referenceSize;
- (void)performManualChange:(id /* CDUnknownBlockType */)arg1;
- (void)applyScrollInfo:(id)arg1;
@property(nonatomic) CGRect scrollViewContentBounds;
@property(readonly, nonatomic) CGRect scrollViewTargetRect;
@property(readonly, nonatomic) CGRect scrollViewConstrainedVisibleRect;
@property(readonly, nonatomic) CGRect scrollViewVisibleRect;
@property(readonly, nonatomic) CGRect scrollViewActiveRect;
@property(readonly, nonatomic) CGSize scrollViewReferenceSize;
- (void)scrollViewLayoutIfNeeded;
- (void)setScrollViewNeedsLayout;
- (void)scrollRectToVisible:(CGRect)arg1 avoidingContentInsetEdges:(NSUInteger)arg2 animated:(BOOL)arg3;
- (void)scrollRectToVisible:(CGRect)arg1 animated:(BOOL)arg2;
- (BOOL)isScrolledAtEdge:(unsigned int)arg1 tolerance:(double)arg2;
- (void)scrollToEdge:(unsigned int)arg1;
- (void)addSubviewToScrollView:(NSObject )arg1;
- (void)addSubview:(NSObject )arg1;
- (void)scrollViewDidEndScrollingAnimation;
- (void)scrollViewWillBeginScrollingAnimationTowardsContentEdges:(NSUInteger)arg1;
- (BOOL)scrollViewShouldScrollToTop;
- (void)scrollViewContentBoundsDidChange;
- (void)scrollViewDidEndScrolling;
- (void)willEndScrollingWithVelocity:(CGPoint)arg1 targetContentOffset:(inout CGPoint )arg2;
- (void)scrollViewDidScroll;
- (void)scrollViewWillBeginScrolling;
- (void)scrollViewDidLayout;
- (void)scrollViewWillLayout;
@property(readonly, nonatomic) BOOL hasWindow;
@property(readonly, nonatomic) BOOL isAnimatingScroll;
- (void)unregisterObserver:(id)arg1;
- (void)registerObserver:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (id)init;

@end

