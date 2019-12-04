//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudKitDaemon/CKDDatabaseOperation.h>

@class CKDFetchRecordZonesOperation, CKDFetchRecordsOperation, CKDMarkAssetBrokenURLRequestWrapperOperation, CKDModifyRecordZonesOperation, CKDModifyRecordsOperation, CKRecord, CKRecordID, CKRecordZone, CKUploadRequestConfiguration, NSError, NSString;

__attribute__((visibility("hidden")))
@interface CKDMarkAssetBrokenOperation : CKDDatabaseOperation
{
    _Bool _touchRepairZone;
    _Bool _bypassPCSEncryptionForTouchRepairZone;
    _Bool _simulateCorruptAsset;
    _Bool _writeRepairRecord;
    id /* block */ _assetOrPackageMarkedBrokenBlock;
    CKUploadRequestConfiguration *_uploadRequestConfiguration;
    CKRecordID *_recordID;
    NSString *_field;
    long long _listIndex;
    CKDFetchRecordsOperation *_fetchOperation;
    CKDFetchRecordZonesOperation *_zoneFetchOperation;
    CKDModifyRecordZonesOperation *_zoneCreateOperation;
    CKDModifyRecordsOperation *_corruptOperation;
    CKDMarkAssetBrokenURLRequestWrapperOperation *_wrapperOperation;
    CKRecordZone *_repairZone;
    CKRecord *_record;
    unsigned long long _numMarkAssetBrokenFailures;
    NSError *_markAssetBrokenError;
}

@property(retain, nonatomic) NSError *markAssetBrokenError; // @synthesize markAssetBrokenError=_markAssetBrokenError;
@property(nonatomic) unsigned long long numMarkAssetBrokenFailures; // @synthesize numMarkAssetBrokenFailures=_numMarkAssetBrokenFailures;
@property(retain, nonatomic) CKRecord *record; // @synthesize record=_record;
@property(retain, nonatomic) CKRecordZone *repairZone; // @synthesize repairZone=_repairZone;
@property(retain, nonatomic) CKDMarkAssetBrokenURLRequestWrapperOperation *wrapperOperation; // @synthesize wrapperOperation=_wrapperOperation;
@property(retain, nonatomic) CKDModifyRecordsOperation *corruptOperation; // @synthesize corruptOperation=_corruptOperation;
@property(retain, nonatomic) CKDModifyRecordZonesOperation *zoneCreateOperation; // @synthesize zoneCreateOperation=_zoneCreateOperation;
@property(retain, nonatomic) CKDFetchRecordZonesOperation *zoneFetchOperation; // @synthesize zoneFetchOperation=_zoneFetchOperation;
@property(retain, nonatomic) CKDFetchRecordsOperation *fetchOperation; // @synthesize fetchOperation=_fetchOperation;
@property(nonatomic) long long listIndex; // @synthesize listIndex=_listIndex;
@property(retain, nonatomic) NSString *field; // @synthesize field=_field;
@property(retain, nonatomic) CKRecordID *recordID; // @synthesize recordID=_recordID;
@property(nonatomic) _Bool writeRepairRecord; // @synthesize writeRepairRecord=_writeRepairRecord;
@property(nonatomic) _Bool simulateCorruptAsset; // @synthesize simulateCorruptAsset=_simulateCorruptAsset;
@property(nonatomic) _Bool bypassPCSEncryptionForTouchRepairZone; // @synthesize bypassPCSEncryptionForTouchRepairZone=_bypassPCSEncryptionForTouchRepairZone;
@property(nonatomic) _Bool touchRepairZone; // @synthesize touchRepairZone=_touchRepairZone;
@property(retain, nonatomic) CKUploadRequestConfiguration *uploadRequestConfiguration; // @synthesize uploadRequestConfiguration=_uploadRequestConfiguration;
@property(copy, nonatomic) id /* block */ assetOrPackageMarkedBrokenBlock; // @synthesize assetOrPackageMarkedBrokenBlock=_assetOrPackageMarkedBrokenBlock;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)main;
- (id)checkPreconditions;
- (id)assetOrPackageForFetchedRecord;
- (id)repairContext;
- (void)_markAssetBroken;
- (void)_breakAsset;
- (void)_touchCreateRepairZone;
- (void)_touchFetchRepairZone;
- (void)_fetchRecord;
- (id)nameForState:(unsigned long long)arg1;
- (_Bool)makeStateTransition;
- (id)activityCreate;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;

@end

