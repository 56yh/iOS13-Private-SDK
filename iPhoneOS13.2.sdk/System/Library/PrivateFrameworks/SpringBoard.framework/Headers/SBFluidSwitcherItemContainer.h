//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpringBoardFoundation/SBFTouchPassThroughView.h>

#import <SpringBoard/SBAppPlatterDragSourceViewProviding-Protocol.h>
#import <SpringBoard/SBFailureNotifyingTapGestureRecognizerDelegate-Protocol.h>
#import <SpringBoard/UIGestureRecognizerDelegate-Protocol.h>
#import <SpringBoard/UIScrollViewDelegate-Protocol.h>

@class NSArray, NSString, SBAppSwitcherPageView, SBAppSwitcherSettings, SBFFluidBehaviorSettings, SBFailureNotifyingTapGestureRecognizer, SBFluidSwitcherIconOverlayView, SBFluidSwitcherItemContainerHeaderView, SBFluidSwitcherTouchPassThroughScrollView, UILongPressGestureRecognizer, UITapGestureRecognizer, UIView;
@protocol SBAppSwitcherPageContentView, SBFluidSwitcherItemContainerDelegate;

@interface SBFluidSwitcherItemContainer : SBFTouchPassThroughView <UIScrollViewDelegate, UIGestureRecognizerDelegate, SBFailureNotifyingTapGestureRecognizerDelegate, SBAppPlatterDragSourceViewProviding>
{
    SBAppSwitcherPageView *_pageView;
    id <SBFluidSwitcherItemContainerDelegate> _delegate;
    SBFluidSwitcherTouchPassThroughScrollView *_killScrollView;
    SBFluidSwitcherItemContainerHeaderView *_iconAndLabelHeader;
    SBFluidSwitcherIconOverlayView *_iconOverlayView;
    struct UIRectCornerRadii _contentCornerRadii;
    double _contentPageViewScale;
    double _titleOpacity;
    double _titleAndIconOpacity;
    UILongPressGestureRecognizer *_pressDownGestureRecognizer;
    UILongPressGestureRecognizer *_selectionHighlightGestureRecognizer;
    SBFailureNotifyingTapGestureRecognizer *_tapGestureRecognizer;
    UITapGestureRecognizer *_doubleTapGestureRecognizer;
    SBFFluidBehaviorSettings *_squishSettings;
    SBAppSwitcherSettings *_settings;
    _Bool _sentKillRequest;
    struct CGPoint _highlightTapDownLocation;
    _Bool _highlighted;
    _Bool _animatingPageViewScale;
    double _killProgressForCurrentDecelerationTarget;
    _Bool _dragging;
    _Bool _clipsToUnobscuredMargin;
    _Bool _killable;
    _Bool _shouldScaleOverlayToFillBounds;
    _Bool _active;
    _Bool _visible;
    double _unobscuredMargin;
    unsigned long long _killAxis;
    double _minimumTranslationForKillingContainer;
    double _contentAlpha;
    NSString *_additionalDescriptionDebugText;
    NSArray *_headerItems;
}

+ (double)preferredRestingVisibleMarginForBounds:(struct CGRect)arg1;
@property(copy, nonatomic) NSArray *headerItems; // @synthesize headerItems=_headerItems;
@property(copy, nonatomic) NSString *additionalDescriptionDebugText; // @synthesize additionalDescriptionDebugText=_additionalDescriptionDebugText;
@property(nonatomic, getter=isVisible) _Bool visible; // @synthesize visible=_visible;
@property(nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
@property(nonatomic) double contentAlpha; // @synthesize contentAlpha=_contentAlpha;
@property(nonatomic) _Bool shouldScaleOverlayToFillBounds; // @synthesize shouldScaleOverlayToFillBounds=_shouldScaleOverlayToFillBounds;
@property(nonatomic) double minimumTranslationForKillingContainer; // @synthesize minimumTranslationForKillingContainer=_minimumTranslationForKillingContainer;
@property(nonatomic, getter=isKillable) _Bool killable; // @synthesize killable=_killable;
@property(nonatomic) unsigned long long killAxis; // @synthesize killAxis=_killAxis;
@property(nonatomic) _Bool clipsToUnobscuredMargin; // @synthesize clipsToUnobscuredMargin=_clipsToUnobscuredMargin;
@property(nonatomic, getter=isDragging) _Bool dragging; // @synthesize dragging=_dragging;
@property(nonatomic) double unobscuredMargin; // @synthesize unobscuredMargin=_unobscuredMargin;
@property(nonatomic) double contentPageViewScale; // @synthesize contentPageViewScale=_contentPageViewScale;
@property(nonatomic) double titleAndIconOpacity; // @synthesize titleAndIconOpacity=_titleAndIconOpacity;
@property(nonatomic) double titleOpacity; // @synthesize titleOpacity=_titleOpacity;
@property(nonatomic) struct UIRectCornerRadii contentCornerRadii; // @synthesize contentCornerRadii=_contentCornerRadii;
@property(nonatomic) __weak id <SBFluidSwitcherItemContainerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)containerViewForBlurContentView;
- (id)initialRimShadowFilters;
- (id)initialDiffuseShadowFilters;
- (struct SBDragPreviewShadowParameters)initialRimShadowParameters;
- (struct SBDragPreviewShadowParameters)initialDiffuseShadowParameters;
- (id)initialCornerRadiusConfiguration;
- (id)sourceView;
- (_Bool)_scrollViewShouldPanGestureTryToBegin:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)gestureRecognizerTransitionedToFailed:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (struct CGAffineTransform)_squishedPageViewScaleTransform;
@property(nonatomic, getter=isHighlighted) _Bool highlighted;
- (void)_handleSelectionHighlightGesture:(id)arg1;
- (void)_handlePageViewPressDown:(id)arg1;
- (void)_handlePageViewTap:(id)arg1;
- (void)_updateShadowVisibility;
- (id)_springLoadingEffectTargetView;
- (void)_updateHeaderAnimated:(_Bool)arg1;
- (double)_scaleTransformFactor;
- (double)_inverseScaleTransformFactor;
- (void)_setKillingDarkeningAlpha:(double)arg1;
- (double)_killingDarkeningAlpha;
- (_Bool)_isTitleIconVisible;
- (struct CGPoint)_CGPointFromScalarBasedOnKillAxis:(double)arg1;
- (struct CGSize)_CGSizeFromLengthBasedOnKillAxis:(double)arg1;
- (double)_CGPointXOrYBasedOnKillAxis:(struct CGPoint)arg1;
- (double)_CGSizeWidthOrHeightBasedOnKillAxis:(struct CGSize)arg1;
- (struct CGPoint)_contentOffsetAtRest;
- (void)_resetKillProgressScrollState;
- (struct CGSize)_overlayViewSize;
- (struct CGSize)_contentSizeForScrollView;
- (struct CGRect)_frameForPageView;
- (struct CGRect)_frameForScrollView;
- (void)_ensureSubviewOrder;
- (void)layoutSubviews;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
@property(readonly, nonatomic) _Bool isDeceleratingTowardsKillZone;
- (void)removeIconOverlay;
- (void)configureOverlayForIconZoomWithView:(id)arg1;
@property(retain, nonatomic) UIView<SBAppSwitcherPageContentView> *contentView;
@property(nonatomic) long long shadowStyle;
@property(nonatomic) double shadowOffset;
@property(nonatomic) double shadowAlpha;
- (struct CGPoint)_contentOffsetForKillingProgress:(double)arg1;
- (double)_killingProgressForContentOffset:(struct CGPoint)arg1;
@property(readonly, nonatomic) double killingProgress;
@property(nonatomic) double lighteningAlpha;
@property(nonatomic) double wallpaperOverlayAlpha;
@property(nonatomic) double darkeningAlpha;
- (void)_updatePageViewContentClippingFrame;
- (void)_updatePageViewContentViewClipping;
- (void)setContentOverlay:(id)arg1 animated:(_Bool)arg2;
@property(retain, nonatomic) UIView *contentOverlay;
@property(nonatomic) _Bool blocksContentViewTouches;
- (void)setHeaderItems:(id)arg1 animated:(_Bool)arg2;
@property(readonly, copy) NSString *description;
- (_Bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (void)prepareForReuse;
- (void)_addPageView;
- (id)_createScrollView;
- (id)initWithFrame:(struct CGRect)arg1 delegate:(id)arg2 active:(_Bool)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

