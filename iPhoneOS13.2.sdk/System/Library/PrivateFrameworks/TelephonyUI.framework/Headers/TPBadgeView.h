//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TelephonyUI/TPView.h>

@class NSLayoutConstraint, NSString, UILabel;

@interface TPBadgeView : TPView
{
    unsigned long long _sizeCategory;
    unsigned long long _theme;
    NSString *_title;
    UILabel *_titleLabel;
    double _titleLabelFontSize;
    double _layerCornerRadius;
    NSLayoutConstraint *_heightAnchorLayoutConstraint;
    NSLayoutConstraint *_widthAnchorLayoutConstraint;
    NSLayoutConstraint *_titleLabelLeadingAnchorLayoutConstraint;
    NSLayoutConstraint *_titleLabelTrailingAnchorLayoutConstraint;
    double _heightAnchorLayoutConstraintConstantFontMultiplier;
    double _titleLabelLeadingAnchorLayoutConstraintConstant;
    double _titleLabelTrailingAnchorLayoutConstraintConstant;
}

@property(nonatomic) double titleLabelTrailingAnchorLayoutConstraintConstant; // @synthesize titleLabelTrailingAnchorLayoutConstraintConstant=_titleLabelTrailingAnchorLayoutConstraintConstant;
@property(nonatomic) double titleLabelLeadingAnchorLayoutConstraintConstant; // @synthesize titleLabelLeadingAnchorLayoutConstraintConstant=_titleLabelLeadingAnchorLayoutConstraintConstant;
@property(nonatomic) double heightAnchorLayoutConstraintConstantFontMultiplier; // @synthesize heightAnchorLayoutConstraintConstantFontMultiplier=_heightAnchorLayoutConstraintConstantFontMultiplier;
@property(retain, nonatomic) NSLayoutConstraint *titleLabelTrailingAnchorLayoutConstraint; // @synthesize titleLabelTrailingAnchorLayoutConstraint=_titleLabelTrailingAnchorLayoutConstraint;
@property(retain, nonatomic) NSLayoutConstraint *titleLabelLeadingAnchorLayoutConstraint; // @synthesize titleLabelLeadingAnchorLayoutConstraint=_titleLabelLeadingAnchorLayoutConstraint;
@property(retain, nonatomic) NSLayoutConstraint *widthAnchorLayoutConstraint; // @synthesize widthAnchorLayoutConstraint=_widthAnchorLayoutConstraint;
@property(retain, nonatomic) NSLayoutConstraint *heightAnchorLayoutConstraint; // @synthesize heightAnchorLayoutConstraint=_heightAnchorLayoutConstraint;
@property(nonatomic) double layerCornerRadius; // @synthesize layerCornerRadius=_layerCornerRadius;
@property(nonatomic) double titleLabelFontSize; // @synthesize titleLabelFontSize=_titleLabelFontSize;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) unsigned long long theme; // @synthesize theme=_theme;
@property(nonatomic) unsigned long long sizeCategory; // @synthesize sizeCategory=_sizeCategory;
- (double)scaledLayoutValueForBaseValue:(double)arg1 shouldLowerBound:(_Bool)arg2;
- (double)scaledLayoutValueForBaseValue:(double)arg1;
- (void)updateActiveHorizontalConstraints;
- (void)updateTheme;
- (void)updateSizeCategory;
- (void)updateFonts;
- (void)unloadConstraints;
- (void)updateConstraintsConstants;
- (void)loadConstraints;
- (void)commonInit;
- (id)initWithTitle:(id)arg1 theme:(unsigned long long)arg2;
- (id)initWithTitle:(id)arg1;

@end
