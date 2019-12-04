//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AssistantServices/AFInvalidating-Protocol.h>
#import <AssistantServices/AFSiriActivationService-Protocol.h>

@class NSString, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface AFSiriActivationConnection : NSObject <AFInvalidating, AFSiriActivationService>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCConnection *_xpcConnection;
}

- (void)_invalidate;
- (void)_connectionInvalidated;
- (void)_connectionInterrupted;
- (id)_connection;
- (void)invalidate;
- (oneway void)handleIntent:(id)arg1 inBackgroundAppWithBundleId:(id)arg2 reply:(id /* block */)arg3;
- (oneway void)handleContext:(id)arg1 completion:(id /* block */)arg2;
- (oneway void)deactivateForReason:(long long)arg1 options:(unsigned long long)arg2 analyticsContext:(id)arg3 completion:(id /* block */)arg4;
- (oneway void)activateWithRequestInfo:(id)arg1 completion:(id /* block */)arg2;
- (oneway void)prewarmWithRequestInfo:(id)arg1 completion:(id /* block */)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
