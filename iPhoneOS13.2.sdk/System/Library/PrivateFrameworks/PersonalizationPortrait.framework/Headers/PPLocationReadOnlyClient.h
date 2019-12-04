//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PersonalizationPortrait/PPLocationClientProtocol-Protocol.h>

@class PPXPCClientHelper, PPXPCClientPipelinedBatchQueryManager;

@interface PPLocationReadOnlyClient : NSObject <PPLocationClientProtocol>
{
    PPXPCClientHelper *_clientHelper;
    PPXPCClientPipelinedBatchQueryManager *_queryManager;
}

+ (id)sharedInstance;
- (void)registerFeedback:(id)arg1 completion:(id /* block */)arg2;
- (_Bool)locationRecordsWithQuery:(id)arg1 error:(id *)arg2 handleBatch:(id /* block */)arg3;
- (_Bool)rankedLocationsWithQuery:(id)arg1 error:(id *)arg2 handleBatch:(id /* block */)arg3;
- (id)_synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (id)_remoteObjectProxy;
- (void)locationRecordBatch:(id)arg1 isLast:(_Bool)arg2 error:(id)arg3 queryId:(unsigned long long)arg4 completion:(id /* block */)arg5;
- (void)locationBatch:(id)arg1 isLast:(_Bool)arg2 error:(id)arg3 queryId:(unsigned long long)arg4 completion:(id /* block */)arg5;
- (void)_unblockPendingQueries;
- (id)init;

@end

