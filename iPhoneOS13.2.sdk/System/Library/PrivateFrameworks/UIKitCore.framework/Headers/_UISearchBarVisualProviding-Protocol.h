//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSArray, NSString, UIBarButtonItem, UIButton, UIColor, UIImage, UIImageView, UILabel, UINavigationButton, UINavigationItem, UISearchBar, UISearchBarBackground, UISearchBarTextField, UISegmentedControl, UIView, UIVisualEffectView, _UIBackdropView, _UIBarButtonItemAppearanceStorage, _UIBarInsertLayoutData, _UINavigationBarTitleViewOverlayRects, _UISearchBarScopeBarBackground;
@protocol _UINavigationBarTitleViewDataSource, _UISearchBarVisualProvidingDelegate><_UINavigationBarAugmentedTitleView><UITextInputTraits_Private;

@protocol _UISearchBarVisualProviding <NSObject>
@property(nonatomic) __weak id searchDisplayController;
@property(readonly, nonatomic) UINavigationItem *searchNavigationItem;
@property(readonly, nonatomic) UIBarButtonItem *animatedAppearanceBarButtonItem;
@property(nonatomic) BOOL allowsInlineScopeBar;
@property(readonly, nonatomic) BOOL backgroundLayoutNeedsUpdate;
@property(nonatomic) BOOL drawsBackgroundInPalette;
@property(readonly, nonatomic, getter=isLegacy) BOOL legacy;
@property(retain, nonatomic) _UINavigationBarTitleViewOverlayRects *navBarTitleViewOverlayRects;
@property(nonatomic) long long navBarTitleViewLocation;
@property(nonatomic) __weak id <_UINavigationBarTitleViewDataSource> navBarTitleViewDataSource;
@property(readonly, nonatomic) CGSize intrinsicContentSize;
@property(readonly, nonatomic) double scopeBarHeight;
@property(readonly, nonatomic) double searchFieldHeight;
@property(nonatomic) double tableViewIndexWidth;
@property(readonly, nonatomic) BOOL alwaysUsesLayoutMarginsForHorizontalContentInset;
@property(readonly, nonatomic) UIEdgeInsets scopeBarInsets;
@property(readonly, nonatomic) UIEdgeInsets effectiveContentInset;
@property(nonatomic) UIEdgeInsets minimumContentInset;
@property(readonly, nonatomic) UIColor *textColor;
@property(nonatomic) UIOffset searchFieldBackgroundPositionAdjustment;
@property(retain, nonatomic) UIImage *scopeBarBackgroundImage;
@property(retain, nonatomic) UIImage *separatorImage;
@property(nonatomic, getter=isHostedByNavigationBar) BOOL hostedByNavigationBar;
@property(nonatomic, getter=isInNavigationPalette) BOOL inNavigationPalette;
@property(nonatomic, getter=isPlacedInToolbar) BOOL placedInToolbar;
@property(nonatomic, getter=isPlacedInNavigationBar) BOOL placedInNavigationBar;
@property(nonatomic) long long selectedScope;
@property(readonly, nonatomic) BOOL scopeBarIsVisible;
@property(nonatomic) BOOL showsScopeBar;
@property(nonatomic) BOOL showsBookmarkButton;
@property(nonatomic, getter=isSearchResultsButtonSelected) BOOL searchResultsButtonSelected;
@property(nonatomic) BOOL showsSearchResultsButton;
@property(nonatomic) BOOL cancelButtonWantsLetterpress;
@property(nonatomic) BOOL autoDisableCancelButton;
@property(nonatomic) BOOL showsCancelButton;
@property(nonatomic) BOOL usesEmbeddedAppearance;
@property(nonatomic) BOOL drawsBackground;
@property(nonatomic) BOOL reliesOnNavigationBarBackdrop;
@property(nonatomic, getter=isEnabled) BOOL enabled;
@property(nonatomic) BOOL centerPlaceholder;
@property(nonatomic) long long searchFieldLeftViewMode;
@property(nonatomic) NSUInteger scopeBarPosition;
@property(nonatomic) long long barPosition;
@property(retain, nonatomic) UIColor *barTintColor;
@property(nonatomic) NSUInteger backdropStyle;
@property(nonatomic) long long barTranslucence;
@property(nonatomic) NSUInteger searchBarStyle;
@property(nonatomic) long long barStyle;
@property(copy, nonatomic) NSString *cancelButtonText;
@property(copy, nonatomic) NSArray *scopeTitles;
@property(copy, nonatomic) NSString *prompt;
@property(readonly, nonatomic) UIImageView *shadowView;
@property(readonly, nonatomic) UIView *searchBarClippingView;
@property(retain, nonatomic) _UISearchBarScopeBarBackground *scopeBarBackgroundView;
@property(readonly, nonatomic) UIView *scopeBarContainerView;
@property(retain, nonatomic) UISegmentedControl *scopeBar;
@property(retain, nonatomic) UIImageView *separator;
@property(retain, nonatomic) UILabel *promptLabel;
@property(readonly, nonatomic) UINavigationButton *leftButton;
@property(readonly, nonatomic) UIBarButtonItem *cancelBarButtonItem;
@property(retain, nonatomic) UIButton *cancelButton;
@property(retain, nonatomic) UIVisualEffectView *backdropVisualEffectView;
@property(retain, nonatomic) _UIBackdropView *backdrop;
@property(retain, nonatomic) UISearchBarBackground *searchBarBackground;
@property(retain, nonatomic) UISearchBarTextField *searchField;
@property(nonatomic) UIView<_UISearchBarVisualProvidingDelegate><_UINavigationBarAugmentedTitleView><UITextInputTraits_Private> *delegate;
@property(readonly, copy, nonatomic) NSArray *runtimeOnlyViews;
- (void)setClippingViewBounds:(CGRect)arg1;
- (void)setClippingViewActive:(BOOL)arg1;
- (void)updateBackgroundToBackdropStyle:(long long)arg1;
- (BOOL)isInBarButNotHosted;
- (void)setBackgroundLayoutNeedsUpdate;
- (BOOL)wantsDictationButton;
- (void)setDisableDictationButton:(BOOL)arg1;
- (void)setSearchDisplayControllerShowsCancelButton:(BOOL)arg1;
- (void)setUpCancelButtonWithAppearance:(_UIBarButtonItemAppearanceStorage *)arg1;
- (void)setShadowVisibleIfNecessary:(BOOL)arg1;
- (UIImageView *)makeShadowView;
- (void)updateNavigationBarLayoutInsertDataForSearchBar:(_UIBarInsertLayoutData *)arg1 collapsibleScopeBar:(_UIBarInsertLayoutData *)arg2 forLayoutState:(long long)arg3;
- (double)navigationBarContentHeight;
- (double)barHeightForBarMetrics:(long long)arg1 barPosition:(long long)arg2;
- (double)barHeightForBarMetrics:(long long)arg1 withEffectiveInsets:(UIEdgeInsets)arg2;
- (double)barHeightForBarMetrics:(long long)arg1;
- (long long)barMetricsForOrientation:(long long)arg1;
- (BOOL)wouldCombineLandscapeBarsForSize:(CGSize)arg1;
- (BOOL)shouldCombineLandscapeBarsForOrientation:(long long)arg1;
- (void)allowCursorToAppear:(BOOL)arg1;
- (void)updateScopeBarBackground;
- (void)updateIfNecessaryForOldSize:(CGSize)arg1;
- (void)updateSearchFieldArt;
- (void)updateSearchBarOpacity;
- (void)updateScopeBarForSelectedScope;
- (void)updateDictationButton;
- (void)updateMagnifyingGlassView;
- (void)updateForDrawsBackgroundInPalette;
- (void)_setShowsScopeBar:(BOOL)arg1;
- (void)_setHideBackground:(BOOL)arg1;
- (void)_setSearchResultsButtonSelected:(BOOL)arg1;
- (void)_setShowsSearchResultsButton:(BOOL)arg1;
- (void)_setShowsBookmarkButton:(BOOL)arg1;
- (void)_setShowsCancelButton:(BOOL)arg1;
- (void)_setAutoDisableCancelButton:(BOOL)arg1;
- (void)_setBarTranslucence:(long long)arg1;
- (void)_setBarTintColor:(UIColor *)arg1;
- (void)_setBarStyle:(long long)arg1;
- (void)navigationBarTransitionCompleted:(long long)arg1 willBeDisplayed:(BOOL)arg2;
- (void)navigationBarTransitionWillBegin:(long long)arg1 willBeDisplayed:(BOOL)arg2;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (double)defaultHeightForOrientation:(long long)arg1;
- (void)updateEffectiveContentInset;
- (void)getOverrideContentInsets:(UIEdgeInsets )arg1 overriddenEdges:(NSUInteger )arg2;
- (void)setOverrideContentInsets:(UIEdgeInsets)arg1 forRectEdges:(NSUInteger)arg2;
- (void)updatePlaceholderColor;
- (UIColor *)effectiveBarTintColor;
- (void)setBarTintColor:(UIColor *)arg1 forceUpdate:(BOOL)arg2;
- (UIColor *)colorForComponent:(NSUInteger)arg1 disabled:(BOOL)arg2;
- (UIImage *)backgroundImageForBarPosition:(long long)arg1 barMetrics:(long long)arg2;
- (void)setBackgroundImage:(UIImage *)arg1 forBarPosition:(long long)arg2 barMetrics:(long long)arg3;
- (UIImage *)internalImageForSearchBarIcon:(long long)arg1 state:(NSUInteger)arg2 customImage:(BOOL )arg3;
- (UIImage *)imageForSearchBarIcon:(long long)arg1 state:(NSUInteger)arg2;
- (void)setImage:(UIImage *)arg1 forSearchBarIcon:(long long)arg2 state:(NSUInteger)arg3;
- (UIImage *)searchFieldBackgroundImageForState:(NSUInteger)arg1;
- (void)setSearchFieldBackgroundImage:(UIImage *)arg1 forState:(NSUInteger)arg2;
- (void)applySearchBarStyle;
- (void)updateRightView;
- (void)setUpScopeBar;
- (void)setShowsDeleteButton:(BOOL)arg1;
- (void)setShowsSeparator:(BOOL)arg1;
- (void)layoutSubviews;
- (void)invalidateLayout;
- (void)setShowsScopeBar:(BOOL)arg1 animateOpacity:(BOOL)arg2;
- (void)setShowsCancelButton:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setEnabled:(BOOL)arg1 animated:(BOOL)arg2;
- (void)destroyCancelButton;
- (void)teardown;
- (void)setUpSearchField;
- (void)setUpPromptLabel;
- (void)prepare;
- (id)initWithDelegate:(UISearchBar *)arg1;
@end
