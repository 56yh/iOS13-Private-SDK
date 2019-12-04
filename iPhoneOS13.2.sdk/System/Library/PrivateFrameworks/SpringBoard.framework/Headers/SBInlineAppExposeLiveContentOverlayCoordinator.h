//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/SBSwitcherLiveContentOverlayCoordinating-Protocol.h>

@class NSString, SBAppLayout, SBDeviceApplicationSceneViewController, SBInlineAppExposeLiveContentOverlayView;
@protocol SBSwitcherLiveContentOverlayCoordinatorDelegate;

@interface SBInlineAppExposeLiveContentOverlayCoordinator : NSObject <SBSwitcherLiveContentOverlayCoordinating>
{
    SBDeviceApplicationSceneViewController *_deviceApplicationSceneViewController;
    long long _environment;
    long long _layoutRole;
    _Bool _overlay;
    SBAppLayout *_liveContentAppLayout;
    SBInlineAppExposeLiveContentOverlayView *_liveContentOverlayView;
    _Bool _liveContentOverlayUpdatesSuspended;
    long long _containerOrientation;
    id <SBSwitcherLiveContentOverlayCoordinatorDelegate> _delegate;
}

@property(nonatomic) __weak id <SBSwitcherLiveContentOverlayCoordinatorDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, getter=areLiveContentOverlayUpdatesSuspended) _Bool liveContentOverlayUpdatesSuspended; // @synthesize liveContentOverlayUpdatesSuspended=_liveContentOverlayUpdatesSuspended;
@property(nonatomic) long long containerOrientation; // @synthesize containerOrientation=_containerOrientation;
- (id)_appLayoutFromLayoutState:(id)arg1;
- (void)_removeLiveContentOverlay;
- (void)_addLiveContentOverlay:(id)arg1 forAppLayout:(id)arg2 animated:(_Bool)arg3;
- (void)noteKeyboardFocusDidChangeToSceneID:(id)arg1;
- (id)animationControllerForTransitionRequest:(id)arg1;
- (void)layoutStateTransitionCoordinator:(id)arg1 transitionDidEndWithTransitionContext:(id)arg2;
- (void)layoutStateTransitionCoordinator:(id)arg1 transitionDidBeginWithTransitionContext:(id)arg2;
- (void)updateSceneViewController:(id)arg1 environment:(long long)arg2 layoutRole:(long long)arg3 overlay:(_Bool)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

