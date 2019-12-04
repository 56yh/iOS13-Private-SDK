//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIColor;

@interface HKElectrocardiogramGridOptions : NSObject
{
    unsigned long long _unitMultiple;
    unsigned long long _axis;
    UIColor *_lineColor;
    double _lineWidth;
}

@property(nonatomic) double lineWidth; // @synthesize lineWidth=_lineWidth;
@property(retain, nonatomic) UIColor *lineColor; // @synthesize lineColor=_lineColor;
@property(nonatomic) unsigned long long axis; // @synthesize axis=_axis;
@property(nonatomic) unsigned long long unitMultiple; // @synthesize unitMultiple=_unitMultiple;
@property(readonly, nonatomic) struct CGAffineTransform scale;
- (id)initWithUnitMultiple:(long long)arg1 axis:(unsigned long long)arg2 lineColor:(id)arg3 lineWidth:(double)arg4;

@end

