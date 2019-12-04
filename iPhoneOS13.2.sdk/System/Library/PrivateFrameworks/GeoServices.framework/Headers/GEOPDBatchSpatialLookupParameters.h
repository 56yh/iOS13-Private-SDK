//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>



@class NSMutableArray, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDBatchSpatialLookupParameters : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_spatialEventLookups;
    NSMutableArray *_spatialPlaceLookups;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_spatialEventLookups:1;
        unsigned int read_spatialPlaceLookups:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_spatialEventLookups:1;
        unsigned int wrote_spatialPlaceLookups:1;
    } _flags;
}

+ (_Bool)isValid:(id)arg1;
+ (Class)spatialEventLookupType;
+ (Class)spatialPlaceLookupType;
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
- (id)spatialEventLookupAtIndex:(unsigned long long)arg1;
- (unsigned long long)spatialEventLookupsCount;
- (void)_addNoFlagsSpatialEventLookup:(id)arg1;
- (void)addSpatialEventLookup:(id)arg1;
- (void)clearSpatialEventLookups;
@property(retain, nonatomic) NSMutableArray *spatialEventLookups;
- (void)_readSpatialEventLookups;
- (id)spatialPlaceLookupAtIndex:(unsigned long long)arg1;
- (unsigned long long)spatialPlaceLookupsCount;
- (void)_addNoFlagsSpatialPlaceLookup:(id)arg1;
- (void)addSpatialPlaceLookup:(id)arg1;
- (void)clearSpatialPlaceLookups;
@property(retain, nonatomic) NSMutableArray *spatialPlaceLookups;
- (void)_readSpatialPlaceLookups;
- (id)initWithData:(id)arg1;
- (id)init;

@end

