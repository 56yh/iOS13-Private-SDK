//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Proximity/PRRangingDevice.h>

#import <Proximity/PRRangingClientProtocol-Protocol.h>

@class NSObject, NSString, NSXPCConnection;
@protocol OS_dispatch_queue, OS_os_log, PRGenericRangingSessionDelegate;

@interface PRCompanionRangingSession : PRRangingDevice <PRRangingClientProtocol>
{
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_sessionQueue;
    NSObject<OS_os_log> *_logger;
    id <PRGenericRangingSessionDelegate> _delegate;
}

@property(nonatomic) __weak id <PRGenericRangingSessionDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)stopCompanionRanging:(id)arg1 error:(id *)arg2;
- (_Bool)startCompanionRanging:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (void)configureForCompanionRanging:(id)arg1 options:(id)arg2;
- (void)rangingServiceDidUpdateState:(unsigned long long)arg1;
- (void)rangingRequestDidUpdateStatus:(unsigned long long)arg1;
- (void)remoteDevice:(id)arg1 didChangeState:(long long)arg2;
- (void)didReceiveNewSolutions:(id)arg1;
- (void)didFailWithError:(id)arg1;
- (id)synchronousRemoteObject;
- (id)remoteObject;
- (void)handleInvalidation;
- (void)handleInterruption;
- (void)connectToDaemon;
- (void)invalidate;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

