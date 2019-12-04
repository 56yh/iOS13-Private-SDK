//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UIView.h>

#import <UIKitCore/UIAlertActionViewRepresentation_Internal-Protocol.h>
#import <UIKitCore/UIGestureRecognizerDelegate-Protocol.h>

@class NSArray, NSLayoutConstraint, NSString, UIAlertAction, UIAlertController, UIAlertControllerVisualStyle, UIImageView, UILabel, _UIAlertControllerActionViewMetrics;

__attribute__((visibility("hidden")))
@interface _UIAlertControllerActionView : UIView <UIGestureRecognizerDelegate, UIAlertActionViewRepresentation_Internal>
{
    _Bool _highlighted;
    UIView *_labelContainerView;
    UILabel *_label;
    NSLayoutConstraint *_axLabelContainerWidthConstraint;
    NSLayoutConstraint *_labelContainerLeadingConstraint;
    NSLayoutConstraint *_labelContainerTrailingConstraint;
    NSLayoutConstraint *_labelContainerCenterXConstraint;
    NSLayoutConstraint *_labelContainerLeadingPinConstraint;
    NSLayoutConstraint *_labelContainerTrailingPinConstraint;
    NSLayoutConstraint *_labelWidthConstraint;
    NSLayoutConstraint *_labelCenterLeadingConstraint;
    UIView *_contentViewControllerContainerView;
    NSArray *_contentViewControllerConstraints;
    UILabel *_descriptiveLabel;
    NSArray *_havingDescriptiveLabelConstraints;
    NSArray *_notHavingDescriptiveLabelConstraints;
    NSLayoutConstraint *_descriptiveLabelWidthConstraint;
    NSLayoutConstraint *_descriptiveLabelTrailingToLabelLeadingLabelConstraint;
    NSLayoutConstraint *_descriptiveLabelTrailingToContainerCenterConstraint;
    UIImageView *_checkView;
    NSLayoutConstraint *_checkToMarginConstraint;
    UIImageView *_imageView;
    NSLayoutConstraint *_marginToImageConstraint;
    NSLayoutConstraint *_imageViewBaselineOrCenterYConstraint;
    NSLayoutConstraint *_imageViewTopConstraint;
    NSLayoutConstraint *_imageViewBottomConstraint;
    NSLayoutConstraint *_minimumHeightConstraint;
    UIAlertAction *_action;
    UIAlertControllerVisualStyle *_visualStyle;
    _UIAlertControllerActionViewMetrics *_metrics;
    _Bool _hasDescriptiveText;
    double _axEnforcedWidth;
    UIAlertController *_alertController;
}

@property(nonatomic) __weak UIAlertControllerVisualStyle *visualStyle; // @synthesize visualStyle=_visualStyle;
@property(nonatomic) __weak UIAlertController *alertController; // @synthesize alertController=_alertController;
@property(retain) NSLayoutConstraint *labelContainerTrailingPinConstraint; // @synthesize labelContainerTrailingPinConstraint=_labelContainerTrailingPinConstraint;
@property(retain) NSLayoutConstraint *labelContainerLeadingPinConstraint; // @synthesize labelContainerLeadingPinConstraint=_labelContainerLeadingPinConstraint;
@property(retain) NSLayoutConstraint *labelContainerCenterXConstraint; // @synthesize labelContainerCenterXConstraint=_labelContainerCenterXConstraint;
- (void)_action:(id)arg1 updatedTitleTextColor:(id)arg2;
- (void)_action:(id)arg1 updatedImageTintColor:(id)arg2;
- (void)_action:(id)arg1 changedToBePreferred:(_Bool)arg2;
- (void)_action:(id)arg1 changedToChecked:(_Bool)arg2;
- (void)_action:(id)arg1 changedToEnabled:(_Bool)arg2;
- (void)_action:(id)arg1 changedToTitleTextAlignment:(long long)arg2;
- (void)_action:(id)arg1 changedToTitle:(id)arg2;
- (_Bool)hasActiveMinimumSizeConstraintsWithSize:(struct CGSize)arg1;
- (_Bool)hasLayoutHeightConstraintsIdenticalToInterfaceActionCustomView:(id)arg1;
- (id)_interfaceActionViewState;
- (void)_contentSizeChanged;
- (void)tintColorDidChange;
@property(copy, nonatomic) UIAlertAction *action;
- (void)_updateStyle;
- (void)underlyingInterfaceActionRepresentationDidChange;
- (void)_updateContentViewControllerContainerViewConstraints;
- (void)_updateHavingDescriptiveLabelConstraints;
- (long long)_effectiveTitleTextAlignment;
- (void)_updateLabelContainerConstraints;
- (void)_updateTextAlignmentForHavingDescriptiveText:(_Bool)arg1 titleTextAlignment:(long long)arg2;
- (void)_updateImageMargins;
- (void)_updateMinimumHeight;
- (void)updateHeightUsingAXEnforcedWidth:(double)arg1;
- (void)_removeContentViewControllerContainerViewSubviews;
- (void)_loadContentViewControllerContainerViewIfNecessary;
- (void)_loadContentViewControllerView;
- (void)_buildContentViewControllerContainerConstraints;
- (void)_updateCheckImageView;
- (void)_loadCheckView;
- (void)_buildCheckViewConstraints;
- (void)_updateImageView;
- (void)_loadImageView;
- (void)_prepareConstraintsForImage:(id)arg1;
- (void)_buildImageViewConstraints;
- (void)_updateDescriptiveText;
- (void)_loadDescriptiveLabel;
- (void)_updateLabelAttributes;
- (void)_updateImageViewAttributes;
- (void)_recomputeColors;
@property(readonly) double currentLabelTextWidth;
@property(readonly) double currentDescriptiveLabelTextWidth;
- (void)applyMetrics:(id)arg1;
- (void)setHighlighted:(_Bool)arg1;
@property(readonly, nonatomic, getter=isHighlighted) _Bool highlighted;
- (void)_prepareConstraintsForHavingDescriptiveText:(_Bool)arg1;
- (void)_buildHavingDescriptiveLabelConstraints;
- (void)_buildNotHavingDescriptiveLabelConstraints;
- (void)_buildConstraints;
- (void)dealloc;
@property(readonly, copy) NSString *description;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

