//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <RelevanceEngineUI/REUpNextBaseCell.h>

@class NSArray, REUpNextAccessoryView, REUpNextImageView, UIFont, UILabel, UILayoutGuide, UIVisualEffectView;

@interface REUpNextMultilineCell : REUpNextBaseCell
{
    UILayoutGuide *_contentLayoutGuide;
    UILayoutGuide *_descriptionTextLayoutGuide;
    UILayoutGuide *_bodyImageSizingLayoutGuide;
    _Bool _showingHeader;
    _Bool _showingHeaderImage;
    _Bool _showingThreeLineLayout;
    _Bool _showingAccessory;
    _Bool _showingDescriptionImage;
    _Bool _usingStretchableImage;
    unsigned int _headerImageEdge;
    UILabel *_headerLabel;
    UILabel *_descriptionLine1Label;
    UILabel *_descriptionLine2Label;
    UIVisualEffectView *_headerImageEffectView;
    UIVisualEffectView *_headerVisualEffectView;
    UIVisualEffectView *_descriptionLine1EffectView;
    UIVisualEffectView *_descriptionLine2EffectView;
    REUpNextImageView *_headerImage;
    REUpNextAccessoryView *_accessoryView;
    REUpNextImageView *_descriptionImageView;
    UIFont *_standardFont;
    UIFont *_italicFont;
    UIFont *_boldFont;
    NSArray *_withHeaderConstraints;
    NSArray *_withoutHeaderConstraints;
    NSArray *_headerWithLeftImageConstraints;
    NSArray *_headerWithRightImageConstraints;
    NSArray *_headerWithNoImageConstraints;
    NSArray *_withDescription2Constraints;
    NSArray *_withoutDescription2Constraints;
    NSArray *_withDescriptionAccessoryConstraints;
    NSArray *_withoutDescriptionAccessoryConstraints;
    NSArray *_withDescriptionImageViewConstraints;
    NSArray *_withStretchableDescriptionImageViewConstraints;
    NSArray *_withoutDescriptionImageViewConstraints;
}

+ (void)initialize;
- (void)configureWithContent:(id)arg1;
- (void)updateConstraints;
- (void)defaultTextColorDidChange;
- (void)_updateHeaderColor;
- (id)secondaryEffectViews;
- (id)primaryEffectViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

