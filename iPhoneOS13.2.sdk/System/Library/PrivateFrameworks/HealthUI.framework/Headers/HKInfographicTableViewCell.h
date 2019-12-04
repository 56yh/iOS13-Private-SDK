//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSLayoutConstraint, UILabel, UIView;

@interface HKInfographicTableViewCell : UITableViewCell
{
    _Bool hideSeparator;
    UILabel *_titleLabel;
    UILabel *_valueLabel;
    UIView *_separator;
    NSLayoutConstraint *_heightConstraint;
}

@property(retain, nonatomic) NSLayoutConstraint *heightConstraint; // @synthesize heightConstraint=_heightConstraint;
@property(retain, nonatomic) UIView *separator; // @synthesize separator=_separator;
@property(retain, nonatomic) UILabel *valueLabel; // @synthesize valueLabel=_valueLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (id)_valueFont;
- (id)_titleFont;
- (id)_labelWithFont:(id)arg1;
- (void)setSeparatorHidden:(_Bool)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

