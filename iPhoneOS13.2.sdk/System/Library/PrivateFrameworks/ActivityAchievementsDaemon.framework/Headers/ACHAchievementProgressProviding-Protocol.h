//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class ACHTemplate, HKQuantity;

@protocol ACHAchievementProgressProviding 
- (HKQuantity *)currentGoalQuantityForTemplate:(ACHTemplate *)arg1;
- (HKQuantity *)currentProgressQuantityForTemplate:(ACHTemplate *)arg1;
- (_Bool)providesProgressForTemplate:(ACHTemplate *)arg1;
@end

