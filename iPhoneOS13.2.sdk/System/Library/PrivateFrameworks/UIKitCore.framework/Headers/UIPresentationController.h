//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/UIAppearanceContainer-Protocol.h>
#import <UIKitCore/UIContentContainer-Protocol.h>
#import <UIKitCore/UIFocusEnvironment-Protocol.h>
#import <UIKitCore/UIGestureRecognizerDelegate-Protocol.h>
#import <UIKitCore/UITraitEnvironment-Protocol.h>
#import <UIKitCore/_UIAppearanceContainer-Protocol.h>
#import <UIKitCore/_UIContentContainerInternal-Protocol.h>
#import <UIKitCore/_UIFallbackEnvironment-Protocol.h>
#import <UIKitCore/_UIGeometryChangeObserver-Protocol.h>
#import <UIKitCore/_UITraitEnvironmentInternal-Protocol.h>

@class NSArray, NSString, NSUUID, UIBarButtonItem, UITapGestureRecognizer, UITraitCollection, UIView, UIViewController;
@protocol UIAdaptivePresentationControllerDelegate, UIFocusEnvironment, UIFocusItemContainer, UIViewControllerAnimatedTransitioning, UIViewControllerInteractiveTransitioning, UIViewControllerTransitionCoordinator, UIViewControllerTransitionCoordinatorContext, _UITraitEnvironmentInternal;

@interface UIPresentationController : NSObject <_UIFallbackEnvironment, _UIGeometryChangeObserver, _UIAppearanceContainer, _UITraitEnvironmentInternal, _UIContentContainerInternal, UIGestureRecognizerDelegate, UIAppearanceContainer, UITraitEnvironment, UIContentContainer, UIFocusEnvironment>
{
    _Bool _isDisconnectedRoot;
    _Bool _transitionAsDisconnectedRoot;
    _Bool _needsDidAppear;
    _Bool _needsDidDisappear;
    _Bool _monitorsSystemLayoutFittingSize;
    _Bool _didUpdateLayoutForStatusBarAndInterfaceOrientation;
    id _target;
    SEL _didEndSelector;
    UITraitCollection *_lastNotifiedTraitCollection;
    UIView *_snapshotOverlayView;
    UITapGestureRecognizer *_backGestureRecognizer;
    NSUUID *_currentRunningAnimationsUUID;
    _Bool _changedPresentingViewControllerDuringAdaptation;
    _Bool _shouldContinueTouchesOnTargetViewController;
    _Bool _containerIgnoresDirectTouchEvents;
    _Bool _isCurrentStateCancelled;
    UIView *_sourceView;
    UIBarButtonItem *_barButtonItem;
    UIViewController *_presentingViewController;
    UIViewController *_presentedViewController;
    UIView *_containerView;
    id <UIAdaptivePresentationControllerDelegate> _delegate;
    UITraitCollection *_overrideTraitCollection;
    id <UIViewControllerAnimatedTransitioning> _currentTransitionController;
    id <UIViewControllerInteractiveTransitioning> _currentInteractionController;
    UIView *_presentationView;
    UIView *__currentPresentationSuperview;
    long long _state;
    id <UIViewControllerTransitionCoordinator> _adaptiveTransitionCoordinator;
    id <UIViewControllerTransitionCoordinatorContext> _adaptiveTransitionContext;
    id /* block */ __transitionViewForCurrentTransition;
    id /* block */ __containerSuperviewForCurrentTransition;
    id /* block */ __fromViewForCurrentTransition;
    id /* block */ __toViewForCurrentTransition;
    id /* block */ __customFromViewForCurrentTransition;
    id /* block */ __customToViewForCurrentTransition;
    id /* block */ __computeToEndFrameForCurrentTransition;
    id /* block */ __currentTransitionDidComplete;
    UIView *_customViewForTouchContinuation;
    UITraitCollection *_internalOverrideTraitCollection;
    UIView *_realSourceView;
    struct CGSize _preferredContentSize;
    struct CGRect _sourceRect;
}

+ (void)_scheduleTransition:(id /* block */)arg1;
+ (_Bool)_shouldDeferTransitions;
+ (_Bool)_allowsDeferredTransitions;
+ (_Bool)_preventsAppearanceProxyCustomization;
+ (struct UIEdgeInsets)_statusBarOverlapAndMarginInfoForView:(id)arg1;
+ (void)initialize;
@property(readonly, nonatomic, getter=_realSourceView) UIView *realSourceView; // @synthesize realSourceView=_realSourceView;
@property(nonatomic) _Bool isCurrentStateCancelled; // @synthesize isCurrentStateCancelled=_isCurrentStateCancelled;
@property(nonatomic, getter=_containerIgnoresDirectTouchEvents, setter=_setContainerIgnoresDirectTouchEvents:) _Bool containerIgnoresDirectTouchEvents; // @synthesize containerIgnoresDirectTouchEvents=_containerIgnoresDirectTouchEvents;
@property(copy, nonatomic, getter=_internalOverrideTraitCollection, setter=_setInternalOverrideTraitCollection:) UITraitCollection *internalOverrideTraitCollection; // @synthesize internalOverrideTraitCollection=_internalOverrideTraitCollection;
@property(retain, nonatomic, getter=_customViewForTouchContinuation, setter=_setCustomViewForTouchContinuation:) UIView *customViewForTouchContinuation; // @synthesize customViewForTouchContinuation=_customViewForTouchContinuation;
@property(nonatomic, getter=_shouldContinueTouchesOnTargetViewController, setter=_setShouldContinueTouchesOnTargetViewController:) _Bool shouldContinueTouchesOnTargetViewController; // @synthesize shouldContinueTouchesOnTargetViewController=_shouldContinueTouchesOnTargetViewController;
@property(copy, nonatomic) id /* block */ _currentTransitionDidComplete; // @synthesize _currentTransitionDidComplete=__currentTransitionDidComplete;
@property(copy, nonatomic) id /* block */ _computeToEndFrameForCurrentTransition; // @synthesize _computeToEndFrameForCurrentTransition=__computeToEndFrameForCurrentTransition;
@property(copy, nonatomic) id /* block */ _customToViewForCurrentTransition; // @synthesize _customToViewForCurrentTransition=__customToViewForCurrentTransition;
@property(copy, nonatomic) id /* block */ _customFromViewForCurrentTransition; // @synthesize _customFromViewForCurrentTransition=__customFromViewForCurrentTransition;
@property(copy, nonatomic) id /* block */ _toViewForCurrentTransition; // @synthesize _toViewForCurrentTransition=__toViewForCurrentTransition;
@property(copy, nonatomic) id /* block */ _fromViewForCurrentTransition; // @synthesize _fromViewForCurrentTransition=__fromViewForCurrentTransition;
@property(copy, nonatomic) id /* block */ _containerSuperviewForCurrentTransition; // @synthesize _containerSuperviewForCurrentTransition=__containerSuperviewForCurrentTransition;
@property(copy, nonatomic) id /* block */ _transitionViewForCurrentTransition; // @synthesize _transitionViewForCurrentTransition=__transitionViewForCurrentTransition;
@property(nonatomic, getter=_changedPresentingViewControllerDuringAdaptation, setter=_setChangedPresentingViewControllerDuringAdaptation:) _Bool changedPresentingViewControllerDuringAdaptation; // @synthesize changedPresentingViewControllerDuringAdaptation=_changedPresentingViewControllerDuringAdaptation;
@property(retain, nonatomic, getter=_adaptiveTransitionContext, setter=_setAdaptiveTransitionContext:) id <UIViewControllerTransitionCoordinatorContext> adaptiveTransitionContext; // @synthesize adaptiveTransitionContext=_adaptiveTransitionContext;
@property(retain, nonatomic, getter=_adaptiveTransitionCoordinator, setter=_setAdaptiveTransitionCoordinator:) id <UIViewControllerTransitionCoordinator> adaptiveTransitionCoordinator; // @synthesize adaptiveTransitionCoordinator=_adaptiveTransitionCoordinator;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(nonatomic, getter=_currentPresentationSuperview, setter=_setCurrentPresentationSuperview:) __weak UIView *_currentPresentationSuperview; // @synthesize _currentPresentationSuperview=__currentPresentationSuperview;
@property(retain, nonatomic, getter=_presentationView, setter=_setPresentationView:) UIView *presentationView; // @synthesize presentationView=_presentationView;
@property(retain, nonatomic, getter=_currentInteractionController, setter=_setCurrentInteractionController:) id <UIViewControllerInteractiveTransitioning> currentInteractionController; // @synthesize currentInteractionController=_currentInteractionController;
@property(retain, nonatomic, getter=_currentTransitionController, setter=_setCurrentTransitionController:) id <UIViewControllerAnimatedTransitioning> currentTransitionController; // @synthesize currentTransitionController=_currentTransitionController;
@property(copy, nonatomic) UITraitCollection *overrideTraitCollection; // @synthesize overrideTraitCollection=_overrideTraitCollection;
@property(nonatomic) __weak id <UIAdaptivePresentationControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic, setter=_setContainerView:) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic, setter=_setPresentedViewController:) UIViewController *presentedViewController; // @synthesize presentedViewController=_presentedViewController;
@property(retain, nonatomic, setter=_setPresentingViewController:) UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
@property(retain, nonatomic) UIBarButtonItem *barButtonItem; // @synthesize barButtonItem=_barButtonItem;
@property(nonatomic) struct CGRect sourceRect; // @synthesize sourceRect=_sourceRect;
@property(retain, nonatomic) UIView *sourceView; // @synthesize sourceView=_sourceView;
@property(nonatomic, getter=_preferredContentSize, setter=_setPreferredContentSize:) struct CGSize _preferredContentSize; // @synthesize _preferredContentSize;
- (_Bool)_shouldSavePresentedViewControllerForStateRestoration;
- (struct UIEdgeInsets)_additionalSafeAreaInsets;
- (void)_sendFallbackDidDismiss;
- (void)_sendFallbackWillDismiss;
- (_Bool)_fallbackShouldDismiss;
- (void)_sendDidAttemptToDismiss;
- (void)_sendDidDismiss;
- (void)_sendWillDismiss;
- (_Bool)_shouldDismiss;
- (void)_containedViewControllerModalStateChanged;
- (_Bool)_isModal;
- (void)_disableMenuPressForBackGesture;
- (void)_performBackGesture:(id)arg1;
- (_Bool)_gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)_gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (_Bool)shouldUpdateFocusInContext:(id)arg1;
- (void)updateFocusIfNeeded;
- (void)setNeedsFocusUpdate;
@property(readonly, copy, nonatomic) NSArray *preferredFocusEnvironments;
- (long long)_subclassPreferredFocusedViewPrioritizationType;
@property(readonly, nonatomic) __weak UIView *preferredFocusedView;
@property(readonly, nonatomic) id <UIFocusItemContainer> focusItemContainer;
- (id)_focusMapContainer;
@property(readonly, nonatomic) __weak id <UIFocusEnvironment> parentFocusEnvironment;
- (id)_animatorForContainmentTransition;
- (id)_viewsParticipatingInNavigationControllerTransition;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;
- (id)_adaptiveWillTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;
- (void)_window:(id)arg1 willTransitionToTraitCollection:(id)arg2 withTransitionCoordinator:(id)arg3;
- (void)_parent:(id)arg1 willTransitionToTraitCollection:(id)arg2 withTransitionCoordinator:(id)arg3;
- (void)_setOverrideTraitCollection:(id)arg1 updatingPresentedViewControllerImmediately:(_Bool)arg2;
- (void)_updateTraitsIfNecessary;
- (void)traitCollectionDidChange:(id)arg1;
- (id)_traitCollectionForChildEnvironment:(id)arg1;
- (_Bool)_inheritsPresentingViewControllerThemeLevel;
@property(readonly, nonatomic) UITraitCollection *traitCollection;
- (id)_parentTraitCollection;
@property(readonly, nonatomic) id <_UITraitEnvironmentInternal> _parentTraitEnvironment;
- (Class)_appearanceGuideClass;
- (id)_appearanceContainer;
- (id)_presentedViewControllerForPresentationController:(id)arg1 traitCollection:(id)arg2;
- (void)_sendDelegateWillPresentWithAdaptiveStyle:(long long)arg1 transitionCoordinator:(id)arg2;
- (id)_presentationControllerForTraitCollection:(id)arg1;
- (CDStruct_912cb5d2)__sizeClassPair;
- (void)systemLayoutFittingSizeDidChangeForChildContentContainer:(id)arg1;
- (void)_systemLayoutFittingSizeDidChangeForChildContentContainer:(id)arg1 childViewController:(id)arg2;
- (_Bool)_monitorsSystemLayoutFittingSize;
@property(readonly, nonatomic) struct CGSize preferredContentSize;
- (id)presentedContentContainer;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (struct CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(struct CGSize)arg2;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (_Bool)_shouldAdaptFromTraitCollection:(id)arg1 toTraitCollection:(id)arg2;
- (long long)adaptivePresentationStyleForTraitCollection:(id)arg1;
- (long long)_defaultPresentationStyleForTraitCollection:(id)arg1;
@property(readonly, nonatomic) long long adaptivePresentationStyle;
@property(readonly, nonatomic) long long presentationStyle;
- (id)_preferredInteractionControllerForDismissal:(id)arg1;
- (id)_preferredInteractionControllerForPresentation:(id)arg1;
- (id)_preferredAnimationControllerForDismissal;
- (id)_preferredAnimationControllerForPresentation;
- (_Bool)_forcesPreferredAnimationControllers;
@property(readonly, nonatomic) UIView *presentedView;
- (struct CGRect)_frameOfPresentedViewControllerViewInSuperview;
@property(readonly, nonatomic) struct CGRect frameOfPresentedViewInContainerView;
- (void)_transitionFromDidEnd;
- (void)_transitionFromWillBegin;
- (void)_transitionToDidEnd;
- (void)_transitionToWillBegin;
- (void)containerViewDidLayoutSubviews;
- (void)_containerViewLayoutSubviews;
- (void)containerViewWillLayoutSubviews;
- (void)_containerViewWillLayoutSubviews;
- (void)_containerViewSafeAreaInsetsDidChange;
- (void)_containerViewTraitCollectionDidChange;
- (void)_containerViewBoundsDidChange;
- (void)_sendPresentationControllerNotification:(id)arg1 userInfo:(id)arg2;
- (void)dismissalTransitionDidEnd:(_Bool)arg1;
- (void)dismissalTransitionWillBegin;
- (void)presentationTransitionDidEnd:(_Bool)arg1;
- (void)presentationTransitionWillBegin;
- (void)_initViewHierarchyForPresentationSuperview:(id)arg1;
- (struct CGRect)_frameForTransitionViewInPresentationSuperview:(id)arg1;
- (void)_releaseSnapshot;
- (void)_coverWithSnapshot;
- (void)_beginOcclusionIfNecessary:(_Bool)arg1;
- (void)_enableOcclusion:(_Bool)arg1;
- (id)_passthroughViews;
- (_Bool)_shouldOccludeDuringPresentation;
- (struct CGRect)_frameForChildContentContainer:(id)arg1;
- (void)dealloc;
- (id)_descriptionForPrintingViewControllerHierarchy;
- (void)_willRunTransitionForCurrentStateDeferred:(_Bool)arg1;
- (void)completeCurrentTransitionImmediately;
- (void)runTransitionForCurrentState;
- (struct UIEdgeInsets)_baseContentInsetsWithLeftMargin:(double *)arg1 rightMargin:(double *)arg2;
- (id)_rootPresentingViewControllerForNestedPresentation;
- (id)_viewToIgnoreLayerTransformForViewFrameInWindowContentOverlayInsetsCalculation;
- (id)_initialPresentationViewControllerForViewController:(id)arg1;
@property(readonly, nonatomic) _Bool _isPresentedInFullScreen;
- (id)_fullscreenPresentationSuperview;
- (id)_currentContextPresentationSuperview;
- (_Bool)_shouldGrabPresentersView;
@property(readonly, nonatomic) _Bool _mayChildGrabPresentedViewControllerView;
@property(readonly, nonatomic) _Bool shouldRemovePresentersView;
@property(readonly, nonatomic) _Bool shouldPresentInFullscreen;
- (_Bool)_keyboardShouldAnimateAlongsideForInteractiveTransitions;
- (_Bool)_shouldRespectDefinesPresentationContext;
- (id)_childPresentationController;
- (id)_firstCurrentContextChildInWindow;
- (id)_parentPresentationControllerImmediate:(_Bool)arg1;
- (id)_parentPresentationController;
- (void)_transitionToPresentationController:(id)arg1 withTransitionCoordinator:(id)arg2;
- (void)_dismissWithAnimationController:(id)arg1 interactionController:(id)arg2 target:(id)arg3 didEndSelector:(SEL)arg4;
- (void)_presentWithAnimationController:(id)arg1 interactionController:(id)arg2 target:(id)arg3 didEndSelector:(SEL)arg4;
- (void)_adjustOrientationIfNecessaryInWindow:(id)arg1 forViewController:(id)arg2 preservingViewController:(id)arg3;
- (_Bool)_presentationPotentiallyUnderlapsStatusBar;
- (void)_prepareForWindowDeallocRecursively:(_Bool)arg1;
- (void)_cleanup;
- (void)transitionDidFinish:(_Bool)arg1;
- (_Bool)_shouldDisableInteractionDuringTransitions;
- (_Bool)_preserveResponderAcrossWindows;
- (_Bool)_shouldRestoreFirstResponder;
- (_Bool)_shouldKeepCurrentFirstResponder;
- (_Bool)_shouldPresentedViewControllerControlStatusBarAppearance;
- (_Bool)_shouldDisablePresentersAppearanceCallbacks;
- (id)_activePresentationController;
- (_Bool)_isAdapted;
- (_Bool)_transitioningTo;
- (_Bool)_transitioningFrom;
- (_Bool)dismissed;
- (_Bool)dismissing;
- (_Bool)presented;
- (_Bool)presenting;
- (void)transitionDidStart;
- (_Bool)_shouldMakePresentedViewControllerFirstResponder;
- (void)_transplantView:(id)arg1 toSuperview:(id)arg2;
- (void)_transplantView:(id)arg1 toSuperview:(id)arg2 atIndex:(unsigned long long)arg3;
- (id)init;
- (id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2;
- (void)_realSourceViewGeometryDidChange;
- (void)_geometryChanges:(id)arg1 forAncestor:(id)arg2;
- (void)_realSourceViewDidChangeFromView:(id)arg1 toView:(id)arg2;
- (void)_setRealSourceView:(id)arg1;
- (void)_updateRealSourceView;
- (id)_fallbackTraitCollection;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

