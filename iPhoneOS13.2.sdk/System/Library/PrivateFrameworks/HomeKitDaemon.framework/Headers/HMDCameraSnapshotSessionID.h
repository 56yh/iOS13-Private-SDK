//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeKitDaemon/HMDCameraSessionID.h>



@class NSNumber, NSString;

@interface HMDCameraSnapshotSessionID : HMDCameraSessionID <NSCopying>
{
    _Bool _snapshotRequestForBulletin;
    NSString *_snapshotCharacteristicEventUUID;
    unsigned long long _snapshotReason;
    NSNumber *_streamingTier;
}

@property(readonly) NSNumber *streamingTier; // @synthesize streamingTier=_streamingTier;
@property(readonly, getter=isSnapshotRequestForBulletin) _Bool snapshotRequestForBulletin; // @synthesize snapshotRequestForBulletin=_snapshotRequestForBulletin;
@property(readonly) unsigned long long snapshotReason; // @synthesize snapshotReason=_snapshotReason;
@property(readonly) NSString *snapshotCharacteristicEventUUID; // @synthesize snapshotCharacteristicEventUUID=_snapshotCharacteristicEventUUID;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithAccessory:(id)arg1 message:(id)arg2;
- (id)initWithSessionID:(id)arg1 remoteDevice:(id)arg2 cameraSessionAppID:(id)arg3 descriptionString:(id)arg4 spiClient:(_Bool)arg5 snapshotReason:(unsigned long long)arg6 snapshotRequestForBulletin:(_Bool)arg7 snapshotCharacteristicEventUUID:(id)arg8 streamingTier:(id)arg9;

@end

