//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <NanoTimeKitCompanion/CLKMonochromeComplicationView-Protocol.h>
#import <NanoTimeKitCompanion/NTKUpNextBaseCellContentsLayerProvider-Protocol.h>

@class CALayer, CLKImageProvider, NSString, NTKUpNextBaseCell, UIColor, UIImage, UIImageView;
@protocol CLKMonochromeFilterProvider;

@interface NTKUpNextImageView : UIView <NTKUpNextBaseCellContentsLayerProvider, CLKMonochromeComplicationView>
{
    UIImageView *_foregroundImageView;
    UIImageView *_backgroundImageView;
    CALayer *_foregroundAccentBackdrop;
    UIImageView *_foregroundAccentImageView;
    UIImageView *_overrideImageView;
    NTKUpNextBaseCell *_parentCell;
    id <CLKMonochromeFilterProvider> _filterProvider;
    UIColor *_fallbackTintColor;
    CLKImageProvider *_imageProvider;
    UIImage *_overrideImage;
    NSString *_compositingFilter;
}

@property(retain, nonatomic) NSString *compositingFilter; // @synthesize compositingFilter=_compositingFilter;
@property(readonly, nonatomic) UIImage *overrideImage; // @synthesize overrideImage=_overrideImage;
@property(readonly, nonatomic) CLKImageProvider *imageProvider; // @synthesize imageProvider=_imageProvider;
@property(retain, nonatomic) UIColor *fallbackTintColor; // @synthesize fallbackTintColor=_fallbackTintColor;
@property(nonatomic) __weak id <CLKMonochromeFilterProvider> filterProvider; // @synthesize filterProvider=_filterProvider;
// - (void).cxx_destruct;
- (void)updateMonochromeColor;
- (void)transitionToMonochromeWithFraction:(double)arg1;
- (void)setContentMode:(long long)arg1;
- (void)_updateColors;
- (void)setFullColorImage:(id)arg1 tintableImageProvider:(id)arg2;
- (BOOL)_hasMultipartImages;
- (void)layoutSubviews;
- (CGSize)intrinsicContentSize;
- (CGRect)contentsLayerBoundsForLayout:(id)arg1;
- (id)contentsLayer;
- (id)initWithFrame:(CGRect)arg1 parentCell:(id)arg2;

@end

