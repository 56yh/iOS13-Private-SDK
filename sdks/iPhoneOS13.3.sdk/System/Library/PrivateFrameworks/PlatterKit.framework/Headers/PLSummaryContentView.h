//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <PlatterKit/MTVisualStylingRequiring-Protocol.h>
#import <PlatterKit/PLContentSizeCategoryAdjusting-Protocol.h>

@class BSUIEmojiLabelView, BSUIFontProvider, MTVisualStylingProvider, NSArray, NSMutableDictionary, NSString, NSStringDrawingContext, UIImage, UIImageView, UILabel;

@interface PLSummaryContentView : UIView <MTVisualStylingRequiring, PLContentSizeCategoryAdjusting>
{
    UIEdgeInsets _contentInsets;
    UIView *_contentView;
    UIImageView *_thumbnailImageView;
    NSMutableDictionary *_widthToFontToStringToMeasuredNumLines;
    NSStringDrawingContext *_drawingContext;
    MTVisualStylingProvider *_visualStylingProvider;
    BOOL _adjustsFontForContentSizeCategory;
    UILabel *_secondaryLabel;
    NSString *_preferredContentSizeCategory;
    UIView *_accessoryView;
    BSUIFontProvider *_fontProvider;
    UILabel *_primaryLabel;
    UILabel *_primarySubtitleLabel;
    BSUIEmojiLabelView *_summaryLabel;
}

@property(retain, nonatomic, getter=_summaryLabel, setter=_setSummaryLabel:) BSUIEmojiLabelView *summaryLabel; // @synthesize summaryLabel=_summaryLabel;
@property(retain, nonatomic, getter=_primarySubtitleLabel, setter=_setPrimarySubtitleLabel:) UILabel *primarySubtitleLabel; // @synthesize primarySubtitleLabel=_primarySubtitleLabel;
@property(retain, nonatomic, getter=_primaryLabel, setter=_setPrimaryLabel:) UILabel *primaryLabel; // @synthesize primaryLabel=_primaryLabel;
@property(retain, nonatomic) BSUIFontProvider *fontProvider; // @synthesize fontProvider=_fontProvider;
@property(retain, nonatomic) UIView *accessoryView; // @synthesize accessoryView=_accessoryView;
@property(copy, nonatomic) NSString *preferredContentSizeCategory; // @synthesize preferredContentSizeCategory=_preferredContentSizeCategory;
@property(nonatomic) BOOL adjustsFontForContentSizeCategory; // @synthesize adjustsFontForContentSizeCategory=_adjustsFontForContentSizeCategory;
@property(readonly, nonatomic, getter=_secondaryLabel) UILabel *secondaryLabel; // @synthesize secondaryLabel=_secondaryLabel;
// - (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
@property(readonly, copy) NSString *debugDescription;
- (void)traitCollectionDidChange:(id)arg1;
- (BOOL)adjustForContentSizeCategoryChange;
- (void)setVisualStylingProvider:(id)arg1 forCategory:(long long)arg2;
@property(readonly, copy, nonatomic) NSArray *requiredVisualStyleCategories;
- (id)visualStylingProviderForCategory:(long long)arg1;
- (void)layoutSubviews;
- (CGRect)_frameForThumbnailInRect:(CGRect)arg1;
@property(retain, nonatomic) UIImage *thumbnail;
- (void)_updateTextAttributesForLabel:(id)arg1;
@property(retain, nonatomic) NSString *summaryText;
- (id)_lazySummaryLabel;
- (id)_newSummaryLabel;
- (void)_updateStyleForSummaryLabel:(id)arg1;
- (void)_updateTextAttributesForSummaryLabel:(id)arg1;
@property(retain, nonatomic) NSString *secondaryText;
- (id)_lazySecondaryTextSupportingView;
- (id)_lazySecondaryLabel;
- (id)_secondaryTextSupportingView;
- (id)_newSecondaryLabel;
- (void)_configureTextSupportingView:(id)arg1;
- (void)_updateStyleForSecondaryTextSupportingView:(id)arg1;
@property(nonatomic) NSUInteger messageNumberOfLines;
- (void)_setSecondaryTextNumberOfLines:(NSUInteger)arg1;
- (NSUInteger)_secondaryTextNumberOfLines;
- (void)_updateFontForSecondaryTextSupportingView:(id)arg1;
- (id)_lazyThumbnailImageView;
@property(retain, nonatomic) NSString *primarySubtitleText;
- (id)_lazyPrimarySubtitleLabel;
@property(retain, nonatomic) NSString *primaryText;
- (id)_lazyPrimaryLabel;
- (id)_newPrimaryLabel;
- (void)_updateStyleForPrimaryLabel:(id)arg1;
- (void)_updateTextAttributesForPrimaryLabel:(id)arg1;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (CGSize)_sizeThatFits:(CGSize)arg1 withContentInsets:(UIEdgeInsets)arg2;
- (NSUInteger)_numberOfMeasuredLinesForText:(id)arg1 withFont:(id)arg2 forSize:(CGSize)arg3;
- (NSUInteger)_cachedNumberOfMeasuredLinesForText:(id)arg1 withFont:(id)arg2 forWidth:(double)arg3;
- (void)_clearCacheForFont:(id)arg1;
- (void)_invalidateNumberOfLinesCache;
- (CGRect)_summaryLabelBoundsForSize:(CGSize)arg1 withContentInsets:(UIEdgeInsets)arg2 andNumberOfLines:(NSUInteger)arg3;
- (NSUInteger)_summaryTextNumberOfLinesWithMeasuredNumberOfLines:(NSUInteger)arg1;
- (NSUInteger)_summaryTextMeasuredNumberOfLinesForWidth:(double)arg1;
- (CGRect)_secondaryTextViewBoundsForSize:(CGSize)arg1 withContentInsets:(UIEdgeInsets)arg2 andNumberOfLines:(NSUInteger)arg3;
- (NSUInteger)_secondaryTextNumberOfLinesWithMeasuredNumberOfLines:(NSUInteger)arg1;
- (NSUInteger)_secondaryTextMeasuredNumberOfLinesForWidth:(double)arg1;
- (CGRect)_primarySubtitleLabelBoundsForSize:(CGSize)arg1 withContentInsets:(UIEdgeInsets)arg2 andNumberOfLines:(NSUInteger)arg3;
- (NSUInteger)_primarySubtitleTextNumberOfLinesWithMeasuredNumberOfLines:(NSUInteger)arg1;
- (NSUInteger)_primarySubtitleTextMeasuredNumberOfLinesForWidth:(double)arg1;
- (CGRect)_primaryLabelBoundsForSize:(CGSize)arg1 withContentInsets:(UIEdgeInsets)arg2 andNumberOfLines:(NSUInteger)arg3;
- (NSUInteger)_primaryTextNumberOfLinesWithMeasuredNumberOfLines:(NSUInteger)arg1;
- (NSUInteger)_primaryTextMeasuredNumberOfLinesForWidth:(double)arg1;
- (double)_summaryTextBaselineOffsetForCurrentStyle;
- (double)_secondaryTextBaselineOffsetForCurrentStyle;
- (double)_primarySubtitleTextBaselineOffsetForCurrentStyle;
- (UIEdgeInsets)_contentInsetsForLongLook;
- (UIEdgeInsets)_contentInsetsForShortLook;
- (UIEdgeInsets)_contentInsets;
- (double)_summaryTextBaselineOffsetWithBaseValue:(double)arg1;
- (double)_secondaryTextBaselineOffsetFromBottomWithBaseValue:(double)arg1;
- (double)_secondaryTextBaselineOffsetWithBaseValue:(double)arg1;
- (double)_primaryTextBaselineOffsetWithBaseValue:(double)arg1;
- (id)_fontProvider;
- (id)init;

@end
