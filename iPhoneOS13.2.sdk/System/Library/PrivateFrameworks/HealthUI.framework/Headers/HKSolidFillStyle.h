//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthUI/HKFillStyle.h>

@class UIColor;

@interface HKSolidFillStyle : HKFillStyle
{
    UIColor *_color;
}

@property(copy, nonatomic) UIColor *color; // @synthesize color=_color;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)_renderInContext:(struct CGContext *)arg1 size:(struct CGSize)arg2;

@end

