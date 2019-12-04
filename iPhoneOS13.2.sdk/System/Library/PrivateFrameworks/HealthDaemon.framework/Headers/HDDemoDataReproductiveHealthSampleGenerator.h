//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthDaemon/HDDemoDataBaseSampleGenerator.h>

@class HDProfile, NSArray;

@interface HDDemoDataReproductiveHealthSampleGenerator : HDDemoDataBaseSampleGenerator
{
    HDProfile *_profile;
    NSArray *_basalBodyTempMultiplierTable;
    NSArray *_cervicalMucusTable;
    double _nextSexualActivitySampleTime;
    double _nextCycleDaySampleTime;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) double nextCycleDaySampleTime; // @synthesize nextCycleDaySampleTime=_nextCycleDaySampleTime;
@property(nonatomic) double nextSexualActivitySampleTime; // @synthesize nextSexualActivitySampleTime=_nextSexualActivitySampleTime;
@property(copy, nonatomic) NSArray *cervicalMucusTable; // @synthesize cervicalMucusTable=_cervicalMucusTable;
@property(copy, nonatomic) NSArray *basalBodyTempMultiplierTable; // @synthesize basalBodyTempMultiplierTable=_basalBodyTempMultiplierTable;
@property(retain, nonatomic) HDProfile *profile; // @synthesize profile=_profile;
- (long long)_computeNextLuteinizingHormoneSurgeForDemoPerson:(id)arg1 atTime:(double)arg2;
- (_Bool)_isDemoPersonOvulating:(id)arg1 atTime:(double)arg2;
- (id)_basalBodyTempMultiplier;
- (id)headacheSymptomForDemoPerson:(id)arg1 withSampleDate:(id)arg2;
- (id)menstrualCrampSymptomForDemoPerson:(id)arg1 withSampleDate:(id)arg2;
- (struct HDDemoDataMenstrualFlow)menstrualFlowForDemoPerson:(id)arg1 withSampleDate:(id)arg2;
- (id)ovulationTestResultForDemoPerson:(id)arg1 withSampleDate:(id)arg2;
- (id)cervicalMucusQualityForDemoPerson:(id)arg1 atTime:(double)arg2;
- (id)basalBodyTempForDemoPerson:(id)arg1 atTime:(double)arg2;
- (id)sexualActivityForDemoPerson:(id)arg1 atTime:(double)arg2;
- (void)completeOnboardingForDemoPerson:(id)arg1;
- (void)addSymptomSampleForDemoPersonFromWatch:(id)arg1 date:(id)arg2 categoryType:(id)arg3 objectCollection:(id)arg4;
- (void)addMenstruationSampleForDemoPersonFromWatch:(id)arg1 date:(id)arg2 flow:(struct HDDemoDataMenstrualFlow)arg3 objectCollection:(id)arg4;
- (void)generateSamplesForDemoPerson:(id)arg1 atTime:(double)arg2 sampleDate:(id)arg3 objectCollection:(id)arg4;
- (void)setupWithDemoDataGenerator:(id)arg1;
- (void)generateWatchFirstRunSampleForDemoPerson:(id)arg1 firstDate:(id)arg2 objectCollection:(id)arg3;
- (void)generatePhoneFirstRunSampleForDemoPerson:(id)arg1 firstDate:(id)arg2 objectCollection:(id)arg3;
- (void)generateFirstRunSampleForDemoPerson:(id)arg1 firstDate:(id)arg2 objectCollection:(id)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

