//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKColorCurve.h>

@class NTKCubicSpline;

@interface NTKCubicColorCurve : NTKColorCurve
{
    NTKCubicSpline *_spline;
    // Error parsing type: ^, name: _colors
    float *_fractions;
    unsigned long long _count;
}

- (id)colorForFraction:(float)arg1;
- (void)dealloc;
- (id)initWithColorCurveElements:(id)arg1;

@end

