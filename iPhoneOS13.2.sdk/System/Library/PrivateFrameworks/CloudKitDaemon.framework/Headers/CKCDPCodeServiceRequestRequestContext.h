//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>



@class CKCDPCodeServiceRequestOperationGroup, NSString;

__attribute__((visibility("hidden")))
@interface CKCDPCodeServiceRequestRequestContext : PBCodable <NSCopying>
{
    unsigned long long _dsid;
    NSString *_applicationBundleId;
    NSString *_clientInfo;
    NSString *_containerName;
    int _databaseEnvironment;
    int _databasePartition;
    int _databaseType;
    NSString *_deviceId;
    CKCDPCodeServiceRequestOperationGroup *_operationGroup;
    NSString *_userAgent;
    NSString *_userId;
    struct {
        unsigned int dsid:1;
        unsigned int databaseEnvironment:1;
        unsigned int databasePartition:1;
        unsigned int databaseType:1;
    } _has;
}

@property(retain, nonatomic) CKCDPCodeServiceRequestOperationGroup *operationGroup; // @synthesize operationGroup=_operationGroup;
@property(retain, nonatomic) NSString *userAgent; // @synthesize userAgent=_userAgent;
@property(nonatomic) unsigned long long dsid; // @synthesize dsid=_dsid;
@property(retain, nonatomic) NSString *clientInfo; // @synthesize clientInfo=_clientInfo;
@property(nonatomic) int databasePartition; // @synthesize databasePartition=_databasePartition;
@property(retain, nonatomic) NSString *applicationBundleId; // @synthesize applicationBundleId=_applicationBundleId;
@property(retain, nonatomic) NSString *deviceId; // @synthesize deviceId=_deviceId;
@property(retain, nonatomic) NSString *containerName; // @synthesize containerName=_containerName;
@property(retain, nonatomic) NSString *userId; // @synthesize userId=_userId;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasOperationGroup;
@property(readonly, nonatomic) _Bool hasUserAgent;
@property(nonatomic) _Bool hasDsid;
@property(readonly, nonatomic) _Bool hasClientInfo;
@property(nonatomic) _Bool hasDatabasePartition;
@property(readonly, nonatomic) _Bool hasApplicationBundleId;
@property(readonly, nonatomic) _Bool hasDeviceId;
- (int)StringAsDatabaseType:(id)arg1;
- (id)databaseTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasDatabaseType;
@property(nonatomic) int databaseType; // @synthesize databaseType=_databaseType;
- (int)StringAsDatabaseEnvironment:(id)arg1;
- (id)databaseEnvironmentAsString:(int)arg1;
@property(nonatomic) _Bool hasDatabaseEnvironment;
@property(nonatomic) int databaseEnvironment; // @synthesize databaseEnvironment=_databaseEnvironment;
@property(readonly, nonatomic) _Bool hasContainerName;
@property(readonly, nonatomic) _Bool hasUserId;

@end

