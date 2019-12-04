//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>



@class GEOLatLng, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDIpGeoLookupResult : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_countryCode;
    NSString *_ipAddress;
    GEOLatLng *_location;
    NSString *_timeZome;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _status;
    struct {
        unsigned int has_status:1;
        unsigned int read_unknownFields:1;
        unsigned int read_countryCode:1;
        unsigned int read_ipAddress:1;
        unsigned int read_location:1;
        unsigned int read_timeZome:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_countryCode:1;
        unsigned int wrote_ipAddress:1;
        unsigned int wrote_location:1;
        unsigned int wrote_timeZome:1;
        unsigned int wrote_status:1;
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
@property(retain, nonatomic) NSString *timeZome;
@property(readonly, nonatomic) _Bool hasTimeZome;
- (void)_readTimeZome;
@property(retain, nonatomic) NSString *countryCode;
@property(readonly, nonatomic) _Bool hasCountryCode;
- (void)_readCountryCode;
@property(retain, nonatomic) GEOLatLng *location;
@property(readonly, nonatomic) _Bool hasLocation;
- (void)_readLocation;
@property(retain, nonatomic) NSString *ipAddress;
@property(readonly, nonatomic) _Bool hasIpAddress;
- (void)_readIpAddress;
- (int)StringAsStatus:(id)arg1;
- (id)statusAsString:(int)arg1;
@property(nonatomic) _Bool hasStatus;
@property(nonatomic) int status;
- (id)initWithData:(id)arg1;
- (id)init;

@end

