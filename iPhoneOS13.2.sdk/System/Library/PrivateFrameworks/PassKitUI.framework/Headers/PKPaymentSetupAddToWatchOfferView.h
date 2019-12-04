//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class PKContinuousButton, PKPaymentPass, PKWatchHeroImageView, UIImageView, UILabel;

@interface PKPaymentSetupAddToWatchOfferView : UIView
{
    PKWatchHeroImageView *_heroImageView;
    UIView *_backgroundView;
    struct CGSize _aspectSize;
    unsigned long long _screenType;
    _Bool _isCompactWatch;
    PKPaymentPass *_pass;
    long long _context;
    UIImageView *_passImageView;
    UILabel *_instructionLabel;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    PKContinuousButton *_openAppButton;
}

@property(readonly, retain, nonatomic) PKContinuousButton *openAppButton; // @synthesize openAppButton=_openAppButton;
@property(readonly, retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(readonly, retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(readonly, retain, nonatomic) UILabel *instructionLabel; // @synthesize instructionLabel=_instructionLabel;
@property(readonly, retain, nonatomic) UIImageView *passImageView; // @synthesize passImageView=_passImageView;
@property(readonly, nonatomic) long long context; // @synthesize context=_context;
@property(readonly, retain, nonatomic) PKPaymentPass *pass; // @synthesize pass=_pass;
- (_Bool)_isSmallPhone;
- (double)_instructionYCoordinate;
- (double)_passImageYCoordinate;
- (double)_sideMargin;
- (struct CGSize)_passImageSize;
- (double)_instructionFontSize;
- (void)showSpinner:(_Bool)arg1;
- (void)layoutSubviews;
- (id)initWithPaymentPass:(id)arg1 context:(long long)arg2;

@end

