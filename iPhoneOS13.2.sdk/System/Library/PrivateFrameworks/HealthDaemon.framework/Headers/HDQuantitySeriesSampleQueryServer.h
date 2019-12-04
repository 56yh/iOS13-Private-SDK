//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthDaemon/HDQueryServer.h>

@class HKQuantitySample, NSDate, NSUUID;

@interface HDQuantitySeriesSampleQueryServer : HDQueryServer
{
    HKQuantitySample *_sample;
    long long _batchThreshold;
    long long _lastDatumIndex;
    long long _mode;
    unsigned long long _options;
    NSDate *_maximumDeliveredStartDate;
    NSUUID *_latestDeliveredUUID;
    NSDate *_latestDeliveredSampleStartDate;
    id /* block */ _unitTest_batchWillDeliver;
}

+ (_Bool)_enumerateQuantityValuesForPredicate:(id)arg1 orderBySamples:(_Bool)arg2 profile:(id)arg3 error:(id *)arg4 handler:(id /* block */)arg5;
+ (_Bool)_shouldDeliverQuantityWithStartTime:(double)arg1 UUID:(id)arg2 maximumDeliveredStartDate:(id)arg3 latestDeliveredUUID:(id)arg4 orderBySamples:(_Bool)arg5;
+ (id)requiredEntitlements;
+ (Class)queryClass;
@property(copy, nonatomic) id /* block */ unitTest_batchWillDeliver; // @synthesize unitTest_batchWillDeliver=_unitTest_batchWillDeliver;
- (void)_deliverEnumerationResults:(id)arg1 isFinal:(_Bool)arg2;
- (_Bool)_deliverEnumerationResults:(id)arg1 latestUUID:(id)arg2 latestSampleStartTime:(double)arg3 sampleIDsToLookup:(id)arg4 isFinal:(_Bool)arg5 error:(id *)arg6;
- (id)_predicateForEnumerationWithError:(id *)arg1;
- (void)_queue_startEnumerationMode;
- (void)_deliverQuantitySeries:(id)arg1 seriesAnchor:(long long)arg2 isFinal:(_Bool)arg3;
- (void)_queue_startSingleSeriesMode;
- (id)_clientProxy;
- (void)_deliverEmptyResults;
- (void)_deliverError:(id)arg1;
- (void)_queue_start;
- (void)unitTest_setBatchThreshold:(long long)arg1;
- (id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4;

@end

