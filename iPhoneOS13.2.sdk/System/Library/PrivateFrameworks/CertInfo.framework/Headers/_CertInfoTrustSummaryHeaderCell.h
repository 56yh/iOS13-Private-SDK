//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSString, UIImage, UILabel, _CertInfoActionButton, _CertInfoGradientLabel;

@interface _CertInfoTrustSummaryHeaderCell : UITableViewCell
{
    UIImage *_certificateImage;
    UIImage *_notTrustedGradient;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    _CertInfoActionButton *_actionButton;
    _CertInfoGradientLabel *_trustedLabel;
    _Bool _trusted;
}

@property(nonatomic, getter=isTrusted) _Bool trusted; // @synthesize trusted=_trusted;
- (id)_trustedLabel;
- (id)_subtitleLabel;
- (id)_titleLabel;
- (void)_layoutSubviewsWithActionButtonSize:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)setActionButtonTitle:(id)arg1 destructive:(_Bool)arg2 animated:(_Bool)arg3;
@property(readonly, nonatomic) double rowHeight;
- (void)setExpired:(_Bool)arg1;
@property(copy, nonatomic) NSString *trustSubtitle;
@property(copy, nonatomic) NSString *trustTitle;
@property(readonly, nonatomic) __weak _CertInfoActionButton *actionButton;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

