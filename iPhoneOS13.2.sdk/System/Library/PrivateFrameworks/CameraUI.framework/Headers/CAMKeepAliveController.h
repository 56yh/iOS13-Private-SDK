//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue, OS_dispatch_source, OS_xpc_object;

@interface CAMKeepAliveController : NSObject
{
    NSObject<OS_xpc_object> *__connection;
    NSObject<OS_dispatch_queue> *__keepAliveQueue;
    NSObject<OS_dispatch_source> *__heartbeatSource;
    NSObject<OS_dispatch_queue> *__heartbeatQueue;
}

@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *_heartbeatQueue; // @synthesize _heartbeatQueue=__heartbeatQueue;
@property(retain, nonatomic, setter=_setHeartbeatSource:) NSObject<OS_dispatch_source> *_heartbeatSource; // @synthesize _heartbeatSource=__heartbeatSource;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *_keepAliveQueue; // @synthesize _keepAliveQueue=__keepAliveQueue;
@property(retain, nonatomic, setter=_setConnection:) NSObject<OS_xpc_object> *_connection; // @synthesize _connection=__connection;
- (void)_teardownHeartbeat;
- (void)_keepAliveQueueTeardownHeartbeat;
- (void)_keepAliveQueueCreateHeartbeatIfNecessary;
- (void)_handleHeartbeatSourceEvent;
- (void)_handleHeartbeatConnectionReply:(id)arg1;
- (void)_keepAliveQueueTeardownConnection;
- (void)_teardownConnection;
- (void)_keepAliveQueueCreateConnectionIfNecessary;
- (void)_setupConnectionIfNecessary;
- (void)_handleApplicationDidEnterBackground:(id)arg1;
- (void)_handleApplicationWillEnterForeground:(id)arg1;
- (void)sendCameraRollVisibilityChangedMessage:(_Bool)arg1;
- (void)stopKeepAliveSession;
- (void)startKeepAliveSession;
- (void)dealloc;
- (id)init;

@end

