//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "UIView.h"

#import <UIKitCore/_UIRemoteViewFocusProxy-Protocol.h>
#import <UIKitCore/_UIScrollToTopView-Protocol.h>
#import <UIKitCore/_UIViewBoundingPathChangeObserver-Protocol.h>

@class _UIRemoteViewController;

__attribute__((visibility("hidden")))
@interface _UISizeTrackingView : UIView <_UIScrollToTopView, _UIRemoteViewFocusProxy, _UIViewBoundingPathChangeObserver>
{
    _UIRemoteViewController *_remoteViewController;
    id _viewControllerOperatorProxy;
    id _textEffectsOperatorProxy;
    CGSize _intrinsicContentSize;
    CGRect _formerTextEffectsContentFrame;
    BOOL _observingTextEffectsWindowRotation;
    struct {
        unsigned int hasIntrinsicContentSize:1;
        unsigned int observingBoundingPathChanges:1;
        unsigned int needsRemoteViewServiceBoundingPathUpdate:1;
        unsigned int remoteViewServiceBoundingPathUpdateScheduled:1;
    } _sizeTrackingViewFlags;
}

+ (id)viewWithRemoteViewController:(id)arg1 viewControllerOperatorProxy:(id)arg2 textEffectsOperatorProxy:(id)arg3;
// - (void).cxx_destruct;
- (id)_childFocusRegionsInRect:(CGRect)arg1 inCoordinateSpace:(id)arg2;
- (BOOL)canBecomeFocused;
@property(readonly, nonatomic) _UIRemoteViewController *remoteViewController;
- (void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2;
- (void)_willMoveToWindow:(id)arg1;
- (void)_scrollToTopFromTouchAtScreenLocation:(CGPoint)arg1 resultHandler:(id /* CDUnknownBlockType */)arg2;
- (BOOL)isScrollEnabled;
- (void)_clearNeedsRemoteViewServiceBoundingPathUpdate;
- (void)_setNeedsRemoteViewServiceBoundingPathUpdate;
- (void)setBounds:(CGRect)arg1;
- (void)setFrame:(CGRect)arg1;
- (void)_boundingPathMayHaveChangedForView:(id)arg1 relativeToBoundsOriginOnly:(BOOL)arg2;
- (id)_boundingPathForRemoteViewService;
- (BOOL)_canSendViewServiceActualBoundingPath;
- (void)_geometryChanges:(id)arg1 forAncestor:(id)arg2;
- (BOOL)_fencingEffectsAreVisible;
- (long long)_interfaceOrientationForScene:(id)arg1;
- (void)_updateSceneGeometries:(id)arg1 forOrientation:(long long)arg2;
- (void)_updateTextEffectsGeometries:(CGRect)arg1 textEffectsWindow:(id)arg2;
- (void)_updateTextEffectsGeometries:(CGRect)arg1;
- (void)_textEffectsWindowDidRotate:(id)arg1;
- (void)_updateTextEffectsGeometriesImmediately;
- (BOOL)_needsTextEffectsUpdateToFrame:(CGRect)arg1;
- (void)updateIntrinsicContentSize:(CGSize)arg1;
- (CGSize)_intrinsicSizeWithinSize:(CGSize)arg1;
- (void)dealloc;

@end

