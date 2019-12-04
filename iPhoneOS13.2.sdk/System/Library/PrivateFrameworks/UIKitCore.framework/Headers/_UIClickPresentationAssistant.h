//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/UIViewControllerAnimatedTransitioning-Protocol.h>
#import <UIKitCore/UIViewControllerTransitioningDelegate-Protocol.h>
#import <UIKitCore/_UIClickPresentationAssisting-Protocol.h>

@class NSString, UITargetedPreview, UIView, UIViewController, UIViewPropertyAnimator, _UIClickPresentation, _UIPortalView, _UIStateMachine;
@protocol UIViewControllerContextTransitioning;

__attribute__((visibility("hidden")))
@interface _UIClickPresentationAssistant : NSObject <UIViewControllerTransitioningDelegate, UIViewControllerAnimatedTransitioning, _UIClickPresentationAssisting>
{
    id <UIViewControllerContextTransitioning> _currentContext;
    UIViewPropertyAnimator *_presentationAnimator;
    id /* block */ lifecycleCompletion;
    _UIClickPresentation *presentation;
    _UIPortalView *_presentationSourcePortalView;
    UITargetedPreview *_sourcePreview;
    UIViewController *_stashedParentViewController;
    UIView *_stashedSuperView;
    id /* block */ _transitionCompletion;
    _UIStateMachine *_stateMachine;
}

@property(retain, nonatomic) _UIStateMachine *stateMachine; // @synthesize stateMachine=_stateMachine;
@property(copy, nonatomic) id /* block */ transitionCompletion; // @synthesize transitionCompletion=_transitionCompletion;
@property(retain, nonatomic) UIView *stashedSuperView; // @synthesize stashedSuperView=_stashedSuperView;
@property(retain, nonatomic) UIViewController *stashedParentViewController; // @synthesize stashedParentViewController=_stashedParentViewController;
@property(retain, nonatomic) UITargetedPreview *sourcePreview; // @synthesize sourcePreview=_sourcePreview;
@property(retain, nonatomic) _UIPortalView *presentationSourcePortalView; // @synthesize presentationSourcePortalView=_presentationSourcePortalView;
@property(retain, nonatomic) _UIClickPresentation *presentation; // @synthesize presentation;
@property(copy, nonatomic) id /* block */ lifecycleCompletion; // @synthesize lifecycleCompletion;
@property(readonly, nonatomic) UIViewPropertyAnimator *presentationAnimator; // @synthesize presentationAnimator=_presentationAnimator;
- (void)_createPropertyAnimatorIfNecessaryForTransition:(id)arg1 isAppearing:(_Bool)arg2;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;
- (id)_sourcePreviewPortal;
- (void)_applyStashedParentViewControllerIfNecessary;
- (void)_stashParentViewControllerIfNecessary;
- (void)_postInteractionCleanup;
- (void)_animateDismissalIsInterruption:(_Bool)arg1;
- (void)_animatePresentation;
- (void)_didTransitionToPossibleEndingTransition:(id)arg1;
- (void)_didTransitionToDismissingFromState:(unsigned long long)arg1;
- (void)_didTransitionToPresented;
- (void)_didTransitionToPresenting;
- (void)_prepareStateMachine;
- (void)dismissWithReason:(unsigned long long)arg1 alongsideActions:(id /* block */)arg2 completion:(id /* block */)arg3;
- (void)presentFromSourcePreview:(id)arg1 lifecycleCompletion:(id /* block */)arg2;
- (id)initWithClickPresentation:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

