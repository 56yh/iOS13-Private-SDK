//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface ISSoftwareMap : NSObject
{
    NSArray *_applications;
}

+ (void)_startWatchingInstallationNotifications;
+ (id)_newSoftwareUpdateDictionaryForApplication:(id)arg1;
+ (void)startObservingNotifications;
+ (void)removableSystemApplicationsWithCompletionBlock:(id /* block */)arg1;
+ (void)enumerateApplicationsOfType:(unsigned long long)arg1 usingBlock:(id /* block */)arg2;
+ (void)enumerateApplicationsForProxies:(id)arg1 usingBlock:(id /* block */)arg2;
+ (id)copySoftwareUpdatesPropertyListWithApplications:(id)arg1 updatesContext:(id)arg2;
+ (id)containerPathForApp:(id)arg1 homeDirectory:(id)arg2 systemMetadataDirectory:(id)arg3;
+ (id)applicationForPluginBundleIdentifier:(id)arg1 extensionType:(id)arg2;
+ (id)applicationForPluginBundleIdentifier:(id)arg1;
+ (id)applicationForBundleIdentifier:(id)arg1 applicationType:(id)arg2;
+ (id)applicationForBundleIdentifier:(id)arg1;
+ (void)setCurrentMap:(id)arg1;
+ (id)loadedMap;
+ (void)invalidateCurrentMap;
+ (_Bool)currentMapIsValid;
+ (id)currentMap;
+ (_Bool)haveApplicationsOfType:(id)arg1;
- (void)_loadFromMobileInstallation;
- (id)copySoftwareUpdatesPropertyListWithUpdatesContext:(id)arg1;
- (id)copySoftwareUpdatesPropertyList;
@property(readonly, nonatomic) NSArray *applications;
- (id)applicationForItemIdentifier:(id)arg1;
- (id)applicationForBundleIdentifier:(id)arg1;
- (void)dealloc;
- (id)init;

@end

