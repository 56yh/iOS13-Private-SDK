//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthUI/HKHealthQueryChartCacheDataSource.h>

@interface HKDailySleepSeriesDataSource : HKHealthQueryChartCacheDataSource
{
    id /* block */ _userInfoCreationBlock;
}

@property(copy, nonatomic) id /* block */ userInfoCreationBlock; // @synthesize userInfoCreationBlock=_userInfoCreationBlock;
- (id)_chartPointFromQueryResult:(id)arg1;
- (id)_dailyChartPointsFromQueryResults:(id)arg1;
- (id)_monthlyChartPointsFromQueryResults:(id)arg1 intervalComponents:(id)arg2 startDate:(id)arg3;
- (void)_handleSamples:(id)arg1 blockStart:(id)arg2 blockEnd:(id)arg3 intervalComponents:(id)arg4 completion:(id /* block */)arg5;
- (id)queriesForStartDate:(id)arg1 endDate:(id)arg2 statisticsInterval:(id)arg3 completionHandler:(id /* block */)arg4;

@end

