//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/UITableConstants-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface UITableConstants_TV : NSObject <UITableConstants>
{
}

+ (id)sharedConstants;
- (id)defaultImageSymbolConfigurationForTraitCollection:(id)arg1;
- (double)defaultMaskGradientHeightForTableView:(id)arg1;
- (double)defaultFocusedShadowRadiusForTableView:(id)arg1;
- (double)defaultFocusedHorizontalOutsetForTableView:(id)arg1;
- (double)defaultAlphaForDraggingCell:(id)arg1 inTableView:(id)arg2;
- (_Bool)reorderingCellWantsShadows:(id)arg1 inTableView:(id)arg2;
- (double)defaultAlphaForReorderingCell:(id)arg1 inTableView:(id)arg2;
- (id)defaultFocusedReorderControlImageForCell:(id)arg1 inTableView:(id)arg2;
- (id)defaultReorderControlImageForCell:(id)arg1 inTableView:(id)arg2;
- (id)defaultReorderControlImageForCell:(id)arg1 forUserInterfaceStyle:(long long)arg2;
- (struct CGSize)defaultReorderControlSizeForCell:(id)arg1 inTableView:(id)arg2;
- (id)defaultFocusedMultiSelectSelectedImageForCell:(id)arg1 inTableView:(id)arg2;
- (id)defaultMultiSelectSelectedImageForCell:(id)arg1 inTableView:(id)arg2;
- (id)defaultMultiSelectSelectedImageForCell:(id)arg1 forUserInterfaceStyle:(long long)arg2;
- (id)defaultFocusedMultiSelectNotSelectedImageForCell:(id)arg1 inTableView:(id)arg2;
- (id)defaultMultiSelectNotSelectedImageForCell:(id)arg1 inTableView:(id)arg2;
- (id)defaultMultiSelectNotSelectedImageForCell:(id)arg1 forUserInterfaceStyle:(long long)arg2;
- (id)defaultFocusedInsertImageForCell:(id)arg1 inTableView:(id)arg2;
- (id)defaultInsertImageForCell:(id)arg1 inTableView:(id)arg2;
- (id)defaultInsertImageForCell:(id)arg1 forUserInterfaceStyle:(long long)arg2;
- (id)defaultFocusedDeleteImageForCell:(id)arg1 inTableView:(id)arg2;
- (id)defaultDeleteImageForCell:(id)arg1 inTableView:(id)arg2;
- (id)defaultDeleteImageForCell:(id)arg1 forUserInterfaceStyle:(long long)arg2;
- (struct CGRect)defaultDeleteMinusRectForCell:(id)arg1 inTableView:(id)arg2;
- (double)defaultSpaceBetweenEditAndReorderControlsForCell:(id)arg1 inTableView:(id)arg2;
- (double)defaultEditControlPaddingForCell:(id)arg1 inTableView:(id)arg2;
- (struct CGSize)defaultEditControlSizeForCell:(id)arg1 inTableView:(id)arg2;
- (id)defaultFocusedCheckmarkImageForCell:(id)arg1 inTableView:(id)arg2;
- (id)defaultCheckmarkImageForCell:(id)arg1 inTableView:(id)arg2;
- (id)_defaultCheckmarkImageForCell:(id)arg1 tableView:(id)arg2 forUserInterfaceStyle:(long long)arg3;
- (id)defaultFocusedDisclosureImageForCell:(id)arg1 inTableView:(id)arg2;
- (id)defaultDisclosureImageForCell:(id)arg1 inTableView:(id)arg2;
- (id)_defaultDisclosureImageForCell:(id)arg1 tableView:(id)arg2 forUserInterfaceStyle:(long long)arg3;
- (id)_symbolImageNamed:(id)arg1 font:(id)arg2 cell:(id)arg3 tableView:(id)arg4;
- (id)_kitImageNamed:(id)arg1 withTint:(id)arg2 flippedForRightToLeftLayoutDirection:(_Bool)arg3;
- (id)defaultHeaderFooterBackgroundColorForView:(id)arg1 inTableView:(id)arg2;
- (id)defaultFooterTextColorForView:(id)arg1 inTableView:(id)arg2;
- (id)defaultFooterTextColorForTableViewStyle:(long long)arg1;
- (id)defaultHeaderTextColorForView:(id)arg1 inTableView:(id)arg2;
- (id)defaultHeaderTextColorForTableViewStyle:(long long)arg1;
- (id)defaultHeaderTextColorForTableViewStyle:(long long)arg1 userInterfaceStyle:(long long)arg2;
- (id)defaultFooterFontForView:(id)arg1 inTableView:(id)arg2;
- (id)defaultFooterFontForTableViewStyle:(long long)arg1;
- (id)defaultHeaderFontForView:(id)arg1 inTableView:(id)arg2;
- (id)defaultHeaderFontForTableViewStyle:(long long)arg1;
- (double)defaultDetailTextLabelFontSizeForCell:(id)arg1 inTableView:(id)arg2;
- (id)defaultDetailTextFontForCell:(id)arg1 inTableView:(id)arg2;
- (id)defaultFocusedDetailTextColorForCell:(id)arg1 inTableView:(id)arg2;
- (id)defaultDetailTextColorForCell:(id)arg1 inTableView:(id)arg2;
- (id)defaultDetailTextColorForCell:(id)arg1 inTableView:(id)arg2 forUserInterfaceStyle:(long long)arg3;
- (double)defaultTextLabelFontSizeForCell:(id)arg1 inTableView:(id)arg2;
- (id)defaultTextLabelFontForCell:(id)arg1 inTableView:(id)arg2;
- (id)defaultFocusedTextColorForCell:(id)arg1 inTableView:(id)arg2;
- (id)defaultTextColorForCell:(id)arg1 inTableView:(id)arg2;
- (id)defaultTextColorForCell:(id)arg1 inTableView:(id)arg2 forUserInterfaceStyle:(long long)arg3;
- (double)defaultPlainHeaderLabelYPositionForTableView:(id)arg1 headerBounds:(struct CGRect)arg2 textRect:(struct CGRect)arg3 isHeader:(_Bool)arg4;
- (double)defaultPlainFirstSectionHeaderHeightForTableView:(id)arg1;
- (double)defaultTrailingCellMarginWidthForTableView:(id)arg1;
- (double)defaultLeadingCellMarginWidthForTableView:(id)arg1;
- (double)defaultMarginWidthForTableView:(id)arg1;
- (struct UIEdgeInsets)_defaultLayoutMargins;
- (struct UIEdgeInsets)defaultLayoutMarginsForScreen:(id)arg1 size:(struct CGSize)arg2;
- (struct UIEdgeInsets)defaultLayoutMarginsForTableView:(id)arg1;
- (double)defaultPaddingBetweenHeaderAndRowsForTableView:(id)arg1;
- (double)defaultPaddingBetweenRowsForTableView:(id)arg1;
- (double)interspaceBetweenInnerAccessoryIdentifier:(id)arg1 outerAccessoryIdentifier:(id)arg2 forCell:(id)arg3 inTableView:(id)arg4 trailingAccessoryGroup:(_Bool)arg5;
- (double)minimumImageViewAndAccessoryLayoutWidthForTraitCollection:(id)arg1;
- (double)defaultTrailingContentAccessoryPaddingForCell:(id)arg1 inTableView:(id)arg2;
- (double)defaultLeadingContentAccessoryPaddingForCell:(id)arg1 inTableView:(id)arg2;
- (double)defaultContentAccessoryPaddingForCell:(id)arg1 inTableView:(id)arg2;
- (double)defaultContentReorderPaddingForCell:(id)arg1 inTableView:(id)arg2;
- (double)defaultContentEditPaddingForCell:(id)arg1 inTableView:(id)arg2;
- (_Bool)imageViewOffsetByLayoutMarginsForCell:(id)arg1 inTableView:(id)arg2;
- (struct UIEdgeInsets)defaultLayoutMarginsForCell:(id)arg1 inTableView:(id)arg2;
- (double)defaultSectionFooterHeightForTableView:(id)arg1;
- (double)defaultSectionHeaderHeightForTableView:(id)arg1;
- (double)defaultSectionFooterHeightForTableViewStyle:(long long)arg1 screen:(id)arg2;
- (double)defaultSectionHeaderHeightForTableViewStyle:(long long)arg1 screen:(id)arg2;
- (_Bool)defaultRowHeightDependsOnCellStyle;
- (double)defaultRowHeightForTableView:(id)arg1;
- (double)defaultRowHeightForTableView:(id)arg1 cellStyle:(long long)arg2;
- (long long)defaultSeparatorStyleForTableViewStyle:(long long)arg1;
- (id)defaultSelectionEffectsForCell:(id)arg1 inTableView:(id)arg2;
- (id)defaultMultiSelectBackgroundColorForCell:(id)arg1 inTableView:(id)arg2;
- (id)defaultSelectionTintColorForCell:(id)arg1 inTableView:(id)arg2;
- (id)defaultBackgroundColorForCell:(id)arg1 inTableView:(id)arg2;
- (id)defaultSeparatorColorForTableViewStyle:(long long)arg1;
- (id)defaultBackgroundEffectsForTableViewStyle:(long long)arg1;
- (id)defaultBackgroundColorForTableViewStyle:(long long)arg1;
- (_Bool)supportsUserInterfaceStyles;
- (id)variantForActive:(_Bool)arg1 dark:(_Bool)arg2 focused:(_Bool)arg3;
- (id)sidebarVariant;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

