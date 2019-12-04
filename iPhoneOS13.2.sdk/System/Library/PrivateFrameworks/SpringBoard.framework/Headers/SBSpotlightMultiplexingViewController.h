//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <SpringBoard/FBSceneManagerObserver-Protocol.h>
#import <SpringBoard/SBDeviceApplicationSceneStatusBarStateObserver-Protocol.h>
#import <SpringBoard/SBMultiplexedSpotlightDelegate-Protocol.h>
#import <SpringBoard/SBScrollToTopSceneProxyViewDelegate-Protocol.h>

@class NSString, SBAppStatusBarSettingsAssertion, SBDeviceApplicationSceneStatusBarStateProvider, SBScrollToTopSceneProxyView, UIGestureRecognizer, UIView, _UILegibilitySettings;
@protocol SPUIRemoteSearchViewDelegate;

@interface SBSpotlightMultiplexingViewController : UIViewController <SBMultiplexedSpotlightDelegate, FBSceneManagerObserver, SBDeviceApplicationSceneStatusBarStateObserver, SBScrollToTopSceneProxyViewDelegate>
{
    _Bool _reachabilityEnabled;
    UIView *_reachabilityContainerView;
    UIGestureRecognizer *_dismissReachabilityGesture;
    SBDeviceApplicationSceneStatusBarStateProvider *_statusBarStateProvider;
    SBAppStatusBarSettingsAssertion *_statusBarAssertion;
    SBScrollToTopSceneProxyView *_scrollToTopView;
    _Bool _activeDelegate;
    _UILegibilitySettings *_legibilitySettings;
    unsigned long long _searchViewPresentationSourceForNextTransition;
    id <SPUIRemoteSearchViewDelegate> _spotlightDelegate;
}

+ (id)sharedRemoteSearchViewController;
@property(nonatomic, getter=isActiveDelegate) _Bool activeDelegate; // @synthesize activeDelegate=_activeDelegate;
@property(nonatomic) __weak id <SPUIRemoteSearchViewDelegate> spotlightDelegate; // @synthesize spotlightDelegate=_spotlightDelegate;
@property(nonatomic) unsigned long long searchViewPresentationSourceForNextTransition; // @synthesize searchViewPresentationSourceForNextTransition=_searchViewPresentationSourceForNextTransition;
@property(copy, nonatomic) _UILegibilitySettings *legibilitySettings; // @synthesize legibilitySettings=_legibilitySettings;
- (unsigned long long)remoteSearchViewPresentationSource;
- (void)_unregisterStatusBarScrollToTopViewWithWindow:(id)arg1;
- (void)_unregisterStatusBarScrollToTopView;
- (void)_registerStatusBarScrollToTopViewWithWindow:(id)arg1;
- (void)_registerStatusBarScrollToTopView;
- (void)_configureStatusBarScrollToTopView;
- (void)_configureStatusBarStateProvider;
- (id)_spotlightSceneIdentifier;
- (void)_invalidateStatusBarAssertionIfNeeded;
- (void)_acquireStatusBarAssertionIfNeeded;
- (id)_currentStatusBarSettings;
- (void)scrollToTopSceneProxyViewWillExitViewHierarchy:(id)arg1 rootedAtWindow:(id)arg2;
- (void)scrollToTopSceneProxyViewDidEnterViewHierarchy:(id)arg1 rootedAtWindow:(id)arg2;
- (double)_effectiveStatusBarAlpha;
- (void)sceneWithIdentifier:(id)arg1 didChangeStatusBarHiddenTo:(_Bool)arg2 withAnimation:(long long)arg3;
- (void)sceneWithIdentifier:(id)arg1 didChangeStatusBarStyleTo:(long long)arg2;
- (void)sceneWithIdentifier:(id)arg1 didChangeStatusBarAlphaTo:(double)arg2;
- (void)sceneManager:(id)arg1 didDestroyScene:(id)arg2;
- (void)sceneManager:(id)arg1 didCreateScene:(id)arg2;
- (void)didResignActiveDelegate;
- (void)didBecomeActiveDelegate;
- (void)dismissSearchView;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
@property(readonly, nonatomic) unsigned long long level;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

