//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PassKitUI/PKNavigationController.h>

#import <PassKitUI/CNAvatarViewDelegate-Protocol.h>
#import <PassKitUI/PKDashboardDelegate-Protocol.h>
#import <PassKitUI/PKDashboardPassViewControllerDelegate-Protocol.h>
#import <PassKitUI/PKForegroundActiveArbiterObserver-Protocol.h>
#import <PassKitUI/PKPassDeleteAnimationControllerDelegate-Protocol.h>
#import <PassKitUI/PKPassDeleteHandler-Protocol.h>
#import <PassKitUI/PKPassFooterViewDelegate-Protocol.h>
#import <PassKitUI/PKPassGroupViewDelegate-Protocol.h>
#import <PassKitUI/PKPassGroupViewReceiver-Protocol.h>
#import <PassKitUI/PKSecureElementObserver-Protocol.h>
#import <PassKitUI/PKSpendingSummaryViewControllerDelegate-Protocol.h>
#import <PassKitUI/UIGestureRecognizerDelegate-Protocol.h>
#import <PassKitUI/UIViewControllerTransitioningDelegate-Protocol.h>

@class NSString, PKAnimatedNavigationBarTitleView, PKDashboardPassFlowLayout, PKDashboardPassGroupItemPresenter, PKDashboardPassViewController, PKDashboardPaymentTransactionItemPresenter, PKGroup, PKNavigationDashboardAnimatedTransitioningHandler, PKPGSVTransitionInterstitialView, PKPass, PKPassDeleteAnimationController, PKPassFooterView, PKPassGroupView, PKPassPresentationContext, PKPassthroughView, PKSecureElement, UIPanGestureRecognizer, UIView, _UIDynamicValueAnimation;
@protocol PKDashboardPassDataSource, PKDashboardPassViewControllerDelegate, PKPassGroupViewDelegate, PKPassGroupViewReceiver;

@interface PKNavigationDashboardPassViewController : PKNavigationController <PKPassGroupViewDelegate, PKPassFooterViewDelegate, PKSecureElementObserver, UIViewControllerTransitioningDelegate, PKPassDeleteHandler, PKPassDeleteAnimationControllerDelegate, UIGestureRecognizerDelegate, CNAvatarViewDelegate, PKSpendingSummaryViewControllerDelegate, PKDashboardPassViewControllerDelegate, PKDashboardDelegate, PKForegroundActiveArbiterObserver, PKPassGroupViewReceiver>
{
    PKNavigationDashboardAnimatedTransitioningHandler *_transitioningHandler;
    PKGroup *_group;
    PKSecureElement *_secureElement;
    id <PKPassGroupViewDelegate> _formerGroupViewDelegate;
    UIView *_snapshotView;
    PKAnimatedNavigationBarTitleView *_titleView;
    PKPGSVTransitionInterstitialView *_leadingInterstitialItemView;
    PKPGSVTransitionInterstitialView *_trailingInterstitialItemView;
    PKPassDeleteAnimationController *_deleteAnimationController;
    PKPass *_passBeingDeleted;
    _Bool _passDeletionInitiated;
    PKDashboardPaymentTransactionItemPresenter *_transactionItemPresenter;
    double _presentationDuration;
    _Bool _isPresentedWithAnimationTransitioner;
    _Bool _isDismissedWithAnimationTransitioner;
    double _offsetBeforeDrag;
    struct CGPoint _positionBeforeDrag;
    UIPanGestureRecognizer *_panGestureRecognizer;
    double _dismissVelocity;
    _Bool _dismissedByDragging;
    struct CGPoint _lastPreferredOffset;
    _Bool _groupViewNeedsToBeMovedWithContentOffset;
    _UIDynamicValueAnimation *_offsetAnimation;
    PKPassthroughView *_passthroughView;
    PKPassthroughView *_portalledPassthroughView;
    PKPassFooterView *_passFooterView;
    PKDashboardPassGroupItemPresenter *_passGroupPresenter;
    _Bool _passGroupViewAcquired;
    _Bool _showingFooter;
    _Bool _shouldPauseDynamicCard;
    _Bool _dashboardIsVisible;
    _Bool _shouldUpdateSnapshotView;
    _Bool _snapshotViewIsHidden;
    unsigned char _visibilityState;
    CDStruct_973bafd3 _activeState;
    PKPassPresentationContext *_context;
    _Bool _footerSuppressed;
    _Bool _passGroupViewIsInCollectionView;
    _Bool _invalidated;
    id <PKPassGroupViewReceiver> _receiver;
    id <PKDashboardPassViewControllerDelegate> _passDashboardDelegate;
    PKDashboardPassViewController *_dashboardVC;
    PKDashboardPassFlowLayout *_layout;
    id <PKDashboardPassDataSource> _dataSource;
    UIView *_leadingItemView;
    UIView *_trailingItemView;
    PKPassGroupView *_passGroupView;
    double _topMargin;
}

@property(nonatomic) double topMargin; // @synthesize topMargin=_topMargin;
@property(nonatomic, getter=isInvalidated) _Bool invalidated; // @synthesize invalidated=_invalidated;
@property(readonly, nonatomic) _UIDynamicValueAnimation *offsetAnimation; // @synthesize offsetAnimation=_offsetAnimation;
@property(nonatomic) _Bool passGroupViewIsInCollectionView; // @synthesize passGroupViewIsInCollectionView=_passGroupViewIsInCollectionView;
@property(readonly, nonatomic) PKPassGroupView *passGroupView; // @synthesize passGroupView=_passGroupView;
@property(readonly, nonatomic) UIView *trailingItemView; // @synthesize trailingItemView=_trailingItemView;
@property(readonly, nonatomic) UIView *leadingItemView; // @synthesize leadingItemView=_leadingItemView;
@property(retain, nonatomic) id <PKDashboardPassDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) PKDashboardPassFlowLayout *layout; // @synthesize layout=_layout;
@property(retain, nonatomic) PKDashboardPassViewController *dashboardVC; // @synthesize dashboardVC=_dashboardVC;
@property(nonatomic) __weak id <PKDashboardPassViewControllerDelegate> passDashboardDelegate; // @synthesize passDashboardDelegate=_passDashboardDelegate;
@property(nonatomic) __weak id <PKPassGroupViewReceiver> receiver; // @synthesize receiver=_receiver;
@property(nonatomic) _Bool footerSuppressed; // @synthesize footerSuppressed=_footerSuppressed;
- (void)_reportEventForPassIfNecessary:(id)arg1;
- (void)_endReportingSessionForPassIfNecessary;
- (void)_startReportingSessionForPassIfNecessary;
- (void)foregroundActiveArbiter:(id)arg1 didUpdateForegroundActiveState:(CDStruct_973bafd3)arg2;
- (void)deleteAnimationController:(id)arg1 didComplete:(_Bool)arg2;
- (void)deleteAnimationControllerWillBeginDeleteAnimation:(id)arg1;
- (_Bool)handleDeletePassRequestWithPass:(id)arg1 forViewController:(id)arg2;
- (void)groupView:(id)arg1 deleteButtonPressedForPass:(id)arg2;
- (id)presentingViewControllerForAvatarView:(id)arg1;
- (void)presentInstallmentPlan:(id)arg1;
- (void)presentTransaction:(id)arg1 forPaymentPass:(id)arg2;
- (id)_barcodePassDetailsViewControllerForBarcodePass:(id)arg1;
- (id)_paymentPassDetailsViewControllerForPaymentPass:(id)arg1;
- (void)presentDailyCashForComponents:(id)arg1 completion:(id /* block */)arg2;
- (void)_canPresentCreditDetailsViewControllerWithCompletion:(id /* block */)arg1;
- (void)showStatement:(id)arg1 completion:(id /* block */)arg2;
- (void)presentBalanceDetailsWithCompletion:(id /* block */)arg1;
- (void)summaryTypeDidChange;
- (void)presentSpendingSummaryWithType:(unsigned long long)arg1 unit:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)presentPassDetailsAnimated:(_Bool)arg1 action:(unsigned long long)arg2;
- (void)infoTapped:(id)arg1;
- (void)doneTapped:(id)arg1;
- (id)transactionItemPresenter;
- (id)presentersForDataSource:(id)arg1;
- (id)dataSourceForGroupView:(id)arg1;
- (void)setTransitionDuration:(double)arg1;
- (void)groupViewIsAvailable:(id)arg1;
- (void)trailingHeaderViewInterstitialIsAvailable:(id)arg1;
- (void)leadingHeaderViewInterstitialIsAvailable:(id)arg1;
- (double)_alphaForPassthroughView;
- (id)_dynamicAnimationForUpperBoundaryWithStart:(double)arg1 upperBoundary:(double)arg2 lowerBoundary:(double)arg3 initialVelocity:(double)arg4;
- (void)_handleScrollViewPanGroupGesture:(id)arg1;
- (void)_handlePanGroupGesture:(id)arg1;
- (void)secureElementDidLeaveRestrictedMode:(id)arg1;
- (void)secureElementDidEnterRestrictedMode:(id)arg1;
- (unsigned long long)suppressedContentForPassFooter:(id)arg1;
- (_Bool)isPassFooterViewInGroup:(id)arg1;
- (void)passFooterViewDidChangeCoachingState:(id)arg1;
- (void)passFooterViewDidChangeUserIntentRequirement:(id)arg1;
- (void)dashboardPassViewController:(id)arg1 didRequestPaymentForPass:(id)arg2;
- (void)contentDidScroll;
- (struct CGPoint)preferredContentOffset;
- (_Bool)shouldOverrideContentOffset;
- (void)noteTransitionCompleted;
- (void)insertGroupView;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)interactionControllerForPresentation:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;
- (long long)modalPresentationStyle;
- (void)_showPassFooterView:(_Bool)arg1 forPassView:(id)arg2 animated:(_Bool)arg3 completion:(id /* block */)arg4;
- (void)_updatePassFooterViewAnimated:(_Bool)arg1;
- (void)_updatePassFooterViewIfNecessaryAnimated:(_Bool)arg1;
- (long long)_footerStateForPassView:(id)arg1;
- (_Bool)_canShowPassFooterWithFooterState:(long long)arg1;
- (void)groupView:(id)arg1 faceViewFrameDidChangeForFrontmostPassView:(id)arg2;
- (void)groupView:(id)arg1 frontmostPassViewDidChange:(id)arg2 withContext:(id)arg3;
- (void)groupView:(id)arg1 didUpdatePassView:(id)arg2;
- (unsigned long long)groupViewPassesSuppressedContent:(id)arg1;
- (long long)groupViewContentModeForFrontmostPassWhenPiled:(id)arg1 withDefaultContentMode:(long long)arg2;
- (long long)groupViewContentModeForFrontmostPassWhenStacked:(id)arg1;
- (_Bool)groupViewShouldAllowPanning:(id)arg1;
- (void)groupViewTapped:(id)arg1;
@property(readonly, nonatomic, getter=isFrontmostPassAuthorized) _Bool frontmostPassAuthorized;
- (void)invalidate;
- (void)_dismissIfPossible;
- (id)_cardIndexPath;
- (void)hideTitleView;
- (void)_ensureCardPresence;
- (void)relinquishGroupView;
- (void)acquireGroupView:(id)arg1;
- (void)_updateNavigationBarWithPassAppeared:(_Bool)arg1;
- (void)_updateSnapshotView;
- (void)_updatePausedState;
- (void)_updateTopViewController:(id)arg1;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(_Bool)arg3;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(_Bool)arg3;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (void)dealloc;
- (id)initWithPassGroupView:(id)arg1 groupViewReceiver:(id)arg2 context:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

