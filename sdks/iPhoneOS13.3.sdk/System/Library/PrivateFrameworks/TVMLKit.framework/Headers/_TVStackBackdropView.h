//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImage, UIImageView, UIVisualEffectView;

@interface _TVStackBackdropView : UIView
{
    UIImageView *_imageView;
    UIVisualEffectView *_visualEffectView;
    UIImage *_image;
    long long _blurEffectStyle;
}

@property(nonatomic) long long blurEffectStyle; // @synthesize blurEffectStyle=_blurEffectStyle;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
// - (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithBlurEffectStyle:(long long)arg1;

@end

