//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthUI/HKInteractiveChartDataFormatter.h>

@class NSString;

@interface HKInteractiveChartNumberFormatter : HKInteractiveChartDataFormatter
{
    NSString *_unitFormatString;
}

@property(copy, nonatomic) NSString *unitFormatString; // @synthesize unitFormatString=_unitFormatString;
- (id)formattedValueStringForChartData:(id)arg1 options:(long long)arg2;
- (id)formattedSelectedRangeLabelDataWithChartData:(id)arg1;
- (id)_formattedStringWithValue:(id)arg1 formatter:(id)arg2;
- (id)init;

@end

