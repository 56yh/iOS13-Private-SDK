//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class CALNTriggeredEventNotificationData, CALNTriggeredEventNotificationSourceNotificationInfo, NSString;

@protocol CALNTriggeredEventNotificationTransitionProvider 
- (unsigned long long)transitionForSourceClientIdentifier:(NSString *)arg1 sourceNotificationInfo:(CALNTriggeredEventNotificationSourceNotificationInfo *)arg2 oldNotificationData:(CALNTriggeredEventNotificationData *)arg3 trigger:(unsigned long long)arg4;
@end

