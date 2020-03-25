//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIControl.h>

@class UIColor, UIImageView, UILabel, UIView;

@interface CKCanvasBackButtonView : UIControl
{
    BOOL _shouldShowTitlePaddingView;
    UIImageView *_backButtonView;
    UILabel *_titleLabel;
    UIView *_titlePaddingView;
    UIColor *_titleLabelColor;
}

@property(retain, nonatomic) UIColor *titleLabelColor; // @synthesize titleLabelColor=_titleLabelColor;
@property(nonatomic) BOOL shouldShowTitlePaddingView; // @synthesize shouldShowTitlePaddingView=_shouldShowTitlePaddingView;
@property(retain, nonatomic) UIView *titlePaddingView; // @synthesize titlePaddingView=_titlePaddingView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *backButtonView; // @synthesize backButtonView=_backButtonView;
// - (void).cxx_destruct;
- (CGSize)_titlePaddingViewSizeForTitle;
- (void)_setVisuallyHighlighted:(BOOL)arg1;
- (void)layoutSubviews;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)sizeToFit;
- (void)tintColorDidChange;
- (void)setBackButtonTitle:(id)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (id)initWithFrame:(CGRect)arg1 showPaddingTitleView:(BOOL)arg2;

@end
