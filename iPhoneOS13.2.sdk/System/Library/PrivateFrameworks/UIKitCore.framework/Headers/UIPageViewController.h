//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UIViewController.h>

#import <UIKitCore/UIGestureRecognizerDelegate-Protocol.h>
#import <UIKitCore/_UIQueuingScrollViewDataSource-Protocol.h>
#import <UIKitCore/_UIQueuingScrollViewDelegate-Protocol.h>

@class NSArray, NSDictionary, NSHashTable, NSMutableArray, NSMutableDictionary, NSString, UIPanGestureRecognizer, UITapGestureRecognizer, _UIPageCurl, _UIPageViewControllerContentView, _UIQueuingScrollView;
@protocol UIPageViewControllerDataSource, UIPageViewControllerDelegate;

@interface UIPageViewController : UIViewController <UIGestureRecognizerDelegate, _UIQueuingScrollViewDelegate, _UIQueuingScrollViewDataSource>
{
    id <UIPageViewControllerDelegate> _delegate;
    id <UIPageViewControllerDataSource> _dataSource;
    long long _transitionStyle;
    long long _navigationOrientation;
    long long _spineLocation;
    _Bool _doubleSided;
    _Bool _pageControlRequiresValidation;
    NSArray *_viewControllers;
    _UIPageCurl *_pageCurl;
    UIPanGestureRecognizer *_panGestureRecognizer;
    UITapGestureRecognizer *_tapGestureRecognizer;
    _Bool _stashingViewControllersForRotation;
    NSArray *_viewControllersStashedForRotation;
    _Bool _interfaceRotating;
    NSMutableArray *_rotationSnapshotViews;
    long long _spineLocationPriorToInterfaceRotation;
    struct UIEdgeInsets _tapRegionInsets;
    struct CGSize _tapRegionBreadths;
    struct UIEdgeInsets _effectiveTapRegionInsets;
    struct CGSize _effectiveTapRegionBreadths;
    struct CGRect *_tapRegions;
    double _pageSpacing;
    NSMutableDictionary *_cachedViewControllersForCurl;
    NSHashTable *_cachedViewControllersForScroll;
    NSDictionary *_incomingAndOutgoingViewControllersForManualTransition;
    long long _lastKnownNavigationDirection;
    long long _disableAutorotationCount;
    struct {
        unsigned int delegateWantsTransitionWillBegin:1;
        unsigned int delegateWantsTransitionCompleted:1;
        unsigned int delegateWantsTransitionsFinished:1;
        unsigned int delegateCustomizesSpineLocationForInterfaceOrientation:1;
        unsigned int delegateSupportedInterfaceOrientations:1;
        unsigned int delegatePreferredInterfaceOrientationForPresentation:1;
        unsigned int dataSourceSuppliesBeforeViewController:1;
        unsigned int dataSourceSuppliesAfterViewController:1;
        unsigned int dataSourceSuppliesPageCount:1;
        unsigned int dataSourceSuppliesPageNumber:1;
    } _delegateFlags;
    id <UIPageViewControllerDataSource> _unsafeUnretainedDataSource;
    id <UIPageViewControllerDelegate> _unsafeUnretainedDelegate;
}

+ (id)_incomingViewControllerKeys;
+ (id)_outgoingViewControllerKeys;
+ (id)stringForSpineLocation:(long long)arg1;
+ (_Bool)doesOverridePreferredInterfaceOrientationForPresentation;
+ (_Bool)_isSpineLocation:(long long)arg1 supportedForTransitionStyle:(long long)arg2;
+ (_Bool)_isNavigationOrientation:(long long)arg1 supportedForTransitionStyle:(long long)arg2;
+ (_Bool)_isSupportedTransitionStyle:(long long)arg1;
@property(readonly, nonatomic, getter=_isInterfaceRotating) _Bool _interfaceRotating; // @synthesize _interfaceRotating;
@property(retain, nonatomic, setter=_setViewControllersStashedForRotation:) NSArray *_viewControllersStashedForRotation; // @synthesize _viewControllersStashedForRotation;
@property(retain, nonatomic, setter=_setViewControllers:) NSArray *_viewControllers; // @synthesize _viewControllers;
- (void)_pageControlValueChanged:(id)arg1;
- (_Bool)queuingScrollViewShouldLayoutSubviews:(id)arg1;
- (void)queuingScrollView:(id)arg1 attemptToPageInDirection:(long long)arg2;
- (void)queuingScrollView:(id)arg1 didFlushView:(id)arg2 animated:(_Bool)arg3;
- (void)_flushViewController:(id)arg1 animated:(_Bool)arg2;
- (id)queuingScrollView:(id)arg1 viewAfterView:(id)arg2;
- (id)queuingScrollView:(id)arg1 viewBeforeView:(id)arg2;
- (id)_queuingScrollView:(id)arg1 viewBefore:(_Bool)arg2 view:(id)arg3;
- (void)queuingScrollViewDidFinishScrolling:(id)arg1;
- (void)queuingScrollView:(id)arg1 didBailoutOfScrollAndRevealedView:(id)arg2;
- (void)queuingScrollView:(id)arg1 didEndManualScroll:(_Bool)arg2 toRevealView:(id)arg3 direction:(long long)arg4 animated:(_Bool)arg5 didFinish:(_Bool)arg6 didComplete:(_Bool)arg7;
- (void)queuingScrollView:(id)arg1 didCommitManualScroll:(_Bool)arg2 toRevealView:(id)arg3 concealView:(id)arg4 direction:(long long)arg5 animated:(_Bool)arg6 canComplete:(_Bool)arg7;
- (void)queuingScrollView:(id)arg1 willManuallyScroll:(_Bool)arg2 toRevealView:(id)arg3 concealView:(id)arg4 animated:(_Bool)arg5;
- (void)_updatePageControlViaDataSourceIfNecessary;
- (void)_handlePagingInDirection:(long long)arg1 completion:(id /* block */)arg2;
- (void)_handleTapGesture:(id)arg1;
- (void)_handlePanGesture:(id)arg1;
- (_Bool)_shouldCompleteManualCurlWithSuggestedVelocity:(double *)arg1;
- (long long)_navigationEndDirectionInResponseToPanGestureRecognizer:(id)arg1 suggestedVelocity:(double *)arg2;
- (_Bool)_gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)_shouldBeginNavigationInDirection:(long long *)arg1 inResponseToPanGestureRecognizer:(id)arg2;
- (_Bool)_shouldNavigateInDirection:(long long *)arg1 inResponseToVelocity:(double *)arg2 ofGestureRecognizedByPanGestureRecognizer:(id)arg3;
- (_Bool)_shouldFlipInRightToLeft;
- (_Bool)_shouldNavigateInDirection:(long long *)arg1 inResponseToTapGestureRecognizer:(id)arg2;
- (struct CGRect *)_tapRegions;
- (id)_incomingViewControllersForGestureDrivenCurlInDirection:(long long)arg1;
- (id)_deepestUnambiguousResponder;
- (void)setViewControllers:(id)arg1 direction:(long long)arg2 animated:(_Bool)arg3 completion:(id /* block */)arg4;
- (void)_setViewControllers:(id)arg1 withScrollInDirection:(long long)arg2 animated:(_Bool)arg3 completion:(id /* block */)arg4;
- (void)_cacheViewControllerForScroll:(id)arg1;
- (void)_setViewControllers:(id)arg1 withCurlOfType:(long long)arg2 fromLocation:(struct CGPoint)arg3 direction:(long long)arg4 animated:(_Bool)arg5 notifyDelegate:(_Bool)arg6 completion:(id /* block */)arg7;
- (void)_endDisablingInterfaceAutorotation;
- (void)_beginDisablingInterfaceAutorotation;
- (void)_invalidateViewControllersStashedForCurlFromDataSource;
- (void)_populateIncomingViewControllersInMap:(id)arg1 withViewControllers:(id)arg2 forCurlInDirection:(long long)arg3;
- (void)_populateOutgoingViewControllersInMap:(id)arg1;
- (id)_viewControllersForCurlWithViewControllers:(id)arg1 direction:(long long)arg2;
- (id)_viewControllerAfterViewController:(id)arg1;
- (id)_viewControllerBeforeViewController:(id)arg1;
- (id)_viewControllerBefore:(_Bool)arg1 viewController:(id)arg2;
- (_Bool)_canHandleGestures;
- (id)_validatedViewControllersForTransitionWithViewControllers:(id)arg1 animated:(_Bool)arg2;
- (_Bool)_isCurrentViewControllerStateValid;
- (void)_contentViewFrameOrBoundsDidChange;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (long long)_requestSpineLocationForInterfaceOrientationAndUpdateStashedViewControllers:(long long)arg1;
- (void)_invalidatePageCurl;
- (id)_viewControllersForPendingSpineLocation:(long long)arg1;
- (id)_validatedViewControllersForPresentationOfViewControllers:(id)arg1 validRange:(struct _NSRange)arg2;
- (struct _NSRange)_validRangeForPresentationOfViewControllersWithSpineLocation:(long long)arg1;
- (long long)preferredInterfaceOrientationForPresentation;
- (_Bool)_hasPreferredInterfaceOrientationForPresentation;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)_sendChildViewWill:(_Bool)arg1 appear:(_Bool)arg2 animated:(_Bool)arg3;
- (void)_child:(id)arg1 didRotateFromInterfaceOrientation:(long long)arg2;
- (void)_child:(id)arg1 willAnimateRotationToInterfaceOrientation:(long long)arg2 duration:(double)arg3;
- (void)_child:(id)arg1 willRotateToInterfaceOrientation:(long long)arg2 duration:(double)arg3;
- (void)_child:(id)arg1 endAppearanceTransitionIfPossible:(_Bool)arg2;
- (_Bool)_childCanEndAppearanceTransition:(id)arg1;
- (void)_childEndAppearanceTransition:(id)arg1;
- (void)_child:(id)arg1 beginAppearanceTransitionIfPossible:(_Bool)arg2 animated:(_Bool)arg3;
- (_Bool)_child:(id)arg1 canBeginAppearanceTransition:(_Bool)arg2;
- (void)_child:(id)arg1 beginAppearanceTransition:(_Bool)arg2 animated:(_Bool)arg3;
- (void)_marginInfoForChild:(id)arg1 leftMargin:(double *)arg2 rightMargin:(double *)arg3;
- (struct UIEdgeInsets)_edgeInsetsForChildViewController:(id)arg1 insetsAreAbsolute:(_Bool *)arg2;
- (_Bool)shouldAutomaticallyForwardRotationMethods;
- (_Bool)shouldAutomaticallyForwardAppearanceMethods;
- (void)viewWillUnload;
- (void)loadView;
@property(nonatomic, setter=_setPageSpacing:) double _pageSpacing;
- (struct CGSize)_contentSizeForSize:(struct CGSize)arg1;
- (id)_pageControl;
@property(readonly, nonatomic, getter=_isPageControlVisible) _Bool _pageControlVisible;
@property(readonly, nonatomic) _UIQueuingScrollView *_scrollView;
@property(readonly, nonatomic) _UIPageViewControllerContentView *_contentView;
- (void)_setDisabledScrollingRegion:(struct CGRect)arg1;
- (struct CGRect)_disabledScrollingRegion;
- (void)_setTapRegionBreadths:(struct CGSize)arg1;
- (struct CGSize)_tapRegionBreadths;
- (struct CGSize)_effectiveTapRegionBreadths;
- (void)_setTapRegionInsets:(struct UIEdgeInsets)arg1;
- (struct UIEdgeInsets)_tapRegionInsets;
- (struct UIEdgeInsets)_effectiveTapRegionInsets;
- (void)_invalidateEffectiveTapRegions;
@property(readonly, nonatomic) NSArray *viewControllers;
@property(readonly, nonatomic) NSArray *gestureRecognizers;
@property(nonatomic, getter=isDoubleSided) _Bool doubleSided;
@property(readonly, nonatomic) long long spineLocation;
- (void)_setSpineLocation:(long long)arg1;
@property(readonly, nonatomic) long long navigationOrientation;
@property(readonly, nonatomic) long long _navigationOrientation;
@property(readonly, nonatomic) long long transitionStyle;
@property(readonly, nonatomic) long long _transitionStyle;
@property(nonatomic) __weak id <UIPageViewControllerDataSource> dataSource;
@property(nonatomic) __weak id <UIPageViewControllerDelegate> delegate;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)preferredFocusedView;
- (_Bool)_shouldPersistViewWhenCoding;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithTransitionStyle:(long long)arg1 navigationOrientation:(long long)arg2 options:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

