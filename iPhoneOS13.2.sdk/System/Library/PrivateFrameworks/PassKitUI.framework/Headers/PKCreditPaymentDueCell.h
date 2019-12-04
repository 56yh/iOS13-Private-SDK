//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PassKitUI/PKDashboardCollectionViewCell.h>

@class NSString, PKContinuousButton, PKDashboardCreditAccountItem, UIColor, UIFont, UIImage, UILabel;
@protocol PKCreditPaymentDueCellDelegate;

@interface PKCreditPaymentDueCell : PKDashboardCollectionViewCell
{
    _Bool _usingCircleButton;
    _Bool _isCompactUI;
    _Bool _isTemplateLayout;
    _Bool _useAccssibilityLayout;
    id <PKCreditPaymentDueCellDelegate> _delegate;
    PKDashboardCreditAccountItem *_item;
    UILabel *_labelPaymentDue;
    UILabel *_labelDate;
    UILabel *_labelDetail;
    PKContinuousButton *_payButton;
    UIColor *_payButtonTintColor;
    UIColor *_payButtonTitleColor;
    UIFont *_payButtonFont;
    UIImage *_payButtonImage;
    NSString *_fallbackButtonTitle;
}

@property(copy, nonatomic) NSString *fallbackButtonTitle; // @synthesize fallbackButtonTitle=_fallbackButtonTitle;
@property(retain, nonatomic) UIImage *payButtonImage; // @synthesize payButtonImage=_payButtonImage;
@property(nonatomic) _Bool useAccssibilityLayout; // @synthesize useAccssibilityLayout=_useAccssibilityLayout;
@property(copy, nonatomic) UIFont *payButtonFont; // @synthesize payButtonFont=_payButtonFont;
@property(copy, nonatomic) UIColor *payButtonTitleColor; // @synthesize payButtonTitleColor=_payButtonTitleColor;
@property(copy, nonatomic) UIColor *payButtonTintColor; // @synthesize payButtonTintColor=_payButtonTintColor;
@property(readonly, nonatomic) PKContinuousButton *payButton; // @synthesize payButton=_payButton;
@property(readonly, nonatomic) UILabel *labelDetail; // @synthesize labelDetail=_labelDetail;
@property(readonly, nonatomic) UILabel *labelDate; // @synthesize labelDate=_labelDate;
@property(readonly, nonatomic) UILabel *labelPaymentDue; // @synthesize labelPaymentDue=_labelPaymentDue;
@property(retain, nonatomic) PKDashboardCreditAccountItem *item; // @synthesize item=_item;
@property(nonatomic) __weak id <PKCreditPaymentDueCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_buttonTapped:(id)arg1;
- (id)_payButtonWithCircleLayout:(_Bool)arg1;
- (void)_updateButtonImage:(id)arg1;
- (void)setButtonTitle:(id)arg1;
- (struct CGSize)_layoutWithBounds:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)createSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

