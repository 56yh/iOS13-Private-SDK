//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ACHActivityAwardingDataProvider, ACHActivityAwardingDateCache;

@interface ACHActivityAwardingEnvironment : NSObject
{
    _Bool _valueForKeyLoggingEnabled;
    ACHActivityAwardingDataProvider *_dataProvider;
    ACHActivityAwardingDateCache *_dateCache;
}

@property(retain, nonatomic) ACHActivityAwardingDateCache *dateCache; // @synthesize dateCache=_dateCache;
@property(retain, nonatomic) ACHActivityAwardingDataProvider *dataProvider; // @synthesize dataProvider=_dataProvider;
@property(nonatomic) _Bool valueForKeyLoggingEnabled; // @synthesize valueForKeyLoggingEnabled=_valueForKeyLoggingEnabled;
- (id)requiredDaysOfActivityHistoryForStreaks;
- (id)requiredDaysOfActivityHistoryForRecords;
- (id)dayOfMonthForToday;
- (id)numberOfDaysInThisMonth;
- (id)dayOfWeekForLastDayOfFitnessWeek;
- (id)dayOfWeekForToday;
- (id)currentStreakForAllActivity;
- (id)previousStandPercentage;
- (id)currentStandPercentage;
- (id)previousBestStandStreak;
- (id)bestStandStreak;
- (id)currentStandStreak;
- (id)totalStandGoalsMet;
- (id)totalDaysOfStandHistory;
- (id)bestStandGoal;
- (id)previousBestStandGoal;
- (id)bestStandValue;
- (id)yesterdayStandValue;
- (id)todayStandGoal;
- (id)todayStandValue;
- (id)previousExercisePercentage;
- (id)currentExercisePercentage;
- (id)previousBestExerciseStreak;
- (id)bestExerciseStreak;
- (id)currentExerciseStreak;
- (id)totalExerciseGoalsMet;
- (id)totalDaysOfExerciseHistory;
- (id)bestExerciseGoal;
- (id)previousBestExerciseGoal;
- (id)bestExerciseValue;
- (id)yesterdayExerciseValue;
- (id)todayExerciseGoal;
- (id)todayExerciseValue;
- (id)previousMovePercentage;
- (id)currentMovePercentage;
- (id)previousBestMoveStreak;
- (id)bestMoveStreak;
- (id)currentMoveStreak;
- (id)totalMoveGoalsMet;
- (id)totalDaysOfMoveHistory;
- (id)bestMoveGoal;
- (id)previousBestMoveGoal;
- (id)bestMoveValue;
- (id)yesterdayMoveValue;
- (id)todayMoveGoal;
- (id)todayMoveValue;
- (id)valueForUndefinedKey:(id)arg1;
- (id)valueForKey:(id)arg1;
- (void)setCurrentDateComponents:(id)arg1;
- (id)initWithDataProvider:(id)arg1;

@end

