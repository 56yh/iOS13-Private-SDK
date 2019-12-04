//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CalendarUIKit/CUIKDescriptionGenerator.h>

@class NSDateFormatter, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface CUIKDateDescriptionGenerator : CUIKDescriptionGenerator
{
    NSObject<OS_dispatch_queue> *_serialFormatterEditQueue;
    NSDateFormatter *_dayFormatter;
    NSDateFormatter *_abbrevDayFormatter;
    NSDateFormatter *_timeFormatter;
    NSDateFormatter *_standardTimeFormatter;
    NSDateFormatter *_customFormatter;
    NSDateFormatter *_fullStyleDateFormatter;
    NSDateFormatter *_dayOfWeekFormatter;
    NSMutableDictionary *_longFormatters;
}

+ (id)_dateBeforeTodayLastWeekFormatStringForDayOfWeek:(long long)arg1 generateLowercaseString:(_Bool)arg2;
+ (id)_dateBeforeTodayThisWeekFormatStringForDayOfWeek:(long long)arg1 generateLowercaseString:(_Bool)arg2;
+ (id)_dateAfterTodayThisWeekFormatStringForDayOfWeek:(long long)arg1 generateLowercaseString:(_Bool)arg2;
+ (id)_dateAfterTodayNextWeekFormatStringForDayOfWeek:(long long)arg1 generateLowercaseString:(_Bool)arg2;
+ (id)sharedGenerator;
- (id)dateStringForDate:(id)arg1 relativeToReferenceDate:(id)arg2 allDay:(_Bool)arg3 standalone:(_Bool)arg4 shortFormat:(_Bool)arg5;
- (id)dateStringForDate:(id)arg1 allDay:(_Bool)arg2 standalone:(_Bool)arg3 shortFormat:(_Bool)arg4;
- (id)dateStringForDate:(id)arg1 allDay:(_Bool)arg2 shortFormat:(_Bool)arg3;
- (id)timeStringForDate:(id)arg1 inTimeZone:(id)arg2;
- (id)_timeStringForDate:(id)arg1;
- (id)_dateStringForDate:(id)arg1 relativeToReferenceDate:(id)arg2 allDay:(_Bool)arg3 shortFormat:(_Bool)arg4 lowercase:(_Bool)arg5;
- (id)_stringForDate:(id)arg1 relativeToReferenceDate:(id)arg2 withLongFormatString:(id)arg3 useAbbreviatedFormats:(_Bool)arg4 lowerCase:(_Bool)arg5;
- (id)stringForDate:(id)arg1 withLongFormatString:(id)arg2 useAbbreviatedFormats:(_Bool)arg3 lowerCase:(_Bool)arg4;
- (id)formatterForLongFormat:(id)arg1;
- (id)_dateFormatterWithLongFormat:(id)arg1;
- (id)dayOfWeekFormatter;
- (id)fullStyleDateFormatter;
- (id)standardTimeFormatter;
- (id)abbreviatedDayFormatter;
- (id)dayFormatter;
- (id)timeFormatter;
- (id)_customFormatter;
- (void)_invalidateFormatters;
- (void)_initializeFormatters;
- (id)init;

@end

