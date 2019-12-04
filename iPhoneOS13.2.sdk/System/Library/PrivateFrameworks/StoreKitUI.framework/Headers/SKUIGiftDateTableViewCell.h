//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSString, UIImageView, UILabel, UIView;

__attribute__((visibility("hidden")))
@interface SKUIGiftDateTableViewCell : UITableViewCell
{
    UIView *_bottomBorderView;
    _Bool _checked;
    UIImageView *_checkmarkView;
    UILabel *_dateLabel;
    UILabel *_labelLabel;
    UILabel *_placeholderLabel;
    UIView *_topBorderView;
    _Bool _leftToRight;
}

@property(nonatomic) _Bool leftToRight; // @synthesize leftToRight=_leftToRight;
@property(nonatomic, getter=isChecked) _Bool checked; // @synthesize checked=_checked;
- (id)_newLabel;
- (id)_labelColor;
- (void)layoutSubviews;
@property(copy, nonatomic) NSString *placeholder;
@property(copy, nonatomic) NSString *label;
@property(copy, nonatomic) NSString *dateString;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

