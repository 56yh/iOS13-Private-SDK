//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>



@class GEOPDFeatureBuilding, GEOPDFeaturePOI, GEOPDFeatureVenue, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDVenueFeatureValue : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOPDFeatureBuilding *_featureBuilding;
    GEOPDFeaturePOI *_featurePoi;
    GEOPDFeatureVenue *_featureVenue;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_featureBuilding:1;
        unsigned int read_featurePoi:1;
        unsigned int read_featureVenue:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_featureBuilding:1;
        unsigned int wrote_featurePoi:1;
        unsigned int wrote_featureVenue:1;
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
@property(retain, nonatomic) GEOPDFeaturePOI *featurePoi;
@property(readonly, nonatomic) _Bool hasFeaturePoi;
- (void)_readFeaturePoi;
@property(retain, nonatomic) GEOPDFeatureBuilding *featureBuilding;
@property(readonly, nonatomic) _Bool hasFeatureBuilding;
- (void)_readFeatureBuilding;
@property(retain, nonatomic) GEOPDFeatureVenue *featureVenue;
@property(readonly, nonatomic) _Bool hasFeatureVenue;
- (void)_readFeatureVenue;
- (id)initWithData:(id)arg1;
- (id)init;

@end

