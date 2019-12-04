//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <PhotosUICore/PXAnonymousViewController-Protocol.h>
#import <PhotosUICore/PXDiagnosticsEnvironment-Protocol.h>
#import <PhotosUICore/PXProgrammaticNavigationParticipant-Protocol.h>

@class NSArray, NSString, PXBarAppearance, PXExtendedTraitCollection, PXImageModulationManager, PXOneUpPresentation, UIToolbar;
@protocol PXUIViewControllerTransitionEndPoint;

@interface UIViewController (PXUIViewControllerPinchTransition) <PXDiagnosticsEnvironment, PXAnonymousViewController, PXProgrammaticNavigationParticipant>
+ (id)px_viewControllerWithContinuousOutputProducer:(id /* block */)arg1;
+ (id)px_viewControllerWithAsynchronousOutputProducer:(id /* block */)arg1;
+ (id)px_viewControllerWithOutput:(id /* block */)arg1;
+ (id)px_viewControllerWithSettings:(id)arg1;
+ (void)_px_prepareClassForNavigationBanner;
+ (void)_px_prepareClassForBarAppearance;
+ (void)_px_prepareClassForExtendedTraitCollection;
+ (void)px_preloadExtendedTraitCollection;
+ (void)_px_prepareClassForOneUpPresentation;
- (_Bool)px_canPerformPinchTransitionWithMasterViewController:(id)arg1;
- (_Bool)px_canPerformPinchTransitionWithDetailViewController:(id)arg1;
@property(readonly, nonatomic) UIToolbar *px_footerToolbar;
- (id)_px_offersTableView;
- (void)px_removeFooterToolbar;
- (void)px_insertFooterToolbarWithItems:(id)arg1;
- (id)px_sharedAlbumFeedViewControllerWithTraitCollection:(id)arg1;
- (id)px_gridPresentation;
- (_Bool)px_canPerformCrossfadeTransitionWithMasterViewController:(id)arg1;
- (_Bool)px_canPerformCrossfadeTransitionWithDetailViewController:(id)arg1;
- (_Bool)px_canPerformZoomTransitionWithMasterViewController:(id)arg1;
- (_Bool)px_canPerformZoomTransitionWithDetailViewController:(id)arg1;
- (id)px_diagnosticsItemProvidersForPoint:(struct CGPoint)arg1 inCoordinateSpace:(id)arg2;
- (void)_pxswizzled_navigationBanner_viewDidDisappear:(_Bool)arg1;
- (void)_pxswizzled_navigationBanner_viewWillAppear:(_Bool)arg1;
- (id)px_navigationBannerHelper;
- (void)px_enableNavigationBanner;
- (void)_px_dismiss:(id)arg1;
- (void)px_presentViewControllerInNavigationController:(id)arg1 animated:(_Bool)arg2 dimissButtonLocation:(long long)arg3 completion:(id /* block */)arg4;
- (long long)_pxswizzled_barAppearance_preferredStatusBarUpdateAnimation;
- (_Bool)_pxswizzled_barAppearance_prefersStatusBarHidden;
- (void)_pxswizzled_barAppearance_viewDidDisappear:(_Bool)arg1;
- (void)_pxswizzled_barAppearance_viewWillAppear:(_Bool)arg1;
@property(readonly, nonatomic) PXBarAppearance *px_barAppearance;
- (void)px_didTransitionBars;
- (void)px_willTransitionBars;
- (void)px_enableBarAppearance;
- (void)_pxswizzled_viewControllerTraitCollection_didMoveToParentViewController:(id)arg1;
- (void)_pxswizzled_viewControllerTraitCollection_viewLayoutMarginsDidChange;
- (void)_pxswizzled_viewControllerTraitCollection_viewSafeAreaInsetsDidChange;
- (void)_pxswizzled_viewControllerTraitCollection_traitCollectionDidChange:(id)arg1;
- (void)_pxswizzled_viewControllerTraitCollection_viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)_pxswizzled_viewControllerTraitCollection_viewWillLayoutSubviews;
- (void)_pxswizzled_viewControllerTraitCollection_viewWillAppear:(_Bool)arg1;
- (void)_pxswizzled_viewControllerTraitCollection_viewDidLoad;
@property(readonly, nonatomic) PXExtendedTraitCollection *px_extendedTraitCollection;
- (void)px_enableExtendedTraitCollection;
- (id)debugURLsForDiagnostics;
@property(readonly, nonatomic) UIViewController *px_nextViewControllerInNavigationController;
@property(readonly, nonatomic) UIViewController *px_previousViewControllerInNavigationController;
@property(retain, nonatomic, setter=px_setPreviewActionMenus:) NSArray *px_previewActionMenus;
@property(copy, nonatomic, setter=px_setSubtitle:) NSString *px_subtitle;
- (void)px_enumerateDescendantViewControllersWithOptions:(unsigned long long)arg1 usingBlock:(id /* block */)arg2;
- (_Bool)px_isDescendantOfViewController:(id)arg1;
- (_Bool)px_canPresentViewControllerAnimated:(_Bool)arg1;
- (void)px_presentOverTopmostPresentedViewController:(id)arg1 animated:(_Bool)arg2 completion:(id /* block */)arg3;
@property(readonly, nonatomic) UIViewController *px_topmostPresentedViewController;
@property(readonly, nonatomic) struct UIEdgeInsets px_layoutMargins;
@property(readonly, nonatomic) struct UIEdgeInsets px_safeAreaInsets;
@property(readonly, nonatomic) _Bool px_isVisible;
- (void)_px_viewAppearanceDidChange;
- (void)_pxswizzled_imageModulation_viewDidDisappear:(_Bool)arg1;
- (void)_pxswizzled_imageModulation_viewWillDisappear:(_Bool)arg1;
- (void)_pxswizzled_imageModulation_viewWillAppear:(_Bool)arg1;
- (void)px_setNeedsImageModulationIntensityUpdate;
@property(readonly, nonatomic) double px_imageModulationIntensity;
- (void)px_setNeedsHDRFocusUpdate;
@property(readonly, nonatomic) double px_HDRFocus;
- (_Bool)_px_windowMatchesImageModulationManager:(id)arg1;
@property(readonly, nonatomic) PXImageModulationManager *px_imageModulationManager;
- (void)px_enableImageModulation;
- (double)_px_imageModulationMixFactorWithPresentedViewController:(id)arg1;
@property(readonly, nonatomic) double px_effectiveImageModulationIntensity;
@property(readonly, nonatomic) double px_effectiveHDRFocus;
@property(nonatomic, getter=px_isImageModulationEnabled, setter=px_setImageModulationEnabled:) _Bool px_imageModulationEnabled;
@property(readonly, nonatomic) _Bool px_photosUICategoriesAvailable;
- (_Bool)px_canPerformSwipeDownTransitionWithMasterViewController:(id)arg1;
- (_Bool)px_canPerformSwipeDownTransitionWithDetailViewController:(id)arg1;
@property(readonly, nonatomic) struct CGSize px_referenceSize;
- (void)_pxswizzled_oneUpPresentation_viewDidDisappear:(_Bool)arg1;
- (void)_pxswizzled_oneUpPresentation_viewWillDisappear:(_Bool)arg1;
- (void)_pxswizzled_oneUpPresentation_viewDidAppear:(_Bool)arg1;
- (void)_pxswizzled_oneUpPresentation_viewWillAppear:(_Bool)arg1;
@property(readonly, nonatomic) PXOneUpPresentation *px_oneUpPresentation;
- (void)px_enableOneUpPresentationFromViewController:(id)arg1;
- (void)px_enableOneUpPresentation;
- (void)_px_prepareNavigationFromViewController:(id)arg1 options:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
- (void)navigateToDestination:(id)arg1 options:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
- (id)_nextExistingViewControllerOnRouteToDestination:(id)arg1;
- (id)nextExistingParticipantOnRouteToDestination:(id)arg1;
- (_Bool)canRouteToDestination:(id)arg1;
- (void)px_navigateToStateAllowingTabSwitchingWithOptions:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;
@property(readonly, nonatomic) _Bool px_allowsTabSwitching;
@property(readonly, nonatomic) NSString *px_snapBackHistorySubtitle;
@property(readonly, nonatomic) NSString *px_snapBackHistoryTitle;
@property(readonly, nonatomic) _Bool px_isSnapBackDestination;
- (id)px_endPointForTransition:(id)arg1;
@property(retain, nonatomic, setter=px_setDefaultTransitionEndPoint:) id <PXUIViewControllerTransitionEndPoint> px_defaultTransitionEndPoint;
- (id)px_splitViewController;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly, nonatomic, getter=px_isVisible) _Bool px_visible;
@property(readonly) Class superclass;
@end

