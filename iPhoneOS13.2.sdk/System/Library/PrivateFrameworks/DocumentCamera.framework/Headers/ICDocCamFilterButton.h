//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class NSLayoutConstraint, UIColor, UIImageView, UILabel, UIView;

__attribute__((visibility("hidden")))
@interface ICDocCamFilterButton : UIButton
{
    short _filterType;
    NSLayoutConstraint *_labelVerticalSpacingConstraint;
    UILabel *_filterNameLabel;
    UIImageView *_filterIconView;
    UIView *_backgroundView;
    NSLayoutConstraint *_iconSizeConstraint;
}

+ (id)filterButtonWithType:(short)arg1;
@property(nonatomic) __weak NSLayoutConstraint *iconSizeConstraint; // @synthesize iconSizeConstraint=_iconSizeConstraint;
@property(nonatomic) __weak UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) __weak UIImageView *filterIconView; // @synthesize filterIconView=_filterIconView;
@property(nonatomic) __weak UILabel *filterNameLabel; // @synthesize filterNameLabel=_filterNameLabel;
@property(nonatomic) __weak NSLayoutConstraint *labelVerticalSpacingConstraint; // @synthesize labelVerticalSpacingConstraint=_labelVerticalSpacingConstraint;
@property(nonatomic) short filterType; // @synthesize filterType=_filterType;
- (void)updateForAccessibilityDarkerSystemColors:(id)arg1;
- (unsigned long long)accessibilityTraits;
- (struct CGRect)accessibilityFrame;
- (id)accessibilityLabel;
- (_Bool)isAccessibilityElement;
- (id)imageForFilterType:(short)arg1;
@property(readonly, nonatomic) UIColor *activeBackgroundViewColor;
@property(readonly, nonatomic) UIColor *inactiveTextColor;
@property(readonly, nonatomic) UIColor *inactiveBackgroundViewColor;
- (void)setHighlighted:(_Bool)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)setSelected:(_Bool)arg1;
@property(nonatomic) double iconSize; // @dynamic iconSize;
- (void)awakeFromNib;
- (void)dealloc;

@end

