//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet, PXGLayout;

@interface PXGTransition : NSObject
{
    _Bool _invalid;
    _Bool _animatingTowardsInitialState;
    _Bool _animatingTowardsFinalState;
    _Bool _isIntercative;
    float _fractionCompleted;
    NSSet *_animations;
    PXGLayout *_layout;
    id /* block */ _completionBlock;
}

@property(nonatomic) _Bool isIntercative; // @synthesize isIntercative=_isIntercative;
@property(readonly, copy, nonatomic) id /* block */ completionBlock; // @synthesize completionBlock=_completionBlock;
@property(readonly, nonatomic) _Bool animatingTowardsFinalState; // @synthesize animatingTowardsFinalState=_animatingTowardsFinalState;
@property(readonly, nonatomic) _Bool animatingTowardsInitialState; // @synthesize animatingTowardsInitialState=_animatingTowardsInitialState;
@property(readonly, nonatomic) _Bool invalid; // @synthesize invalid=_invalid;
@property(readonly, nonatomic) PXGLayout *layout; // @synthesize layout=_layout;
@property(nonatomic) float fractionCompleted; // @synthesize fractionCompleted=_fractionCompleted;
@property(readonly, nonatomic) NSSet *animations; // @synthesize animations=_animations;
- (void)animateToFinalStateWithCompletionBlock:(id /* block */)arg1;
- (void)animateToInitialStateWithCompletionBlock:(id /* block */)arg1;
- (void)invalidate;
- (id)initWithAnimations:(id)arg1 layout:(id)arg2;

@end

