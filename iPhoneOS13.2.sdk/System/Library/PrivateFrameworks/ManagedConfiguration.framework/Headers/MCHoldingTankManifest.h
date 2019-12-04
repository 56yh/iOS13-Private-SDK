//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface MCHoldingTankManifest : NSObject
{
    NSMutableDictionary *_universalManifest;
    NSObject<OS_dispatch_queue> *_syncQueue;
}

+ (id)sharedManifest;
- (void)_adjustManifestForDevice:(unsigned long long)arg1 withIdentifier:(id)arg2 addingIdentifer:(_Bool)arg3;
- (void)removeProfileDataWithIdentifier:(id)arg1 fromHoldingTankForDevice:(unsigned long long)arg2;
- (void)addProfileData:(id)arg1 withIdentifier:(id)arg2 toHoldingTankForDevice:(unsigned long long)arg3;
- (id)uninstalledProfileDataWithIdentifier:(id)arg1 targetDevice:(unsigned long long)arg2;
- (id)uninstalledProfileWithIdentifier:(id)arg1 targetDevice:(unsigned long long)arg2;
- (id)uninstalledProfileIdentifiersForDevice:(unsigned long long)arg1;
- (id)_manifestForDevice:(unsigned long long)arg1 createIfNil:(_Bool)arg2;
- (void)_createDirectory:(id)arg1 withIntermediateDirectories:(_Bool)arg2;
- (id)pathToHoldingTankProfileDataForIdentifier:(id)arg1 targetDevice:(unsigned long long)arg2 createDirectory:(_Bool)arg3;
- (id)_pathToHoldingTankManifestForDevice:(unsigned long long)arg1;
- (id)_pathToHoldingTankDirectoryForDevice:(unsigned long long)arg1;
- (id)_profileDataFileNameForProfileIdentifier:(id)arg1;
- (void)dealloc;
- (id)init;

@end

