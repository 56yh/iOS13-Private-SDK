//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PersonalizationPortrait/PPClientStore-Protocol.h>
#import <PersonalizationPortrait/PPFeedbackAccepting-Protocol.h>

@class NSString;

@interface PPNamedEntityStore : NSObject <PPFeedbackAccepting, PPClientStore>
{
}

+ (id)defaultStore;
@property(retain, nonatomic) NSString *clientIdentifier;
- (void)registerFeedback:(id)arg1 completion:(id /* block */)arg2;
- (_Bool)donateLocationNamedEntities:(id)arg1 bundleId:(id)arg2 groupId:(id)arg3 error:(id *)arg4;
- (_Bool)clearWithError:(id *)arg1 deletedCount:(unsigned long long *)arg2;
- (_Bool)cloudSyncWithError:(id *)arg1;
- (_Bool)removeMapItemsBeforeCutoffDate:(id)arg1 error:(id *)arg2;
- (_Bool)removeMapItemForPlaceName:(id)arg1 error:(id *)arg2;
- (id)mapItemForPlaceName:(id)arg1 error:(id *)arg2;
- (_Bool)donateMapItem:(id)arg1 forPlaceName:(id)arg2 error:(id *)arg3;
- (_Bool)deleteAllNamedEntitiesFromSourcesWithBundleId:(id)arg1 groupId:(id)arg2 olderThan:(id)arg3 deletedCount:(unsigned long long *)arg4 error:(id *)arg5;
- (_Bool)deleteAllNamedEntitiesFromSourcesWithBundleId:(id)arg1 deletedCount:(unsigned long long *)arg2 error:(id *)arg3;
- (_Bool)deleteAllNamedEntitiesFromSourcesWithBundleId:(id)arg1 groupIds:(id)arg2 deletedCount:(unsigned long long *)arg3 error:(id *)arg4;
- (_Bool)deleteAllNamedEntitiesFromSourcesWithBundleId:(id)arg1 documentIds:(id)arg2 deletedCount:(unsigned long long *)arg3 error:(id *)arg4;
- (_Bool)flushDonationsWithError:(id *)arg1;
- (_Bool)donateNamedEntities:(id)arg1 source:(id)arg2 algorithm:(unsigned long long)arg3 cloudSync:(_Bool)arg4 sentimentScore:(double)arg5 error:(id *)arg6;
- (_Bool)loadNamedEntityRecordsAndMonitorChangesWithDelegate:(id)arg1 error:(id *)arg2;
- (id)namedEntityRecordsWithQuery:(id)arg1 error:(id *)arg2;
- (_Bool)iterNamedEntityRecordsWithQuery:(id)arg1 error:(id *)arg2 block:(id /* block */)arg3;
- (id)rankedNamedEntitiesWithQuery:(id)arg1 error:(id *)arg2;
- (_Bool)iterRankedNamedEntitiesWithQuery:(id)arg1 error:(id *)arg2 block:(id /* block */)arg3;
- (id)_initFromSubclass;
- (id)init;

@end

