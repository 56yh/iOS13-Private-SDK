//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UILabel;

@interface PKApplyOfferCreditCardView : UIView
{
    UIView *_dividerLeft;
    UIView *_dividerRight;
    UILabel *_creditLimitTitleLabel;
    UILabel *_aprForPurchaseTitleLabel;
    UILabel *_feeTitleLabel;
    UILabel *_creditLimitLabel;
    UILabel *_aprForPurchaseLabel;
    UILabel *_feeLabel;
    UILabel *_bodyLabel;
    UIButton *_termsLinkButton;
}

@property(retain, nonatomic) UIButton *termsLinkButton; // @synthesize termsLinkButton=_termsLinkButton;
@property(retain, nonatomic) UILabel *bodyLabel; // @synthesize bodyLabel=_bodyLabel;
@property(retain, nonatomic) UILabel *feeLabel; // @synthesize feeLabel=_feeLabel;
@property(retain, nonatomic) UILabel *aprForPurchaseLabel; // @synthesize aprForPurchaseLabel=_aprForPurchaseLabel;
@property(retain, nonatomic) UILabel *creditLimitLabel; // @synthesize creditLimitLabel=_creditLimitLabel;
@property(retain, nonatomic) UILabel *feeTitleLabel; // @synthesize feeTitleLabel=_feeTitleLabel;
@property(retain, nonatomic) UILabel *aprForPurchaseTitleLabel; // @synthesize aprForPurchaseTitleLabel=_aprForPurchaseTitleLabel;
@property(retain, nonatomic) UILabel *creditLimitTitleLabel; // @synthesize creditLimitTitleLabel=_creditLimitTitleLabel;
- (_Bool)showSchumerBox;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)init;

@end

