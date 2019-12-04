//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSAttributedString, NSString, UIColor, UIFont, UILabel, UILayoutGuide, _UILegibilitySettings, _UILegibilityView;

@interface HULegibilityLabel : UIView
{
    UILabel *_lookasideLabel;
    _UILegibilityView *_legibilityView;
    _Bool _isDirty;
    double _strength;
    long long _options;
    NSArray *_legibilityConstraints;
    UILayoutGuide *_firstBaselineLayoutGuide;
    UILayoutGuide *_lastBaselineLayoutGuide;
    NSString *_text;
    UIFont *_font;
    NSAttributedString *_attributedText;
    UIColor *_textColorOverride;
    _UILegibilitySettings *_legibilitySettings;
}

@property(retain, nonatomic) _UILegibilitySettings *legibilitySettings; // @synthesize legibilitySettings=_legibilitySettings;
@property(nonatomic) double strength; // @synthesize strength=_strength;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(copy, nonatomic) NSAttributedString *attributedText; // @synthesize attributedText=_attributedText;
- (void)_updateLegibilityView;
- (void)_updateLabelForLegibilitySettings;
- (double)_layoutGuideOffsetFromBottom:(id)arg1;
- (void)_markOurselfDirty;
- (void)updateForChangedSettings:(id)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (id)viewForLastBaselineLayout;
- (id)viewForFirstBaselineLayout;
@property(readonly, nonatomic) double lastBaselineOffsetFromBottom;
@property(readonly, nonatomic) double firstBaselineOffsetFromBottom;
- (void)setOptions:(long long)arg1;
@property(readonly, nonatomic) double baselineOffset;
@property(nonatomic) double minimumScaleFactor; // @dynamic minimumScaleFactor;
@property(nonatomic) _Bool adjustsFontSizeToFitWidth; // @dynamic adjustsFontSizeToFitWidth;
@property(nonatomic) long long numberOfLines; // @dynamic numberOfLines;
@property(copy, nonatomic) UIColor *textColor;
- (id)initWithSettings:(id)arg1 strength:(double)arg2 text:(id)arg3 font:(id)arg4 options:(long long)arg5;
- (id)initWithSettings:(id)arg1 strength:(double)arg2 text:(id)arg3 font:(id)arg4;
- (id)initWithSettings:(id)arg1 strength:(double)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

