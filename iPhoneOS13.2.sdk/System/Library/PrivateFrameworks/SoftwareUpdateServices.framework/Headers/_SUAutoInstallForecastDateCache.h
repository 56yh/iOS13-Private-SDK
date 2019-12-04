//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCalendar, NSDate, SUAutoInstallForecast;

@interface _SUAutoInstallForecastDateCache : NSObject
{
    long long _scheduleType;
    SUAutoInstallForecast *_weak_forecast;
    NSCalendar *_calendar;
    NSDate *_roundedStartDate;
    NSDate *_roundedEndDate;
    _Bool _parsed;
}

- (id)_componentsFromDate:(id)arg1;
- (void)_computeTonightRangeRelativeToDate:(id)arg1 extraDayOffset:(long long)arg2 outStart:(id *)arg3 outEnd:(id *)arg4;
- (_Bool)_isStart:(id)arg1 end:(id)arg2 withinDateRange:(id)arg3 end:(id)arg4;
- (void)_parseForecast;
- (id)description;
@property(readonly, nonatomic) NSCalendar *calendar;
@property(readonly, nonatomic) NSDate *roundedEndTime;
@property(readonly, nonatomic) NSDate *roundedStartTime;
@property(readonly, nonatomic) long long scheduleType;
- (void)dealloc;
- (id)initWithForecast:(id)arg1;

@end

