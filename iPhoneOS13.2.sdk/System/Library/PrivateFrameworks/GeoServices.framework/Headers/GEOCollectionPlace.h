//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>



@class GEOLatLng, NSString, PBDataReader, PBUnknownFields;

@interface GEOCollectionPlace : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_address;
    GEOLatLng *_coordinate;
    unsigned long long _muid;
    NSString *_name;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _providerId;
    struct {
        unsigned int has_muid:1;
        unsigned int has_providerId:1;
        unsigned int read_unknownFields:1;
        unsigned int read_address:1;
        unsigned int read_coordinate:1;
        unsigned int read_name:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_address:1;
        unsigned int wrote_coordinate:1;
        unsigned int wrote_muid:1;
        unsigned int wrote_name:1;
        unsigned int wrote_providerId:1;
    } _flags;
}

+ (_Bool)isValid:(id)arg1;
- (void)clearUnknownFields:(_Bool)arg1;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
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
@property(retain, nonatomic) NSString *name;
@property(readonly, nonatomic) _Bool hasName;
- (void)_readName;
@property(retain, nonatomic) GEOLatLng *coordinate;
@property(readonly, nonatomic) _Bool hasCoordinate;
- (void)_readCoordinate;
@property(retain, nonatomic) NSString *address;
@property(readonly, nonatomic) _Bool hasAddress;
- (void)_readAddress;
@property(nonatomic) _Bool hasMuid;
@property(nonatomic) unsigned long long muid;
@property(nonatomic) _Bool hasProviderId;
@property(nonatomic) int providerId;
- (id)initWithData:(id)arg1;
- (id)init;

@end

