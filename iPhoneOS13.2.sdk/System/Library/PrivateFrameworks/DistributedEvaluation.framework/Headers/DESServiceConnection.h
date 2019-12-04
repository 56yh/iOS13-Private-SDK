//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DistributedEvaluation/DESService-Protocol.h>

@class DESBundleRegistry, DESDeviceIdentifierStore, NSString, NSXPCConnection;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface DESServiceConnection : NSObject <DESService>
{
    double _connectionStartTime;
    NSObject<OS_xpc_object> *_activity;
    NSXPCConnection *_connection;
    DESDeviceIdentifierStore *_identifierStore;
    DESBundleRegistry *_bundleRegistry;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)recordSetWithRecipeType:(id)arg1 nativeRecords:(id)arg2 coreDuetEventsUUIDs:(id)arg3 error:(id *)arg4;
+ (void)initialize;
- (void)setValue:(id)arg1 forInfoKey:(id)arg2 bundleID:(id)arg3 completion:(id /* block */)arg4;
- (void)postRecipeResultForBundleId:(id)arg1 baseURL:(id)arg2 result:(id)arg3 recipeUUID:(id)arg4 completion:(id /* block */)arg5;
- (void)fetchTelemetryForBundleId:(id)arg1 completion:(id /* block */)arg2;
- (void)runLiveEvaluationForAllBundlesWithBaseURL:(id)arg1 localeIdentifier:(id)arg2 completion:(id /* block */)arg3;
- (void)_runLiveEvaluationForBundleId:(id)arg1 baseURL:(id)arg2 localeIdentifier:(id)arg3 completion:(id /* block */)arg4;
- (_Bool)taskIsDeferred;
- (void)_prepareEvaluationSessionForBundleId:(id)arg1 baseURL:(id)arg2 localeIdentifier:(id)arg3 completion:(id /* block */)arg4;
- (void)runLiveEvaluationForBundleId:(id)arg1 baseURL:(id)arg2 localeIdentifier:(id)arg3 completion:(id /* block */)arg4;
- (void)_runEvaluationForBundleId:(id)arg1 recipeEvaluation:(id)arg2 attachments:(id)arg3 completion:(id /* block */)arg4;
- (void)runEvaluationForBundleId:(id)arg1 recipePath:(id)arg2 recordUUIDs:(id)arg3 attachments:(id)arg4 completion:(id /* block */)arg5;
- (void)saveCoreDuetEvent:(id)arg1 completion:(id /* block */)arg2;
- (void)deleteSavedRecordForBundleId:(id)arg1 identfier:(id)arg2 completion:(id /* block */)arg3;
- (void)deleteAllSavedRecordsForBundleId:(id)arg1 completion:(id /* block */)arg2;
- (void)_fetchSavedRecordInfoForBundleId:(id)arg1 deviceIdentifier:(id)arg2 completion:(id /* block */)arg3;
- (void)_fetchCoreDuetEventsForBundleId:(id)arg1 deviceIdentifier:(id)arg2 completion:(id /* block */)arg3;
- (void)fetchRecordsForBundleId:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchSavedRecordInfoForRecordType:(id)arg1 completion:(id /* block */)arg2;
- (void)saveRecordForBundleId:(id)arg1 data:(id)arg2 recordInfo:(id)arg3 completion:(id /* block */)arg4;
- (void)fetchInstalledBundlesIdsWithCompletion:(id /* block */)arg1;
- (_Bool)_hasRecordAccessToBundleId:(id)arg1 error:(id *)arg2;
@property(readonly) DESDeviceIdentifierStore *_identifierStore;
- (id)initWithXPCConnection:(id)arg1 activity:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

