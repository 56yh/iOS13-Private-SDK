//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthUI/HKInteractiveChartGenericStatFormatter.h>

@interface HKInteractiveChartAudioExposureStatFormatter : HKInteractiveChartGenericStatFormatter
{
}

- (id)_formatDuration:(double)arg1;
- (id)_formatQuantityAudioData:(id)arg1;
- (long long)_numberOfDaysVisibleInRange:(id)arg1;
- (id)_formattedStringWithValue:(double)arg1 unit:(id)arg2 showUnit:(_Bool)arg3;
- (id)_minorAttributes;
- (id)_majorAttributes;
- (id)_formatAudioMin:(double)arg1 max:(double)arg2;
- (id)_formattedAnnotationForChartData:(id)arg1;
- (id)_attributedCurrentAudioExposureClassificationForChartData:(id)arg1;
- (id)_formattedCurrentValueForChartData:(id)arg1;
- (id)_formattedSelectedRangeLabelDataWithChartData:(id)arg1 context:(long long)arg2;
- (id)formattedSelectedRangeLabelDataWithChartData:(id)arg1;

@end

