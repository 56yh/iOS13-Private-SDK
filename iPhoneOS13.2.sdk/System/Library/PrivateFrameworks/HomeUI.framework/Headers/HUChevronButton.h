//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class UIImageView, UILabel, UIStackView;

@interface HUChevronButton : UIControl
{
    UILabel *_titleLabel;
    UIStackView *_containerView;
    UIImageView *_chevronImageView;
}

@property(retain, nonatomic) UIImageView *chevronImageView; // @synthesize chevronImageView=_chevronImageView;
@property(retain, nonatomic) UIStackView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)setHighlighted:(_Bool)arg1;
- (id)viewForLastBaselineLayout;
- (id)viewForFirstBaselineLayout;
- (id)initWithFrame:(struct CGRect)arg1;

@end

