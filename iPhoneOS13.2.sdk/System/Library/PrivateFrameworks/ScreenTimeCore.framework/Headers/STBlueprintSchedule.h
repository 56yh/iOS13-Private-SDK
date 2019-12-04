//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

#import <ScreenTimeCore/STSerializableManagedObject-Protocol.h>
#import <ScreenTimeCore/STSyncableSubObject-Protocol.h>

@class NSDate, NSNumber, NSString, STBlueprint, STBlueprintScheduleRepresentation;
@protocol STSerializableManagedObject;

@interface STBlueprintSchedule : NSManagedObject <STSerializableManagedObject, STSyncableSubObject>
{
}

+ (id)keyPathsForValuesAffectingScheduleRepresentation;
+ (id)endDateKeyPaths;
+ (id)startDateKeyPaths;
@property(readonly) id <STSerializableManagedObject> syncableRootObject;
- (id)dictionaryRepresentation;
- (_Bool)updateWithDictionaryRepresentation:(id)arg1;
- (void)setStartTime:(id)arg1 endTime:(id)arg2 forDay:(unsigned long long)arg3;
- (void)setStartTime:(id)arg1 endTime:(id)arg2;
@property(retain, nonatomic) STBlueprintScheduleRepresentation *scheduleRepresentation;

// Remaining properties
@property(readonly, nonatomic) STBlueprint *blueprint; // @dynamic blueprint;
@property(copy, nonatomic) NSString *calendarIdentifier; // @dynamic calendarIdentifier;
@property(retain, nonatomic) NSDate *day0End; // @dynamic day0End;
@property(retain, nonatomic) NSDate *day0Start; // @dynamic day0Start;
@property(retain, nonatomic) NSDate *day1End; // @dynamic day1End;
@property(retain, nonatomic) NSDate *day1Start; // @dynamic day1Start;
@property(retain, nonatomic) NSDate *day2End; // @dynamic day2End;
@property(retain, nonatomic) NSDate *day2Start; // @dynamic day2Start;
@property(retain, nonatomic) NSDate *day3End; // @dynamic day3End;
@property(retain, nonatomic) NSDate *day3Start; // @dynamic day3Start;
@property(retain, nonatomic) NSDate *day4End; // @dynamic day4End;
@property(retain, nonatomic) NSDate *day4Start; // @dynamic day4Start;
@property(retain, nonatomic) NSDate *day5End; // @dynamic day5End;
@property(retain, nonatomic) NSDate *day5Start; // @dynamic day5Start;
@property(retain, nonatomic) NSDate *day6End; // @dynamic day6End;
@property(retain, nonatomic) NSDate *day6Start; // @dynamic day6Start;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(retain, nonatomic) NSNumber *notificationTimeInterval; // @dynamic notificationTimeInterval;
@property(readonly) Class superclass;

@end

