//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDDiagnosticObject-Protocol.h>

@class HDProfile, NSDate, NSHashTable, NSString, UNUserNotificationCenter;
@protocol OS_dispatch_queue;

@interface HDNotificationManager : NSObject <HDDiagnosticObject>
{
    HDProfile *_profile;
    NSHashTable *_observers;
    NSObject<OS_dispatch_queue> *_clientQueue;
    NSObject<OS_dispatch_queue> *_observerQueue;
    NSObject<OS_dispatch_queue> *_resourceQueue;
    NSDate *_lastNotificationDate;
    UNUserNotificationCenter *_userNotificationCenter;
}

@property(retain, nonatomic) UNUserNotificationCenter *userNotificationCenter; // @synthesize userNotificationCenter=_userNotificationCenter;
- (id)diagnosticDescription;
- (void)_postBadgesDidUpdateNotification;
- (id /* block */)_objectCompletionOnClientQueue:(id /* block */)arg1;
- (id /* block */)_actionCompletionOnClientQueue:(id /* block */)arg1;
- (void)_resourceQueue_updateApplicationBadge;
- (id)_resourceQueue_coaleseDomainBadges;
- (_Bool)_resourceQueue_setBadge:(id)arg1 domain:(long long)arg2 error:(out id *)arg3;
- (id)_resourceQueue_badgeForDomain:(long long)arg1 error:(out id *)arg2;
- (id)_resourceQueue_badgeForDomain:(long long)arg1;
- (id)_aggregateBadge;
- (id)_badgeForDomain:(long long)arg1 error:(out id *)arg2;
- (void)_resourceQueue_notifyObserversWithBadge:(id)arg1 domain:(long long)arg2;
- (void)_resourceQueue_notifyObserversWithNotification:(id)arg1;
- (void)removeNotificationObserver:(id)arg1;
- (void)addNotificationObserver:(id)arg1;
- (void)removeDeliveredNotificationsWithIdentifiers:(id)arg1;
- (void)_sendCompanionUserNotificationResponse:(id /* block */)arg1 error:(id)arg2;
- (void)receivedCompanionUserNotificationRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)postCompanionUserNotificationOfType:(long long)arg1 completion:(id /* block */)arg2;
- (void)_postNotificationWithTitle:(id)arg1 body:(id)arg2 categoryIdentifier:(id)arg3 subtitle:(id)arg4 domain:(long long)arg5 url:(id)arg6 completion:(id /* block */)arg7;
- (void)postNotificationWithTitle:(id)arg1 body:(id)arg2 categoryIdentifier:(id)arg3 subtitle:(id)arg4 domain:(long long)arg5 completion:(id /* block */)arg6;
- (void)postNotificationWithRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)postNotificationWithIdentifier:(id)arg1 content:(id)arg2 trigger:(id)arg3 completion:(id /* block */)arg4;
- (void)setBadge:(id)arg1 forDomain:(long long)arg2 completion:(id /* block */)arg3;
- (_Bool)incrementBadgeForDomain:(long long)arg1 count:(long long)arg2 error:(out id *)arg3;
- (void)badgeForDomain:(long long)arg1 completion:(id /* block */)arg2;
- (void)registerWithUserNotificationCenter;
- (void)dealloc;
- (id)initWithProfile:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

