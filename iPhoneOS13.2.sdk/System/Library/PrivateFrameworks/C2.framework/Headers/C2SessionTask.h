//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <C2/C2SessionTaskDelegate-Protocol.h>

@class C2RequestOptions, NSString, NSURLSessionDataTask;
@protocol C2RequestDelegate, C2SessionTaskDelegate, OS_os_activity;

@interface C2SessionTask : NSObject <C2SessionTaskDelegate>
{
    _Bool _isComplete;
    unsigned int _attemptCount;
    C2RequestOptions *_options;
    id <C2RequestDelegate> _delegate;
    NSObject<OS_os_activity> *_activity;
    NSURLSessionDataTask *_task;
    id <C2SessionTaskDelegate> _sessionTaskDelegate;
    double _initTime;
    double _resetTime;
}

+ (double)captureMetricDurationBetweenStart:(double)arg1 andEnd:(double)arg2;
+ (double)captureMetricsForTimingData:(id)arg1 withKey:(id)arg2;
@property(nonatomic) unsigned int attemptCount; // @synthesize attemptCount=_attemptCount;
@property(nonatomic) double resetTime; // @synthesize resetTime=_resetTime;
@property(nonatomic) double initTime; // @synthesize initTime=_initTime;
@property(retain, nonatomic) id <C2SessionTaskDelegate> sessionTaskDelegate; // @synthesize sessionTaskDelegate=_sessionTaskDelegate;
@property(nonatomic) _Bool isComplete; // @synthesize isComplete=_isComplete;
@property(retain, nonatomic) NSURLSessionDataTask *task; // @synthesize task=_task;
@property(readonly, nonatomic) NSObject<OS_os_activity> *activity; // @synthesize activity=_activity;
@property(readonly, nonatomic) id <C2RequestDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy, nonatomic) C2RequestOptions *options; // @synthesize options=_options;
- (void)C2Session:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)captureMetricsWithError:(id)arg1 eventType:(long long)arg2;
- (void)dealloc;
- (void)invalidate;
- (id)taskDescription;
- (void)handleCallbackForTask:(id)arg1 callback:(id /* block */)arg2;
- (id)initWithOptions:(id)arg1 delegate:(id)arg2 sessionTaskDelegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

