//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/_UIClickPresentationAssisting-Protocol.h>

@class NSValue, UITargetedPreview, UIView, UIViewController, _UIClickPresentation;

__attribute__((visibility("hidden")))
@interface _UIRapidClickPresentationAssistant : NSObject <UIViewControllerTransitioningDelegate, UIViewControllerAnimatedTransitioning, _UIClickPresentationAssisting>
{
    int _animationCount;
    BOOL _isInteractionInitiatedDismiss;
    id /* CDUnknownBlockType */ lifecycleCompletion;
    _UIClickPresentation *presentation;
    UITargetedPreview *_sourcePreview;
    UIViewController *_stashedParentViewController;
    UIView *_stashedSuperView;
    NSValue *_preservedInputViewId;
}

@property(retain, nonatomic) NSValue *preservedInputViewId; // @synthesize preservedInputViewId=_preservedInputViewId;
@property(retain, nonatomic) UIView *stashedSuperView; // @synthesize stashedSuperView=_stashedSuperView;
@property(retain, nonatomic) UIViewController *stashedParentViewController; // @synthesize stashedParentViewController=_stashedParentViewController;
@property(retain, nonatomic) UITargetedPreview *sourcePreview; // @synthesize sourcePreview=_sourcePreview;
@property(retain, nonatomic) _UIClickPresentation *presentation; // @synthesize presentation;
@property(copy, nonatomic) id /* CDUnknownBlockType */ lifecycleCompletion; // @synthesize lifecycleCompletion;
// - (void).cxx_destruct;
- (void)_animateUsingFluidSpringWithType:(NSUInteger)arg1 animations:(id /* CDUnknownBlockType */)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;
- (void)_applyStashedParentViewControllerIfNecessary;
- (void)_stashParentViewControllerIfNecessary;
- (void)_nonAnimatedDismissalWithReason:(NSUInteger)arg1 actions:(id /* CDUnknownBlockType */)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)_animateDismissalWithReason:(NSUInteger)arg1 actions:(id /* CDUnknownBlockType */)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)_restoreInputViewWithReason:(NSUInteger)arg1 forPresentation:(id)arg2;
- (void)dismissWithReason:(NSUInteger)arg1 alongsideActions:(id /* CDUnknownBlockType */)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)_performPresentationAnimationsFromViewController:(id)arg1;
- (void)presentFromSourcePreview:(id)arg1 lifecycleCompletion:(id /* CDUnknownBlockType */)arg2;
- (id)initWithClickPresentation:(id)arg1;

@end

