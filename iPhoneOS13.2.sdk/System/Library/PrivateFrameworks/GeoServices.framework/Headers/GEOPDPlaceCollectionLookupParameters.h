//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>



@class GEOLatLng, NSMutableArray, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDPlaceCollectionLookupParameters : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOLatLng *_center;
    NSMutableArray *_collectionIds;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_center:1;
        unsigned int read_collectionIds:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_center:1;
        unsigned int wrote_collectionIds:1;
    } _flags;
}

+ (_Bool)isValid:(id)arg1;
+ (Class)collectionIdType;
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
- (id)collectionIdAtIndex:(unsigned long long)arg1;
- (unsigned long long)collectionIdsCount;
- (void)_addNoFlagsCollectionId:(id)arg1;
- (void)addCollectionId:(id)arg1;
- (void)clearCollectionIds;
@property(retain, nonatomic) NSMutableArray *collectionIds;
- (void)_readCollectionIds;
@property(retain, nonatomic) GEOLatLng *center;
@property(readonly, nonatomic) _Bool hasCenter;
- (void)_readCenter;
- (id)initWithData:(id)arg1;
- (id)init;

@end

