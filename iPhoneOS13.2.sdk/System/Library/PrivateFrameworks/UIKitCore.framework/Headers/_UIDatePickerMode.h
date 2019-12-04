//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDate, NSDateComponents, NSNumberFormatter, NSString, UIColor, UIFont, _UIDatePickerView;

__attribute__((visibility("hidden")))
@interface _UIDatePickerMode : NSObject
{
    NSDateComponents *_selectedDateComponents;
    NSDateComponents *_baseDateComponents;
    unsigned long long *_elements;
    long long _yearsSinceBaseDate;
    struct _NSRange _maxDayRange;
    struct _NSRange _maxMonthRange;
    NSString *_localizedFormatString;
    NSArray *_dateFormatters;
    UIColor *_todayTextColor;
    UIFont *_amPmFont;
    UIFont *_font;
    UIFont *_defaultTimeFont;
    NSString *_amString;
    NSString *_pmString;
    NSDateComponents *_todayDateComponents;
    NSNumberFormatter *_formatter;
    _UIDatePickerView *_datePickerView;
    _Bool _isUsingJapaneseCalendar;
    long long _minuteInterval;
    double _todaySinceReferenceDate;
    NSDate *_minimumDate;
    NSDateComponents *_minimumDateComponents;
    NSDate *_maximumDate;
    NSDateComponents *_maximumDateComponents;
    unsigned long long _numberOfComponents;
    NSDate *_baseDate;
    NSDate *_originatingDate;
}

+ (unsigned long long)extractableCalendarUnits;
+ (id)_datePickerModeWithFormatString:(id)arg1 datePickerView:(id)arg2;
+ (id)_datePickerModeWithMode:(long long)arg1 datePickerView:(id)arg2;
+ (long long)datePickerMode;
+ (id)newDateFromGregorianYear:(long long)arg1 month:(long long)arg2 day:(long long)arg3 timeZone:(id)arg4;
+ (void)initialize;
@property(retain, nonatomic) NSDateComponents *selectedDateComponents; // @synthesize selectedDateComponents=_selectedDateComponents;
@property(retain, nonatomic) NSDate *originatingDate; // @synthesize originatingDate=_originatingDate;
@property(nonatomic) long long yearsSinceBaseDate; // @synthesize yearsSinceBaseDate=_yearsSinceBaseDate;
@property(retain, nonatomic) NSDate *baseDate; // @synthesize baseDate=_baseDate;
@property(retain, nonatomic) NSString *localizedFormatString; // @synthesize localizedFormatString=_localizedFormatString;
@property(nonatomic) unsigned long long numberOfComponents; // @synthesize numberOfComponents=_numberOfComponents;
@property(nonatomic) __weak _UIDatePickerView *datePickerView; // @synthesize datePickerView=_datePickerView;
@property(readonly, nonatomic) NSDateComponents *maximumDateComponents; // @synthesize maximumDateComponents=_maximumDateComponents;
@property(readonly, nonatomic) NSDate *maximumDate; // @synthesize maximumDate=_maximumDate;
@property(readonly, nonatomic) NSDateComponents *minimumDateComponents; // @synthesize minimumDateComponents=_minimumDateComponents;
@property(readonly, nonatomic) NSDate *minimumDate; // @synthesize minimumDate=_minimumDate;
@property(nonatomic) double todaySinceReferenceDate; // @synthesize todaySinceReferenceDate=_todaySinceReferenceDate;
@property(nonatomic) long long minuteInterval; // @synthesize minuteInterval=_minuteInterval;
- (void)updateEnabledStateOfViewForRow:(long long)arg1 inComponent:(long long)arg2;
- (_Bool)_shouldEnableValueForRow:(long long)arg1 inComponent:(long long)arg2 calendarUnit:(unsigned long long)arg3;
- (_Bool)_shouldEnableValueForRow:(long long)arg1 column:(long long)arg2;
- (_Bool)_scrollingAnyColumnExcept:(int)arg1;
- (_Bool)_isComponentScrolling:(long long)arg1;
- (_Bool)areValidDateComponents:(id)arg1 comparingUnits:(long long)arg2;
- (id)viewForRow:(long long)arg1 inComponent:(long long)arg2 reusingView:(id)arg3;
- (void)takeExtremesFromMinimumDate:(id)arg1 maximumDate:(id)arg2;
- (id)dateComponentsByRestrictingSelectedComponents:(id)arg1 withLastManipulatedColumn:(long long)arg2;
- (_Bool)_monthExists:(long long)arg1 inYear:(long long)arg2;
- (long long)_numberOfDaysInDateComponents:(id)arg1;
- (void)_updateSelectedDateComponentsWithNewValueInComponent:(long long)arg1 usingSelectionBarValue:(_Bool)arg2;
- (void)resetSelectedDateComponentsWithValuesUnderSelectionBars;
- (void)updateSelectedDateComponentsWithNewValueInComponent:(long long)arg1;
- (void)loadDate:(id)arg1 animated:(_Bool)arg2;
- (long long)validateValue:(long long)arg1 forCalendarUnit:(unsigned long long)arg2;
- (long long)rowForValue:(long long)arg1 forCalendarUnit:(unsigned long long)arg2 currentRow:(long long)arg3;
- (long long)valueForDate:(id)arg1 dateComponents:(id)arg2 calendarUnit:(unsigned long long)arg3;
- (long long)rowForDate:(id)arg1 dateComponents:(id)arg2 component:(long long)arg3 currentRow:(long long)arg4;
- (struct _NSRange)rangeForCalendarUnit:(unsigned long long)arg1;
- (long long)titleAlignmentForCalendarUnit:(unsigned long long)arg1;
- (id)titleForRow:(long long)arg1 inComponent:(long long)arg2;
- (id)dateFormatForCalendarUnit:(unsigned long long)arg1;
- (id)dateForRow:(long long)arg1 inCalendarUnit:(unsigned long long)arg2;
- (long long)valueForRow:(long long)arg1 inCalendarUnit:(unsigned long long)arg2;
- (long long)eraForYearRow:(long long)arg1;
- (long long)yearForRow:(long long)arg1;
- (long long)monthForRow:(long long)arg1;
- (long long)dayForRow:(long long)arg1;
- (long long)hourForRow:(long long)arg1;
- (long long)minuteForRow:(long long)arg1;
- (long long)secondForRow:(long long)arg1;
- (id)_dateForYearRow:(long long)arg1;
- (id)_dateByEnsuringValue:(long long)arg1 forCalendarUnit:(unsigned long long)arg2;
- (unsigned long long)nextUnitSmallerThanUnit:(unsigned long long)arg1;
- (unsigned long long)nextUnitLargerThanUnit:(unsigned long long)arg1;
- (long long)_incrementForStaggeredTimeIntervals;
- (double)totalComponentWidthWithFont:(id)arg1;
@property(readonly, nonatomic) double totalComponentWidth; // @dynamic totalComponentWidth;
- (void)resetComponentWidths;
- (void)noteCalendarChanged;
- (long long)numberOfRowsForCalendarUnit:(unsigned long long)arg1;
- (long long)numberOfRowsInComponent:(long long)arg1;
- (long long)componentForCalendarUnit:(unsigned long long)arg1;
- (unsigned long long)calendarUnitForComponent:(long long)arg1;
@property(readonly, nonatomic) long long displayedCalendarUnits;
- (void)fixUpElementsForRTL;
@property(nonatomic) unsigned long long *elements;
@property(readonly, nonatomic, getter=isTimeIntervalMode) _Bool isTimeIntervalMode; // @dynamic isTimeIntervalMode;
- (double)widthForCalendarUnit:(unsigned long long)arg1 font:(id)arg2 maxWidth:(double)arg3;
- (double)widthForComponent:(long long)arg1 maxWidth:(double)arg2;
@property(readonly, nonatomic) UIColor *todayTextColor;
@property(readonly, nonatomic) double rowHeight;
@property(readonly, nonatomic) UIFont *amPmFont;
@property(readonly, nonatomic) UIFont *defaultTimeFont;
@property(readonly, nonatomic) UIFont *sizedFont;
@property(readonly, nonatomic) UIFont *font;
- (id)fontForCalendarUnit:(unsigned long long)arg1;
@property(readonly, nonatomic) NSString *pmString;
@property(readonly, nonatomic) NSString *amString;
@property(retain, nonatomic) NSDateComponents *baseDateComponents;
- (void)clearBaseDate;
@property(retain, nonatomic) NSDateComponents *todayDateComponents;
- (id)dateFormatterForCalendarUnit:(unsigned long long)arg1;
@property(readonly, nonatomic) long long datePickerMode;
@property(readonly, nonatomic, getter=is24Hour) _Bool is24Hour; // @dynamic is24Hour;
- (double)componentWidthForTwoDigitCalendarUnit:(unsigned long long)arg1 font:(id)arg2 maxWidth:(double)arg3;
- (void)_shouldReset:(id)arg1;
- (id)timeZone;
- (id)locale;
- (id)calendarForFormatters;
- (id)calendar;
- (long long)_yearlessYearForMonth:(long long)arg1;
- (void)dealloc;
- (id)init;

@end

