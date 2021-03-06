//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthToolbox/WDSampleListDataProvider.h>

@class HKDisplayTypeValueFormatter, NSDateFormatter, NSMutableArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface WDAppleStandHourStatisticsListDataProvider : WDSampleListDataProvider
{
    NSMutableArray *_orderedTimePeriods;
    NSMutableDictionary *_totalsByTimePeriod;
    HKDisplayTypeValueFormatter *_valueFormatter;
    NSDateFormatter *_dateFormatter;
}

// - (void).cxx_destruct;
- (id)viewControllerForItemAtIndexPath:(id)arg1;
- (void)deleteObjectsAtIndexPath:(id)arg1 healthStore:(id)arg2 options:(NSUInteger)arg3 completion:(id /* CDUnknownBlockType */)arg4;
- (void)deleteAllData;
- (void)_removeSamplesInDateRange:(id)arg1;
- (void)removeObjectAtIndex:(NSUInteger)arg1 forSection:(NSUInteger)arg2 sectionRemoved:(BOOL )arg3;
- (id)secondaryTextForObject:(id)arg1;
- (id)textForObject:(id)arg1;
- (id)objectAtIndex:(NSUInteger)arg1 forSection:(NSUInteger)arg2;
- (NSUInteger)numberOfObjectsForSection:(NSUInteger)arg1;
- (id)titleForSection:(NSUInteger)arg1;
- (NSUInteger)numberOfSections;
- (long long)cellStyle;
- (id)predicateForType:(id)arg1;
- (id)sampleTypes;
- (id)_samplesSortDescriptor;
- (void)_callUpdateHandler;
- (id)initWithDisplayType:(id)arg1 profile:(id)arg2;

@end

