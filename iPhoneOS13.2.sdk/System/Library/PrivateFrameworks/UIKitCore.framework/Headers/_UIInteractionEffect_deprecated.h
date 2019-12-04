//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/_UIDynamicReferenceSystem-Protocol.h>

@class NSString, UIDynamicAnimator, UIDynamicItemBehavior, UIPushBehavior, _UIDynamicTransformer, _UISpringBehavior;

__attribute__((visibility("hidden")))
@interface _UIInteractionEffect_deprecated : NSObject <_UIDynamicReferenceSystem>
{
    UIDynamicAnimator *_animator;
    _UIDynamicTransformer *_transformer;
    _UISpringBehavior *_springBehavior;
    UIPushBehavior *_forceBehavior;
    UIDynamicItemBehavior *_itemProperties;
    double _damping;
    double _frequency;
    double _density;
    double _resistance;
    struct CGAffineTransform _preferredContentTransform;
    double _progress;
    double _forceFactor;
    id /* block */ _updateBlock;
}

@property(copy, nonatomic) id /* block */ updateBlock; // @synthesize updateBlock=_updateBlock;
@property(nonatomic) double forceFactor; // @synthesize forceFactor=_forceFactor;
- (void)_stopAnimations;
- (void)_updateFromTransformer:(id)arg1;
- (void)_updateAnimatorIfNeeded;
- (void)_prepareAnimatorIfNeeded;
@property(readonly, nonatomic) struct CGRect bounds;
@property(readonly, nonatomic) double progress;
@property(readonly, nonatomic) struct CGAffineTransform preferredContentTransform; // @dynamic preferredContentTransform;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

