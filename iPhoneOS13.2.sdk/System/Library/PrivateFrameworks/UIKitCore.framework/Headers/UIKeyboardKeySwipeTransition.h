//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UIKeyboardKeyplaneTransition.h>

#import <UIKitCore/CAAnimationDelegate-Protocol.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface UIKeyboardKeySwipeTransition : UIKeyboardKeyplaneTransition <CAAnimationDelegate>
{
    _Bool _disableMeshOptimization;
    NSArray *_startKeysOrdered;
    NSArray *_endKeysOrdered;
    NSArray *_startGeometries;
    NSArray *_transitionKeys;
    NSArray *_keyInfos;
    double _previousProgress;
}

@property(nonatomic) double previousProgress; // @synthesize previousProgress=_previousProgress;
@property(retain, nonatomic) NSArray *keyInfos; // @synthesize keyInfos=_keyInfos;
@property(retain, nonatomic) NSArray *transitionKeys; // @synthesize transitionKeys=_transitionKeys;
@property(retain, nonatomic) NSArray *startGeometries; // @synthesize startGeometries=_startGeometries;
@property(retain, nonatomic) NSArray *endKeysOrdered; // @synthesize endKeysOrdered=_endKeysOrdered;
@property(retain, nonatomic) NSArray *startKeysOrdered; // @synthesize startKeysOrdered=_startKeysOrdered;
@property(nonatomic) _Bool disableMeshOptimization; // @synthesize disableMeshOptimization=_disableMeshOptimization;
- (id)meshTransformForKeyplane:(id)arg1 forward:(_Bool)arg2 initial:(_Bool)arg3;
- (struct CGRect)keyRectForFrame:(struct CGRect)arg1 normalizedSubRect:(struct CGRect)arg2;
- (void)gatherTransitionKeys;
- (void)updateWithProgress:(double)arg1;
- (void)removeAllAnimations;
- (void)_runOpacityAnimation;
- (void)_runTransformAnimation;
- (void)runNonInteractivelyWithCompletion:(id /* block */)arg1;
- (double)nonInteractiveDuration;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)commitTransitionRebuild;
- (void)rebuildWithStartKeyplane:(id)arg1 startView:(id)arg2 endKeyplane:(id)arg3 endView:(id)arg4;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

