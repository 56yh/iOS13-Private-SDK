//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpringBoard/SBToAppsWorkspaceTransaction.h>

@class NSObject, SBAutoPiPWorkspaceTransaction, SBUIAnimationController;
@protocol OS_dispatch_group;

@interface SBAppToAppWorkspaceTransaction : SBToAppsWorkspaceTransaction
{
    SBAutoPiPWorkspaceTransaction *_autoPiPTransaction;
    SBUIAnimationController *_animation;
    unsigned long long _autoPIPTransitionOrder;
    NSObject<OS_dispatch_group> *_pipDuringSwitchTransitionTasksGroup;
    _Bool _preventWhitePointAdaptationStrengthUpdateOnComplete;
}

@property(nonatomic) _Bool preventWhitePointAdaptationStrengthUpdateOnComplete; // @synthesize preventWhitePointAdaptationStrengthUpdateOnComplete=_preventWhitePointAdaptationStrengthUpdateOnComplete;
- (id)_setupAnimationFrom:(id)arg1 to:(id)arg2;
- (void)_cleanUpAfterAnimation;
- (void)_clearAnimation;
- (void)_animationDidRevealApplication;
- (void)_animationWillBegin:(_Bool)arg1;
- (void)_handleApplicationUpdateScenesTransactionFailed:(id)arg1;
- (void)_handleApplicationDidNotChange:(id)arg1;
- (void)_performPostAnimationTasksWithCompletion:(id /* block */)arg1;
- (_Bool)_hasPostAnimationTasks;
- (void)_performPreAnimationTasksWithCompletion:(id /* block */)arg1;
- (_Bool)_hasPreAnimationTasks;
- (id)_setupAnimation;
- (_Bool)_shouldResignActiveForAnimation;
- (unsigned long long)_serialOverlayPreDismissalOptions;
- (_Bool)_transitionWasCancelled;
- (void)_beginTransition;
- (_Bool)shouldAnimateOrientationChangeOnCompletion;
- (_Bool)shouldPerformToAppStateCleanupOnCompletion;
- (_Bool)canInterruptForTransitionRequest:(id)arg1;
- (void)_didComplete;
- (_Bool)_canBeInterrupted;
- (void)_begin;
- (id)debugDescription;
- (void)dealloc;
- (id)initWithTransitionRequest:(id)arg1;

@end

