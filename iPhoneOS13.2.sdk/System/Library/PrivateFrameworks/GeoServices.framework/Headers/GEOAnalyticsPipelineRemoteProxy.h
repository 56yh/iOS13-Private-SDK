//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/GEOAnalyticsPipelineProxy-Protocol.h>

@class NSOperationQueue, NSString, geo_isolater;

__attribute__((visibility("hidden")))
@interface GEOAnalyticsPipelineRemoteProxy : NSObject <GEOAnalyticsPipelineProxy>
{
    NSOperationQueue *_opQueue;
    unsigned long long _maxOpCount;
    unsigned long long _droppedLogMsgCount;
    geo_isolater *_enqueueLock;
}

- (id)getEvalStatus;
- (void)showEvalDataWithPredicate:(id)arg1 visitorBlock:(id /* block */)arg2 summaryBlock:(id /* block */)arg3;
- (void)initiateUploadOfType:(int)arg1;
- (void)flushEvalData;
- (void)setEvalMode:(_Bool)arg1;
- (void)reportMapKitCountType:(int)arg1 appId:(id)arg2 completion:(id /* block */)arg3 completionQueue:(id)arg4;
- (void)reportLogMsgType:(int)arg1 eventType:(int)arg2 logMsg:(id)arg3 completion:(id /* block */)arg4 completionQueue:(id)arg5;
- (void)setShortSessionValues:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)shortSessionValuesWithCompletion:(id /* block */)arg1;
- (id)init;
- (void)_reportLogMsgType:(int)arg1 eventType:(int)arg2 logMsg:(id)arg3 completion:(id /* block */)arg4 completionQueue:(id)arg5;
- (void)_reportMapKitCountType:(int)arg1 appId:(id)arg2 completion:(id /* block */)arg3 completionQueue:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

