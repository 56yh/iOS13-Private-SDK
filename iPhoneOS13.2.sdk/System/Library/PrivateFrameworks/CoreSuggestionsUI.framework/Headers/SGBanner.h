//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

#import <CoreSuggestionsUI/SGTappableTextViewDelegate-Protocol.h>

@class NSArray, NSAttributedString, NSLayoutConstraint, NSLayoutXAxisAnchor, NSString, SGTappableTextView, UIButton, UIImageView, UILabel;

@interface SGBanner : UIControl <SGTappableTextViewDelegate>
{
    SGTappableTextView *_subtitleLabel;
    NSString *_action;
    _Bool _needsSubtitleUpdate;
    NSString *_subtitle;
    NSAttributedString *_attributedSubtitle;
    UILabel *_titleLabel;
    UIButton *_closeButton;
    UIImageView *_secondImageView;
    UIImageView *_firstImageView;
    UIImageView *_disclosureImageView;
    NSLayoutConstraint *_imageCenterYConstraint;
    NSLayoutConstraint *_verticalSpaceBetweenImagesConstraint;
    NSLayoutConstraint *_horisontalSpaceBetweenImagesConstraint;
    NSLayoutConstraint *_titleLeadingConstraint;
    NSLayoutConstraint *_titleBaselineConstraint;
    NSLayoutConstraint *_subtitleBaselineConstraint;
    NSLayoutConstraint *_closeButtonHorizontalPositionConstraint;
    NSLayoutConstraint *_closeButtonWidthConstraint;
    NSLayoutConstraint *_disclosureImageViewHorizontalPositionConstraint;
    long long _currentStyle;
    NSArray *_images;
    long long _accessoryType;
    NSLayoutXAxisAnchor *_closeButtonCenterXAnchor;
}

+ (id)_disclosureChevronImage;
+ (id)_cancelImage;
+ (double)_imageCenterOffsetFromTitleBaselineConstant;
+ (double)_interLabelBaselineDeltaConstant;
+ (double)_topMarginConstant;
+ (id)_subtitleFont;
+ (id)_titleFont;
@property(retain, nonatomic) NSLayoutXAxisAnchor *closeButtonCenterXAnchor; // @synthesize closeButtonCenterXAnchor=_closeButtonCenterXAnchor;
@property(nonatomic) long long accessoryType; // @synthesize accessoryType=_accessoryType;
@property(copy, nonatomic) NSArray *images; // @synthesize images=_images;
- (void)tappableTextView:(id)arg1 didTapRange:(struct _NSRange)arg2;
- (void)_onDismiss:(id)arg1;
- (void)_onAction:(id)arg1;
@property(readonly, nonatomic) struct CGRect popoverSourceRect;
@property(copy, nonatomic) NSString *action;
@property(copy, nonatomic) NSAttributedString *attributedSubtitle;
@property(copy, nonatomic) NSString *subtitle;
@property(copy, nonatomic) NSString *title;
- (void)setHighlighted:(_Bool)arg1;
- (id)_titleColor;
- (id)_subtitleColor;
- (void)_updateBackground;
- (void)_updateFonts;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)_updateCurrentAppearance;
- (void)layoutSubviews;
- (void)updateConstraints;
- (void)_installLayoutConstraints;
- (void)_setupViews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

