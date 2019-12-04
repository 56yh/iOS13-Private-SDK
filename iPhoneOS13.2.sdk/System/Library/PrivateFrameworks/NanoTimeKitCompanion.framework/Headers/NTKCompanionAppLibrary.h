//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NanoTimeKitCompanion/ACXDeviceConnectionDelegate-Protocol.h>
#import <NanoTimeKitCompanion/LSApplicationWorkspaceObserverProtocol-Protocol.h>
#import <NanoTimeKitCompanion/NTKCompanionAppDelegate-Protocol.h>
#import <NanoTimeKitCompanion/NTKSystemAppStateCache-Protocol.h>

@class CLKDevice, NSArray, NSHashTable, NSMutableArray, NSSet, NSString;
@protocol OS_dispatch_queue;

@interface NTKCompanionAppLibrary : NSObject <NTKCompanionAppDelegate, LSApplicationWorkspaceObserverProtocol, ACXDeviceConnectionDelegate, NTKSystemAppStateCache>
{
    NSArray *_allApps;
    NSArray *_firstPartyApps;
    NSArray *_watchSystemApps;
    NSSet *_installedSystemApplicationIdentifiers;
    NSArray *_thirdPartyApps;
    NSHashTable *_changeObservers;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSObject<OS_dispatch_queue> *_updateProcessingQueue;
    NSObject<OS_dispatch_queue> *_observerCallbackQueue;
    NSObject<OS_dispatch_queue> *_appProcessingQueue;
    struct os_unfair_lock_s *_prewarmLock;
    NSMutableArray *_prewarmCallbacks;
    CLKDevice *_device;
}

+ (id)sharedAppLibrary;
@property(retain, nonatomic) CLKDevice *device; // @synthesize device=_device;
@property(retain, nonatomic) NSMutableArray *prewarmCallbacks; // @synthesize prewarmCallbacks=_prewarmCallbacks;
@property(readonly, nonatomic) struct os_unfair_lock_s *prewarmLock; // @synthesize prewarmLock=_prewarmLock;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *appProcessingQueue; // @synthesize appProcessingQueue=_appProcessingQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *observerCallbackQueue; // @synthesize observerCallbackQueue=_observerCallbackQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *updateProcessingQueue; // @synthesize updateProcessingQueue=_updateProcessingQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *internalQueue; // @synthesize internalQueue=_internalQueue;
@property(retain, nonatomic) NSHashTable *changeObservers; // @synthesize changeObservers=_changeObservers;
@property(retain, nonatomic) NSArray *thirdPartyApps; // @synthesize thirdPartyApps=_thirdPartyApps;
@property(retain, nonatomic) NSSet *installedSystemApplicationIdentifiers; // @synthesize installedSystemApplicationIdentifiers=_installedSystemApplicationIdentifiers;
@property(retain, nonatomic) NSArray *watchSystemApps; // @synthesize watchSystemApps=_watchSystemApps;
@property(retain, nonatomic) NSArray *firstPartyApps; // @synthesize firstPartyApps=_firstPartyApps;
@property(retain, nonatomic) NSArray *allApps; // @synthesize allApps=_allApps;
- (void)_queue_loadApps;
- (void)_loadWatchApps;
- (void)_loadApps;
- (void)_notifyAppIconUpdated:(id)arg1;
- (void)_notifyAppRemoved:(id)arg1;
- (void)_notifyAppUpdated:(id)arg1;
- (void)_notifyAppAdded:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)companionAppUpdatedIcon:(id)arg1;
- (void)companionAppWasUpdated:(id)arg1;
- (void)applicationStateDidChange:(id)arg1;
- (void)applicationDatabaseResyncedForDeviceWithPairingID:(id)arg1;
- (void)applicationsUninstalled:(id)arg1 onDeviceWithPairingID:(id)arg2;
- (void)applicationsUpdated:(id)arg1 onDeviceWithPairingID:(id)arg2;
- (void)applicationsInstalled:(id)arg1 onDeviceWithPairingID:(id)arg2;
- (_Bool)isRemovedSystemApp:(id)arg1;
- (_Bool)isRestrictedSystemApp:(id)arg1;
- (void)_activeDeviceChanged;
- (void)_load;
- (void)prewarmCompanionDaemonWithCompletion:(id /* block */)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

