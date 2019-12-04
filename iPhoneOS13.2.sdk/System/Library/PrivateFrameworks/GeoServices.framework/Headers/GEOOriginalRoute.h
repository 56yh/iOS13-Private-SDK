//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>



@class NSData, PBDataReader, PBUnknownFields;

@interface GEOOriginalRoute : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSData *_originalDirectionsResponseID;
    NSData *_routeHandle;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _originalRoutePurpose;
    unsigned int _routeIndex;
    struct {
        unsigned int has_originalRoutePurpose:1;
        unsigned int has_routeIndex:1;
        unsigned int read_unknownFields:1;
        unsigned int read_originalDirectionsResponseID:1;
        unsigned int read_routeHandle:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_originalDirectionsResponseID:1;
        unsigned int wrote_routeHandle:1;
        unsigned int wrote_originalRoutePurpose:1;
        unsigned int wrote_routeIndex:1;
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
@property(nonatomic) _Bool hasRouteIndex;
@property(nonatomic) unsigned int routeIndex;
@property(retain, nonatomic) NSData *originalDirectionsResponseID;
@property(readonly, nonatomic) _Bool hasOriginalDirectionsResponseID;
- (void)_readOriginalDirectionsResponseID;
@property(retain, nonatomic) NSData *routeHandle;
@property(readonly, nonatomic) _Bool hasRouteHandle;
- (void)_readRouteHandle;
- (int)StringAsOriginalRoutePurpose:(id)arg1;
- (id)originalRoutePurposeAsString:(int)arg1;
@property(nonatomic) _Bool hasOriginalRoutePurpose;
@property(nonatomic) int originalRoutePurpose;
- (id)initWithData:(id)arg1;
- (id)init;

@end

