//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSLayoutConstraint, PKPaymentAuthorizationLayout, UIActivityIndicatorView, UILabel;

@interface PKPaymentAuthorizationTotalView : UIView
{
    UILabel *_labelView;
    UILabel *_valueView;
    UIActivityIndicatorView *_processingIndicator;
    UIView *_separatorView;
    NSLayoutConstraint *_leftMarginConstraint;
    NSLayoutConstraint *_rightMarginConstraint;
    NSLayoutConstraint *_labelBaselineConstraint;
    NSLayoutConstraint *_valueBaselineConstraint;
    NSLayoutConstraint *_labelValueRelationConstraint;
    NSLayoutConstraint *_valueBaselineLargeTextConstraint;
    NSLayoutConstraint *_labelValueRelationLargeTextConstraint;
    NSLayoutConstraint *_rightMarginLargeTextConstraint;
    _Bool _isPendingTotal;
    _Bool _processing;
    _Bool _showsBoldValueText;
    PKPaymentAuthorizationLayout *_layout;
    long long _style;
    long long _labelNumberOfLines;
}

@property(nonatomic) _Bool showsBoldValueText; // @synthesize showsBoldValueText=_showsBoldValueText;
@property(nonatomic) long long labelNumberOfLines; // @synthesize labelNumberOfLines=_labelNumberOfLines;
@property(nonatomic, getter=isProcessing) _Bool processing; // @synthesize processing=_processing;
@property(nonatomic) _Bool isPendingTotal; // @synthesize isPendingTotal=_isPendingTotal;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(nonatomic) PKPaymentAuthorizationLayout *layout; // @synthesize layout=_layout;
- (id)_valueAttributedStringWithString:(id)arg1;
- (id)_labelAttributedStringWithString:(id)arg1;
- (void)_prepareConstraints;
- (double)_initialLeading;
- (void)updateConstraints;
- (_Bool)_hasAccessibilityLargeText;
- (void)_createSubviews;
- (void)setLabel:(id)arg1 value:(id)arg2;
- (void)dealloc;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2;

@end

