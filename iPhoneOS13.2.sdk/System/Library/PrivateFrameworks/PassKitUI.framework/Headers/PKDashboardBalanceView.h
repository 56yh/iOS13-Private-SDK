//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PassKitUI/PKDashboardCollectionViewCell.h>

@class NSString, PKContinuousButton, UILabel;

@interface PKDashboardBalanceView : PKDashboardCollectionViewCell
{
    _Bool _isTemplateLayout;
    UILabel *_titleLabel;
    UILabel *_detailLabel;
    UILabel *_availableCreditLabel;
    NSString *_title;
    PKContinuousButton *_actionButton;
    _Bool _topUpEnabled;
    NSString *_balance;
    NSString *_availableCredit;
    NSString *_topUpTitle;
    id /* block */ _topUpAction;
}

@property(nonatomic) _Bool topUpEnabled; // @synthesize topUpEnabled=_topUpEnabled;
@property(copy, nonatomic) id /* block */ topUpAction; // @synthesize topUpAction=_topUpAction;
@property(copy, nonatomic) NSString *topUpTitle; // @synthesize topUpTitle=_topUpTitle;
@property(copy, nonatomic) NSString *availableCredit; // @synthesize availableCredit=_availableCredit;
@property(copy, nonatomic) NSString *balance; // @synthesize balance=_balance;
- (void)traitCollectionDidChange:(id)arg1;
- (void)_buttonPressed:(id)arg1;
- (struct CGSize)_layoutWithBounds:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
@property(copy, nonatomic) NSString *title;
- (void)resetFonts;
- (void)createSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

