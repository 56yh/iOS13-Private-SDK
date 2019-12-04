//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ACAccount, ACAccountStore, NSRecursiveLock, NSSet;

@interface SGAccountsAdapter : NSObject
{
    NSSet *_usernamesCache;
    ACAccountStore *_accountStore;
    NSRecursiveLock *_primaryICloudAccountLock;
    ACAccount *_cachedPrimaryICloudAccount;
}

+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)sharedInstance;
- (id)primaryICloudCalendarAccount;
- (_Bool)hasCalendarAccount:(id)arg1;
- (void)removeNotificationObserver;
- (void)dealloc;
- (void)registerNotificationObserver;
- (void)refreshCacheFromAccountsService;
- (void)accountsStoreDidChange:(id)arg1;
- (id)init;

@end

