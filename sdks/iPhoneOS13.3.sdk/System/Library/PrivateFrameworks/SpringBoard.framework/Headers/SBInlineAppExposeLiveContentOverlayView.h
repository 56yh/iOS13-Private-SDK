//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/SBSwitcherLiveContentOverlay-Protocol.h>

@class SBDeviceApplicationSceneViewController, SBSceneViewStatusBarAssertion, UIView;

@interface SBInlineAppExposeLiveContentOverlayView : NSObject <SBSwitcherLiveContentOverlay>
{
    BOOL _transitioning;
    SBDeviceApplicationSceneViewController *_deviceApplicationSceneViewController;
    SBSceneViewStatusBarAssertion *_statusBarAssertion;
}

@property(nonatomic, getter=isTransitioning) BOOL transitioning; // @synthesize transitioning=_transitioning;
@property(readonly, nonatomic) SBSceneViewStatusBarAssertion *statusBarAssertion; // @synthesize statusBarAssertion=_statusBarAssertion;
@property(readonly, nonatomic) SBDeviceApplicationSceneViewController *deviceApplicationSceneViewController; // @synthesize deviceApplicationSceneViewController=_deviceApplicationSceneViewController;
// - (void).cxx_destruct;
- (void)disableAsynchronousRenderingForNextCommit;
- (void)setRasterizationStyle:(long long)arg1 withMinificationFilterEnabled:(BOOL)arg2;
- (long long)rasterizationStyle;
- (void)noteKeyboardFocusDidChangeToSceneID:(id)arg1;
- (void)dealloc;
- (void)setUsesBrightSceneViewBackgroundMaterial:(BOOL)arg1;
- (void)setHomeGrabberHidden:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setStatusBarHidden:(BOOL)arg1 nubViewHidden:(BOOL)arg2 animator:(id /* CDUnknownBlockType */)arg3;
@property(readonly, nonatomic) UIView *contentOverlayView;
- (id)initWithDeviceApplicationSceneViewController:(id)arg1;

@end
