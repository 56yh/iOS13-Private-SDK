//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CalendarDaemon/CADOperationGroup.h>

#import <CalendarDaemon/CADNotificationMonitorInterface-Protocol.h>

__attribute__((visibility("hidden")))
@interface CADNotificationMonitorOperationGroup : CADOperationGroup <CADNotificationMonitorInterface>
{
}

+ (id)whitelistedBundles;
+ (_Bool)requiresEventOrReminderAccess;
+ (_Bool)requiresReminderAccess;
+ (_Bool)requiresEventAccess;
- (void)CADEventSetInvitationStatus:(int)arg1 forEvent:(id)arg2 error:(id /* block */)arg3;
- (void)CADInviteReplyNotification:(id)arg1 setAlertedWithError:(id /* block */)arg2;
- (void)CADResourceChange:(id)arg1 setAlertedWithError:(id /* block */)arg2;
- (void)CADCalendar:(id)arg1 setAlertedWithError:(id /* block */)arg2;
- (void)CADEvent:(id)arg1 setAlertedWithError:(id /* block */)arg2;
- (void)CADDatabaseGetInboxRepliedSectionItems:(id /* block */)arg1;
- (void)CADDatabaseGetNotificationCountForSourceWithExternalIdentifier:(id)arg1 excludingDelegateSources:(_Bool)arg2 filteredByShowsNotificationsFlag:(_Bool)arg3 reply:(id /* block */)arg4;
- (void)CADDatabaseGetEventNotificationItemsFilteredByShowsNotificationsFlag:(_Bool)arg1 reply:(id /* block */)arg2;
- (void)CADDatabaseGetInviteReplyNotifications:(id /* block */)arg1;
- (void)CADDatabaseGetResourceChanges:(id /* block */)arg1;
- (void)CADCalendarSetClearedFromNotificationCenter:(id)arg1 error:(id /* block */)arg2;
- (void)CADDatabaseGetSharedCalendarInvitationsWithReply:(id /* block */)arg1;

@end

