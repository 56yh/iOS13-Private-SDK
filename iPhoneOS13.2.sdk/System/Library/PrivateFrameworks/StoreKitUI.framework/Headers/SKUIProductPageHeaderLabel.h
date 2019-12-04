//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSString, UIColor, UIImage;

__attribute__((visibility("hidden")))
@interface SKUIProductPageHeaderLabel : UIView
{
    NSString *_text;
    UIColor *_textColor;
    NSString *_contentRating;
    UIImage *_contentRatingImage;
    NSArray *_secondaryContentRatingImages;
    UIColor *_ratingColor;
    _Bool _isPad;
}

@property(retain, nonatomic) UIColor *ratingColor; // @synthesize ratingColor=_ratingColor;
@property(retain, nonatomic) NSArray *secondaryContentRatingImages; // @synthesize secondaryContentRatingImages=_secondaryContentRatingImages;
@property(nonatomic) _Bool isPad; // @synthesize isPad=_isPad;
@property(retain, nonatomic) NSString *contentRating; // @synthesize contentRating=_contentRating;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
- (id)_textAttributes;
- (struct __CTFramesetter *)_newTextFramesetter;
- (id)_imageForContentRating:(id)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (double)secondaryImageWidth;

@end

