//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>



@class GEOLatLng, GEOPDBounds, GEOPDMapsIdentifier, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDSpatialPlaceLookupResponse : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    CDStruct_95bda58d _categorys;
    GEOPDBounds *_bounds;
    GEOLatLng *_center;
    GEOPDMapsIdentifier *_placeId;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_categorys:1;
        unsigned int read_bounds:1;
        unsigned int read_center:1;
        unsigned int read_placeId:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_categorys:1;
        unsigned int wrote_bounds:1;
        unsigned int wrote_center:1;
        unsigned int wrote_placeId:1;
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
@property(retain, nonatomic) GEOPDBounds *bounds;
@property(readonly, nonatomic) _Bool hasBounds;
- (void)_readBounds;
- (int)StringAsCategorys:(id)arg1;
- (id)categorysAsString:(int)arg1;
- (void)setCategorys:(int *)arg1 count:(unsigned long long)arg2;
- (int)categoryAtIndex:(unsigned long long)arg1;
- (void)_addNoFlagsCategory:(int)arg1;
- (void)addCategory:(int)arg1;
- (void)clearCategorys;
@property(readonly, nonatomic) int *categorys;
@property(readonly, nonatomic) unsigned long long categorysCount;
- (void)_readCategorys;
@property(retain, nonatomic) GEOLatLng *center;
@property(readonly, nonatomic) _Bool hasCenter;
- (void)_readCenter;
@property(retain, nonatomic) GEOPDMapsIdentifier *placeId;
@property(readonly, nonatomic) _Bool hasPlaceId;
- (void)_readPlaceId;
- (void)dealloc;
- (id)initWithData:(id)arg1;
- (id)init;

@end

