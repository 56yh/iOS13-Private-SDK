//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpringBoard/SBTransaction.h>

@class FBSDisplayConfiguration, FBSDisplayIdentity, SBLayoutStateTransitionCoordinator, SBSceneLayoutViewController, SBSceneManager, SBUIAnimationController, SBWorkspaceTransitionRequest;

@interface SBWorkspaceTransaction : SBTransaction
{
    SBUIAnimationController *_suggestedAnimationController;
    SBWorkspaceTransitionRequest *_transitionRequestForPendingInterruption;
    SBSceneManager *_sceneManager;
    _Bool _clearsCompletionAsynchronously;
    SBWorkspaceTransitionRequest *_transitionRequest;
    SBSceneLayoutViewController *_layoutController;
    SBLayoutStateTransitionCoordinator *_layoutStateTransitionCoordinator;
}

@property(readonly, nonatomic) SBSceneManager *sceneManager; // @synthesize sceneManager=_sceneManager;
@property(readonly, nonatomic) SBLayoutStateTransitionCoordinator *layoutStateTransitionCoordinator; // @synthesize layoutStateTransitionCoordinator=_layoutStateTransitionCoordinator;
@property(nonatomic) _Bool clearsCompletionAsynchronously; // @synthesize clearsCompletionAsynchronously=_clearsCompletionAsynchronously;
@property(retain, nonatomic) SBUIAnimationController *suggestedAnimationController; // @synthesize suggestedAnimationController=_suggestedAnimationController;
@property(readonly, nonatomic) SBSceneLayoutViewController *layoutController; // @synthesize layoutController=_layoutController;
@property(readonly, nonatomic) SBWorkspaceTransitionRequest *transitionRequest; // @synthesize transitionRequest=_transitionRequest;
- (void)_didInterruptForTransitionRequest:(id)arg1;
- (void)_willInterruptForTransitionRequest:(id)arg1;
- (id)_transitionRequestForInterruption;
- (_Bool)_isInterruptingForTransitionRequest;
- (id)_childWorkspaceTransactions;
- (void)_performDeviceCoherencyCheck;
- (id)_customizedDescriptionProperties;
- (void)_didComplete;
- (void)interruptForTransitionRequest:(id)arg1;
- (_Bool)canInterruptForTransitionRequest:(id)arg1;
- (void)keepAliveForAsyncBlock:(id /* block */)arg1;
@property(readonly, nonatomic) FBSDisplayConfiguration *displayConfiguration;
@property(readonly, nonatomic) FBSDisplayIdentity *displayIdentity;
- (id)initWithTransitionRequest:(id)arg1;
- (id)init;

@end

