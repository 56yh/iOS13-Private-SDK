//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeKitDaemon/HMDTrigger.h>

@class NSArray, NSDate, NSDateComponents, NSString, NSTimeZone, NSTimer;

@interface HMDTimerTrigger : HMDTrigger
{
    NSDate *_fireDate;
    NSTimeZone *_fireDateTimeZone;
    NSString *_significantEvent;
    NSDateComponents *_significantEventOffset;
    NSDateComponents *_fireRepeatInterval;
    NSArray *_recurrences;
    NSString *_timerID;
    NSDate *_currentFireDate;
    NSTimer *_timer;
}

+ (_Bool)supportsSecureCoding;
+ (id)getCalendar:(id)arg1;
+ (id)validateWholeMinuteDate:(id)arg1 onCalendar:(id)arg2;
+ (id)validateTriggerModel:(id)arg1 message:(id)arg2 currentFireDate:(id)arg3;
+ (id)validateRecurrences:(id)arg1;
+ (id)validateSignificantOffset:(id)arg1;
+ (id)validateRecurrence:(id)arg1 calendar:(id)arg2 fireDate:(id)arg3;
+ (id)logCategory;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) NSDate *currentFireDate; // @synthesize currentFireDate=_currentFireDate;
@property(retain, nonatomic) NSString *timerID; // @synthesize timerID=_timerID;
@property(copy, nonatomic) NSArray *recurrences; // @synthesize recurrences=_recurrences;
@property(copy, nonatomic) NSDateComponents *fireRepeatInterval; // @synthesize fireRepeatInterval=_fireRepeatInterval;
@property(copy, nonatomic) NSDateComponents *significantEventOffset; // @synthesize significantEventOffset=_significantEventOffset;
@property(copy, nonatomic) NSString *significantEvent; // @synthesize significantEvent=_significantEvent;
@property(copy, nonatomic) NSTimeZone *fireDateTimeZone; // @synthesize fireDateTimeZone=_fireDateTimeZone;
@property(copy, nonatomic) NSDate *fireDate; // @synthesize fireDate=_fireDate;
- (void)timerFired:(id)arg1;
- (void)_transactionObjectRemoved:(id)arg1 message:(id)arg2;
- (void)_transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)getFireInterval;
- (id)getCalendar;
- (void)_closestDatesForStartDate:(id)arg1 earliestDate:(id)arg2 timeZone:(id)arg3 deliveryRepeatInterval:(id)arg4 returnDateBefore:(id *)arg5 returnDateAfter:(id *)arg6;
- (void)_reactiveTriggerAfterDelay;
- (void)_timerTriggered;
- (_Bool)_shouldExecuteActionSet;
- (id)_nextSignificantEventFireDate;
- (id)_nextFireDate;
- (void)_activateWithCompletion:(id /* block */)arg1;
- (_Bool)shouldActivateOnLocalDevice;
- (void)_disableTimerOffReactivationFailure;
- (_Bool)_reactivateSignificantEventTrigger;
- (_Bool)_reactivateFireDateTrigger;
- (_Bool)_reactivateTrigger;
- (id)_serializeForAdd;
- (id)backingStoreObjects:(long long)arg1;
- (id)emptyModelObject;
- (id)modelObjectWithChangeType:(unsigned long long)arg1;
- (void)_handleTimerTriggerUpdate:(id)arg1 message:(id)arg2;
- (void)_handleUpdateTimerTriggerPropertiesModel:(id)arg1 message:(id)arg2;
- (void)_handleUpdateTimerTriggerPropertiesRequest:(id)arg1;
- (void)_registerForMessages;
- (void)_stopTimer;
- (void)_startTimer:(id)arg1;
- (void)_startTimerWithSignificantEventDate:(id)arg1;
- (void)_startTimerWithFireDate:(id)arg1;
- (void)nsTimerTriggered:(id)arg1;
- (void)timerTriggered;
- (void)dealloc;
- (void)completeConfiguration;
- (void)configure:(id)arg1 messageDispatcher:(id)arg2 queue:(id)arg3;
- (unsigned long long)triggerType;
- (id)dumpState;
- (id)description;
- (id)initWithModel:(id)arg1 home:(id)arg2 message:(id)arg3;
- (id)initWithName:(id)arg1 uuid:(id)arg2;

@end

