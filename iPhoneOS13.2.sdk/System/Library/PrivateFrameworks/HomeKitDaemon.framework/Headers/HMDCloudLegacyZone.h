//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeKitDaemon/HMDCloudZone.h>

@class CKRecordID, NSUUID;

@interface HMDCloudLegacyZone : HMDCloudZone
{
    NSUUID *_metadataObjectID;
    CKRecordID *_metadataRecordID;
    NSUUID *_homeDataObjectID;
    CKRecordID *_homeDataRecordID;
    NSUUID *_homeDataV3ObjectID;
    CKRecordID *_homeDataV3RecordID;
}

+ (void)createLegacyZoneWithName:(id)arg1 owner:(id)arg2 cacheZone:(id)arg3 cloudCache:(id)arg4 completion:(id /* block */)arg5;
+ (id)zoneSubscriptionName:(id)arg1;
+ (id)zoneRootRecordName;
- (void)setServerChangeToken:(id)arg1;
- (id)createCloudZoneChangeTemporaryCache:(_Bool)arg1;
- (void)dropCachedRecords;
- (id)createCloudRecordWithObjectID:(id)arg1 recordName:(id)arg2;
- (id)homeDataV3ModelWithPushDataPush:(id)arg1;
- (id)homeDataModelWithPushDataPush:(id)arg1;
- (id)metadataModelWithPushDataPush:(id)arg1;
@property(readonly, nonatomic, getter=isHomeDataV3RecordAvailable) _Bool homeDataV3RecordAvailable;
@property(readonly, nonatomic) CKRecordID *homeDataV3RecordID; // @synthesize homeDataV3RecordID=_homeDataV3RecordID;
@property(readonly, nonatomic) NSUUID *homeDataV3ObjectID; // @synthesize homeDataV3ObjectID=_homeDataV3ObjectID;
@property(readonly, nonatomic, getter=isHomeDataRecordAvailable) _Bool homeDataRecordAvailable;
@property(readonly, nonatomic) CKRecordID *homeDataRecordID; // @synthesize homeDataRecordID=_homeDataRecordID;
@property(readonly, nonatomic) NSUUID *homeDataObjectID; // @synthesize homeDataObjectID=_homeDataObjectID;
@property(readonly, nonatomic, getter=isMetadataRecordAvailable) _Bool metadataRecordAvailable;
@property(readonly, nonatomic) CKRecordID *metadataRecordID; // @synthesize metadataRecordID=_metadataRecordID;
@property(readonly, nonatomic) NSUUID *metadataObjectID; // @synthesize metadataObjectID=_metadataObjectID;
- (_Bool)doesProcessChangeEvenIfDecryptionFails;

@end

