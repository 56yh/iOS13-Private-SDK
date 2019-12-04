//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIImage;

@interface CKBalloonImageView : UIView
{
    _Bool _imageHidden;
    UIImage *_image;
    NSString *_stickerAccessibilityDescription;
}

@property(retain, nonatomic) NSString *stickerAccessibilityDescription; // @synthesize stickerAccessibilityDescription=_stickerAccessibilityDescription;
@property(nonatomic) _Bool imageHidden; // @synthesize imageHidden=_imageHidden;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (void)prepareForReuse;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (struct UIEdgeInsets)alignmentRectInsets;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;

@end

