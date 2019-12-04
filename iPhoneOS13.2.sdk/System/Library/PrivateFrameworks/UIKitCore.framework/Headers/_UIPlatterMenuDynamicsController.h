//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/_UIPlatterMenuPanningTransformerDelegate-Protocol.h>

@class NSString, UIAttachmentBehavior, UICollisionBehavior, UIDynamicAnimator, UIDynamicItemBehavior, UIView, _UIDynamicItemObservingBehavior, _UIPlatterMenuPanningTransformer, _UIPlatterMenuSnapBehavior, _UIStatesFeedbackGenerator;
@protocol UIDynamicItem, _UIPlatterMenuDynamicsControllerDelegate;

__attribute__((visibility("hidden")))
@interface _UIPlatterMenuDynamicsController : NSObject <_UIPlatterMenuPanningTransformerDelegate>
{
    _Bool _leadingSwipeActionViewSelected;
    _Bool _trailingSwipeActionViewSelected;
    _Bool _isCurrentlyUnderDirectManipulation;
    id <_UIPlatterMenuDynamicsControllerDelegate> _delegate;
    UIView *_containerView;
    UIView *_platterView;
    UIView *_menuView;
    id <UIDynamicItem> _platterItem;
    _UIPlatterMenuPanningTransformer *_panningLockTransformer;
    long long _state;
    double _leadingSwipeEdgeMultiplier;
    double _trailingSwipeEdgeMultiplier;
    UIDynamicAnimator *_animator;
    UIDynamicItemBehavior *_menuItemBehavior;
    UIDynamicItemBehavior *_platterItemBehavior;
    UIAttachmentBehavior *_platterMenuSlidingAttachmentBehavior;
    UIAttachmentBehavior *_platterMenuAttachmentBehavior;
    UIAttachmentBehavior *_gestureAttachmentBehavior;
    _UIPlatterMenuSnapBehavior *_platterSnapBehavior;
    _UIPlatterMenuSnapBehavior *_menuPresentedSnapBehavior;
    _UIPlatterMenuSnapBehavior *_menuDismissedSnapBehavior;
    UIDynamicItemBehavior *_noRotationBehavior;
    UIAttachmentBehavior *_menuVerticalLockAttachment;
    UICollisionBehavior *_platterMenuCollisionBounds;
    _UIDynamicItemObservingBehavior *_observingBehavior;
    long long _didPresentCount;
    _UIStatesFeedbackGenerator *_swipeFeedbackGenerator;
    struct CGPoint _initialTouchPoint;
}

@property(retain, nonatomic) _UIStatesFeedbackGenerator *swipeFeedbackGenerator; // @synthesize swipeFeedbackGenerator=_swipeFeedbackGenerator;
@property(nonatomic) long long didPresentCount; // @synthesize didPresentCount=_didPresentCount;
@property(retain, nonatomic) _UIDynamicItemObservingBehavior *observingBehavior; // @synthesize observingBehavior=_observingBehavior;
@property(retain, nonatomic) UICollisionBehavior *platterMenuCollisionBounds; // @synthesize platterMenuCollisionBounds=_platterMenuCollisionBounds;
@property(retain, nonatomic) UIAttachmentBehavior *menuVerticalLockAttachment; // @synthesize menuVerticalLockAttachment=_menuVerticalLockAttachment;
@property(retain, nonatomic) UIDynamicItemBehavior *noRotationBehavior; // @synthesize noRotationBehavior=_noRotationBehavior;
@property(retain, nonatomic) _UIPlatterMenuSnapBehavior *menuDismissedSnapBehavior; // @synthesize menuDismissedSnapBehavior=_menuDismissedSnapBehavior;
@property(retain, nonatomic) _UIPlatterMenuSnapBehavior *menuPresentedSnapBehavior; // @synthesize menuPresentedSnapBehavior=_menuPresentedSnapBehavior;
@property(retain, nonatomic) _UIPlatterMenuSnapBehavior *platterSnapBehavior; // @synthesize platterSnapBehavior=_platterSnapBehavior;
@property(retain, nonatomic) UIAttachmentBehavior *gestureAttachmentBehavior; // @synthesize gestureAttachmentBehavior=_gestureAttachmentBehavior;
@property(retain, nonatomic) UIAttachmentBehavior *platterMenuAttachmentBehavior; // @synthesize platterMenuAttachmentBehavior=_platterMenuAttachmentBehavior;
@property(retain, nonatomic) UIAttachmentBehavior *platterMenuSlidingAttachmentBehavior; // @synthesize platterMenuSlidingAttachmentBehavior=_platterMenuSlidingAttachmentBehavior;
@property(retain, nonatomic) UIDynamicItemBehavior *platterItemBehavior; // @synthesize platterItemBehavior=_platterItemBehavior;
@property(retain, nonatomic) UIDynamicItemBehavior *menuItemBehavior; // @synthesize menuItemBehavior=_menuItemBehavior;
@property(retain, nonatomic) UIDynamicAnimator *animator; // @synthesize animator=_animator;
@property(nonatomic) _Bool isCurrentlyUnderDirectManipulation; // @synthesize isCurrentlyUnderDirectManipulation=_isCurrentlyUnderDirectManipulation;
@property(nonatomic) double trailingSwipeEdgeMultiplier; // @synthesize trailingSwipeEdgeMultiplier=_trailingSwipeEdgeMultiplier;
@property(nonatomic) double leadingSwipeEdgeMultiplier; // @synthesize leadingSwipeEdgeMultiplier=_leadingSwipeEdgeMultiplier;
@property(nonatomic) struct CGPoint initialTouchPoint; // @synthesize initialTouchPoint=_initialTouchPoint;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(retain, nonatomic) _UIPlatterMenuPanningTransformer *panningLockTransformer; // @synthesize panningLockTransformer=_panningLockTransformer;
@property(nonatomic) __weak id <UIDynamicItem> platterItem; // @synthesize platterItem=_platterItem;
@property(nonatomic) __weak UIView *menuView; // @synthesize menuView=_menuView;
@property(nonatomic) __weak UIView *platterView; // @synthesize platterView=_platterView;
@property(nonatomic) __weak UIView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) __weak id <_UIPlatterMenuDynamicsControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool trailingSwipeActionViewSelected; // @synthesize trailingSwipeActionViewSelected=_trailingSwipeActionViewSelected;
@property(nonatomic) _Bool leadingSwipeActionViewSelected; // @synthesize leadingSwipeActionViewSelected=_leadingSwipeActionViewSelected;
- (void)_fireConfirmFeedbackIfNeededForInitialSelectionState:(_Bool)arg1 finalSelectionState:(_Bool)arg2;
- (void)_deactivateFeedbackIfNeeded;
- (void)_activateFeedbackIfNeeded;
- (void)_configureFeedbackGenerator;
- (_Bool)_isPlatterInYLockedPosition;
- (void)_updateSwipeEdgeMultipliersIfNeededForTouchPosition:(struct CGPoint)arg1;
- (void)_positionSwipeActionViewsForCurrentPlatterViewPosition;
- (_Bool)isDefaultAnimatorBehavior:(id)arg1;
- (void)addBehaviorIfNotPresent:(id)arg1;
- (void)resetAnimatorToDefaultBehaviors;
- (struct CGPoint)menuCenter;
- (struct CGPoint)platterCenter;
- (struct CGPoint)centerForCurrentPlatterPosition;
- (struct CGPoint)centerForMenuPresentedRelativeToCurrentPlatter;
- (struct CGVector)modifiedOffsetForPosition:(struct CGPoint)arg1 offset:(struct CGVector)arg2 touchPosition:(struct CGPoint)arg3 axisLock:(int)arg4;
- (void)beginTransitionWithAnimatorUsingBehaviors:(id)arg1 observedItems:(id)arg2 stateIfCompleted:(long long)arg3;
- (void)performActionsAndEnterState:(long long)arg1 velocity:(struct CGVector)arg2 underDirectManipulation:(_Bool)arg3;
- (void)performActionsAndEnterState:(long long)arg1;
- (long long)_stateForPosition:(struct CGPoint)arg1 offset:(struct CGVector)arg2 velocity:(struct CGVector)arg3;
- (void)stopObservingBehavior;
- (void)_configureAnimator;
- (void)panningTransformer:(id)arg1 didEnterTransitionNotchForTransformedPosition:(struct CGPoint)arg2;
- (void)panningTransformer:(id)arg1 didEndPanToTransformedPosition:(struct CGPoint)arg2 offsetFromPrevious:(struct CGVector)arg3 velocity:(struct CGVector)arg4;
- (void)panningTransformer:(id)arg1 didPanToTransformedPosition:(struct CGPoint)arg2 offsetFromPrevious:(struct CGVector)arg3 touchPosition:(struct CGPoint)arg4 velocity:(struct CGVector)arg5 didChangeAxis:(_Bool)arg6 axisLock:(int)arg7;
- (void)panningTransformer:(id)arg1 didBeginPanToTransformedPosition:(struct CGPoint)arg2;
- (_Bool)hasBeenPresented;
- (void)_animateToPlatterDismissedWithDuration:(double)arg1 completion:(id /* block */)arg2;
- (void)_animateToPlatterPresentedWithVelocity:(struct CGVector)arg1;
- (void)_beginInYLockedStatePresented;
- (void)lockIntoYAxis;
- (_Bool)platterPanned;
- (_Bool)isSelectingSwipeAction;
- (_Bool)isMenuPresenting;
- (_Bool)isMenuPresented;
- (void)resetAnimator;
- (void)dealloc;
- (void)toggleAnimatorDebugState;
- (void)didEndPanningWithPoint:(struct CGPoint)arg1;
- (void)didPanWithPoint:(struct CGPoint)arg1;
- (void)didBeginPanningWithPoint:(struct CGPoint)arg1;
@property(readonly, nonatomic) struct CGVector currentVelocity;
@property(readonly, nonatomic) struct CGVector currentTranslation;
- (id)initWithContainerView:(id)arg1 platterView:(id)arg2 menuView:(id)arg3 delegate:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

