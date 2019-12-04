//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIScrollView.h>

@class UIImage, UIImageView;

__attribute__((visibility("hidden")))
@interface SKUISlideshowImageScrollView : UIScrollView
{
    UIImageView *_imageView;
    struct CGPoint _centerPointBeforeResize;
    double _scaleBeforeResize;
    UIImage *_image;
}

@property(readonly, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (void)_resetMinMaxZoomScales;
- (void)_recoverFromResize;
- (void)_prepareToResize;
- (void)setFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (struct CGRect)visibleRect;
- (void)zoomIntoPoint:(struct CGPoint)arg1;
- (void)resetZoomScale;
- (id)initWithFrame:(struct CGRect)arg1;

@end

