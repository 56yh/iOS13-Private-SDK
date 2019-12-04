//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/Foundation.h>

@class GEOAnalyticsPipelineRemoteProxy, NSObject;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface GEOAnalyticsPipelineReportOperation : NSOperation
{
    _Bool _finished;
    _Bool _executing;
    id _transaction;
    NSObject<OS_dispatch_queue> *_runQueue;
    GEOAnalyticsPipelineRemoteProxy *_remoteProxy;
    NSObject<OS_dispatch_queue> *_completionQueue;
    id /* block */ _completionBlock;
}

- (_Bool)isFinished;
- (_Bool)isExecuting;
- (void)_completeOperation;
- (void)start;
- (id)initWithRemoteProxy:(id)arg1 runQueue:(id)arg2 completionQueue:(id)arg3 completionBlock:(id /* block */)arg4;

@end

