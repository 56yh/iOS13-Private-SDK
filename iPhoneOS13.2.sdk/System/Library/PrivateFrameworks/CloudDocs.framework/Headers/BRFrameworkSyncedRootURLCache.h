//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudDocs/BRSyncedRootURLCache-Protocol.h>

@class NSArray, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface BRFrameworkSyncedRootURLCache : NSObject <BRSyncedRootURLCache>
{
    int _syncedLocationsChangedNotificationToken;
    NSArray *_syncedRootURLs;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_notificationQueue;
}

- (void)dealloc;
@property(readonly, nonatomic) NSArray *syncedRootURLs;
- (void)_fetchSyncedRootURLs;
- (void)_accountWillChange;
- (void)registerForSyncedLocationsChangesNotifications;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

