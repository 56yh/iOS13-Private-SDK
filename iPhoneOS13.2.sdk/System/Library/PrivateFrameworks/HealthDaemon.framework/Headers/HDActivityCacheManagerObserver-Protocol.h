//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class HDActivityCacheManager, HKActivityCache, HKHeartRateSummary;

@protocol HDActivityCacheManagerObserver 
- (void)activityCacheManager:(HDActivityCacheManager *)arg1 changedTodayActivityCache:(HKActivityCache *)arg2;

@optional
- (void)activityCacheManager:(HDActivityCacheManager *)arg1 changedHeartRateSummary:(HKHeartRateSummary *)arg2 isToday:(_Bool)arg3;
- (void)activityCacheManager:(HDActivityCacheManager *)arg1 changedYesterdayActivityCache:(HKActivityCache *)arg2;
@end

