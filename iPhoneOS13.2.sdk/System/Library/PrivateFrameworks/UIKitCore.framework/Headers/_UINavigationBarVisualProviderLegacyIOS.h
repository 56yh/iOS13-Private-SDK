//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/_UINavigationBarVisualProvider.h>

#import <UIKitCore/_UIBasicAnimationFactory-Protocol.h>
#import <UIKitCore/_UINavigationBarGestureHandlerDelegate-Protocol.h>

@class NSArray, NSLayoutConstraint, NSMutableArray, NSString, UIFocusContainerGuide, UIImageView, UILayoutGuide, UIView, _UIBarBackground, _UIBarBackgroundLayoutLegacy, _UINavBarPrompt, _UINavigationBarGestureHandler, _UINavigationBarLegacyContentView;
@protocol UIViewControllerTransitionCoordinator;

__attribute__((visibility("hidden")))
@interface _UINavigationBarVisualProviderLegacyIOS : _UINavigationBarVisualProvider <_UIBasicAnimationFactory, _UINavigationBarGestureHandlerDelegate>
{
    _UIBarBackground *_backgroundView;
    _UIBarBackgroundLayoutLegacy *_backgroundViewLayout;
    UIView *_customBackgroundView;
    UIView *_currentCanvasView;
    UIView *_titleView;
    NSArray *_leftViews;
    NSArray *_rightViews;
    UIImageView *_backIndicatorView;
    _UINavBarPrompt *_prompt;
    _UINavigationBarGestureHandler *_gestureHandler;
    NSMutableArray *_slideTransitionClippingViews;
    id <UIViewControllerTransitionCoordinator> _transitionCoordinator;
    _UINavigationBarLegacyContentView *_layoutView;
    UIView *_contentView;
    UILayoutGuide *_userContentGuide;
    NSLayoutConstraint *_userContentGuideLeading;
    NSLayoutConstraint *_userContentGuideTrailing;
    UIFocusContainerGuide *_contentFocusContainerGuide;
}

- (_Bool)_shim_34415965;
- (void)_shim_30244716;
- (void)_shim_updateBackgroundViewIgnoringFlag;
- (_Bool)_shim_throwConstraintExceptions;
- (void)_shim_popForCarplayPressAtFakePoint:(struct CGPoint)arg1;
- (void)_shim_touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)_shim_touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)_shim_touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)_shim_touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)_popForTouchAtPoint:(struct CGPoint)arg1;
- (_Bool)_shouldPopForTouchAtPoint:(struct CGPoint)arg1;
- (void)_handleMouseUpAtPoint:(struct CGPoint)arg1;
- (void)_handleMouseDownAtPoint:(struct CGPoint)arg1;
- (id)backButtonViewAtPoint:(struct CGPoint)arg1;
- (id)_navigationItemAtPoint:(struct CGPoint)arg1;
- (_Bool)_shim_wantsCustomTouchHandlingForTouches:(id)arg1;
- (id)_shim_customHitTest:(struct CGPoint)arg1 forView:(id)arg2;
- (void)_shim_pressBackIndicator:(_Bool)arg1 initialPress:(_Bool)arg2;
- (id)_shim_backIndicatorView;
- (void)_shim_updateBackIndicator;
- (void)_shim_setPromptText:(id)arg1 animated:(_Bool)arg2;
- (id)_shim_promptText;
- (void)_shim_updateUserContentGuideForTopItem:(id)arg1 backItem:(id)arg2;
- (id)_shim_userContentGuide;
- (long long)_shim_backdropStyle;
- (double)_shim_backgroundHeight;
- (void)_shim_setDisableBlurTinting:(_Bool)arg1;
- (_Bool)_shim_disableBlurTinting;
- (void)_shim_setUseContentView:(_Bool)arg1;
- (void)_shim_setShadowAlpha:(double)arg1;
- (double)_shim_shadowAlpha;
- (id)_shim_compatibilityBackgroundView;
- (void)_shim_setCustomBackgroundView:(id)arg1;
- (id)_shim_displayViewsIncludingHiddenBackButtonViews:(_Bool)arg1;
- (id)_shim_layoutView;
- (id)_shim_contentView;
- (void)_setUpContentFocusContainerGuide;
- (void)provideViewsForContents:(id)arg1 topItem:(id)arg2 backItem:(id)arg3;
- (void)updateBackgroundGroupName;
- (void)_updateBackground;
- (void)_completeTopItemTransitionWithIncomingViews:(id)arg1 outgoingViews:(id)arg2 previousLeftViews:(id)arg3 previousRightViews:(id)arg4 enableUserInteraction:(id)arg5 transitionAssistant:(id)arg6;
- (void)_setViewsAnimated:(_Bool)arg1 forTopNavigationItem:(id)arg2 backNavigationItem:(id)arg3 previousTopItem:(id)arg4;
- (void)_completeNavigationTransitionWithIncomingViews:(id)arg1 outgoingViews:(id)arg2 transitionAssistant:(id)arg3 completion:(id /* block */)arg4;
- (void)_startPopAnimationFromOldBackItem:(id)arg1 oldTopItem:(id)arg2 newBackItem:(id)arg3 newTopItem:(id)arg4 withTransitionAssistant:(id)arg5 completion:(id /* block */)arg6;
- (void)_startPushAnimationFromOldBackItem:(id)arg1 oldTopItem:(id)arg2 newBackItem:(id)arg3 newTopItem:(id)arg4 withTransitionAssistant:(id)arg5 completion:(id /* block */)arg6;
- (void)_completeTransitionFromCanvasView:(id)arg1 toCanvasView:(id)arg2 updateSize:(_Bool)arg3 transitionAssistant:(id)arg4;
- (_Bool)_performCanvasViewTransitionFromItem:(id)arg1 toItem:(id)arg2;
- (_Bool)_prepareTransitionFromItem:(id)arg1 toItem:(id)arg2;
- (_Bool)_supportsCanvasView;
- (struct CGRect)_contentViewFrameInBounds:(struct CGRect)arg1 style:(id)arg2;
- (struct CGRect)_frameForCanvasView:(id)arg1 inBounds:(struct CGRect)arg2;
- (void)_updateBackIndicatorViewTintColor;
- (void)_updateBackIndicatorImage;
- (id)_effectiveBackIndicatorTransitionMaskImage;
- (id)_effectiveBackIndicatorImage;
- (_Bool)_suppressBackIndicator;
- (double)_backIndicatorClippingMargin;
- (double)_effectiveBackIndicatorLeftMargin;
- (void)_wrapView:(id)arg1 inClippingViewWithLeftBoundary:(double)arg2 rightBoundary:(double)arg3 leftMaskImage:(id)arg4 leftMaskIsChevron:(_Bool)arg5 rightMaskImage:(id)arg6;
- (unsigned long long)_subviewIndexAboveBackground;
- (double)_backTitleWidthOverTitleWidthForMatchingBackButtonView:(id)arg1 titleView:(id)arg2 withBackButtonWidth:(double)arg3;
- (void)_getTitleViewFrame:(struct CGRect *)arg1 leftViewFrames:(id)arg2 rightViewFrames:(id)arg3 forPreviousItem:(id)arg4 item:(id)arg5;
- (void)_getTitleViewFrame:(struct CGRect *)arg1 leftViewFrames:(id)arg2 rightViewFrames:(id)arg3 forPreviousItem:(id)arg4 item:(id)arg5 returnedIdealWidthOfTextContent:(double *)arg6 availableLayoutWidthForTextContent:(double *)arg7 idealBackButtonWidth:(double *)arg8;
- (void)_getLeftMargin:(double *)arg1 rightMargin:(double *)arg2 forNavigationItem:(id)arg3 showingBackButton:(_Bool)arg4 visualStyle:(id)arg5;
- (id)_defaultTitleFontForItem:(id)arg1 fittingHeight:(double)arg2 withScaleAdjustment:(double)arg3;
- (id)_backButtonForBackItem:(id)arg1 topItem:(id)arg2;
- (_Bool)_shouldShowBackButtonForNavigationItem:(id)arg1;
- (void)setBackButtonVisible:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setupTopNavigationItem;
- (void)updateTopNavigationItemTitleView;
- (void)updateTopNavigationItemAnimated:(_Bool)arg1;
- (void)popAnimated:(_Bool)arg1 completion:(id /* block */)arg2;
- (void)pushAnimated:(_Bool)arg1 completion:(id /* block */)arg2;
- (void)prepareForPop;
- (void)prepareForPush;
- (void)layoutSubviews;
- (void)_layoutInBounds:(struct CGRect)arg1 withVisualStyle:(id)arg2;
- (void)_layoutSubviewsFromContentView;
- (void)intrinsicContentSizeInvalidatedForChildView:(id)arg1;
- (void)barSizeChanged;
- (_Bool)shouldUseHeightRangeFittingWidth;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)invalidateIntrinsicContentSize;
- (struct CGSize)_preferredContentSizeForItem:(id)arg1;
- (struct CGPoint)frameOriginForStatusBarLocatedAt:(struct CGPoint)arg1;
- (_Bool)shouldGestureHandler:(id)arg1 recognizedPopAtLocation:(struct CGPoint)arg2;
- (void)gestureHandler:(id)arg1 recognizedPopAtLocation:(struct CGPoint)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1 defaultAnswer:(id /* block */)arg2;
- (id)_timingFunctionForAnimationInView:(id)arg1 withKeyPath:(id)arg2;
- (id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2;
- (id)preferredFocusedView;
- (_Bool)canHandleStatusBarTouchAtPoint:(struct CGPoint)arg1;
- (long long)statusBarStyle;
- (void)setSemanticContentAttribute:(long long)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateArchivedSubviews:(id)arg1;
- (void)changeAppearance;
- (void)teardown;
- (void)prepare;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

