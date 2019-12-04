//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthUI/HKDateCacheObserver-Protocol.h>

@class HKActivitySummary, HKDateCache, HKDisplayTypeController, HKFetchOperation, HKHealthStore, HKQuery, HKUnitPreferenceController, NSCache, NSCalendar, NSHashTable, NSString;

@interface HKActivitySummaryDataProvider : NSObject <HKDateCacheObserver>
{
    NSHashTable *_observers;
    NSCache *_activitySummaryForTimeScopeCache;
    NSCalendar *_cachedCalendar;
    HKFetchOperation *_outstandingFetchOperation;
    HKQuery *_observerQuery;
    NSCache *_hourlyActivitySummaryCache;
    HKHealthStore *_healthStore;
    HKDateCache *_dateCache;
    HKDisplayTypeController *_displayTypeController;
    HKUnitPreferenceController *_unitController;
}

@property(readonly, nonatomic) HKUnitPreferenceController *unitController; // @synthesize unitController=_unitController;
@property(readonly, nonatomic) HKDisplayTypeController *displayTypeController; // @synthesize displayTypeController=_displayTypeController;
@property(readonly, nonatomic) HKDateCache *dateCache; // @synthesize dateCache=_dateCache;
@property(readonly, nonatomic) HKHealthStore *healthStore; // @synthesize healthStore=_healthStore;
- (id)_predicateForStartDate:(id)arg1 endDate:(id)arg2 calendar:(id)arg3;
- (void)_hourlyActivityDataForStartDate:(id)arg1 endDate:(id)arg2 healthStore:(id)arg3 calendar:(id)arg4 handler:(id /* block */)arg5;
- (id)_hourlySummariesFromStartDate:(id)arg1 endDate:(id)arg2 calendar:(id)arg3 activeEnergyData:(id)arg4 appleMoveTimeData:(id)arg5 exerciseData:(id)arg6 standData:(id)arg7 dayGoalData:(id)arg8;
- (_Bool)_sampleDate:(id)arg1 withinHourAfterDate:(id)arg2;
- (id)_buildHourlyActivitySummaryFromDate:(id)arg1 calendar:(id)arg2 moveQuantity:(id)arg3 exerciseQuantity:(id)arg4 standQuantity:(id)arg5 moveGoal:(id)arg6 exerciseGoal:(id)arg7 standGoal:(id)arg8;
- (void)_hourActivitySummariesForDateRange:(id)arg1 pageHandler:(id /* block */)arg2;
- (void)_hourlyActivityPageDataArrived:(id)arg1 pageNumber:(id)arg2 error:(id)arg3;
- (void)_hourlyPageInProgress:(id)arg1;
- (void)_submitHourlyQueryForPageNumber:(id)arg1 startDate:(id)arg2 endDate:(id)arg3;
- (id)_hourActivitySummariesForDateRange:(id)arg1;
- (id)_buildActivitySummaryFromAverages:(struct _WDActivitySummaryAverages)arg1 startDate:(id)arg2 calendar:(id)arg3 energyUnit:(id)arg4 standHourUnit:(id)arg5;
- (void)_monthActivitySummariesForCachedData:(id)arg1 handler:(id /* block */)arg2;
- (id)_monthActivitySummariesForDateRange:(id)arg1;
- (id)_dayActivitySummariesForDateRange:(id)arg1;
- (id)cachedCalendar;
- (void)dateCacheDidUpdate:(id)arg1 onNotification:(id)arg2;
- (void)_unitPreferencesDidUpdate:(id)arg1;
- (void)_alertObserversDidUpdateValues;
- (void)_clearCaches;
- (void)_stopActivitySummaryChangeObserver;
- (void)_setupActivitySummaryChangeObserver;
- (id)_queriesForTimeScope:(long long)arg1 withCompletion:(id /* block */)arg2;
- (id)_fetchOperationForTimeScope:(long long)arg1 withCompletion:(id /* block */)arg2;
- (void)_transitionToFetchFailureForTimeScope:(long long)arg1;
- (void)_fetchValueWithRetryCount:(long long)arg1;
- (void)_partitionAndProcessActivitySummariesForAllTimeScopes:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)activitySummariesForDateRange:(id)arg1 timeScope:(long long)arg2;
- (id)activitySummariesForTimeScope:(long long)arg1;
@property(readonly, nonatomic) HKActivitySummary *latestActivitySummary;
- (_Bool)activitySummariesAreLoading;
- (void)dealloc;
- (id)initWithHealthStore:(id)arg1 dateCache:(id)arg2 displayTypeController:(id)arg3 unitController:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

