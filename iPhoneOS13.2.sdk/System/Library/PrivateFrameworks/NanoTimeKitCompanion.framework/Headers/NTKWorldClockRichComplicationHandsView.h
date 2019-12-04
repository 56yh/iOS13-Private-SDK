//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKAnalogHandsView.h>

#import <NanoTimeKitCompanion/CLKMonochromeComplicationView-Protocol.h>

@class CALayer, NSString, UIColor;
@protocol CLKMonochromeFilterProvider;

@interface NTKWorldClockRichComplicationHandsView : NTKAnalogHandsView <CLKMonochromeComplicationView>
{
    CALayer *_pegDot;
    id <CLKMonochromeFilterProvider> _filterProvider;
    UIColor *_pegDotColor;
}

@property(retain, nonatomic) UIColor *pegDotColor; // @synthesize pegDotColor=_pegDotColor;
@property(nonatomic) __weak id <CLKMonochromeFilterProvider> filterProvider; // @synthesize filterProvider=_filterProvider;
- (void)updateMonochromeColor;
- (void)transitionToMonochromeWithFraction:(double)arg1;
- (void)layoutSubviews;
- (double)_timeAnimationFramesPerSecondForDevice:(id)arg1;
- (long long)displayedHour;
- (id)initForDevice:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

