//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/SBFloatingApplicationLiveContentOverlayView-Protocol.h>

@class SBInlineAppExposeContainerViewController, UIView;

@interface SBFloatingApplicationInlineAppExposeLiveContentOverlayView : NSObject <SBFloatingApplicationLiveContentOverlayView>
{
    SBInlineAppExposeContainerViewController *_inlineAppExposeContainerViewController;
}

@property(readonly, nonatomic) SBInlineAppExposeContainerViewController *inlineAppExposeContainerViewController; // @synthesize inlineAppExposeContainerViewController=_inlineAppExposeContainerViewController;
// - (void).cxx_destruct;
- (void)setUsesBrightSceneViewBackgroundMaterial:(BOOL)arg1;
- (void)setStatusBarHidden:(BOOL)arg1 nubViewHidden:(BOOL)arg2 animator:(id /* CDUnknownBlockType */)arg3;
- (void)setRasterizationStyle:(long long)arg1 withMinificationFilterEnabled:(BOOL)arg2;
- (void)setHomeGrabberHidden:(BOOL)arg1 animated:(BOOL)arg2;
- (void)noteKeyboardFocusDidChangeToSceneID:(id)arg1;
@property(readonly, nonatomic) UIView *contentOverlayView;
- (void)invalidate;
- (void)disableAsynchronousRenderingForNextCommit;
- (long long)rasterizationStyle;
- (void)setLiveContentRasterizationDisabled:(BOOL)arg1;
- (void)configureWithWorkspaceEntity:(id)arg1 referenceFrame:(CGRect)arg2 interfaceOrientation:(long long)arg3;
- (id)contentViewController;

@end

