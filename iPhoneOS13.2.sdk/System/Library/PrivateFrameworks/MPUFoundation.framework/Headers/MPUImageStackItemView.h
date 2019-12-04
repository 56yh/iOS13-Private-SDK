//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MPUFoundation/MPUStackItemView.h>

@class UIImage, UIImageView;

@interface MPUImageStackItemView : MPUStackItemView
{
    UIImageView *_imageView;
    UIImage *_image;
    double _imageAlpha;
    struct CGRect _imageContentsRect;
    struct CGAffineTransform _imageTransform;
}

@property(nonatomic) struct CGAffineTransform imageTransform; // @synthesize imageTransform=_imageTransform;
@property(nonatomic) struct CGRect imageContentsRect; // @synthesize imageContentsRect=_imageContentsRect;
@property(nonatomic) double imageAlpha; // @synthesize imageAlpha=_imageAlpha;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

