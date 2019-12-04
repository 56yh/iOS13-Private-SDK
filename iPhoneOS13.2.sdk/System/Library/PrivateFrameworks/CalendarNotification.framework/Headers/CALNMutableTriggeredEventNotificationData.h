//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CalendarNotification/CALNTriggeredEventNotificationData.h>



@class EKTravelEngineHypothesis, NSDate, NSString;

@interface CALNMutableTriggeredEventNotificationData : CALNTriggeredEventNotificationData <NSCopying>
{
}

@property(copy, nonatomic) NSDate *lastTimeNotificationAdded; // @dynamic lastTimeNotificationAdded;
@property(nonatomic) _Bool hasDisplayedRunningLateMessage; // @dynamic hasDisplayedRunningLateMessage;
@property(nonatomic) _Bool hasDisplayedLeaveNowMessage; // @dynamic hasDisplayedLeaveNowMessage;
@property(nonatomic) _Bool hasDisplayedLeaveByMessage; // @dynamic hasDisplayedLeaveByMessage;
@property(copy, nonatomic) EKTravelEngineHypothesis *hypothesis; // @dynamic hypothesis;
@property(copy, nonatomic) NSDate *lastFireTimeOfAlertOffsetFromTravelTime; // @dynamic lastFireTimeOfAlertOffsetFromTravelTime;
@property(nonatomic) _Bool isOffsetFromTravelTimeStart; // @dynamic isOffsetFromTravelTimeStart;
@property(copy, nonatomic) NSString *alarmID; // @dynamic alarmID;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

