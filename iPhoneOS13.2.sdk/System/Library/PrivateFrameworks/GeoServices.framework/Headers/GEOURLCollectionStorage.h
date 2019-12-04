//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>



@class NSMutableArray, NSString, PBDataReader, PBUnknownFields;

@interface GEOURLCollectionStorage : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_name;
    NSMutableArray *_places;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_name:1;
        unsigned int read_places:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_name:1;
        unsigned int wrote_places:1;
    } _flags;
}

+ (_Bool)isValid:(id)arg1;
+ (Class)placeType;
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
- (id)placeAtIndex:(unsigned long long)arg1;
- (unsigned long long)placesCount;
- (void)_addNoFlagsPlace:(id)arg1;
- (void)addPlace:(id)arg1;
- (void)clearPlaces;
@property(retain, nonatomic) NSMutableArray *places;
- (void)_readPlaces;
@property(retain, nonatomic) NSString *name;
@property(readonly, nonatomic) _Bool hasName;
- (void)_readName;
- (id)initWithData:(id)arg1;
- (id)init;

@end

