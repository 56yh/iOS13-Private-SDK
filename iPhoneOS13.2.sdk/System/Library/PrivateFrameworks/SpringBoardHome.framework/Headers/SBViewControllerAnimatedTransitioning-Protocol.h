//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpringBoardHome/UIViewControllerAnimatedTransitioning-Protocol.h>

@class BSUIAnimationFactory;
@protocol SBViewControllerContextTransitioning;

@protocol SBViewControllerAnimatedTransitioning <UIViewControllerAnimatedTransitioning>
- (void)animateTransition:(id <SBViewControllerContextTransitioning>)arg1;
- (double)transitionDuration:(id <SBViewControllerContextTransitioning>)arg1;

@optional
- (unsigned long long)transitionAnimationOptions:(id <SBViewControllerContextTransitioning>)arg1;
- (BSUIAnimationFactory *)transitionAnimationFactory:(id <SBViewControllerContextTransitioning>)arg1;
@end

