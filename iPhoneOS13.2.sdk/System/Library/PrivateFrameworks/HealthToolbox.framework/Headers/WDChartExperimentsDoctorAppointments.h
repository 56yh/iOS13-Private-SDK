//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthUI/HKInteractiveChartViewController.h>

@class HKHorizontalSingleLineSeries;

__attribute__((visibility("hidden")))
@interface WDChartExperimentsDoctorAppointments : HKInteractiveChartViewController
{
    HKHorizontalSingleLineSeries *_appointmentSeries;
}

@property(readonly, nonatomic) HKHorizontalSingleLineSeries *appointmentSeries; // @synthesize appointmentSeries=_appointmentSeries;
- (id)_parseSpecifications:(id)arg1;
- (void)setColor:(id)arg1;
- (id)initWithSpecifications:(id)arg1 profile:(id)arg2 color:(id)arg3;
- (id)initWithAppointments:(id)arg1 profile:(id)arg2 color:(id)arg3;

@end

