//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDPeriodicActivityDelegate-Protocol.h>

@class HDAssertion, HDPeriodicActivity, HDProfile, NSString, _HDWorkoutCondenserAnalyticsAccumulator;
@protocol OS_dispatch_queue;

@interface HDWorkoutCondenser : NSObject <HDPeriodicActivityDelegate>
{
    NSObject<OS_dispatch_queue> *_queue;
    HDPeriodicActivity *_periodicActivity;
    HDAssertion *_preparedDatabaseAccessibilityAssertion;
    long long _minimumSeriesSize;
    long long _maximumSeriesSize;
    long long _deletedSamplesThreshold;
    HDProfile *_profile;
    _HDWorkoutCondenserAnalyticsAccumulator *_analyticsAccumulator;
}

+ (id)condensableQuantityTypes;
+ (void)_logCondenserProcessedWorkout:(id)arg1;
+ (id)_seriesSyncIdentifierForWorkout:(id)arg1 startTime:(double)arg2 endTime:(double)arg3 count:(long long)arg4;
+ (_Bool)_updateCondenserVersionForWorkout:(id)arg1 configuration:(id)arg2 error:(id *)arg3;
+ (id)_dataOriginProvenanceForQuantitySampleEntity:(id)arg1 configuration:(id)arg2 transaction:(id)arg3 error:(id *)arg4;
+ (_Bool)_deleteSamplesWithUUIDData:(id)arg1 configuration:(id)arg2 error:(id *)arg3;
+ (id)_requiredMetadataForEntity:(id)arg1 quantityType:(id)arg2 workout:(id)arg3 transaction:(id)arg4 error:(id *)arg5;
+ (_Bool)_finishSeries:(id)arg1 quantityType:(id)arg2 workout:(id)arg3 UUIDDataToDelete:(id)arg4 configuration:(id)arg5 transaction:(id)arg6 error:(id *)arg7;
+ (id)_insertValuesForSeries:(id)arg1 quantityType:(id)arg2 startTime:(double)arg3 values:(id)arg4 provenance:(id)arg5 configuration:(id)arg6 transaction:(id)arg7 countOut:(long long *)arg8 error:(id *)arg9;
+ (_Bool)_createSeriesForIdentifier:(id)arg1 workout:(id)arg2 quantityType:(id)arg3 startTime:(double)arg4 values:(id)arg5 UUIDDataToDelete:(id)arg6 provenance:(id)arg7 configuration:(id)arg8 transaction:(id)arg9 error:(id *)arg10;
+ (void)_addDatumToBuffer:(id)arg1 buffer:(id)arg2;
+ (_Bool)_processSamplesWithQuantityType:(id)arg1 workout:(id)arg2 predicate:(id)arg3 configuration:(id)arg4 transaction:(id)arg5 error:(id *)arg6;
+ (long long)_hasMoreThanMinimumNumberOfSingleValueSamplesWithEntity:(id)arg1 enumerationPredicate:(id)arg2 configuration:(id)arg3 transaction:(id)arg4 error:(id *)arg5;
+ (long long)_hasSamplesThatOverlapInTimeWithEntity:(id)arg1 enumerationPredicate:(id)arg2 configuration:(id)arg3 transaction:(id)arg4 error:(id *)arg5;
+ (long long)_requiresProcessingWithEntity:(id)arg1 quantityType:(id)arg2 enumerationPredicate:(id)arg3 configuration:(id)arg4 transaction:(id)arg5 error:(id *)arg6;
+ (_Bool)_condenseSamplesWithQuantityType:(id)arg1 workout:(id)arg2 entity:(id)arg3 predicate:(id)arg4 configuration:(id)arg5 transaction:(id)arg6 error:(id *)arg7;
+ (id)_condenserPredicateForQuantityType:(id)arg1 workout:(id)arg2 entity:(id)arg3 configuration:(id)arg4;
+ (_Bool)_condenseWorkout:(id)arg1 entity:(id)arg2 configuration:(id)arg3 error:(id *)arg4;
+ (_Bool)_condenseAndUpdateWorkout:(id)arg1 configuration:(id)arg2 error:(id *)arg3;
+ (_Bool)_condenseWorkouts:(id)arg1 configuration:(id)arg2 error:(id *)arg3;
+ (id)_workoutEntitiesRequiringCondensationWithPredicate:(id)arg1 limit:(long long)arg2 orderingTerms:(id)arg3 transaction:(id)arg4 error:(id *)arg5;
+ (id)_workoutEntitiesRequiringCondensationWithProfile:(id)arg1 limit:(long long)arg2 allowRecondensation:(_Bool)arg3 analyticsAccumulator:(id)arg4 error:(id *)arg5;
+ (id)seriesSyncIdentifierForEntity:(id)arg1 workout:(id)arg2 transaction:(id)arg3 error:(id *)arg4;
+ (id)workoutEntitiesRequiringCondensationWithProfile:(id)arg1 limit:(long long)arg2 allowRecondensation:(_Bool)arg3 error:(id *)arg4;
@property(readonly, nonatomic) _HDWorkoutCondenserAnalyticsAccumulator *analyticsAccumulator; // @synthesize analyticsAccumulator=_analyticsAccumulator;
@property(readonly, nonatomic) __weak HDProfile *profile; // @synthesize profile=_profile;
- (void)performPeriodicActivity:(id)arg1 completion:(id /* block */)arg2;
- (void)periodicActivity:(id)arg1 configureXPCActivityCriteria:(id)arg2;
- (void)_queue_submitAnalyticEventForReason:(long long)arg1 batchSize:(long long)arg2 success:(_Bool)arg3 duration:(double)arg4 analyticsAccumulator:(id)arg5 error:(id)arg6;
- (void)_queue_popTTRPromptIfRequiredWithReason:(long long)arg1 success:(_Bool)arg2 error:(id)arg3;
- (_Bool)_queue_condenseWorkoutsWithAccessibilityAssertion:(id)arg1 batchLimit:(long long)arg2 analyticsAccumulator:(id)arg3 error:(id *)arg4;
- (_Bool)_queue_condenseWorkoutsWithBatchLimit:(long long)arg1 analyticsAccumulator:(id)arg2 error:(id *)arg3;
- (void)_queue_didPerformCondensationForReason:(long long)arg1 success:(_Bool)arg2 error:(id)arg3;
- (void)setDeletedSamplesThreshold:(long long)arg1;
- (void)setMaximumSeriesSize:(long long)arg1;
- (void)setMinimumSeriesSize:(long long)arg1;
- (id)condensableWorkoutsWithError:(id *)arg1;
- (id)condensedWorkoutsWithError:(id *)arg1;
- (_Bool)condenseWorkout:(id)arg1 error:(id *)arg2;
- (void)condenseWorkoutsForReason:(long long)arg1 workoutBatchLimit:(long long)arg2 completion:(id /* block */)arg3;
- (void)dealloc;
- (id)initWithProfile:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

