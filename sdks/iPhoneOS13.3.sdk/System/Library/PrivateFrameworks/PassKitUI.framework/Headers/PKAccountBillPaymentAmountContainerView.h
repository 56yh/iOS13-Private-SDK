//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class PKEnterCurrencyAmountView;

@interface PKAccountBillPaymentAmountContainerView : UIView
{
    NSUInteger _screenType;
    BOOL _showAmount;
    PKEnterCurrencyAmountView *_enterCurrencyAmountView;
}

@property(nonatomic) BOOL showAmount; // @synthesize showAmount=_showAmount;
@property(retain, nonatomic) PKEnterCurrencyAmountView *enterCurrencyAmountView; // @synthesize enterCurrencyAmountView=_enterCurrencyAmountView;
// - (void).cxx_destruct;
- (double)_amountLabelFontSize;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithCurrencyCode:(id)arg1 minimumAmount:(id)arg2;

@end
