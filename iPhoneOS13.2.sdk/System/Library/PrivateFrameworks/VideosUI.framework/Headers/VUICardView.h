//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSString, VUIButton, VUICardViewLayoutFactory, _TVImageView;

__attribute__((visibility("hidden")))
@interface VUICardView : UIView
{
    VUICardViewLayoutFactory *_layoutFactory;
    _TVImageView *_imageView;
    _TVImageView *_appImageView;
    NSArray *_labelViews;
    UIView *_overlayView;
    VUIButton *_button;
    NSString *_debugString;
    struct CGSize _imageSize;
}

@property(copy, nonatomic) NSString *debugString; // @synthesize debugString=_debugString;
@property(retain, nonatomic) VUIButton *button; // @synthesize button=_button;
@property(retain, nonatomic) UIView *overlayView; // @synthesize overlayView=_overlayView;
@property(copy, nonatomic) NSArray *labelViews; // @synthesize labelViews=_labelViews;
@property(retain, nonatomic) _TVImageView *appImageView; // @synthesize appImageView=_appImageView;
@property(retain, nonatomic) _TVImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) struct CGSize imageSize; // @synthesize imageSize=_imageSize;
@property(readonly, nonatomic) VUICardViewLayoutFactory *layoutFactory; // @synthesize layoutFactory=_layoutFactory;
- (double)_maxTextWidthForImagePosition:(long long)arg1 width:(double)arg2 appImageLayout:(id)arg3 textLayout:(id)arg4;
- (void)_mainImageLoaded;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)prepareForCellReuse;
- (void)setHighlighted:(_Bool)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 layoutFactory:(id)arg2;

@end

