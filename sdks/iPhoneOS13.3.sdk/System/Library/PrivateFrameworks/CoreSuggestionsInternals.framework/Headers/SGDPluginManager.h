//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface SGDPluginManager : NSObject
{
    NSDictionary *_plugins;
}

+ (void)_processHistoricalDataRequestsForPluginIdentifier:(id)arg1 result:(id)arg2;
+ (id)sharedInstance;
// - (void).cxx_destruct;
- (void)deleteSpotlightReferencesWithBundleIdentifier:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)deleteSpotlightReferencesWithBundleIdentifier:(id)arg1 domainIdentifiers:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)deleteSpotlightReferencesWithBundleIdentifier:(id)arg1 uniqueIdentifiers:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)purgeSpotlightReferencesWithBundleIdentifier:(id)arg1 uniqueIdentifiers:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)_processSearchableItem:(id)arg1 userAction:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)processInteraction:(id)arg1 bundleIdentifier:(id)arg2 protectionClass:(id)arg3 completion:(id /* CDUnknownBlockType */)arg4;
- (void)processUserAction:(id)arg1 searchableItem:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)processSearchableItem:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (id)init;
- (void)setPlugins:(id)arg1;

@end

