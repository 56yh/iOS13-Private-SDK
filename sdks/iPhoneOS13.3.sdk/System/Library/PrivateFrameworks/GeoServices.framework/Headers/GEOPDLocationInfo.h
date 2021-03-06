//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSString, PBDataReader;

@interface GEOPDLocationInfo : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    NSString *_localityName;
    NSString *_locationName;
    NSString *_secondaryLocationName;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
//     struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_localityName:1;
        unsigned int read_locationName:1;
        unsigned int read_secondaryLocationName:1;
        unsigned int wrote_localityName:1;
        unsigned int wrote_locationName:1;
        unsigned int wrote_secondaryLocationName:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
// - (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)readAll:(BOOL)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(retain, nonatomic) NSString *localityName;
@property(readonly, nonatomic) BOOL hasLocalityName;
- (void)_readLocalityName;
@property(retain, nonatomic) NSString *secondaryLocationName;
@property(readonly, nonatomic) BOOL hasSecondaryLocationName;
- (void)_readSecondaryLocationName;
@property(retain, nonatomic) NSString *locationName;
@property(readonly, nonatomic) BOOL hasLocationName;
- (void)_readLocationName;
- (id)initWithData:(id)arg1;
- (id)init;

@end

