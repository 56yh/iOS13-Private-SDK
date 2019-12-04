//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpringBoard/SBSwitcherModifier.h>

#import <SpringBoard/SBFluidSwitcherScrollProviding-Protocol.h>

@class NSString;
@protocol SBFluidSwitcherScrollProviding, SBFluidSwitcherScrollProvidingDelegate, SBHistorianSwitcherModifierDelegate;

@interface SBHistorianSwitcherModifier : SBSwitcherModifier <SBFluidSwitcherScrollProviding>
{
    id <SBFluidSwitcherScrollProvidingDelegate> _scrollDelegate;
    id <SBHistorianSwitcherModifierDelegate> _historianDelegate;
    SBSwitcherModifier<SBFluidSwitcherScrollProviding> *_rootModifier;
}

+ (_Bool)canLogEvent:(id)arg1;
@property(readonly, nonatomic) SBSwitcherModifier<SBFluidSwitcherScrollProviding> *rootModifier; // @synthesize rootModifier=_rootModifier;
@property(nonatomic) __weak id <SBHistorianSwitcherModifierDelegate> historianDelegate; // @synthesize historianDelegate=_historianDelegate;
@property(nonatomic) __weak id <SBFluidSwitcherScrollProvidingDelegate> scrollDelegate; // @synthesize scrollDelegate=_scrollDelegate;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)_querySnapshotFromModifier:(id)arg1;
- (void)_populateQueryMethodDescription:(id)arg1 fromModifier:(id)arg2 queryName:(id)arg3 descriptionProvider:(id /* block */)arg4 appLayouts:(id)arg5;
- (void)_populateIndexedQueryMethodDescription:(id)arg1 fromModifier:(id)arg2 queryName:(id)arg3 descriptionProvider:(id /* block */)arg4 appLayouts:(id)arg5;
- (id)_eventSnapshotFromEvent:(id)arg1;
- (id)_actionSnapshotFromAction:(id)arg1;
- (id)_modifierStackSnapshotFromModifier:(id)arg1;
- (id)handleEvent:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)initWithRootModifier:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

