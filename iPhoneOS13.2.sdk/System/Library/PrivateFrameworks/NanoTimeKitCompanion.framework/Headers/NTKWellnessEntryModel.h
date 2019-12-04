//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKTimelineEntryModel.h>

#import <NanoTimeKitCompanion/CLKTimelineEntry-Protocol.h>


@class HKQuantity, NSArray, NSString;

@interface NTKWellnessEntryModel : NTKTimelineEntryModel <NSCopying, CLKTimelineEntry>
{
    _Bool _databaseLoading;
    _Bool _deviceLocked;
    HKQuantity *_activeEnergyTotal;
    HKQuantity *_activeEnergyGoal;
    double _appleExerciseTimeTotal;
    double _appleExerciseTimeGoal;
    long long _appleStandHoursTotal;
    long long _appleStandHoursGoal;
    NSArray *_activeEnergyChartData;
    NSArray *_appleExerciseTimeChartData;
    NSArray *_appleStandHourChartData;
}

+ (id)_LocalizedStringWithActiveEnergy:(id)arg1;
+ (id)formattingManager;
+ (id)_signatureRectangleFromModel:(id)arg1;
+ (id)_signatureBezelFromModel:(id)arg1;
+ (id)_signatureCornerFromModel:(id)arg1;
+ (id)largeUtility:(id)arg1;
+ (id)largeModular:(id)arg1;
+ (id)_activityTemplateWithFamily:(long long)arg1 entryModel:(id)arg2;
+ (id)idealizedEntryModel;
+ (id)lockedEntryModel;
@property(readonly, nonatomic) _Bool deviceLocked; // @synthesize deviceLocked=_deviceLocked;
@property(nonatomic) _Bool databaseLoading; // @synthesize databaseLoading=_databaseLoading;
@property(retain, nonatomic) NSArray *appleStandHourChartData; // @synthesize appleStandHourChartData=_appleStandHourChartData;
@property(retain, nonatomic) NSArray *appleExerciseTimeChartData; // @synthesize appleExerciseTimeChartData=_appleExerciseTimeChartData;
@property(retain, nonatomic) NSArray *activeEnergyChartData; // @synthesize activeEnergyChartData=_activeEnergyChartData;
@property(nonatomic) long long appleStandHoursGoal; // @synthesize appleStandHoursGoal=_appleStandHoursGoal;
@property(nonatomic) long long appleStandHoursTotal; // @synthesize appleStandHoursTotal=_appleStandHoursTotal;
@property(nonatomic) double appleExerciseTimeGoal; // @synthesize appleExerciseTimeGoal=_appleExerciseTimeGoal;
@property(nonatomic) double appleExerciseTimeTotal; // @synthesize appleExerciseTimeTotal=_appleExerciseTimeTotal;
@property(retain, nonatomic) HKQuantity *activeEnergyGoal; // @synthesize activeEnergyGoal=_activeEnergyGoal;
@property(retain, nonatomic) HKQuantity *activeEnergyTotal; // @synthesize activeEnergyTotal=_activeEnergyTotal;
- (id)loggingString;
- (id)date;
- (void)setDate:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)availabilityState;
- (double)appleStandHourCompletionPercentage;
- (double)appleExerciseTimeCompletionPercentage;
- (double)activeEnergyCompletionPercentage;
@property(readonly, nonatomic) _Bool userHasDoneActivitySetup;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (id)templateForComplicationFamily:(long long)arg1;

// Remaining properties
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
