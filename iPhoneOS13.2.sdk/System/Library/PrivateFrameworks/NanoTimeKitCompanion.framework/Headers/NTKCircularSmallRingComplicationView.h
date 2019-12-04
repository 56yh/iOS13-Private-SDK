//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKCircularComplicationView.h>

@class NTKColoringImageView, UIColor;

@interface NTKCircularSmallRingComplicationView : NTKCircularComplicationView
{
    NTKColoringImageView *_fillFractionRing;
    double _fillFraction;
    _Bool _didDrawOnce;
    UIColor *_ringOverrideColor;
}

- (void)_enumerateForegroundColoringViewsWithBlock:(id /* block */)arg1;
- (void)setForegroundColor:(id)arg1;
- (void)updateRingWithOverrideColor:(id)arg1;
- (void)updateRingWithRingDescription:(id)arg1;
- (void)layoutSubviews;
- (void)setUsesMediumLayout:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

