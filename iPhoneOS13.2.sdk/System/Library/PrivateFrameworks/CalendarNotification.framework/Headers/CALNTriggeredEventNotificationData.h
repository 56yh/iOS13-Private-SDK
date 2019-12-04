//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>





@class EKTravelEngineHypothesis, NSDate, NSString;

@interface CALNTriggeredEventNotificationData : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>
{
    NSString *_alarmID;
    _Bool _isOffsetFromTravelTimeStart;
    NSDate *_lastFireTimeOfAlertOffsetFromTravelTime;
    EKTravelEngineHypothesis *_hypothesis;
    _Bool _hasDisplayedLeaveByMessage;
    _Bool _hasDisplayedLeaveNowMessage;
    _Bool _hasDisplayedRunningLateMessage;
    NSDate *_lastTimeNotificationAdded;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSDate *lastTimeNotificationAdded; // @synthesize lastTimeNotificationAdded=_lastTimeNotificationAdded;
@property(readonly, nonatomic) _Bool hasDisplayedRunningLateMessage; // @synthesize hasDisplayedRunningLateMessage=_hasDisplayedRunningLateMessage;
@property(readonly, nonatomic) _Bool hasDisplayedLeaveNowMessage; // @synthesize hasDisplayedLeaveNowMessage=_hasDisplayedLeaveNowMessage;
@property(readonly, nonatomic) _Bool hasDisplayedLeaveByMessage; // @synthesize hasDisplayedLeaveByMessage=_hasDisplayedLeaveByMessage;
@property(readonly, copy, nonatomic) EKTravelEngineHypothesis *hypothesis; // @synthesize hypothesis=_hypothesis;
@property(readonly, copy, nonatomic) NSDate *lastFireTimeOfAlertOffsetFromTravelTime; // @synthesize lastFireTimeOfAlertOffsetFromTravelTime=_lastFireTimeOfAlertOffsetFromTravelTime;
@property(readonly, nonatomic) _Bool isOffsetFromTravelTimeStart; // @synthesize isOffsetFromTravelTimeStart=_isOffsetFromTravelTimeStart;
@property(readonly, copy, nonatomic) NSString *alarmID; // @synthesize alarmID=_alarmID;
- (id)description;
- (_Bool)isEqualToNotificationData:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_initWithAlarmID:(id)arg1 isOffsetFromTravelTimeStart:(_Bool)arg2 lastFireTimeOfAlertOffsetFromTravelTime:(id)arg3 hypothesis:(id)arg4 hasDisplayedLeaveByMessage:(_Bool)arg5 hasDisplayedLeaveNowMessage:(_Bool)arg6 hasDisplayedRunningLateMessage:(_Bool)arg7 lastTimeNotificationAdded:(id)arg8;
- (id)init;

@end

