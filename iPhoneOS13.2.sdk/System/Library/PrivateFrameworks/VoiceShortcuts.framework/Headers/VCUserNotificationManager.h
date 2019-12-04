//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <VoiceShortcuts/UNUserNotificationCenterDelegate-Protocol.h>

@class NSString, UNUserNotificationCenter;
@protocol VCUserNotificationManagerDelegate;

@interface VCUserNotificationManager : NSObject <UNUserNotificationCenterDelegate>
{
    id <VCUserNotificationManagerDelegate> _delegate;
    UNUserNotificationCenter *_notificationCenter;
}

@property(readonly, nonatomic) UNUserNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property(nonatomic) __weak id <VCUserNotificationManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)userNotificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)removeNotificationsWithTriggerIdentifier:(id)arg1;
- (void)postNotificationThatTrigger:(id)arg1 failedWithError:(id)arg2;
- (void)postNotificationOfType:(unsigned long long)arg1 forTrigger:(id)arg2 workflowReference:(id)arg3 actionIcons:(id)arg4 completion:(id /* block */)arg5;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

