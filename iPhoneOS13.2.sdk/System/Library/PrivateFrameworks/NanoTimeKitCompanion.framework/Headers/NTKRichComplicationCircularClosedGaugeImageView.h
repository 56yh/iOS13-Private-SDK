//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKRichComplicationCircularBaseView.h>

@class NTKRichComplicationImageView, NTKRichComplicationRingProgressView;

@interface NTKRichComplicationCircularClosedGaugeImageView : NTKRichComplicationCircularBaseView
{
    NTKRichComplicationImageView *_imageView;
    NTKRichComplicationRingProgressView *_progressView;
}

+ (_Bool)supportsComplicationFamily:(long long)arg1;
+ (_Bool)handlesComplicationTemplate:(id)arg1;
- (void)updateMonochromeColor;
- (void)transitionToMonochromeWithFraction:(double)arg1;
- (void)_handleTemplate:(id)arg1 reason:(long long)arg2;
- (void)setPaused:(_Bool)arg1;
- (void)layoutSubviews;
- (id)init;

@end

