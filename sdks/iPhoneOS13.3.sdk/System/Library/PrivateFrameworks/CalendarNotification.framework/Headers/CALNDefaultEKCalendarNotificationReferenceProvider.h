//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CalendarNotification/CALNEKCalendarNotificationReferenceProvider-Protocol.h>

@interface CALNDefaultEKCalendarNotificationReferenceProvider : NSObject <CALNEKCalendarNotificationReferenceProvider>
{
}

+ (id)sharedInstance;
- (id)notificationReferenceForObjectID:(id)arg1 withType:(int)arg2 date:(id)arg3 inEventStore:(id)arg4;
- (id)notificationReferenceForObjectID:(id)arg1 withType:(int)arg2 inEventStore:(id)arg3;

@end
