//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeKitDaemon/HMDCameraSnapshotReceiver.h>

#import <HomeKitDaemon/HMDCameraGetSnapshotProtocol-Protocol.h>
#import <HomeKitDaemon/HMDCameraSnapshotIDSRelayReceiverDelegate-Protocol.h>
#import <HomeKitDaemon/HMDCameraSnapshotReceiverProtocol-Protocol.h>
#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class HMDCameraSnapshotIDSRelayReceiver, NSString;
@protocol HMDCameraSnapshotRemoteRelayReceiverDelegate;

@interface HMDCameraSnapshotRemoteRelayReceiver : HMDCameraSnapshotReceiver <HMDCameraGetSnapshotProtocol, HMDCameraSnapshotReceiverProtocol, HMDCameraSnapshotIDSRelayReceiverDelegate, HMFLogging>
{
    id <HMDCameraSnapshotRemoteRelayReceiverDelegate> _delegate;
    HMDCameraSnapshotIDSRelayReceiver *_relayReceiver;
}

+ (id)logCategory;
@property(retain, nonatomic) HMDCameraSnapshotIDSRelayReceiver *relayReceiver; // @synthesize relayReceiver=_relayReceiver;
@property(nonatomic) __weak id <HMDCameraSnapshotRemoteRelayReceiverDelegate> delegate; // @synthesize delegate=_delegate;
- (void)relayReceiver:(id)arg1 didReceiveFile:(id)arg2;
- (void)_callDidSaveImageDelegateWithError:(id)arg1;
- (void)_callGettingImageDelegate:(id)arg1;
- (void)snapShotSendFailed:(id)arg1;
- (void)_getSnapshot:(unsigned long long)arg1;
- (void)getSnapshot:(unsigned long long)arg1;
- (id)logIdentifier;
- (void)dealloc;
- (id)initWithSessionID:(id)arg1 workQueue:(id)arg2 options:(id)arg3 accessory:(id)arg4 delegate:(id)arg5 delegateQueue:(id)arg6 uniqueIdentifier:(id)arg7 snapshotRequestHandler:(id)arg8 residentMessageHandler:(id)arg9;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

