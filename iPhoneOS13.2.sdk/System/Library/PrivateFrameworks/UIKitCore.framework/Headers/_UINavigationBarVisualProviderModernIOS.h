//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/_UINavigationBarVisualProvider.h>

#import <UIKitCore/_UIBarAppearanceChangeObserver-Protocol.h>
#import <UIKitCore/_UIBasicAnimationFactory-Protocol.h>
#import <UIKitCore/_UINavigationBarContentViewDelegate-Protocol.h>
#import <UIKitCore/_UINavigationControllerRefreshControlHostDelegate-Protocol.h>
#import <UIKitCore/_UINavigationItemChangeObserver-Protocol.h>

@class NSString, UILabel, UIView, _UIBarBackground, _UINavigationBarContentView, _UINavigationBarLargeTitleView, _UINavigationBarModernPromptView, _UINavigationBarTransitionContext, _UINavigationControllerRefreshControlHost;

__attribute__((visibility("hidden")))
@interface _UINavigationBarVisualProviderModernIOS : _UINavigationBarVisualProvider <_UINavigationBarContentViewDelegate, _UINavigationItemChangeObserver, _UIBarAppearanceChangeObserver, _UINavigationControllerRefreshControlHostDelegate, _UIBasicAnimationFactory>
{
    _UIBarBackground *_backgroundView;
    _UINavigationBarContentView *_contentView;
    UIView *_canvasView;
    _UINavigationBarLargeTitleView *_largeTitleView;
    _UINavigationBarModernPromptView *_promptView;
    UILabel *_weeTitleLabel;
    _UINavigationBarTransitionContext *_transitionContext;
    struct CGSize _previousBarSize;
    double _backgroundAlpha;
    double _titleAlpha;
    double _shadowAlpha;
    _Bool _hasIdiom;
    _Bool _runningPaletteBasedSearchPresentation;
    _Bool _useInlineBackgroundHeightWhenLarge;
    _Bool _backgroundTransparentWhenNotCollapsed;
    _Bool _providesExtraSpaceForExcessiveLineHeights;
    _Bool _isObservingDidEncounterFirstTitleWithExcessiveHeightChanged;
    _Bool _useModernAppearanceAPI;
    _Bool _forceScrollEdgeAppearance;
    long long _appearanceAPIVersion;
    _UINavigationControllerRefreshControlHost *_refreshControlHost;
}

- (id)_accessibility_controlToActivateForHUDGestureLiftAtPoint:(struct CGPoint)arg1;
- (id)_accessibility_HUDItemForPoint:(struct CGPoint)arg1;
- (_Bool)_accessibility_shouldBeginHUDGestureAtPoint:(struct CGPoint)arg1;
- (void)_shim_setDisableBlurTinting:(_Bool)arg1;
- (_Bool)_shim_disableBlurTinting;
- (void)_shim_setShadowAlpha:(double)arg1;
- (double)_shim_shadowAlpha;
- (id)_shim_compatibilityBackgroundView;
- (void)_shim_setCustomBackgroundView:(id)arg1;
- (_Bool)_shouldAnimateAdditivelyForView:(id)arg1 withKeyPath:(id)arg2;
- (id)_timingFunctionForAnimationInView:(id)arg1 withKeyPath:(id)arg2;
- (id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2;
- (void)appearance:(id)arg1 categoriesChanged:(long long)arg2;
- (void)navigationItemUpdatedScrollEdgeProgress:(id)arg1;
- (void)navigationItemUpdatedBottomPalette:(id)arg1 oldPalette:(id)arg2;
- (void)navigationItemUpdatedSearchController:(id)arg1 oldSearchController:(id)arg2;
- (void)navigationItemUpdatedBackgroundAppearance:(id)arg1;
- (void)navigationItem:(id)arg1 appearance:(id)arg2 categoriesChanged:(long long)arg3;
- (void)navigationItemUpdatedCanvasView:(id)arg1;
- (void)navigationItemUpdatedPromptContent:(id)arg1;
- (void)navigationItemUpdatedLargeTitleContent:(id)arg1;
- (void)navigationItemUpdatedLargeTitleDisplayMode:(id)arg1;
- (void)navigationItemUpdatedBackButtonContent:(id)arg1 animated:(_Bool)arg2;
- (void)navigationItemUpdatedContentLayout:(id)arg1 animated:(_Bool)arg2;
- (void)navigationItemUpdatedRightBarButtonItems:(id)arg1 animated:(_Bool)arg2;
- (void)navigationItemUpdatedLeftBarButtonItems:(id)arg1 animated:(_Bool)arg2;
- (void)navigationItemUpdatedTitleContent:(id)arg1 animated:(_Bool)arg2;
- (_Bool)navigationItemIsBackItem:(id)arg1;
- (_Bool)navigationItemIsTopItem:(id)arg1;
- (void)navigationBarContentViewDidChangeDesiredHeight:(id)arg1;
- (void)navigationBarContentViewDidTriggerBackAction:(id)arg1 fromBackButtonItem:(id)arg2;
- (void)navigationControllerRefreshControlHostDidUpdateLayout:(id)arg1;
- (id)refreshControlHost;
- (void)setRefreshControlHost:(id)arg1;
- (_Bool)supportsRefreshControlHosting;
- (void)_postDidEncounterFirstTitleWithExcessiveHeightChanged;
- (void)_beginOrEndObservingDidEncounterFirstTitleWithExcessiveHeightChangedIfNecessary;
- (void)_computeProvidesExtraSpaceForExcessiveLineHeightsForTopItem:(id)arg1;
- (void)_didEncounterFirstTitleWithExcessiveHeightChanged:(id)arg1;
- (void)navigationBarInvalidatedResolvedLayoutMargins;
- (void)_setupTopNavigationItemAnimated:(_Bool)arg1;
- (id)restingHeights;
- (_Bool)topItemHasVariableHeight;
- (CDStruct_39925896)layoutHeightsFittingWidth:(double)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)safeAreaInsetsDidChange;
- (long long)statusBarStyle;
- (long long)currentContentSize;
- (id)traitCollectionForChild:(id)arg1 baseTraitCollection:(id)arg2;
- (void)traitCollectionDidChangeOnSubtree:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)animateForSearchPresentation:(_Bool)arg1;
- (void)prepareForPop;
- (void)prepareForPush;
- (void)_prepareLayouts;
- (void)popAnimated:(_Bool)arg1 completion:(id /* block */)arg2;
- (void)pushAnimated:(_Bool)arg1 completion:(id /* block */)arg2;
- (void)_performAnimationWithTransitionCompletion:(id /* block */)arg1 transition:(int)arg2;
- (void)_presentOrDismissSearch:(int)arg1 withTransitionCoordinator:(id)arg2;
- (void)dismissHostedSearchWithTransitionCoordinator:(id)arg1;
- (void)presentHostedSearchWithTransitionCoordinator:(id)arg1;
- (void)_endTransitionCompleted:(_Bool)arg1;
- (void)_setupTransitionContextForTransition:(int)arg1;
- (void)_updateWithCompletion:(id /* block */)arg1;
- (void)layoutSubviews;
- (void)_configureMarginsOnContentViewsAndPalette:(id)arg1 withContentMargin:(double)arg2;
- (struct NSDirectionalEdgeInsets)resolvedLargeTitleMargins;
- (void)_updateAugmentedTitleDataSources;
- (void)updateBackgroundGroupName;
- (void)_updateBackground;
- (id)_updateBackgroundLayout:(id)arg1 forNavigationItem:(id)arg2 compact:(_Bool)arg3;
- (id)_backgroundLayoutOfClass:(Class)arg1 fromLayout:(id)arg2;
- (void)_updateLegacyLayout:(id)arg1 forNavigationItem:(id)arg2;
- (void)_updateModernLayout:(id)arg1 forNavigationItem:(id)arg2 compact:(_Bool)arg3;
- (void)_updateCanvasView;
- (void)_layoutInBounds:(struct CGRect)arg1 wantsExtendedContentView:(_Bool)arg2 wantsLargeTitle:(_Bool)arg3;
- (id)emptyLayout;
- (void)_ensureLayoutsConfiguredForEntry:(id)arg1;
- (void)_enforceLayoutOrdering;
- (void)_updateContentForTopItem:(id)arg1 backItem:(id)arg2;
- (void)_updateContentForTopItem:(id)arg1 backItem:(id)arg2 animated:(_Bool)arg3;
- (_Bool)_isInnerNavigationBarOfNestedNavigationController;
- (double)_effectiveBackIndicatorLeftMargin;
- (id)_defaultWeeTitleAttributes;
- (_Bool)_stackWantsBottomPaletteDisplayedForItem:(id)arg1;
- (_Bool)_stackWantsSearchDisplayedBelowContentViewForItem:(id)arg1;
- (_Bool)_stackWantsLargeTitleDisplayedForItem:(id)arg1 hideLargeTitleForActiveSearch:(_Bool)arg2;
- (_Bool)_stackWantsLargeTitleDisplayedForItem:(id)arg1;
- (_Bool)_stackWantsExtendedContentViewForItem:(id)arg1;
- (_Bool)allowLargeTitleView;
- (void)setForceScrollEdgeAppearance:(_Bool)arg1;
- (_Bool)useManualScrollEdgeAppearanceForItem:(id)arg1;
- (_Bool)forceScrollEdgeAppearance;
- (void)_upgradeAppearanceAPIForItemIfNecessary:(id)arg1;
- (id)appearanceObserver;
- (void)setAppearanceAPIVersion:(long long)arg1;
- (long long)appearanceAPIVersion;
- (void)setTitleAlpha:(double)arg1;
- (double)titleAlpha;
- (void)setBackgroundAlpha:(double)arg1;
- (double)backgroundAlpha;
- (void)setUseInlineBackgroundHeightWhenLarge:(_Bool)arg1;
- (_Bool)useInlineBackgroundHeightWhenLarge;
- (_Bool)wantsLargeTitleDisplayed;
- (_Bool)wantsExtendedContentView;
- (void)_updateContentPriorities;
- (void)_updateTitleViewWithLargeTitle:(_Bool)arg1;
- (_Bool)_isInInteractiveScroll;
- (void)_updatePromptViewAndActuallyHide:(_Bool)arg1;
- (void)updateArchivedSubviews:(id)arg1;
- (void)provideViewsForContents:(id)arg1 topItem:(id)arg2 backItem:(id)arg3;
- (void)_invalidateIntrinsicContentSizeAndNotifySizeChanged;
- (struct CGSize)sizeForRestoringFromCancelledTransition;
- (void)recordBarSize:(struct CGSize)arg1;
- (void)changeLayout;
- (void)changeAppearance;
- (double)_contentBackgroundExtension;
- (void)stackDidChangeFrom:(id)arg1;
- (void)teardown;
- (void)prepare;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

