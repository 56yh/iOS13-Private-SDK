//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GameCenterUI/GKWiggleRotateAnimator.h>

@class GKBubbleFlowContainerView, _GKBubbleFlowPathTransitionInfo;

@interface GKStandaloneWiggleRotateAnimator : GKWiggleRotateAnimator
{
    GKBubbleFlowContainerView *_containerView;
    long long _rotationDirection;
    _GKBubbleFlowPathTransitionInfo *_transitionContext;
}

@property(retain, nonatomic) _GKBubbleFlowPathTransitionInfo *transitionContext; // @synthesize transitionContext=_transitionContext;
@property(nonatomic) long long rotationDirection; // @synthesize rotationDirection=_rotationDirection;
@property(retain, nonatomic) GKBubbleFlowContainerView *containerView; // @synthesize containerView=_containerView;
- (void)animateForBubbleContainer:(id)arg1 withTransitionCoordinator:(id)arg2;
- (void)readEndingPositions;
- (void)readStartingPositions;
- (_Bool)rotatingRightWithTransitionContext:(id)arg1;
- (void)animate;
- (id)transitionContextCreatingIfNeeded;
- (void)dealloc;

@end

