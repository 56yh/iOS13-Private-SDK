//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CLSGeoServiceThread;
@protocol CLSQueryPerformerProtocol, OS_dispatch_queue, OS_dispatch_source, OS_os_log;

@interface CLSQueryHandler : NSObject
{
    id <CLSQueryPerformerProtocol> _query;
    double _internalProgressTimeInterval;
    NSObject<OS_dispatch_source> *_timer;
    unsigned long long _retryLevel;
    double _nextRetryTime;
    _Bool _alreadyLaunched;
    _Bool _didQueryFinish;
    NSObject<OS_dispatch_queue> *_timerQueue;
    NSObject<OS_os_log> *_loggingConnection;
    _Bool _simulatesTimeout;
    id /* block */ _progressBlock;
    id /* block */ _completionBlock;
    CLSGeoServiceThread *_geoServiceThread;
    double _timeoutInterval;
    double _numberOfRetries;
}

@property(nonatomic) double numberOfRetries; // @synthesize numberOfRetries=_numberOfRetries;
@property(nonatomic) double timeoutInterval; // @synthesize timeoutInterval=_timeoutInterval;
@property(nonatomic, getter=isSimulatingTimeout) _Bool simulatesTimeout; // @synthesize simulatesTimeout=_simulatesTimeout;
@property(retain, nonatomic) CLSGeoServiceThread *geoServiceThread; // @synthesize geoServiceThread=_geoServiceThread;
@property(copy, nonatomic) id /* block */ completionBlock; // @synthesize completionBlock=_completionBlock;
@property(copy, nonatomic) id /* block */ progressBlock; // @synthesize progressBlock=_progressBlock;
- (unsigned long long)_cacheMapItems:(id)arg1;
- (void)cancel;
- (void)_cancel;
- (void)_handleError:(id)arg1 numberOfItems:(unsigned long long)arg2;
- (void)_heartBeat;
- (void)_startQuery;
- (void)_handleQueryResultsForQuery:(id)arg1 items:(id)arg2 error:(id)arg3;
- (void)_forwardToGeoThread;
- (void)cacheItems;
- (id)initWithQueryPerformer:(id)arg1 geoServiceThread:(id)arg2 loggingConnection:(id)arg3;

@end

