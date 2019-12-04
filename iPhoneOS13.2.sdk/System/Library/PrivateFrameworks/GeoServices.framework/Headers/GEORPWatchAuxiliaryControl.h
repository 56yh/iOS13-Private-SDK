//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>



@class NSString, PBDataReader;

@interface GEORPWatchAuxiliaryControl : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    NSString *_hardwareIdentifier;
    NSString *_osBuild;
    NSString *_osVersion;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_hardwareIdentifier:1;
        unsigned int read_osBuild:1;
        unsigned int read_osVersion:1;
        unsigned int wrote_hardwareIdentifier:1;
        unsigned int wrote_osBuild:1;
        unsigned int wrote_osVersion:1;
    } _flags;
}

+ (_Bool)isValid:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(retain, nonatomic) NSString *osBuild;
@property(readonly, nonatomic) _Bool hasOsBuild;
- (void)_readOsBuild;
@property(retain, nonatomic) NSString *osVersion;
@property(readonly, nonatomic) _Bool hasOsVersion;
- (void)_readOsVersion;
@property(retain, nonatomic) NSString *hardwareIdentifier;
@property(readonly, nonatomic) _Bool hasHardwareIdentifier;
- (void)_readHardwareIdentifier;
- (id)initWithData:(id)arg1;
- (id)init;

@end

