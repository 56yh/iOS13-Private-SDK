//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Home/UNUserNotificationCenterDelegate-Protocol.h>

@class NAFuture, NSHashTable, NSString, UNUserNotificationCenter;
@protocol HFUserNotificationPresentationHandling;

@interface HFUserNotificationCenter : NSObject <UNUserNotificationCenterDelegate>
{
    UNUserNotificationCenter *_userNotificationCenter;
    id <HFUserNotificationPresentationHandling> _presentationHandler;
    NAFuture *_notificationSettingsFuture;
    NSHashTable *_observers;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) NAFuture *notificationSettingsFuture; // @synthesize notificationSettingsFuture=_notificationSettingsFuture;
@property(nonatomic) __weak id <HFUserNotificationPresentationHandling> presentationHandler; // @synthesize presentationHandler=_presentationHandler;
@property(retain, nonatomic) UNUserNotificationCenter *userNotificationCenter; // @synthesize userNotificationCenter=_userNotificationCenter;
- (void)userNotificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)userNotificationCenter:(id)arg1 openSettingsForNotification:(id)arg2;
- (id)notificationSettings;
- (void)userNotificationCenter:(id)arg1 willPresentNotification:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)_applicationWillEnterForeground;
- (void)_applicationDidEnterBackground;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

