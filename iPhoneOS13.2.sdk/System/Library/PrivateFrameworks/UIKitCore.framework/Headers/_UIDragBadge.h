//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UIView.h>

@class UIImageView, UILabel;

@interface _UIDragBadge : UIView
{
    UILabel *_label;
    UIImageView *_imageView;
    long long _style;
    long long _itemCount;
}

@property(nonatomic) long long itemCount; // @synthesize itemCount=_itemCount;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(readonly, nonatomic) UIImageView *_imageView; // @synthesize _imageView;
@property(readonly, nonatomic) UILabel *_label; // @synthesize _label;
- (struct CGSize)_intrinsicSizeWithinSize:(struct CGSize)arg1;
@property(readonly, nonatomic) struct CGPoint anchorPointForAlignment;
- (void)layoutSubviews;
- (void)_updateForStyle;
- (void)_updateLabelTextFromItemCount;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

