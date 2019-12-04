//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreMaterial/MTColor.h>

@interface MTRGBColor : MTColor
{
    double _red;
    double _green;
    double _blue;
    double _alpha;
}

@property(readonly, nonatomic) double alpha; // @synthesize alpha=_alpha;
@property(readonly, nonatomic) double blue; // @synthesize blue=_blue;
@property(readonly, nonatomic) double green; // @synthesize green=_green;
@property(readonly, nonatomic) double red; // @synthesize red=_red;
- (id)_rgbColor;
- (id)description;
- (struct CAColorMatrix)sourceOverColorMatrix;
- (id)colorBlendedWithColor:(id)arg1;
- (id)colorWithAdditionalAlphaComponent:(double)arg1;
- (id)colorWithAlphaComponent:(double)arg1;
- (id)colorDescription;
- (struct CGColor *)CGColor;
- (id)_initWithDescription:(id)arg1;
- (id)_initWithCGColor:(struct CGColor *)arg1;
- (id)initWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;

@end

