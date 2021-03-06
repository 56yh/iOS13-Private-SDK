//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import <NanoTimeKitCompanion/CLKMonochromeComplicationView-Protocol.h>

@class CALayer, CLKDevice, NSHashTable, NSString, REContent, UIColor, UIImage, UIImageView, UIView;
@protocol CLKMonochromeFilterProvider;

@interface NTKUpNextBaseCell : UICollectionViewCell <UIGestureRecognizerDelegate, CLKMonochromeComplicationView>
{
    CGSize _shadowSize;
    UIImageView *_shadowView;
    CALayer *_imageLayer;
    UIView *_overlayView;
    double _darkeningAmount;
    double _contentBrightness;
    REContent *_content;
    NSHashTable *_layerProviders;
    BOOL _paused;
    id <CLKMonochromeFilterProvider> _filterProvider;
    CLKDevice *_device;
    UIImage *_contentImage;
    UIImage *_overrideContentImage;
    NSString *_representedElementIdentifier;
    UIColor *_imageColor;
}

+ (Class)suggestedCellClassForContent:(id)arg1;
+ (double)cornerRadiusForDevice:(id)arg1;
+ (CGSize)suggestedBodyImageSizeForDevice:(id)arg1;
+ (CGSize)suggestedHeaderImageSizeForDevice:(id)arg1;
+ (void)clearLabel:(id)arg1;
@property(nonatomic, getter=isPaused) BOOL paused; // @synthesize paused=_paused;
@property(retain, nonatomic) UIColor *imageColor; // @synthesize imageColor=_imageColor;
@property(readonly, nonatomic) CALayer *imageLayer; // @synthesize imageLayer=_imageLayer;
@property(retain, nonatomic) NSString *representedElementIdentifier; // @synthesize representedElementIdentifier=_representedElementIdentifier;
@property(readonly, nonatomic) REContent *content; // @synthesize content=_content;
@property(retain, nonatomic) UIImage *overrideContentImage; // @synthesize overrideContentImage=_overrideContentImage;
@property(readonly, nonatomic) UIImage *contentImage; // @synthesize contentImage=_contentImage;
@property(readonly, nonatomic) CLKDevice *device; // @synthesize device=_device;
@property(nonatomic) __weak id <CLKMonochromeFilterProvider> filterProvider; // @synthesize filterProvider=_filterProvider;
// - (void).cxx_destruct;
- (void)updateMonochromeColor;
- (void)transitionToMonochromeWithFraction:(double)arg1;
- (id)transitionContextInView:(id)arg1;
- (void)_updateColorOverlay;
- (void)applyLayoutAttributes:(id)arg1;
- (void)configureWithContent:(id)arg1;
- (void)enumerateContentsLayersWithBlock:(id /* CDUnknownBlockType */)arg1;
- (void)setContentImage:(id)arg1 animated:(BOOL)arg2;
- (void)setContentBrightness:(double)arg1 animated:(BOOL)arg2;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setHighlighted:(BOOL)arg1;
- (void)removeContentsLayerProvider:(id)arg1;
- (void)addContentsLayerProvider:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;

@end

