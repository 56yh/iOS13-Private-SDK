//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class UIColor;

@protocol CEKAbstractSlider 
@property(nonatomic) unsigned long long fontStyle;
@property(nonatomic) CDStruct_ae5a35ae gradientInsets;
@property(nonatomic) long long titleAlignment;
@property(nonatomic) long long textOrientation;
@property(nonatomic) _Bool useTickMarkLegibilityShadows;
@property(nonatomic) _Bool useLegibilityShadows;
@property(nonatomic) double labelVerticalPadding;
@property(nonatomic) double sliderVerticalOffset;
@property(nonatomic) long long sliderVerticalAlignment;
- (void)removeGradients;
- (void)setOpaqueGradientsWithColor:(UIColor *)arg1;
- (void)setTransparentGradients;
- (void)setTextOrientation:(long long)arg1 animated:(_Bool)arg2;
@end

