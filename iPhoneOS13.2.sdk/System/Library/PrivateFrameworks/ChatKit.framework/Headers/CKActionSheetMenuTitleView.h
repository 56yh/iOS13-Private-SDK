//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UILabel, UIScrollView;

@interface CKActionSheetMenuTitleView : UIView
{
    UIScrollView *_scrollView;
    UILabel *_titleLabel;
}

- (id)_textColor;
- (double)_desiredHeightForLabel:(id)arg1 parentBoundingRect:(struct CGRect)arg2;
- (void)updateTitleConstraintsForBoundingRect:(struct CGRect)arg1;
- (id)initWithTitle:(id)arg1;

@end

