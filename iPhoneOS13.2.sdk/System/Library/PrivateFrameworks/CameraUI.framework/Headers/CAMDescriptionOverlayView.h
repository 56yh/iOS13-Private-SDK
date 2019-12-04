//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAMPortraitModeDescriptionOverlayPrimaryVibrancyEffectView, CAShapeLayer, UIButton, UILabel, UIVisualEffectView;
@protocol CAMDescriptionOverlayViewDelegate;

@interface CAMDescriptionOverlayView : UIView
{
    _Bool _blackoutFrameVisible;
    id <CAMDescriptionOverlayViewDelegate> _delegate;
    long long _orientation;
    UIVisualEffectView *__blurEffectView;
    UIView *__blackoutView;
    CAShapeLayer *__blackoutMask;
    CAMPortraitModeDescriptionOverlayPrimaryVibrancyEffectView *__primaryVibrancyEffectView;
    UILabel *__titleLabel;
    UILabel *__descriptionTitleLabel;
    UILabel *__descriptionLabel;
    UILabel *__infoTitleLabel;
    UILabel *__infoLabel;
    UIButton *__acknowledgmentButton;
    double __descriptionFontSizeMultiplier;
    double __infoFontSizeMultiplier;
    struct CGRect _viewportFrame;
}

@property(nonatomic, setter=_setInfoFontSizeMultiplier:) double _infoFontSizeMultiplier; // @synthesize _infoFontSizeMultiplier=__infoFontSizeMultiplier;
@property(nonatomic, setter=_setDescriptionFontSizeMultiplier:) double _descriptionFontSizeMultiplier; // @synthesize _descriptionFontSizeMultiplier=__descriptionFontSizeMultiplier;
@property(readonly, nonatomic) UIButton *_acknowledgmentButton; // @synthesize _acknowledgmentButton=__acknowledgmentButton;
@property(readonly, nonatomic) UILabel *_infoLabel; // @synthesize _infoLabel=__infoLabel;
@property(readonly, nonatomic) UILabel *_infoTitleLabel; // @synthesize _infoTitleLabel=__infoTitleLabel;
@property(readonly, nonatomic) UILabel *_descriptionLabel; // @synthesize _descriptionLabel=__descriptionLabel;
@property(readonly, nonatomic) UILabel *_descriptionTitleLabel; // @synthesize _descriptionTitleLabel=__descriptionTitleLabel;
@property(readonly, nonatomic) UILabel *_titleLabel; // @synthesize _titleLabel=__titleLabel;
@property(readonly, nonatomic) CAMPortraitModeDescriptionOverlayPrimaryVibrancyEffectView *_primaryVibrancyEffectView; // @synthesize _primaryVibrancyEffectView=__primaryVibrancyEffectView;
@property(readonly, nonatomic) CAShapeLayer *_blackoutMask; // @synthesize _blackoutMask=__blackoutMask;
@property(readonly, nonatomic) UIView *_blackoutView; // @synthesize _blackoutView=__blackoutView;
@property(readonly, nonatomic) UIVisualEffectView *_blurEffectView; // @synthesize _blurEffectView=__blurEffectView;
@property(nonatomic, getter=isBlackoutFrameVisible) _Bool blackoutFrameVisible; // @synthesize blackoutFrameVisible=_blackoutFrameVisible;
@property(nonatomic) struct CGRect viewportFrame; // @synthesize viewportFrame=_viewportFrame;
@property(nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property(nonatomic) __weak id <CAMDescriptionOverlayViewDelegate> delegate; // @synthesize delegate=_delegate;
- (double)additionalSpacing;
- (double)maxInfoTextWidthForNarrowWidth:(_Bool)arg1 isLandscape:(_Bool)arg2 usingFontSizeMultiplier:(double)arg3;
- (double)maxDescriptionTextWidthForNarrowWidth:(_Bool)arg1 isLandscape:(_Bool)arg2 usingFontSizeMultiplier:(double)arg3;
- (id)infoTextUsingNarrowWidth:(_Bool)arg1;
- (id)infoTitleTextUsingNarrowWidth:(_Bool)arg1;
- (id)descriptionTextUsingNarrowWidth:(_Bool)arg1;
- (id)descriptionTitleTextUsingNarrowWidth:(_Bool)arg1;
- (id)acknowledgmentTextUsingNarrowWidth:(_Bool)arg1;
- (id)titleTextUsingNarrowWidth:(_Bool)arg1;
- (void)setVisible:(_Bool)arg1 animationDuration:(double)arg2 completion:(id /* block */)arg3;
- (_Bool)_isVisible;
- (void)_layoutBlackoutMaskForFrame:(struct CGRect)arg1 inFrame:(struct CGRect)arg2;
- (void)setOrientation:(long long)arg1 animated:(_Bool)arg2;
- (void)_handleAcknowledgmentButtonTapped:(id)arg1;
@property(nonatomic, getter=isAcknowledgmentButtonHighlighted) _Bool acknowledgmentButtonHighlighted;
- (void)layoutSubviews;
- (void)_updateTextUsingNarrowWidth:(_Bool)arg1;
- (void)_updateFontsUsingNarrowWidth:(_Bool)arg1;
- (void)updateToContentSize:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

