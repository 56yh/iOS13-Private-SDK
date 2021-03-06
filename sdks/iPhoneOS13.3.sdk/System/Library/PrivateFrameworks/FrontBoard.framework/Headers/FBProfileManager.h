//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSSet;
@protocol OS_dispatch_queue;

@interface FBProfileManager : NSObject
{
    BOOL _started;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSSet *_workQueue_managedApplicationBundleIDs;
    NSMutableDictionary *_workQueue_profilesBySignerIdentity;
}

+ (id)sharedInstance;
// - (void).cxx_destruct;
- (void)_managedAppsChangedNotification:(id)arg1;
- (void)_workQueue_reloadManagedApplicationBundleIDs;
- (void)_workQueue_reloadProfiles;
- (void)_reloadProfiles;
- (id)profilesForSignerIdentity:(id)arg1;
- (BOOL)isManaged:(id)arg1;
@property(readonly, nonatomic, getter=isStarted) BOOL started; // @dynamic started;
- (void)startService;
- (void)dealloc;
- (id)init;

@end

