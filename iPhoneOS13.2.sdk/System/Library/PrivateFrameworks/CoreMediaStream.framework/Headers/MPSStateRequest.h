//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>



@class NSString;

@interface MPSStateRequest : PBRequest <NSCopying>
{
    long long _originalLibrarySize;
    NSString *_backupDeviceID;
    NSString *_backupDeviceUDID;
    NSString *_backupDeviceUUID;
    NSString *_iCPLDeviceID;
    NSString *_mPSDeviceID;
    struct {
        unsigned int originalLibrarySize:1;
    } _has;
}

@property(nonatomic) long long originalLibrarySize; // @synthesize originalLibrarySize=_originalLibrarySize;
@property(retain, nonatomic) NSString *backupDeviceUDID; // @synthesize backupDeviceUDID=_backupDeviceUDID;
@property(retain, nonatomic) NSString *backupDeviceUUID; // @synthesize backupDeviceUUID=_backupDeviceUUID;
@property(retain, nonatomic) NSString *backupDeviceID; // @synthesize backupDeviceID=_backupDeviceID;
@property(retain, nonatomic) NSString *iCPLDeviceID; // @synthesize iCPLDeviceID=_iCPLDeviceID;
@property(retain, nonatomic) NSString *mPSDeviceID; // @synthesize mPSDeviceID=_mPSDeviceID;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasOriginalLibrarySize;
@property(readonly, nonatomic) _Bool hasBackupDeviceUDID;
@property(readonly, nonatomic) _Bool hasBackupDeviceUUID;
@property(readonly, nonatomic) _Bool hasBackupDeviceID;
@property(readonly, nonatomic) _Bool hasICPLDeviceID;
@property(readonly, nonatomic) _Bool hasMPSDeviceID;

@end
