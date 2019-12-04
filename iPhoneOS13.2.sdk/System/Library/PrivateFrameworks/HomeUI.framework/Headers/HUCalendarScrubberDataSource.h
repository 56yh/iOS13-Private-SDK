//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDate, NSHashTable;

@interface HUCalendarScrubberDataSource : NSObject
{
    NSArray *_dates;
    NSDate *_startDate;
    NSDate *_endDate;
    NSHashTable *_changeObservers;
}

@property(retain, nonatomic) NSHashTable *changeObservers; // @synthesize changeObservers=_changeObservers;
@property(retain, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(retain, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(retain, nonatomic) NSArray *dates; // @synthesize dates=_dates;
- (void)removeChangeObserver:(id)arg1;
- (void)addChangeObserver:(id)arg1;
- (id)shortMonthNameForItemAtIndexPath:(id)arg1;
- (long long)dayOfMonthForItemAtIndexPath:(id)arg1;
- (id)dayOfWeekForItemAtIndexPath:(id)arg1;
- (unsigned long long)totalNumberOfWeeks;
- (_Bool)eventExistsOnDate:(id)arg1;
- (id)dateAtIndexPath:(id)arg1;
- (id)indexPathForDate:(id)arg1;
- (_Bool)eventExistsForItemAtIndexPath:(id)arg1;
- (void)reloadWithDates:(id)arg1;
- (void)_updateDateBoundariesIfNeeded;
- (id)init;
- (id)initWithDates:(id)arg1;

@end

