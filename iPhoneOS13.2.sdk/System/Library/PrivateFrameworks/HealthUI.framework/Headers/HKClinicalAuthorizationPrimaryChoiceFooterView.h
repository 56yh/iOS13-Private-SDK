//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton;

@interface HKClinicalAuthorizationPrimaryChoiceFooterView : UIView
{
    UIButton *_primaryButton;
}

@property(readonly, nonatomic) UIButton *primaryButton; // @synthesize primaryButton=_primaryButton;
- (void)traitCollectionDidChange:(id)arg1;
- (void)_updateMetricsWithTraitCollection:(id)arg1;
- (double)_bottomMarginForTraitCollection:(id)arg1;
- (void)_setUpConstraints;
- (void)_setUpSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

