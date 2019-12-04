//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKModularTemplateView.h>

@class NSMutableArray, NTKRingsAndDotsView;

@interface NTKModularSmallActivityTemplateView : NTKModularTemplateView
{
    NTKRingsAndDotsView *_ringsView;
    NSMutableArray *_ringsFillFractions;
}

+ (_Bool)supportsComplicationFamily:(long long)arg1;
+ (_Bool)handlesComplicationTemplate:(id)arg1;
- (void)applyTransitionFraction:(double)arg1 fromFaceColor:(unsigned long long)arg2 toFaceColor:(unsigned long long)arg3 units:(unsigned long long)arg4 brightenedUnits:(unsigned long long)arg5;
- (void)applyColorScheme:(id)arg1;
- (void)_setLayoutEmptyRings;
- (void)_update;
- (void)_layoutContentView;
- (void)setIsXL:(_Bool)arg1;
- (void)_configureContentSubviews;
- (void)setForegroundColor:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

