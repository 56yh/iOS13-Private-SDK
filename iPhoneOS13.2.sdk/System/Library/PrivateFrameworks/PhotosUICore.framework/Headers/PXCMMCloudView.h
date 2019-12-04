//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class PXGradientView, PXRoundedCornerOverlayView, UIButton, UIImageView, UILabel;
@protocol PXCMMCloudViewViewDelegate;

@interface PXCMMCloudView : UIView
{
    PXRoundedCornerOverlayView *_roundedCornerOverlayView;
    struct {
        _Bool learnMoreTapped;
        _Bool dismissTapped;
    } _delegateRespondsTo;
    id <PXCMMCloudViewViewDelegate> _delegate;
    UIButton *_dismissButton;
    PXGradientView *_graphicGradientView;
    UIImageView *_graphicImageView;
    UILabel *_bodyLabel;
    UIButton *_learnMoreButton;
    unsigned long long _style;
}

@property(readonly, nonatomic) unsigned long long style; // @synthesize style=_style;
@property(readonly, nonatomic) UIButton *learnMoreButton; // @synthesize learnMoreButton=_learnMoreButton;
@property(readonly, nonatomic) UILabel *bodyLabel; // @synthesize bodyLabel=_bodyLabel;
@property(readonly, nonatomic) UIImageView *graphicImageView; // @synthesize graphicImageView=_graphicImageView;
@property(readonly, nonatomic) PXGradientView *graphicGradientView; // @synthesize graphicGradientView=_graphicGradientView;
@property(readonly, nonatomic) UIButton *dismissButton; // @synthesize dismissButton=_dismissButton;
@property(nonatomic) __weak id <PXCMMCloudViewViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_didTapDismissButton:(id)arg1;
- (void)_learnMoreTapped:(id)arg1;
- (struct CGSize)_performLayoutInRect:(struct CGRect)arg1 updateSubviewFrames:(_Bool)arg2;
- (void)_setupSubviews;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)_updateFontAndStyle;
- (id)_constrainedFontForTextStyle:(id)arg1 maximumContentSizeCategory:(id)arg2;
@property(nonatomic) _Bool disableDismissAction;
- (void)traitCollectionDidChange:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 style:(unsigned long long)arg2;

@end

