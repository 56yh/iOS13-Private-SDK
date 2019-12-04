//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>



@class NSMutableArray, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDOfflineSuggestedRegionsParameters : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_layers;
    NSMutableArray *_locations;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_layers:1;
        unsigned int read_locations:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_layers:1;
        unsigned int wrote_locations:1;
    } _flags;
}

+ (_Bool)isValid:(id)arg1;
+ (Class)layerType;
+ (Class)locationType;
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
- (id)layerAtIndex:(unsigned long long)arg1;
- (unsigned long long)layersCount;
- (void)_addNoFlagsLayer:(id)arg1;
- (void)addLayer:(id)arg1;
- (void)clearLayers;
@property(retain, nonatomic) NSMutableArray *layers;
- (void)_readLayers;
- (id)locationAtIndex:(unsigned long long)arg1;
- (unsigned long long)locationsCount;
- (void)_addNoFlagsLocation:(id)arg1;
- (void)addLocation:(id)arg1;
- (void)clearLocations;
@property(retain, nonatomic) NSMutableArray *locations;
- (void)_readLocations;
- (id)initWithData:(id)arg1;
- (id)init;

@end

