//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface ICShareNotifier : NSObject
{
}

+ (void)setShouldPreventNotifications:(_Bool)arg1 forRecordID:(id)arg2;
+ (_Bool)shouldPreventNotificationsForRecordID:(id)arg1;
+ (id)defaultsKeyForPreventingNotificationsForIdentifier:(id)arg1;
+ (id)displayableEditorNames:(id)arg1;
+ (id)notificationTitleForEditors:(id)arg1;
+ (void)showNotificationWithTitle:(id)arg1 message:(id)arg2 userInfo:(id)arg3;
+ (void)showNotificationForNote:(id)arg1 editors:(id)arg2;
+ (id)participantsWithReplicaIDs:(id)arg1 inNote:(id)arg2;
+ (id)replicaIDsThatEditedTimestamp:(id)arg1 sinceTimestamp:(id)arg2;
+ (_Bool)shouldShowNotificationForNote:(id)arg1;
+ (void)showNotificationIfNecessaryForCloudObject:(id)arg1 accountID:(id)arg2;
+ (void)clearNotificationForRecordID:(id)arg1;

@end

