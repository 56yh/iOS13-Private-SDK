//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class HMDCameraSnapshotRemoteStreamReceiver, HMDCameraSnapshotSessionID, HMDSnapshotFile, NSError;

@protocol HMDCameraSnapshotRemoteStreamReceiverDelegate 
- (void)snapshotStreamReceiver:(HMDCameraSnapshotRemoteStreamReceiver *)arg1 didSaveSnapshotFile:(HMDSnapshotFile *)arg2 error:(NSError *)arg3 sessionID:(HMDCameraSnapshotSessionID *)arg4;
- (void)snapshotStreamReceiver:(HMDCameraSnapshotRemoteStreamReceiver *)arg1 didStartGettingImage:(NSError *)arg2 sessionID:(HMDCameraSnapshotSessionID *)arg3;
@end

