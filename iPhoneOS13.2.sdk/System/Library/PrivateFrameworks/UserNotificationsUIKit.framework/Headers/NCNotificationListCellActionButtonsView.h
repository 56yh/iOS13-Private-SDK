//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <UserNotificationsUIKit/MTMaterialGrouping-Protocol.h>
#import <UserNotificationsUIKit/PLContentSizeCategoryAdjusting-Protocol.h>

@class NCNotificationListCellActionButton, NSString, UIStackView, _UIStatesFeedbackGenerator;

@interface NCNotificationListCellActionButtonsView : UIView <PLContentSizeCategoryAdjusting, MTMaterialGrouping>
{
    _Bool _adjustsFontForContentSizeCategory;
    _Bool _highlightDefaultActionButton;
    _Bool _didPlayHaptic;
    NSString *_materialGroupNameBase;
    double _stretchedWidth;
    double _defaultWidth;
    long long _backgroundMaterialRecipe;
    UIView *_clippingView;
    UIStackView *_buttonsStackView;
    NCNotificationListCellActionButton *_defaultActionButton;
    _UIStatesFeedbackGenerator *_defaultActionFeedbackGenerator;
}

+ (id)_openButtonDescriptionForNotificationRequest:(id)arg1 cell:(id)arg2;
+ (id)_actionButtonDescriptionsForNotificationRequest:(id)arg1 sectionSettings:(id)arg2 cell:(id)arg3;
@property(nonatomic) _Bool didPlayHaptic; // @synthesize didPlayHaptic=_didPlayHaptic;
@property(retain, nonatomic) _UIStatesFeedbackGenerator *defaultActionFeedbackGenerator; // @synthesize defaultActionFeedbackGenerator=_defaultActionFeedbackGenerator;
@property(retain, nonatomic) NCNotificationListCellActionButton *defaultActionButton; // @synthesize defaultActionButton=_defaultActionButton;
@property(retain, nonatomic) UIStackView *buttonsStackView; // @synthesize buttonsStackView=_buttonsStackView;
@property(retain, nonatomic) UIView *clippingView; // @synthesize clippingView=_clippingView;
@property(nonatomic) long long backgroundMaterialRecipe; // @synthesize backgroundMaterialRecipe=_backgroundMaterialRecipe;
@property(readonly, nonatomic) double defaultWidth; // @synthesize defaultWidth=_defaultWidth;
@property(nonatomic) double stretchedWidth; // @synthesize stretchedWidth=_stretchedWidth;
@property(nonatomic) _Bool highlightDefaultActionButton; // @synthesize highlightDefaultActionButton=_highlightDefaultActionButton;
@property(copy, nonatomic) NSString *materialGroupNameBase; // @synthesize materialGroupNameBase=_materialGroupNameBase;
@property(nonatomic) _Bool adjustsFontForContentSizeCategory; // @synthesize adjustsFontForContentSizeCategory=_adjustsFontForContentSizeCategory;
- (_Bool)adjustForContentSizeCategoryChange;
- (void)_actuateFeedbackForDefaultActionUnlockedIfNecessary;
- (void)_actuateFeedbackForDefaultActionLockedIfNecessary;
- (void)_configureDefaultActionFeedbackIfNecessary;
- (void)_performNonDefaultActionButtonsHideRevealAnimation:(id /* block */)arg1;
- (void)_revealNonDefaultActionButtons;
- (void)_hideNonDefaultActionButtons;
- (void)_layoutButtonsStackView;
- (void)_layoutClippingView;
- (void)_configureButtonsStackViewIfNecessary;
- (void)_configureClippingViewIfNecessary;
- (unsigned long long)_widthMultipleForVerticallyStackedButtonsWithCount:(unsigned long long)arg1;
- (_Bool)_shouldVerticallyStackButtons;
- (void)_configureDefaultWidth;
- (double)_maxAllowedButtonWidth;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
@property(readonly, nonatomic) _Bool shouldPerformDefaultAction;
- (void)_configureActionButtonsForActionButtonDescriptions:(id)arg1 cell:(id)arg2;
- (void)configureOpenActionButtonForNotificationRequest:(id)arg1 cell:(id)arg2;
- (void)configureCellActionButtonsForNotificationRequest:(id)arg1 sectionSettings:(id)arg2 cell:(id)arg3;
- (void)layoutSubviews;
- (void)willMoveToSuperview:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(copy, nonatomic) NSString *preferredContentSizeCategory;
@property(readonly) Class superclass;

@end

