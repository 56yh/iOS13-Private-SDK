//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSLayoutConstraint, UIBarButtonItemGroup, UILabel, UILayoutGuide, UIView, _UIBarButtonItemData, _UIButtonBar, _UIButtonBarButton, _UINavigationBarContentView, _UITAMICAdaptorView;
@protocol _UINavigationBarAugmentedTitleView;

__attribute__((visibility("hidden")))
@interface _UINavigationBarContentViewLayout : NSObject
{
    NSLayoutConstraint *_leadingMarginConstraint;
    NSLayoutConstraint *_trailingMarginConstraint;
    NSLayoutConstraint *_backButtonToLeadingBarSpacer;
    NSLayoutConstraint *_leadingBarToTitleSpacer;
    NSLayoutConstraint *_titleToTrailingBarSpacer;
    NSArray *_layoutGuideConstraints;
    NSArray *_alignmentConstraints;
    NSArray *_heightConstraints;
    NSArray *_backButtonConstraints;
    NSLayoutConstraint *_backButtonMinimumWidthConstraint;
    NSLayoutConstraint *_backButtonMaximumWidthConstraint;
    NSArray *_leadingBarConstraints;
    NSArray *_titleViewConstraints;
    NSArray *_augmentedTitleViewContraints;
    NSArray *_trailingBarConstraints;
    UIBarButtonItemGroup *_leadingBarGroup;
    UIBarButtonItemGroup *_trailingBarGroup;
    UIView *_leadingBarSnapshot;
    UIView *_trailingBarSnapshot;
    UIView *_titleViewSnapshot;
    UIView *_backButtonSnapshot;
    _Bool _hasFakedBackButton;
    _Bool _active;
    _Bool _keepsSnapshotsInHierarchy;
    _UINavigationBarContentView *_contentView;
    UILayoutGuide *_backButtonGuide;
    UILayoutGuide *_leadingBarGuide;
    UILayoutGuide *_titleViewGuide;
    UILayoutGuide *_trailingBarGuide;
    long long _alignment;
    long long _currentContentSize;
    double _overrideSize;
    double _resolvedSize;
    long long _resolvedAlignment;
    _UIButtonBarButton *_backButton;
    double _minimumBackButtonWidth;
    double _maximumBackButtonWidth;
    UILabel *_inlineTitleView;
    double _inlineTitleViewAlpha;
    UIView *_titleView;
    _UITAMICAdaptorView *_titleViewWrapperView;
    UIView<_UINavigationBarAugmentedTitleView> *_augmentedTitleView;
    double _largeTitleHeight;
    _UIButtonBar *_leadingBar;
    _UIButtonBar *_trailingBar;
    _UIBarButtonItemData *_plainItemAppearance;
    _UIBarButtonItemData *_doneItemAppearance;
    _UIBarButtonItemData *_backButtonAppearance;
    struct UIOffset _titlePositionAdjustment;
    CDStruct_ef18196a _largeTitleHeightRange;
    struct NSDirectionalEdgeInsets _layoutMargins;
}

@property(nonatomic) _Bool keepsSnapshotsInHierarchy; // @synthesize keepsSnapshotsInHierarchy=_keepsSnapshotsInHierarchy;
@property(readonly, nonatomic) UIView *backButtonSnapshot; // @synthesize backButtonSnapshot=_backButtonSnapshot;
@property(readonly, nonatomic) UIView *titleViewSnapshot; // @synthesize titleViewSnapshot=_titleViewSnapshot;
@property(readonly, nonatomic) UIView *trailingBarSnapshot; // @synthesize trailingBarSnapshot=_trailingBarSnapshot;
@property(readonly, nonatomic) UIView *leadingBarSnapshot; // @synthesize leadingBarSnapshot=_leadingBarSnapshot;
@property(nonatomic) _Bool active; // @synthesize active=_active;
@property(copy, nonatomic) _UIBarButtonItemData *backButtonAppearance; // @synthesize backButtonAppearance=_backButtonAppearance;
@property(copy, nonatomic) _UIBarButtonItemData *doneItemAppearance; // @synthesize doneItemAppearance=_doneItemAppearance;
@property(copy, nonatomic) _UIBarButtonItemData *plainItemAppearance; // @synthesize plainItemAppearance=_plainItemAppearance;
@property(retain, nonatomic) _UIButtonBar *trailingBar; // @synthesize trailingBar=_trailingBar;
@property(retain, nonatomic) _UIButtonBar *leadingBar; // @synthesize leadingBar=_leadingBar;
@property(nonatomic) CDStruct_c3b9c2ee largeTitleHeightRange; // @synthesize largeTitleHeightRange=_largeTitleHeightRange;
@property(nonatomic) double largeTitleHeight; // @synthesize largeTitleHeight=_largeTitleHeight;
@property(retain, nonatomic) UIView<_UINavigationBarAugmentedTitleView> *augmentedTitleView; // @synthesize augmentedTitleView=_augmentedTitleView;
@property(nonatomic) struct UIOffset titlePositionAdjustment; // @synthesize titlePositionAdjustment=_titlePositionAdjustment;
@property(readonly, nonatomic) _UITAMICAdaptorView *titleViewWrapperView; // @synthesize titleViewWrapperView=_titleViewWrapperView;
@property(retain, nonatomic) UIView *titleView; // @synthesize titleView=_titleView;
@property(nonatomic) double inlineTitleViewAlpha; // @synthesize inlineTitleViewAlpha=_inlineTitleViewAlpha;
@property(retain, nonatomic) UILabel *inlineTitleView; // @synthesize inlineTitleView=_inlineTitleView;
@property(nonatomic) _Bool hasFakedBackButton; // @synthesize hasFakedBackButton=_hasFakedBackButton;
@property(nonatomic) double maximumBackButtonWidth; // @synthesize maximumBackButtonWidth=_maximumBackButtonWidth;
@property(nonatomic) double minimumBackButtonWidth; // @synthesize minimumBackButtonWidth=_minimumBackButtonWidth;
@property(retain, nonatomic) _UIButtonBarButton *backButton; // @synthesize backButton=_backButton;
@property(readonly, nonatomic) long long resolvedAlignment; // @synthesize resolvedAlignment=_resolvedAlignment;
@property(readonly, nonatomic) double resolvedSize; // @synthesize resolvedSize=_resolvedSize;
@property(nonatomic) double overrideSize; // @synthesize overrideSize=_overrideSize;
@property(nonatomic) struct NSDirectionalEdgeInsets layoutMargins; // @synthesize layoutMargins=_layoutMargins;
@property(nonatomic) long long currentContentSize; // @synthesize currentContentSize=_currentContentSize;
@property(nonatomic) long long alignment; // @synthesize alignment=_alignment;
@property(readonly, nonatomic) UILayoutGuide *trailingBarGuide; // @synthesize trailingBarGuide=_trailingBarGuide;
@property(readonly, nonatomic) UILayoutGuide *titleViewGuide; // @synthesize titleViewGuide=_titleViewGuide;
@property(readonly, nonatomic) UILayoutGuide *leadingBarGuide; // @synthesize leadingBarGuide=_leadingBarGuide;
@property(readonly, nonatomic) UILayoutGuide *backButtonGuide; // @synthesize backButtonGuide=_backButtonGuide;
@property(readonly, nonatomic) _UINavigationBarContentView *contentView; // @synthesize contentView=_contentView;
- (void)removeContent;
- (void)replaceBackButtonWithSnapshot;
- (void)replaceTitleViewWithSnapshot;
- (void)replaceTrailingBarWithSnapshot;
- (void)replaceLeadingBarWithSnapshot;
- (void)updateSpacingConstraints;
@property(retain, nonatomic) NSArray *trailingBarItems;
@property(retain, nonatomic) NSArray *leadingBarItems;
- (void)updateAlphas;
- (void)updateTitleHeight;
- (void)updateAugmentedTitleViewBackButtonConstraints;
- (void)updateAugmentedTitleViewLayout;
- (void)_updateAugmentedTitleViewLayout;
- (void)updateAugmentedTitleViewHeight;
@property(readonly, nonatomic) double baselineOffsetFromTop;
@property(readonly, nonatomic) UIView *effectiveTitleView;
- (void)_activateConstraintsAndUpdateViewOrderIfNecessary:(id)arg1;
- (void)_deactivateConstraintsIfNecessary:(id)arg1;
- (void)_updateSubviewOrder;
- (void)setBackButtonHidden:(_Bool)arg1 titleLabelHidden:(_Bool)arg2 titleViewHidden:(_Bool)arg3 barsHidden:(_Bool)arg4;
- (void)setContentHidden:(_Bool)arg1;
- (void)cleanupAfterLayoutTransitionCompleted;
- (void)removeAllSnapshots;
- (void)_deactivateAllConstraints;
- (void)_activateAllConstraints;
- (void)_updateTrailingBarConstraints;
- (void)_updateLeadingBarConstraints;
- (void)_updateAugmentedTitleViewConstraints;
- (void)unfreeze;
- (void)freeze;
- (void)_disableLayoutFlushing:(_Bool)arg1;
- (void)_updateTitleViewConstraints;
- (double)_inlineTitleBaselineOffset;
- (void)_prepareTitleViewAndWrapIfNecessary;
- (void)_updateBackButtonWidthConstraintsAndActivateIfNecessary;
- (void)_updateBackButtonConstraints;
- (void)_updateMarginConstraints;
- (void)_updateHeightConstraints;
@property(readonly, nonatomic) double baseHeight;
- (double)_contentHeight;
@property(readonly, nonatomic) double currentHeight;
- (void)_updateAlignmentConstraints;
- (id)initWithContentView:(id)arg1;
- (id)description;

@end

