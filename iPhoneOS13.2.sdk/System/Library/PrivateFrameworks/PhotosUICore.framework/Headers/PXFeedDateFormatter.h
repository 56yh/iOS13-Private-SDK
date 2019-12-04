//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCalendar, NSDate, NSDateFormatter, NSLocale, NSString;

@interface PXFeedDateFormatter : NSObject
{
    _Bool _prepared;
    NSLocale *_locale;
    _Bool _ignoreWhitelist;
    NSCalendar *_calendar;
    NSDate *_today;
    NSDate *_yesterday;
    NSString *_todayString;
    NSString *_yesterdayString;
    NSDateFormatter *_dateFormatterForCurrentYear;
    NSDateFormatter *_dateFormatterForNoncurrentYears;
}

+ (id)defaultFeedSectionDateFormatter;
- (void)_currentLocaleChanged:(id)arg1;
- (void)_calendarDayChanged:(id)arg1;
- (_Bool)_canSubstitueDateStringsWithLocale:(id)arg1;
- (id)_completeRelativeStringForDate:(id)arg1 dateFormatter:(id)arg2;
- (void)_prepare;
- (void)_invalidate;
- (_Bool)isDateInFuture:(id)arg1;
- (_Bool)isDateInToday:(id)arg1;
- (id)stringFromDate:(id)arg1;
- (void)dealloc;
- (id)initWithLocale:(id)arg1 ignoreWhitelist:(_Bool)arg2;
- (id)init;

@end

