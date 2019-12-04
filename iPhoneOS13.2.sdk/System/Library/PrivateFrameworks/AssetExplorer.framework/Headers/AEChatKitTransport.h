//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AssetExplorer/AEPackageTransport.h>

#import <AssetExplorer/AEPhotosAssetPackageFinalizer-Protocol.h>

@class AEChatKitStatisticsManager, NSMutableDictionary, NSObject;
@protocol AEChatKitTransportDelegate, OS_dispatch_group, OS_dispatch_queue;

@interface AEChatKitTransport : AEPackageTransport <AEPhotosAssetPackageFinalizer>
{
    NSObject<OS_dispatch_group> *__packagePreparationGroup;
    NSObject<OS_dispatch_queue> *__urlSidetableIsolationQueue;
    NSMutableDictionary *__alternateURLsByIdentifier;
    AEChatKitStatisticsManager *__statisticsManager;
}

@property(readonly, nonatomic) AEChatKitStatisticsManager *_statisticsManager; // @synthesize _statisticsManager=__statisticsManager;
@property(readonly, nonatomic) NSMutableDictionary *_alternateURLsByIdentifier; // @synthesize _alternateURLsByIdentifier=__alternateURLsByIdentifier;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *_urlSidetableIsolationQueue; // @synthesize _urlSidetableIsolationQueue=__urlSidetableIsolationQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_group> *_packagePreparationGroup; // @synthesize _packagePreparationGroup=__packagePreparationGroup;
- (id)orderedStagedPayloads;
- (void)unstagePackagesWithIdentifiers:(id)arg1;
- (void)unstagePackagesWithIdentifiers:(id)arg1 evictFiles:(_Bool)arg2;
- (void)_unstagePackagesWithIdentifiers:(id)arg1 evictFiles:(_Bool)arg2;
- (void)unstagePackageWithIdentifier:(id)arg1 andNotify:(_Bool)arg2;
- (void)stagePackages:(id)arg1;
- (void)stagePackage:(id)arg1;
- (void)commitPackage:(id)arg1;
- (id)finalizePackage:(id)arg1 error:(out id *)arg2;
- (id)_workQueue;
- (id)_chatkitPackageForIdentifer:(id)arg1;
- (void)_beginStagingWorkForPackage:(id)arg1;
- (id)_preparePackageForCommit:(id)arg1 inBaseDirectory:(id)arg2 outError:(out id *)arg3;
- (void)_evictPersistedURLs:(id)arg1;
- (id)_persistedURLsFromURLs:(id)arg1 inBaseDirectory:(id)arg2 outError:(out id *)arg3;
- (void)stagePersistedPayloads:(id)arg1;
- (id)init;

// Remaining properties
@property(nonatomic) __weak id <AEChatKitTransportDelegate> delegate; // @dynamic delegate;

@end

