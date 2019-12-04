//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UIView.h>

#import <UIKitCore/UIBarPositioning-Protocol.h>
#import <UIKitCore/UITextInputTraits-Protocol.h>
#import <UIKitCore/UITextInputTraits_Private-Protocol.h>
#import <UIKitCore/_UIBarPositioningInternal-Protocol.h>
#import <UIKitCore/_UINavigationBarAugmentedTitleView-Protocol.h>
#import <UIKitCore/_UISearchBarVisualProvidingDelegate-Protocol.h>

@class NSArray, NSIndexSet, NSString, UIButton, UIColor, UIImage, UIInputContextHistory, UISearchBarTextField, UISearchController, UITapGestureRecognizer, UITextInputAssistantItem, UITextInputPasswordRules, UITextInputTraits, _UINavigationControllerPalette;
@protocol UISearchBarDelegate, UISearchBarDelegate><UISearchBarDelegate_Private, _UISearchBarVisualProviding;

@interface UISearchBar : UIView <_UISearchBarVisualProvidingDelegate, UITextInputTraits_Private, _UIBarPositioningInternal, _UINavigationBarAugmentedTitleView, UIBarPositioning, UITextInputTraits>
{
    id <UISearchBarDelegate><UISearchBarDelegate_Private> _delegate;
    UITapGestureRecognizer *_tapToActivateGestureRecognizer;
    UITextInputTraits *_textInputTraits;
    _Bool __forceCenteredPlaceholderLayout;
    _Bool __transplanting;
    UIView *_inputAccessoryView;
    id <_UISearchBarVisualProviding> _visualProvider;
    UISearchController *__searchController;
}

+ (void)_initializeForIdiom:(long long)arg1;
@property(nonatomic, setter=_setTransplanting:) _Bool _transplanting; // @synthesize _transplanting=__transplanting;
@property(nonatomic, setter=_setSearchController:) UISearchController *_searchController; // @synthesize _searchController=__searchController;
@property(nonatomic) _Bool _forceCenteredPlaceholderLayout; // @synthesize _forceCenteredPlaceholderLayout=__forceCenteredPlaceholderLayout;
@property(readonly, nonatomic) id <_UISearchBarVisualProviding> _visualProvider; // @synthesize _visualProvider;
@property(retain, nonatomic) UIView *inputAccessoryView; // @synthesize inputAccessoryView=_inputAccessoryView;
@property(nonatomic) __weak id <UISearchBarDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_uiktest_placeholderLabelColor;
- (void)_setCancelButtonWantsLetterpress;
- (_Bool)_shouldUseNavigationBarHeight;
- (long long)_barMetricsForOrientation:(long long)arg1;
- (void)setSearchFieldLeftViewMode:(long long)arg1;
- (long long)searchFieldLeftViewMode;
- (void)_updateInsetsForCurrentContainerViewAndBarPosition;
- (void)_updateInsetsForTableView:(id)arg1;
- (void)tappedSearchBar:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)_allowCursorToAppear:(_Bool)arg1;
- (id)_textColor;
- (id)_colorForComponent:(unsigned long long)arg1 disabled:(_Bool)arg2;
- (_Bool)_hasDarkUIAppearance;
- (_Bool)centerPlaceholder;
- (void)setCenterPlaceholder:(_Bool)arg1;
- (id)_presentationBackgroundBlurEffectForTraitCollection:(id)arg1;
- (void)_didChangeFromIdiom:(long long)arg1 onScreen:(id)arg2 traverseHierarchy:(_Bool)arg3;
- (unsigned long long)_backdropStyle;
- (void)_setBackdropStyle:(unsigned long long)arg1;
@property(nonatomic) unsigned long long searchBarStyle;
- (void)_setBackgroundLayoutNeedsUpdate;
- (_Bool)_containedInNavigationPalette;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (id)_animatedAppearanceBarButtonItem;
- (id)_searchDisplayControllerNavigationItem;
@property(readonly, nonatomic) UITextInputAssistantItem *inputAssistantItem;
- (_Bool)_ownsInputAccessoryView;
- (struct UIOffset)positionAdjustmentForSearchBarIcon:(long long)arg1;
- (void)setPositionAdjustment:(struct UIOffset)arg1 forSearchBarIcon:(long long)arg2;
@property(nonatomic) struct UIOffset searchTextPositionAdjustment;
@property(nonatomic) struct UIOffset searchFieldBackgroundPositionAdjustment;
- (id)scopeBarButtonTitleTextAttributesForState:(unsigned long long)arg1;
- (void)setScopeBarButtonTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2;
- (id)scopeBarButtonDividerImageForLeftSegmentState:(unsigned long long)arg1 rightSegmentState:(unsigned long long)arg2;
- (void)setScopeBarButtonDividerImage:(id)arg1 forLeftSegmentState:(unsigned long long)arg2 rightSegmentState:(unsigned long long)arg3;
- (id)scopeBarButtonBackgroundImageForState:(unsigned long long)arg1;
- (void)setScopeBarButtonBackgroundImage:(id)arg1 forState:(unsigned long long)arg2;
@property(retain, nonatomic) UIImage *scopeBarBackgroundImage;
- (id)imageForSearchBarIcon:(long long)arg1 state:(unsigned long long)arg2;
- (void)setImage:(id)arg1 forSearchBarIcon:(long long)arg2 state:(unsigned long long)arg3;
- (id)searchFieldBackgroundImageForState:(unsigned long long)arg1;
- (void)setSearchFieldBackgroundImage:(id)arg1 forState:(unsigned long long)arg2;
- (void)_setSeparatorImage:(id)arg1;
- (id)_separatorImage;
@property(retain, nonatomic) UIImage *backgroundImage;
- (id)backgroundImageForBarPosition:(long long)arg1 barMetrics:(long long)arg2;
- (void)setBackgroundImage:(id)arg1 forBarPosition:(long long)arg2 barMetrics:(long long)arg3;
- (void)setBackgroundImage:(id)arg1 forBarMetrics:(long long)arg2;
@property(retain, nonatomic) UIColor *barTintColor;
@property(retain, nonatomic) UIColor *tintColor; // @dynamic tintColor;
- (void)_setDisableFocus:(_Bool)arg1;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (id)preferredFocusedView;
- (id)preferredFocusEnvironments;
- (void)_updateNavigationBarLayoutInsertDataForSearchBar:(id)arg1 collapsibleScopeBar:(id)arg2 forLayoutState:(long long)arg3;
- (void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2;
- (void)_scopeChanged:(id)arg1;
@property(nonatomic) _Bool showsScopeBar;
- (void)setShowsScopeBar:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_setShowsScopeBar:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_setShowsScopeBar:(_Bool)arg1 animateOpacity:(_Bool)arg2;
- (void)_dismissScopeBarIfNecessary;
- (void)_presentScopeBarIfNecessary;
@property(nonatomic, setter=_setScopeBarPosition:) unsigned long long _scopeBarPosition;
- (void)_setScopeBarHidden:(_Bool)arg1;
@property(nonatomic) long long selectedScopeButtonIndex;
@property(copy, nonatomic) NSArray *scopeButtonTitles;
- (struct UIEdgeInsets)_scopeBarInsets;
- (_Bool)_scopeBarIsVisible;
@property(readonly, nonatomic) struct UIEdgeInsets _effectiveContentInset;
- (void)_updateEffectiveContentInset;
- (void)_containerSafeAreaInsetsDidChange:(id)arg1;
- (void)safeAreaInsetsDidChange;
- (void)layoutMarginsDidChange;
- (void)_getOverrideContentInsets:(struct UIEdgeInsets *)arg1 overriddenEdges:(unsigned long long *)arg2;
- (void)_setOverrideContentInsets:(struct UIEdgeInsets)arg1 forRectEdges:(unsigned long long)arg2;
- (struct UIEdgeInsets)contentInset;
- (void)setContentInset:(struct UIEdgeInsets)arg1;
- (void)_setShadowVisibleIfNecessary:(_Bool)arg1;
- (id)_makeShadowView;
- (void)layoutSubviews;
- (void)setNeedsLayout;
- (double)_scopeBarHeight;
- (void)sendSubviewToBack:(id)arg1;
- (void)bringSubviewToFront:(id)arg1;
- (void)_addSubview:(id)arg1 positioned:(long long)arg2 relativeTo:(id)arg3;
- (void)_setShowsSeparator:(_Bool)arg1;
- (struct CGSize)intrinsicContentSize;
- (_Bool)_contentHuggingDefault_isUsuallyFixedHeight;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (double)_defaultHeightForOrientation:(long long)arg1;
- (double)_defaultHeight;
- (double)_barHeightForBarMetrics:(long long)arg1 barPosition:(long long)arg2;
- (double)_barHeightForBarMetrics:(long long)arg1;
- (void)_navigationBarSlideTransitionDidEnd;
- (void)_navigationBarSlideTransitionWillBegin;
- (void)_cancelTransitionToSearchLayoutState:(long long)arg1;
- (void)_completeTransitionToSearchLayoutState:(long long)arg1;
- (void)_animateTransitionToSearchLayoutState:(long long)arg1;
- (void)_prepareForTransitionToSearchLayoutState:(long long)arg1;
- (void)_driveTransitionToSearchLayoutState:(long long)arg1;
- (void)_navigationBarTraitCollectionDidChangeTo:(id)arg1 from:(id)arg2;
- (void)_navigationBarTransitionCompleted:(long long)arg1 willBeDisplayed:(_Bool)arg2;
- (void)_performNavigationBarTransition:(long long)arg1 willBeDisplayed:(_Bool)arg2;
- (void)_navigationBarTransitionWillBegin:(long long)arg1 willBeDisplayed:(_Bool)arg2;
- (_Bool)_wantsTwoPartTransition;
- (void)_contentDidChange;
- (long long)_preferredContentSizeForSize:(long long)arg1;
@property(readonly, nonatomic) double _navigationBarTrailingBarButtonsAlpha;
@property(readonly, nonatomic) double _navigationBarLeadingBarButtonsAlpha;
@property(readonly, nonatomic) double _navigationBarBackButtonAlpha;
@property(readonly, nonatomic) _Bool _hideNavigationBarTrailingBarButtons;
@property(readonly, nonatomic) _Bool _hideNavigationBarStandardTitle;
@property(readonly, nonatomic) _Bool _hideNavigationBarLeadingBarButtons;
@property(readonly, nonatomic) _Bool _hideNavigationBarBackButton;
@property(readonly, nonatomic) double _navigationBarBackButtonMaximumWidth;
@property(readonly, nonatomic) double _navigationBarContentHeight;
@property(readonly, nonatomic) _Bool _underlayNavigationBarContent;
- (void)_setDataSource:(id)arg1 navigationItem:(id)arg2 titleLocation:(long long)arg3;
@property(readonly, nonatomic) long long _preferredAlignment;
- (_Bool)_searchBarTextFieldShouldChangeCharactersInRange:(struct _NSRange)arg1 replacementString:(id)arg2;
- (_Bool)_searchBarTextFieldShouldClear;
- (_Bool)_searchBarTextFieldShouldScrollToVisibleWhenBecomingFirstResponder;
- (_Bool)_searchBarTextFieldShouldEndEditing;
- (_Bool)_searchBarTextFieldShouldBeginEditing;
@property(nonatomic) long long keyboardAppearance; // @dynamic keyboardAppearance;
- (_Bool)respondsToSelector:(SEL)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (void)takeTraitsFrom:(id)arg1;
- (id)textInputTraits;
@property(readonly, retain, nonatomic) UIButton *_leftButton;
- (id)cancelButton;
- (void)setCancelButton:(id)arg1;
- (_Bool)usesEmbeddedAppearance;
- (void)setUsesEmbeddedAppearance:(_Bool)arg1;
- (_Bool)_wouldCombineLandscapeBarsForSize:(struct CGSize)arg1;
- (_Bool)_shouldCombineLandscapeBarsForOrientation:(long long)arg1;
- (_Bool)_shouldCombineLandscapeBars;
@property(nonatomic, setter=_setAllowsInlineScopeBar:) _Bool _allowsInlineScopeBar;
@property(nonatomic, getter=_isHostedByNavigationBar, setter=_setHostedByNavigationBar:) _Bool _hostedByNavigationBar;
- (void)_resetIfNecessaryForNavigationBarHosting:(_Bool)arg1;
@property(nonatomic, setter=_setReliesOnNavigationBarBackdrop:) _Bool _reliesOnNavigationBarBackdrop;
- (_Bool)drawsBackgroundInPalette;
- (void)setDrawsBackgroundInPalette:(_Bool)arg1;
- (_Bool)drawsBackground;
- (void)setDrawsBackground:(_Bool)arg1;
- (void)_setShowsCancelButton:(_Bool)arg1;
- (_Bool)_showingDictationButton;
- (void)_setDisableDictationButton:(_Bool)arg1;
@property(nonatomic) _Bool showsCancelButton;
- (void)setShowsCancelButton:(_Bool)arg1 animated:(_Bool)arg2;
@property(nonatomic) _Bool showsBookmarkButton;
@property(nonatomic, getter=isSearchResultsButtonSelected) _Bool searchResultsButtonSelected;
@property(nonatomic) _Bool showsSearchResultsButton;
- (id)_defaultPromptString;
@property(copy, nonatomic) NSString *placeholder;
@property(copy, nonatomic) NSString *prompt;
@property(copy, nonatomic) NSString *text;
- (id)searchTextField;
@property(nonatomic, getter=isTranslucent) _Bool translucent;
@property(nonatomic) long long barStyle;
- (void)didMoveToSuperview;
- (void)willMoveToSuperview:(id)arg1;
@property(readonly, nonatomic) _UINavigationControllerPalette *_containingNavigationPalette;
- (void)_identifyBarContainer;
- (void)didMoveToWindow;
- (void)willMoveToWindow:(id)arg1;
- (id)_scopeBar;
@property(readonly, nonatomic, getter=_searchBarTextField) UISearchBarTextField *searchBarTextField;
- (id)searchField;
- (id)_cancelButtonText;
- (void)set_cancelButtonText:(id)arg1;
- (id)_cancelButton;
- (id)_searchField;
- (id)controller;
- (void)setController:(id)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (void)_populateArchivedSubviews:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;
@property(readonly, copy) NSString *description;
- (void)setSemanticContentAttribute:(long long)arg1;
@property(readonly, nonatomic) UIView *_viewForChildViews;
- (void)_setMaskBounds:(struct CGRect)arg1;
- (void)_setMaskActive:(_Bool)arg1;
- (void)_commonInit;
- (void)_setUpVisualProvider;
- (_Bool)_supportsLayoutStates;
- (_Bool)_usesLegacyVisualProvider;
- (void)_setRequiresLegacyVisualProvider;
@property(readonly, nonatomic) long long barPosition;
- (long long)_barPosition;
- (void)_setBarPosition:(long long)arg1;
- (_Bool)isElementAccessibilityExposedToInterfaceBuilder;
- (void)_updateBackgroundToBackdropStyle:(long long)arg1;
- (id)_scopeBarContainerView;
- (long long)_textInputSource;
- (id)_backgroundView;
- (void)_setEnabled:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_setEnabled:(_Bool)arg1;
- (_Bool)_isEnabled;
- (_Bool)isFirstResponder;
- (_Bool)resignFirstResponder;
- (_Bool)canResignFirstResponder;
- (_Bool)becomeFirstResponder;
- (_Bool)canBecomeFirstResponder;
- (void)reloadInputViews;
- (_Bool)_enableAutomaticKeyboardPressDone;
- (_Bool)_disableAutomaticKeyboardUI;
- (void)insertTextSuggestion:(id)arg1;
- (void)_searchFieldTokensChanged;
- (void)_searchFieldSelectionChanged;
- (void)_searchFieldEditingChanged;
- (void)_searchFieldReturnPressed;
- (void)_searchFieldEndEditing;
- (void)_searchFieldBeginEditing;
- (void)_resultsListButtonPressed;
- (void)_bookmarkButtonPressed;
- (void)_cancelOperation:(id)arg1;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)_cancelButtonPressed;
- (void)_destroyCancelButton;
- (void)_setupCancelButtonWithAppearance:(id)arg1;
- (void)_setupCancelButton;
- (void)_setAutoDisableCancelButton:(_Bool)arg1;
- (void)_setCancelButtonText:(id)arg1;
- (void)_deleteButtonPressed;
- (void)_setShowsDeleteButton:(_Bool)arg1;
- (_Bool)_isInBarButNotHosted;
- (void)setPretendsIsInBar:(_Bool)arg1;
- (_Bool)pretendsIsInBar;
- (id)_selectedTokens;
- (void)_setTokenBackgroundColor:(id)arg1;
- (void)_replaceTextInRange:(struct _NSRange)arg1 withToken:(id)arg2;
- (void)_replaceSearchTextWithToken:(id)arg1;
- (void)_removeTokenAtIndex:(unsigned long long)arg1;
- (void)_insertToken:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)_tokens;
- (id)_searchTextField;
- (double)_defaultAutolayoutSpacing;
- (double)_autolayoutSpacingAtEdge:(int)arg1 forAttribute:(long long)arg2 inContainer:(id)arg3 isGuide:(_Bool)arg4;
- (_Bool)_hasCustomAutolayoutNeighborSpacingForAttribute:(long long *)arg1;

// Remaining properties
@property(copy, nonatomic) NSIndexSet *PINEntrySeparatorIndexes;
@property(nonatomic) _Bool acceptsDictationSearchResults;
@property(nonatomic) _Bool acceptsEmoji;
@property(nonatomic) _Bool acceptsFloatingKeyboard;
@property(nonatomic) _Bool acceptsPayloads;
@property(nonatomic) _Bool acceptsSplitKeyboard;
@property(nonatomic) long long autocapitalizationType; // @dynamic autocapitalizationType;
@property(copy, nonatomic) NSString *autocorrectionContext;
@property(nonatomic) long long autocorrectionType; // @dynamic autocorrectionType;
@property(nonatomic) _Bool contentsIsSingleValue;
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) _Bool deferBecomingResponder;
@property(nonatomic, getter=isDevicePasscodeEntry) _Bool devicePasscodeEntry;
@property(nonatomic) _Bool disableInputBars;
@property(nonatomic) _Bool disablePrediction;
@property(nonatomic) _Bool displaySecureEditsUsingPlainText;
@property(nonatomic) _Bool displaySecureTextUsingPlainText;
@property(nonatomic) int emptyContentReturnKeyType;
@property(nonatomic) _Bool enablesReturnKeyAutomatically; // @dynamic enablesReturnKeyAutomatically;
@property(nonatomic) _Bool enablesReturnKeyOnNonWhiteSpaceContent;
@property(nonatomic) struct UIEdgeInsets floatingKeyboardEdgeInsets;
@property(nonatomic) _Bool forceDefaultDictationInfo;
@property(nonatomic) long long forceDictationKeyboardType;
@property(nonatomic) _Bool forceDisableDictation;
@property(nonatomic) _Bool forceEnableDictation;
@property(nonatomic) _Bool forceFloatingKeyboard;
@property(nonatomic) _Bool hasDefaultContents;
@property(readonly) NSUInteger hash;
@property(nonatomic) _Bool hidePrediction;
@property(retain, nonatomic) UIInputContextHistory *inputContextHistory;
@property(retain, nonatomic) UIColor *insertionPointColor;
@property(nonatomic) unsigned long long insertionPointWidth;
@property(nonatomic) _Bool isCarPlayIdiom;
@property(nonatomic) _Bool isSingleLineDocument;
@property(nonatomic) long long keyboardType; // @dynamic keyboardType;
@property(nonatomic) _Bool learnsCorrections;
@property(nonatomic) _Bool loadKeyboardsForSiriLanguage;
@property(copy, nonatomic) UITextInputPasswordRules *passwordRules;
@property(copy, nonatomic) NSString *recentInputIdentifier;
@property(copy, nonatomic) NSString *responseContext;
@property(nonatomic) _Bool returnKeyGoesToNextResponder;
@property(nonatomic) long long returnKeyType; // @dynamic returnKeyType;
@property(nonatomic, getter=isSecureTextEntry) _Bool secureTextEntry; // @dynamic secureTextEntry;
@property(retain, nonatomic) UIColor *selectionBarColor;
@property(retain, nonatomic) UIImage *selectionDragDotImage;
@property(retain, nonatomic) UIColor *selectionHighlightColor;
@property(nonatomic) int shortcutConversionType;
@property(nonatomic) _Bool showDictationButton;
@property(nonatomic) long long smartDashesType; // @dynamic smartDashesType;
@property(nonatomic) long long smartInsertDeleteType; // @dynamic smartInsertDeleteType;
@property(nonatomic) long long smartQuotesType; // @dynamic smartQuotesType;
@property(nonatomic) long long spellCheckingType; // @dynamic spellCheckingType;
@property(readonly) Class superclass;
@property(nonatomic) _Bool suppressReturnKeyStyling;
@property(copy, nonatomic) NSString *textContentType; // @dynamic textContentType;
@property(nonatomic) int textLoupeVisibility;
@property(nonatomic) long long textScriptType;
@property(nonatomic) int textSelectionBehavior;
@property(nonatomic) id textSuggestionDelegate;
@property(nonatomic) struct __CFCharacterSet *textTrimmingSet;
@property(retain, nonatomic) UIColor *underlineColorForSpelling;
@property(retain, nonatomic) UIColor *underlineColorForTextAlternatives;
@property(nonatomic) _Bool useAutomaticEndpointing;
@property(nonatomic) _Bool useInterfaceLanguageForLocalization;
@property(nonatomic) struct _NSRange validTextRange;

@end

