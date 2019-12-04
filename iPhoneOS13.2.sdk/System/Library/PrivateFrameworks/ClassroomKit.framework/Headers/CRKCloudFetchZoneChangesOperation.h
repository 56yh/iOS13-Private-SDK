//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ClassroomKit/CRKCloudOperation.h>

#import <ClassroomKit/CRKCloudResetable-Protocol.h>

@class CKRecordZoneID, CKServerChangeToken;

@interface CRKCloudFetchZoneChangesOperation : CRKCloudOperation <CRKCloudResetable>
{
    CKServerChangeToken *_serverToken;
    CKRecordZoneID *_zoneId;
}

@property(readonly, nonatomic) CKRecordZoneID *zoneId; // @synthesize zoneId=_zoneId;
@property(readonly, nonatomic) CKServerChangeToken *serverToken; // @synthesize serverToken=_serverToken;
- (id)resetOperation;
- (void)main;
- (id)initWithDatabase:(id)arg1 zoneId:(id)arg2 serverToken:(id)arg3;

@end

