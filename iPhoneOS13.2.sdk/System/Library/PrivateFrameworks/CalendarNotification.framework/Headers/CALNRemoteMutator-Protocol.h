//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class EKAlarm, EKCalendarItem, EKEvent;

@protocol CALNRemoteMutator 
- (_Bool)deleteEvent:(EKEvent *)arg1 withSpan:(long long)arg2;
- (void)setParticipantStatus:(long long)arg1 span:(long long)arg2 event:(EKEvent *)arg3;
- (void)setSnoozeTimeInterval:(double)arg1 alarm:(EKAlarm *)arg2 calendarItem:(EKCalendarItem *)arg3;
@end

