//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthKit/HKActivitySummary.h>

@class NSDateComponents;

__attribute__((visibility("hidden")))
@interface _HKHourlyActivitySummary : HKActivitySummary
{
    NSDateComponents *_hourlyDateComponents;
}

@property(retain, nonatomic) NSDateComponents *hourlyDateComponents; // @synthesize hourlyDateComponents=_hourlyDateComponents;
- (id)dateComponentsForCalendar:(id)arg1;

@end

