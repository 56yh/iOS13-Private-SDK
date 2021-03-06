//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UITextView;
@protocol RTTUIServiceCellDelegate;

@interface RTTUIServiceUpdateCell : UITableViewCell
{
    UITextView *_titleView;
    UITextView *_subtitleView;
    id <RTTUIServiceCellDelegate> _delegate;
}

+ (double)heightForWidth:(double)arg1 withDelegate:(id)arg2;
@property(nonatomic) __weak id <RTTUIServiceCellDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (void)layoutSubviews;
- (void)updateLayout;
- (void)adjustTextViewSize;
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (double)preferredHeightForWidth:(double)arg1;
- (id)serviceMessage;

@end

