//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/UIViewControllerTransitionCoordinator-Protocol.h>

@class NSString, UIView;

__attribute__((visibility("hidden")))
@interface _UIViewControllerImmediateAnimationTransitionCoordinator : NSObject <UIViewControllerTransitionCoordinator>
{
    UIView *_containerView;
}

@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(readonly, nonatomic) struct CGAffineTransform targetTransform;
- (id)viewForKey:(id)arg1;
- (id)viewControllerForKey:(id)arg1;
@property(readonly, nonatomic) long long completionCurve;
@property(readonly, nonatomic) double completionVelocity;
@property(readonly, nonatomic) double percentComplete;
@property(readonly, nonatomic) double transitionDuration;
@property(readonly, nonatomic, getter=isCancelled) _Bool cancelled;
@property(readonly, nonatomic, getter=isInteractive) _Bool interactive;
@property(readonly, nonatomic) _Bool isInterruptible;
@property(readonly, nonatomic) _Bool initiallyInteractive;
@property(readonly, nonatomic) long long presentationStyle;
@property(readonly, nonatomic, getter=isAnimated) _Bool animated;
- (void)notifyWhenInteractionChangesUsingBlock:(id /* block */)arg1;
- (void)notifyWhenInteractionEndsUsingBlock:(id /* block */)arg1;
- (_Bool)animateAlongsideTransitionInView:(id)arg1 animation:(id /* block */)arg2 completion:(id /* block */)arg3;
- (_Bool)animateAlongsideTransition:(id /* block */)arg1 completion:(id /* block */)arg2;
- (id)initWithContainerView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

