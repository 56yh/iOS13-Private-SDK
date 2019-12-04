//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/BKSTerminationAssertionObserver-Protocol.h>
#import <SpringBoard/SBApplicationLifecycleObserver-Protocol.h>
#import <SpringBoard/SBApplicationRestrictionDataSource-Protocol.h>

@class FBSApplicationLibrary, NSMutableDictionary, NSSet, NSString, SBApplicationInfo, SBApplicationLibraryObserver, SBApplicationRestrictionController, SBReverseCountedSemaphore;

@interface SBApplicationController : NSObject <SBApplicationRestrictionDataSource, BKSTerminationAssertionObserver, SBApplicationLifecycleObserver>
{
    NSMutableDictionary *_applicationsByBundleIdentifer;
    struct os_unfair_lock_s _applicationsLock;
    NSMutableDictionary *_systemAppsVisibilityOverrides;
    NSSet *_cachedSystemAppsWithVisibilityOverrideHidden;
    SBApplicationRestrictionController *_restrictionController;
    SBApplicationLibraryObserver *_appLibraryObserver;
    FBSApplicationLibrary *_appLibrary;
    SBApplicationInfo *_systemAppInfo;
    SBReverseCountedSemaphore *_uninstallationReverseSemaphore;
}

+ (void)_setClearAllLegacySnapshotsWhenLoaded:(_Bool)arg1;
+ (void)_setClearSystemAppSnapshotsWhenLoaded:(_Bool)arg1;
+ (id)sharedInstanceIfExists;
+ (id)sharedInstance;
+ (id)_sharedInstanceCreateIfNecessary:(_Bool)arg1;
- (void)noteTerminationAssertionEfficacyChangedTo:(unsigned long long)arg1 forBundleIdentifier:(id)arg2;
- (id)bundleIdentifiersWithVisibilityOverrideHidden;
- (void)applicationRestrictionsMayHaveChanged;
- (void)applicationVisibilityMayHaveChanged;
- (void)applicationsDemoted:(id)arg1;
- (void)applicationsRemoved:(id)arg1;
- (void)applicationsUpdated:(id)arg1;
- (void)applicationsReplaced:(id)arg1;
- (void)applicationsAdded:(id)arg1;
- (void)_updateVisibilityOverrides;
- (void)_removeApplicationsFromModelWithBundleIdentifier:(id)arg1 forInstall:(_Bool)arg2 withReason:(id)arg3;
- (void)_loadApplications:(id)arg1 remove:(id)arg2;
- (id)_appInfosToBundleIDs:(id)arg1;
- (id)_loadApplicationFromApplicationInfo:(id)arg1;
- (Class)_appClassForInfo:(id)arg1;
- (void)_sendInstalledAppsDidChangeNotification:(id)arg1 removed:(id)arg2 replaced:(id)arg3 updated:(id)arg4;
- (void)_preLoadApplications;
- (void)_memoryWarningReceived;
- (void)_finishDeferredMajorVersionMigrationTasks_FlushLegacySnapshots;
- (void)_finishDeferredMajorVersionMigrationTasks_FlushSystemSnapshots;
- (id)_lock_applicationWithBundleIdentifier:(id)arg1;
- (id)_appLibraryObserver;
- (id)_appLibrary;
- (id)restrictionController;
- (id)notesApplication;
- (id)testFlightApplication;
- (id)loginApplication;
- (id)webApplication;
- (id)mapsApplication;
- (id)iPodOutApplication;
- (id)cameraApplication;
- (id)clockApplication;
- (id)inCallServiceApp;
- (id)faceTimeApp;
- (id)mobilePhone;
- (id)setupApplication;
- (id)dataActivationApplication;
- (id)musicApplication;
- (id)alwaysAvailableApplicationBundleIdentifiers;
- (void)waitForUninstallsToComplete;
- (void)requestUninstallApplicationWithBundleIdentifier:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)requestUninstallApplication:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)uninstallApplication:(id)arg1;
- (id)applicationWithPid:(int)arg1;
- (id)applicationWithBundleIdentifier:(id)arg1;
- (id)runningApplications;
- (id)allApplications;
- (id)allBundleIdentifiers;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

