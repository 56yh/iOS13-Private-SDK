//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppleMediaServices/AMSURLHandling-Protocol.h>

@class AMSURLSession, NSString;
@protocol OS_dispatch_queue;

@interface AMSURLProtocolHandler : NSObject <AMSURLHandling>
{
    AMSURLSession *session;
    NSObject<OS_dispatch_queue> *_responsePingQueue;
    NSObject<OS_dispatch_queue> *_metricsQueue;
}

+ (double)_randomDouble;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *metricsQueue; // @synthesize metricsQueue=_metricsQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *responsePingQueue; // @synthesize responsePingQueue=_responsePingQueue;
@property(nonatomic) __weak AMSURLSession *session; // @synthesize session;
- (_Bool)_URLIsTrustedFromRequest:(id)arg1 bag:(id)arg2;
- (_Bool)_shouldEnableReversePushForTask:(id)arg1;
- (void)_setResponseCookiesFromResponse:(id)arg1 taskInfo:(id)arg2;
- (void)_pingURL:(id)arg1 session:(id)arg2 bag:(id)arg3;
- (void)reportMetricsForTaskInfo:(id)arg1 decodedObject:(id)arg2;
- (void)reconfigureNewRequest:(id)arg1 originalTask:(id)arg2 redirect:(_Bool)arg3 error:(id *)arg4;
- (id)handleResponse:(id)arg1 task:(id)arg2;
- (id)handleCompletionWithTask:(id)arg1 metrics:(id)arg2 decodedObject:(id)arg3;
- (void)didCreateTask:(id)arg1 fromRequest:(id)arg2 error:(id *)arg3;
- (id)decodeData:(id)arg1 task:(id)arg2 error:(id *)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

