//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface CertUIKeyValueView : UIView
{
    double _preferredValueLabelOriginX;
    UILabel *_keyLabel;
    UILabel *_valueLabel;
    UIImageView *_verifiedImageView;
    UILabel *_verifiedLabel;
}

+ (double)defaultPreferredValueLabelOriginX;
@property(retain, nonatomic) UILabel *verifiedLabel; // @synthesize verifiedLabel=_verifiedLabel;
@property(retain, nonatomic) UIImageView *verifiedImageView; // @synthesize verifiedImageView=_verifiedImageView;
@property(retain, nonatomic) UILabel *valueLabel; // @synthesize valueLabel=_valueLabel;
@property(retain, nonatomic) UILabel *keyLabel; // @synthesize keyLabel=_keyLabel;
@property(nonatomic) double preferredValueLabelOriginX; // @synthesize preferredValueLabelOriginX=_preferredValueLabelOriginX;
- (id)verifiedColor;
- (id)verifiedFont;
- (id)detailFont;
- (id)titleFont;
- (void)setCheckmarkLabelText:(id)arg1 checkmarkLabelColor:(id)arg2 showCheckmark:(_Bool)arg3;
- (void)setHighlightTextColor:(id)arg1;
- (void)setKey:(id)arg1 value:(id)arg2;
- (void)setItemDetail:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)_createVerifiedComponentsIfNeeded;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

