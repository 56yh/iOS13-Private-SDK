//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, UIViewAnimationState;

__attribute__((visibility("hidden")))
@interface UIViewAnimationBlockDelegate : NSObject
{
    _Bool _didBeginBlockAnimation;
    _Bool _allowUserInteraction;
    _Bool _isZeroDuration;
    _Bool _allowsUserInteractionToCutOffEndOfAnimation;
    _Bool _allowsHitTesting;
    _Bool _animationDidStopSent;
    id /* block */ _start;
    id /* block */ _completion;
    NSMutableArray *_systemPostAnimationActions;
    _Bool __forcingImmediateCompletion;
    UIViewAnimationState *_animationState;
}

+ (void)setAnimationBlockDelegateWithDuration:(double)arg1 options:(unsigned long long)arg2 start:(id /* block */)arg3 completion:(id /* block */)arg4;
+ (id)animationBlockDelegateWithDuration:(double)arg1 options:(unsigned long long)arg2 start:(id /* block */)arg3 completion:(id /* block */)arg4;
@property(nonatomic, setter=_setForcingImmediateCompletion:) _Bool _forcingImmediateCompletion; // @synthesize _forcingImmediateCompletion=__forcingImmediateCompletion;
@property(nonatomic) __weak UIViewAnimationState *_animationState; // @synthesize _animationState;
@property(readonly, nonatomic) _Bool _allowsUserInteraction; // @synthesize _allowsUserInteraction=_allowUserInteraction;
- (_Bool)_allowsHitTesting;
- (_Bool)_allowsUserInteractionToCutOffEndOfAnimation;
- (void)_sendDeferredCompletion:(id)arg1;
- (void)_didEndBlockAnimation:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (void)_willBeginBlockAnimation:(id)arg1 context:(id)arg2;

@end

