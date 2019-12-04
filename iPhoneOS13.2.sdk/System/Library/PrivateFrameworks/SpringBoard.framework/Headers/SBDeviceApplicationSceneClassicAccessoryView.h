//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <SpringBoard/BSInvalidatable-Protocol.h>

@class NSLayoutConstraint, NSString, SBDeviceApplicationSceneHandle, SBOrientationTransformWrapperView, SBSceneHandleBlockObserver, UIApplicationSceneClientSettingsDiffInspector, UIApplicationSceneSettingsDiffInspector, UIButton;
@protocol SBDeviceApplicationSceneClassicAccessoryViewDelegate;

@interface SBDeviceApplicationSceneClassicAccessoryView : UIView <BSInvalidatable>
{
    SBDeviceApplicationSceneHandle *_sceneHandle;
    id <SBDeviceApplicationSceneClassicAccessoryViewDelegate> _delegate;
    UIView *_zoomButtonWrapperView;
    UIButton *_zoomButton;
    long long _buttonOrientation;
    SBOrientationTransformWrapperView *_transformWrapperView;
    SBSceneHandleBlockObserver *_sceneHandleObserver;
    UIApplicationSceneClientSettingsDiffInspector *_clientSettingsInspector;
    UIApplicationSceneSettingsDiffInspector *_sceneSettingsInspector;
    NSLayoutConstraint *_zoomButtonHorizontalConstraint;
    NSLayoutConstraint *_zoomButtonVerticalConstraint;
    NSLayoutConstraint *_zoomButtonWidthConstraint;
    NSLayoutConstraint *_zoomButtonHeightConstraint;
}

@property(nonatomic) long long buttonOrientation; // @synthesize buttonOrientation=_buttonOrientation;
@property(readonly, retain, nonatomic) SBDeviceApplicationSceneHandle *sceneHandle; // @synthesize sceneHandle=_sceneHandle;
@property(nonatomic) __weak id <SBDeviceApplicationSceneClassicAccessoryViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_setupPositioningAndRotationForInterfaceOrientation:(long long)arg1 offscreen:(_Bool)arg2;
- (void)_updateZoomButton;
- (void)_updateOrientationFrom:(long long)arg1 toOrientation:(long long)arg2 animationSettings:(id)arg3;
- (void)_sceneHandleDidUpdateSettingsWithDiff:(id)arg1 previousSettings:(id)arg2;
- (void)_sceneHandleDidUpdateClientSettingsWithDiff:(id)arg1 transitionContext:(id)arg2;
- (void)_updateZoomButtonVisibilityAnimated:(_Bool)arg1;
- (_Bool)_zoomButtonShouldBeVisible;
- (void)_changeZoom:(id)arg1;
- (void)layoutSubviews;
- (_Bool)_isZoomed;
- (void)invalidate;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 sceneHandle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

