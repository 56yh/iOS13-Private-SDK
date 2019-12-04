//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WorkflowUI/WFBaseLibraryWorkflowCell.h>

@class UIBezierPath, UIButton, UILabel, WFLibraryLayoutMetrics, WFLibraryWorkflowCellSelectionView;
@protocol WFLibraryWorkflowCellDelegate;

@interface WFLibraryWorkflowCell : WFBaseLibraryWorkflowCell
{
    _Bool _jittering;
    _Bool _hideEditButton;
    UIButton *_editButton;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    WFLibraryWorkflowCellSelectionView *_selectionView;
    long long _dragState;
}

+ (id)jitterRotationAnimation;
+ (id)jitterYTranslationAnimation;
+ (id)jitterXTranslationAnimation;
@property(nonatomic) long long dragState; // @synthesize dragState=_dragState;
@property(readonly, nonatomic) __weak WFLibraryWorkflowCellSelectionView *selectionView; // @synthesize selectionView=_selectionView;
@property(readonly, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) _Bool hideEditButton; // @synthesize hideEditButton=_hideEditButton;
@property(nonatomic, getter=isJittering) _Bool jittering; // @synthesize jittering=_jittering;
@property(readonly, nonatomic) UIButton *editButton; // @synthesize editButton=_editButton;
- (void)prepareForReuse;
- (id)accessibilityPath;
- (_Bool)accessibilityEditWorkflow;
- (_Bool)accessibilityDeleteWorkflow;
- (_Bool)accessibilityDuplicateWorkflow;
- (_Bool)accessibilityRenameWorkflow;
- (_Bool)accessibilityPerformMagicTap;
- (id)accessibilityCustomActions;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityHint;
- (id)accessibilityLabel;
- (_Bool)isAccessibilityElement;
- (void)dragStateDidChange:(long long)arg1;
- (void)setSelected:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)updateEditButtonVisibility;
- (void)updateSelectionState;
@property(copy, nonatomic) WFLibraryLayoutMetrics *layoutMetrics; // @dynamic layoutMetrics;
- (void)setWorkflowDescription:(id)arg1;
- (void)setWorkflowName:(id)arg1;
- (void)cancelButtonPressed:(id)arg1;
- (void)editButtonPressed:(id)arg1;
@property(readonly, nonatomic) UIBezierPath *visiblePathForDragging;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (long long)lineCountForLabel:(id)arg1 labelType:(unsigned long long)arg2;
- (id)textAttributesForLabelType:(unsigned long long)arg1 shouldTruncate:(_Bool)arg2;
- (double)subtitleLineHeightMultiple;
- (double)titleLineHeightMultiple;
- (id)subtitleFont;
- (id)titleFont;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(nonatomic) __weak id <WFLibraryWorkflowCellDelegate> delegate; // @dynamic delegate;

@end

