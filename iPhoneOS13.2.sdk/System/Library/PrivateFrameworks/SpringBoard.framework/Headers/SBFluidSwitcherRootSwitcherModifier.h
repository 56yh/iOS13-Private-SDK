//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpringBoard/SBSwitcherModifier.h>

#import <SpringBoard/SBFluidSwitcherModifierProviding-Protocol.h>
#import <SpringBoard/SBFluidSwitcherScrollProviding-Protocol.h>
#import <SpringBoard/SBFluidSwitcherScrollProvidingDelegate-Protocol.h>

@class NSString;
@protocol SBFluidSwitcherScrollProvidingDelegate;

@interface SBFluidSwitcherRootSwitcherModifier : SBSwitcherModifier <SBFluidSwitcherScrollProvidingDelegate, SBFluidSwitcherModifierProviding, SBFluidSwitcherScrollProviding>
{
    _Bool _shouldVerifyModifierStackCoherencyCheckAfterHandlingEvent;
    id <SBFluidSwitcherScrollProvidingDelegate> _scrollDelegate;
}

@property(nonatomic) __weak id <SBFluidSwitcherScrollProvidingDelegate> scrollDelegate; // @synthesize scrollDelegate=_scrollDelegate;
- (id)_appExposeModifierKeyForBundleID:(id)arg1;
- (id)_reduceMotionModifier;
- (id)_swipeToKillModifierKeyForAppLayout:(id)arg1;
- (void)_updateLowEndHardwareModifier;
- (void)_updateReduceMotionModifierWithReduceMotionChangedEvent:(id)arg1;
- (void)_updateMultitaskingModifierWithEvent:(id)arg1;
- (void)_updateFloorModifierWithTransitionEvent:(id)arg1;
- (void)_performModifierStackCoherencyCheckIfNeededAfterHandlingEvent:(id)arg1;
- (id)multitaskingModifier;
- (id)floorModifier;
- (id)newMultitaskingModifierFromMultitaskingModifier:(id)arg1;
- (id)lowEndHardwareModifier;
- (id)insertionModifierForInsertionEvent:(id)arg1;
- (id)appExposeModifierForAppExposeEvent:(id)arg1;
- (id)tetheredInsertionModifierFortetheredInsertionEvent:(id)arg1;
- (id)tetheredRemovalModifierForTetheredRemovalEvent:(id)arg1;
- (id)reduceMotionModifierForReduceMotionChangedEvent:(id)arg1;
- (id)transitionModifierForInlineTransitionEvent:(id)arg1;
- (id)transitionModifierForMainTransitionEvent:(id)arg1;
- (id)gestureModifierForGestureEvent:(id)arg1;
- (id)multitaskingModifierForEvent:(id)arg1;
- (id)floorModifierForTransitionEvent:(id)arg1;
- (struct CGPoint)scrollProvidingModifier:(id)arg1 contentOffsetVelocityConsideringNextContentOffset:(struct CGPoint)arg2;
- (struct CGPoint)scrollProvidingModifier:(id)arg1 convertScrollViewPointToContainerViewCoordinateSpace:(struct CGPoint)arg2;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)handleTetheredInsertionEvent:(id)arg1;
- (id)handleTetheredRemovalEvent:(id)arg1;
- (id)handleAppExposeEvent:(id)arg1;
- (id)handleRemovalEvent:(id)arg1;
- (id)handleInsertionEvent:(id)arg1;
- (id)handleSwipeToKillEvent:(id)arg1;
- (id)handleReduceMotionChangedEvent:(id)arg1;
- (id)handleMainTransitionEvent:(id)arg1;
- (id)handleInlineTransitionEvent:(id)arg1;
- (id)handleGestureEvent:(id)arg1;
- (id)handleEvent:(id)arg1;
- (void)_setup;
- (void)setDelegate:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

