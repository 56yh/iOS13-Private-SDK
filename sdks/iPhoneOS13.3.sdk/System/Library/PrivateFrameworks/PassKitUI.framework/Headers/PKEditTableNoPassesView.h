//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UILabel;
@protocol PKEditTableNoPassesViewDelegate;

@interface PKEditTableNoPassesView : UIView
{
    UILabel *_titleLabel;
    UILabel *_descriptionLabel;
    UIButton *_buttonScanCode;
    UIButton *_buttonFindApps;
    id <PKEditTableNoPassesViewDelegate> _delegate;
}

@property(nonatomic) __weak id <PKEditTableNoPassesViewDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)findAppsForWalletTapped;
- (void)scanCodeButtonTapped;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(CGRect)arg1;

@end

