//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class NSArray, NSDate;

@protocol CLKCComplicationDataSourceDelegate 
- (void)invalidateSwitcherTemplate;
- (double)minimumIntervalBetweenTimelineEntries;
- (void)appendEntries:(NSArray *)arg1 withTritiumUpdatePriority:(long long)arg2;
- (void)appendEntries:(NSArray *)arg1;
- (void)setTimelineEndDate:(NSDate *)arg1;
- (void)setTimelineStartDate:(NSDate *)arg1;
- (void)invalidateEntriesWithTritiumUpdatePriority:(long long)arg1;
- (void)invalidateEntries;
@end

