//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UILabel;

@interface PKPaymentPassDetailActivationFooterView : UIView
{
    UILabel *_footerTextLabel;
    UIButton *_activationButton;
}

// - (void).cxx_destruct;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)layoutSubviews;
- (void)setActivationButtonTarget:(id)arg1 action:(SEL)arg2;
- (void)setActivationButtonText:(id)arg1;
- (void)setFooterText:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;

@end

