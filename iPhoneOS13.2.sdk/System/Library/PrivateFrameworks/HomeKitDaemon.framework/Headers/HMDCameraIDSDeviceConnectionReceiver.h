//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeKitDaemon/HMDCameraIDSDeviceConnection.h>

#import <HomeKitDaemon/HMDCameraRemoteStreamReceiverSocketProtocol-Protocol.h>

@class IDSSession, NSObject, NSString;
@protocol HMDCameraIDSDeviceConnectionReceiverDelegate, OS_dispatch_queue;

@interface HMDCameraIDSDeviceConnectionReceiver : HMDCameraIDSDeviceConnection <HMDCameraRemoteStreamReceiverSocketProtocol>
{
    id <HMDCameraIDSDeviceConnectionReceiverDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
}

+ (id)logCategory;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(nonatomic) __weak id <HMDCameraIDSDeviceConnectionReceiverDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_callSessionEnded:(id)arg1;
- (void)_socketOpened:(id)arg1;
@property(readonly, nonatomic) int remoteAudioSocket;
@property(readonly, nonatomic) int remoteVideoSocket;
- (void)setupReceiver:(id)arg1;
@property(readonly, nonatomic) IDSSession *session;
- (void)dealloc;
- (id)logIdentifier;
- (id)initWithSessionID:(id)arg1 workQueue:(id)arg2 delegate:(id)arg3 delegateQueue:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

