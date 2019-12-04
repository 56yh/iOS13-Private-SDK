//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class HKChartCacheFetchOperation, HKDisplayType, NSDateComponents;
@protocol NSCopying;

@protocol HKChartCacheDataSource 
- (NSDateComponents *)statisticsIntervalForTimeScope:(long long)arg1 displayType:(HKDisplayType *)arg2;
- (unsigned long long)calendarUnitForTimeScope:(long long)arg1 displayType:(HKDisplayType *)arg2;
- (HKGraphSeriesDataBlock * (^)(id))mappingFunctionForContext:(id)arg1;
- (HKChartCacheFetchOperation *)operationForIdentifier:(id <NSCopying>)arg1 completion:(void (^)(HKChartCacheFetchOperation *, id, NSError *))arg2;
@end

