//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKUtilityCircularComplicationView.h>

@class UIView;
@protocol NTKComplicationImageView;

@interface NTKUtilitySmallImageTemplateView : NTKUtilityCircularComplicationView
{
    _Bool _needsLayoutContent;
    UIView<NTKComplicationImageView> *_imageView;
}

+ (_Bool)handlesComplicationTemplate:(id)arg1;
@property(retain, nonatomic) UIView<NTKComplicationImageView> *imageView; // @synthesize imageView=_imageView;
- (void)_enumerateColoringStackedImagesViewsWithBlock:(id /* block */)arg1;
- (void)_enumerateColoringViewsWithBlock:(id /* block */)arg1;
- (void)_setNeedsLayoutContent;
- (void)_updateForTemplateChange;
- (void)_layoutContentView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

