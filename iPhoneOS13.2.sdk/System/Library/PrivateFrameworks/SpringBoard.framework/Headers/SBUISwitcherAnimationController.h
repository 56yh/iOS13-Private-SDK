//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpringBoard/SBUIWorkspaceAnimationController.h>

#import <SpringBoard/SBUIAnimationControllerObserver-Protocol.h>

@class NSString, SBMainSwitcherViewController;

@interface SBUISwitcherAnimationController : SBUIWorkspaceAnimationController <SBUIAnimationControllerObserver>
{
    _Bool _interruptible;
    SBMainSwitcherViewController *_switcherViewController;
    id /* block */ _animationBlock;
}

@property(copy, nonatomic) id /* block */ animationBlock; // @synthesize animationBlock=_animationBlock;
@property(nonatomic) __weak SBMainSwitcherViewController *switcherViewController; // @synthesize switcherViewController=_switcherViewController;
@property(nonatomic, getter=_isInterruptible, setter=_setInterruptible:) _Bool _interruptible; // @synthesize _interruptible;
- (id)_layoutState;
- (id)_previousLayoutState;
- (void)_addSignpostsForAnimationEnd;
- (void)_addSignpostsForAnimationStart;
- (void)_updatePPTsForAnimationEnd;
- (void)_updatePPTsForAnimationStart;
- (void)animationControllerDidFinishAnimation:(id)arg1;
- (void)_didComplete;
- (void)_startAnimation;
- (_Bool)shouldResignActiveForAnimation;
- (id)animationSettings;
- (_Bool)isInterruptible;
- (_Bool)isReasonableMomentToInterrupt;
- (id)initWithWorkspaceTransitionRequest:(id)arg1 switcherViewController:(id)arg2 childAnimationControllers:(id)arg3 animationBlock:(id /* block */)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

