//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ASDGatherLogsRequestOptions, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface ASDGatherLogsRequest : NSObject
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    NSXPCConnection *_connection;
    ASDGatherLogsRequestOptions *_options;
}

+ (long long)requestType;
- (id)_zippedDataForURL:(id)arg1;
- (void)_sendHarFileRequestWithOptions:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)_sendRequestWithOptions:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)_sendGatherRequestWithOptions:(id)arg1 completionBlock:(id /* block */)arg2;
- (id)_createCombinedHarFile;
- (void)_copyDB:(id)arg1 fullSourcePath:(id)arg2 toDir:(id)arg3 datbaseBase:(id)arg4;
- (void)_combineLogs:(id)arg1 toDir:(id)arg2;
- (id)_combineAllLogs;
- (id)_appstoredContainerPath;
- (void)gatherLogsWithCompletionBlock:(id /* block */)arg1;
- (void)createHarFileArchiveWithCompletionBlock:(id /* block */)arg1;
- (void)createLogFileArchiveWithCompletionBlock:(id /* block */)arg1;
- (id)initWithOptions:(id)arg1;

@end

