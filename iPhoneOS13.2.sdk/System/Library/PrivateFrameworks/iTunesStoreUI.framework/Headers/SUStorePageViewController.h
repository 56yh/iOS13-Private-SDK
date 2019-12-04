//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iTunesStoreUI/SUViewController.h>

#import <iTunesStoreUI/ISURLOperationDelegate-Protocol.h>
#import <iTunesStoreUI/SKUITabBarItemRootViewController-Protocol.h>
#import <iTunesStoreUI/SUMenuViewControllerDelegate-Protocol.h>
#import <iTunesStoreUI/SUPreviewOverlayContainer-Protocol.h>
#import <iTunesStoreUI/UIPopoverControllerDelegate-Protocol.h>

@class ISURLRequestPerformance, NSNumber, NSString, SSAuthenticationContext, SSMutableURLRequestProperties, SSURLRequestProperties, SUNavigationMenuViewController, SUPageSectionGroup, SUSearchFieldController, SUSegmentedControl, SUStorePageProtocol, SUWebScriptReloadContext, UIPopoverController, _UIBackdropView;
@protocol SUStorePageViewControllerDelegate;

@interface SUStorePageViewController : SUViewController <SKUITabBarItemRootViewController, SUMenuViewControllerDelegate, SUPreviewOverlayContainer, UIPopoverControllerDelegate, ISURLOperationDelegate>
{
    SUViewController *_activeChildViewController;
    struct __CFSet *_allowedInterfaceOrientations;
    _UIBackdropView *_backdropView;
    id <SUStorePageViewControllerDelegate> _delegate;
    double _expirationTime;
    _Bool _lastLoadDidFail;
    id /* block */ _loadBlock;
    long long _pageType;
    SUViewController *_pendingChildViewController;
    SUWebScriptReloadContext *_pendingWebScriptReloadContext;
    ISURLRequestPerformance *_performanceMetrics;
    NSString *_scriptUserInfo;
    _Bool _shouldAdjustContentOffsets;
    _Bool _useWebViewFastPath;
    _Bool _isInBackground;
    SUStorePageProtocol *_lastValidProtocol;
    UIPopoverController *_navigationMenuPopover;
    SUNavigationMenuViewController *_navigationMenuViewController;
    SUSearchFieldController *_searchFieldController;
    _Bool _canMoveToOverlay;
    _Bool _externalRequest;
    _Bool _loadingForSectionChange;
    _Bool _loadsWhenHidden;
    _Bool _reloadOnAppear;
    _Bool _reloadsWhenCacheExpired;
    SSAuthenticationContext *_authContext;
    SSMutableURLRequestProperties *_urlRequestProperties;
    _Bool _needsAuthentication;
    long long _activeSectionIndex;
    SUPageSectionGroup *_sectionsGroup;
    SUSegmentedControl *_segmentedControl;
    _Bool _didPageViewLoad;
}

@property(nonatomic) _Bool didPageViewLoad; // @synthesize didPageViewLoad=_didPageViewLoad;
@property(nonatomic) _Bool canMoveToOverlay; // @synthesize canMoveToOverlay=_canMoveToOverlay;
@property(readonly, nonatomic) SUSegmentedControl *sectionSegmentedControl; // @synthesize sectionSegmentedControl=_segmentedControl;
@property(readonly, nonatomic) SUPageSectionGroup *sectionGroup; // @synthesize sectionGroup=_sectionsGroup;
@property(readonly, nonatomic) SUSearchFieldController *searchFieldController; // @synthesize searchFieldController=_searchFieldController;
@property(copy, nonatomic) NSString *scriptUserInfo; // @synthesize scriptUserInfo=_scriptUserInfo;
@property(nonatomic, getter=_reloadsWhenCacheExpired, setter=_setReloadsWhenCacheExpired:) _Bool _reloadsWhenCacheExpired; // @synthesize _reloadsWhenCacheExpired;
@property(nonatomic) _Bool needsAuthentication; // @synthesize needsAuthentication=_needsAuthentication;
@property(nonatomic) _Bool loadsWhenHidden; // @synthesize loadsWhenHidden=_loadsWhenHidden;
@property(nonatomic, getter=isExternalRequest) _Bool externalRequest; // @synthesize externalRequest=_externalRequest;
@property(nonatomic) id <SUStorePageViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) SSAuthenticationContext *authenticationContext; // @synthesize authenticationContext=_authContext;
- (void)setShouldAdjustContentOffsets:(_Bool)arg1;
- (_Bool)shouldAdjustContentOffsets;
@property(readonly, nonatomic) SUViewController *activeChildViewController; // @synthesize activeChildViewController=_activeChildViewController;
- (void)_verifyStorePageProtocol:(id)arg1;
- (void)_tearDownNavigationMenu;
- (void)_showPlaceholderViewControllerWithTearDown:(_Bool)arg1;
- (_Bool)_shouldReloadForAppearance;
- (_Bool)_shouldDisplayControlsInNavigationBar;
- (_Bool)_shouldFetchAutomatically;
- (void)_setRightNavigationItem:(id)arg1 forTag:(long long)arg2;
- (void)_setPendingChildViewController:(id)arg1;
- (void)_setLeftNavigationItem:(id)arg1 forTag:(long long)arg2;
- (void)_setActiveChildViewController:(id)arg1 shouldTearDown:(_Bool)arg2;
- (_Bool)_sectionIsNetworkConstrained;
- (void)_requestWebScriptReloadWithContext:(id)arg1;
- (void)_repositionForChildViewController:(id)arg1;
- (void)_renderStorePage:(id)arg1 withType:(long long)arg2 viewController:(id)arg3 block:(id /* block */)arg4;
- (_Bool)_reloadWithURLRequestProperties:(id)arg1 preserveSectionControl:(_Bool)arg2;
- (void)_reloadSectionsControlWithGroup:(id)arg1;
- (void)_reloadSectionButtons;
- (void)_reloadSearchFieldWithSection:(id)arg1;
- (void)_reloadPreviewOverlayVisibility;
- (void)_reloadNavigationMenus;
- (void)_reloadNavigationButtons;
- (void)_reloadNavigationBar;
- (void)_reloadForAppearance:(_Bool)arg1;
- (void)_reloadBackgroundViewProperties;
- (void)_performActionForProtocolButton:(id)arg1;
- (id)_newSegmentedControlWithItems:(id)arg1;
- (id)_newBarButtonItemsWithButtonItems:(id)arg1 replacingItemWithTag:(long long)arg2 withButtonItem:(id)arg3;
- (void)_moveToRootSectionForChildViewController:(id)arg1 protocol:(id)arg2;
- (void)_moveChildViewController:(id)arg1 toOverlayForProtocol:(id)arg2;
- (_Bool)_isInTransientViewController;
- (void)_handleViewControllerBecameReady:(id)arg1;
- (void)_handleFailureWithError:(id)arg1;
- (struct CGRect)_frameForActiveViewController;
- (void)_finishSuccessfulLoad;
- (void)_finishHandlingFailure;
- (void)_fetchPage:(_Bool)arg1;
- (double)_expirationTime;
- (void)_displaySegmentedControl:(id)arg1;
- (void)_dismissNavigationMenuViewController;
- (void)_applyPropertiesToViewController:(id)arg1;
- (id)_activePageSection;
- (id)_activeChildViewController;
- (_Bool)_shouldDisplaySegmentedControlInNavigationBar:(id)arg1;
- (void)_setUseWebViewFastPath:(_Bool)arg1;
- (void)_setSegmentedControl:(id)arg1;
- (void)_setHeaderView:(id)arg1;
- (_Bool)_reloadWithURLRequestProperties:(id)arg1 completionBlock:(id /* block */)arg2;
@property(readonly, nonatomic, getter=_isCacheExpired) _Bool _cacheExpired;
- (void)_sectionControlAction:(id)arg1;
- (void)_navigationMenuButtonAction:(id)arg1;
- (void)_navigationButtonAction:(id)arg1;
- (void)_tabConfigurationChanged:(id)arg1;
- (void)_sendFailureAfterDialogsFinished:(id)arg1;
- (void)_scriptEventNotification:(id)arg1;
- (void)_reloadForNetworkTypeChange:(id)arg1;
- (void)_documentBoundsChangeNotification:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (_Bool)showPreviewOverlay:(id)arg1 animated:(_Bool)arg2 completionBlock:(id /* block */)arg3;
- (_Bool)isShowingPreviewOverlay;
- (void)hidePreviewOverlay:(id)arg1 animated:(_Bool)arg2 completionBlock:(id /* block */)arg3;
- (void)menuViewControllerDidCancel:(id)arg1;
- (void)menuViewController:(id)arg1 didTapButton:(id)arg2;
- (void)menuViewController:(id)arg1 didSelectItemAtIndex:(long long)arg2;
- (void)showExternalURL:(id)arg1;
- (void)setClientContext:(id)arg1;
- (void)operation:(id)arg1 finishedWithOutput:(id)arg2;
- (void)operation:(id)arg1 failedWithError:(id)arg2;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (_Bool)viewIsReady;
- (void)tabBarControllerDidReselectTabBarItem:(id)arg1;
- (void)tabBarControllerDidLongPressTabBarItem:(id)arg1;
- (void)storePageProtocolDidChange;
- (id)storePageProtocol;
- (_Bool)shouldExcludeFromNavigationHistory;
- (void)setScriptProperties:(id)arg1;
- (void)setSection:(id)arg1;
- (void)setParentViewController:(id)arg1;
- (void)setSkLoading:(_Bool)arg1;
- (id)setDisplayedSectionGroup:(id)arg1;
- (void)restoreArchivableContext:(id)arg1;
- (_Bool)reloadWithURLRequestProperties:(id)arg1;
- (void)reload;
- (_Bool)reloadForSectionsWithGroup:(id)arg1;
- (_Bool)pushStorePage:(id)arg1 withTarget:(long long)arg2 animated:(_Bool)arg3;
- (id)newRotationController;
- (id)navigationItemForScriptInterface;
- (void)loadView;
- (_Bool)_shouldShowPlaceholderForEmptyPage;
- (_Bool)loadMoreWithURL:(id)arg1;
- (void)iTunesStoreUI_searchFieldControllerDidChange:(id)arg1;
- (id)iTunesStoreUI_searchFieldController;
- (void)invalidateForMemoryPurge;
- (void)invalidate;
- (void)handleStoreFailureWithError:(id)arg1;
- (void)handleApplicationURL:(id)arg1 withSourceApplication:(id)arg2 sourceURL:(id)arg3;
@property(readonly, nonatomic) struct CGRect documentBounds;
- (id)displayedURL;
- (void)didMoveToParentViewController:(id)arg1;
- (double)defaultPNGExpirationTime;
- (id)copyScriptViewController;
- (id)copyScriptProperties;
- (id)copyObjectForScriptFromPoolWithClass:(Class)arg1;
- (id)copyDefaultScriptProperties;
- (id)copyArchivableContext;
- (void)applicationWillEnterForeground;
- (void)applicationDidEnterBackground;
- (id)URLRequest;
- (id)urlBagKey;
- (void)setURLRequest:(id)arg1;
- (void)setUrlBagKey:(id)arg1;
@property(copy, nonatomic) SSURLRequestProperties *URLRequestProperties;
- (void)showPlaceholderViewController;
- (void)resetNavigationItem:(id)arg1;
- (void)requestWebScriptReloadWithContext:(id)arg1;
- (void)reloadWithStorePage:(id)arg1 ofType:(long long)arg2 forURL:(id)arg3;
- (_Bool)isSkLoaded;
- (void)handleFailureWithError:(id)arg1;
- (id)newViewControllerForPage:(id)arg1 ofType:(long long)arg2 returningError:(id *)arg3;
- (id)newPlaceholderViewController;
- (id)newFetchOperation;
- (void)forceLoadingForNeverAppearedPage;
- (void)enqueueFetchOperationForPageSection:(id)arg1;
- (void)enqueueFetchOperation;
- (void)_finishWebViewLoadWithResult:(_Bool)arg1 error:(id)arg2;
- (_Bool)decidePolicyForWebNavigationAction:(id)arg1 request:(id)arg2 decisionListener:(id)arg3;
@property(readonly, nonatomic) _Bool canBeResolved;
- (void)dealloc;
- (id)initWithTabBarItem:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly, nonatomic) NSNumber *metricsLoadURLSamplingPercentage;
@property(readonly, nonatomic) NSNumber *metricsLoadURLSamplingPercentageCachedResponses;
@property(readonly, nonatomic) NSNumber *metricsLoadURLSessionDuration;
@property(readonly) Class superclass;

@end

