//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UserNotificationsUIKit/UIViewControllerAnimatedTransitioning-Protocol.h>

@class BSUIAnimationFactory, NSString, _UIViewControllerTransitionContext;
@protocol UIViewControllerTransitionCoordinator;

@interface NCAnimationCoordinator : NSObject <UIViewControllerAnimatedTransitioning>
{
    BSUIAnimationFactory *_factory;
    _UIViewControllerTransitionContext *_transitionContext;
    _Bool _durationInherited;
    unsigned long long _animationOptions;
    id /* block */ _animations;
    id /* block */ _completion;
}

+ (id)animationCoordinatorWithDuration:(double)arg1;
@property(copy, nonatomic) id /* block */ completion; // @synthesize completion=_completion;
@property(copy, nonatomic) id /* block */ animations; // @synthesize animations=_animations;
@property(nonatomic, getter=isDurationInherited) _Bool durationInherited; // @synthesize durationInherited=_durationInherited;
@property(nonatomic) unsigned long long animationOptions; // @synthesize animationOptions=_animationOptions;
- (void)animationEnded:(_Bool)arg1;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (void)animate:(id /* block */)arg1 completion:(id /* block */)arg2;
- (void)viewOfChildContainer:(id)arg1 willChangeToSize:(struct CGSize)arg2;
@property(readonly, nonatomic) __weak id <UIViewControllerTransitionCoordinator> transitionCoordinator;
- (id)initWithAnimationFactory:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

