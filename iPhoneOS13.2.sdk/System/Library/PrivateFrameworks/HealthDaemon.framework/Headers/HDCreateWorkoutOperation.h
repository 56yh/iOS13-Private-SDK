//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthDaemon/HDJournalableOperation.h>

@class HKDevice, HKQuantity, HKSource, HKWorkout, HKWorkoutConfiguration, NSArray, NSDateInterval, NSDictionary, NSString, NSUUID;

@interface HDCreateWorkoutOperation : HDJournalableOperation
{
    HKWorkoutConfiguration *_workoutConfiguration;
    NSUUID *_identifier;
    NSDateInterval *_dateInterval;
    NSDictionary *_metadata;
    HKDevice *_device;
    HKSource *_source;
    NSString *_sourceVersion;
    NSArray *_events;
    NSDictionary *_statisticsCalculators;
    NSArray *_associatedSeries;
    unsigned long long _goalType;
    HKQuantity *_goal;
    NSArray *_quantityTypesIncludedWhilePaused;
    HKWorkout *_createdWorkout;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) HKWorkout *createdWorkout; // @synthesize createdWorkout=_createdWorkout;
@property(readonly, copy, nonatomic) NSArray *quantityTypesIncludedWhilePaused; // @synthesize quantityTypesIncludedWhilePaused=_quantityTypesIncludedWhilePaused;
@property(readonly, copy, nonatomic) HKQuantity *goal; // @synthesize goal=_goal;
@property(readonly, nonatomic) unsigned long long goalType; // @synthesize goalType=_goalType;
@property(readonly, copy, nonatomic) NSArray *associatedSeries; // @synthesize associatedSeries=_associatedSeries;
@property(readonly, copy, nonatomic) NSDictionary *statisticsCalculators; // @synthesize statisticsCalculators=_statisticsCalculators;
@property(readonly, copy, nonatomic) NSArray *events; // @synthesize events=_events;
@property(readonly, copy, nonatomic) NSString *sourceVersion; // @synthesize sourceVersion=_sourceVersion;
@property(readonly, copy, nonatomic) HKSource *source; // @synthesize source=_source;
@property(readonly, copy, nonatomic) HKDevice *device; // @synthesize device=_device;
@property(readonly, copy, nonatomic) NSDictionary *metadata; // @synthesize metadata=_metadata;
@property(readonly, copy, nonatomic) NSDateInterval *dateInterval; // @synthesize dateInterval=_dateInterval;
@property(readonly, copy, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property(readonly, copy, nonatomic) HKWorkoutConfiguration *workoutConfiguration; // @synthesize workoutConfiguration=_workoutConfiguration;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)performWithProfile:(id)arg1 transaction:(id)arg2 error:(id *)arg3;
- (id)initWithWorkoutConfiguration:(id)arg1 identifier:(id)arg2 dateInterval:(id)arg3 metadata:(id)arg4 device:(id)arg5 source:(id)arg6 sourceVersion:(id)arg7 events:(id)arg8 statisticsCalculators:(id)arg9 associatedSeries:(id)arg10 goalType:(unsigned long long)arg11 goal:(id)arg12 quantityTypesIncludedWhilePaused:(id)arg13;

@end

