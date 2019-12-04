//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>



@class GEORPAccessPointCorrections, GEORPAmenityCorrections, GEORPCorrectedCoordinate, GEORPMapLocation, NSMutableArray, NSString, PBDataReader, PBUnknownFields;

@interface GEORPTransitPoiCorrections : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEORPAccessPointCorrections *_accessPoint;
    GEORPAmenityCorrections *_amenity;
    NSMutableArray *_businessHours;
    GEORPCorrectedCoordinate *_coordinate;
    GEORPMapLocation *_mapLocation;
    NSString *_name;
    NSString *_originalName;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    _Bool _lineScheduleDelay;
    _Bool _lineShapeIncorrect;
    struct {
        unsigned int has_lineScheduleDelay:1;
        unsigned int has_lineShapeIncorrect:1;
        unsigned int read_unknownFields:1;
        unsigned int read_accessPoint:1;
        unsigned int read_amenity:1;
        unsigned int read_businessHours:1;
        unsigned int read_coordinate:1;
        unsigned int read_mapLocation:1;
        unsigned int read_name:1;
        unsigned int read_originalName:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_accessPoint:1;
        unsigned int wrote_amenity:1;
        unsigned int wrote_businessHours:1;
        unsigned int wrote_coordinate:1;
        unsigned int wrote_mapLocation:1;
        unsigned int wrote_name:1;
        unsigned int wrote_originalName:1;
        unsigned int wrote_lineScheduleDelay:1;
        unsigned int wrote_lineShapeIncorrect:1;
    } _flags;
}

+ (_Bool)isValid:(id)arg1;
+ (Class)businessHoursType;
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
@property(retain, nonatomic) NSString *originalName;
@property(readonly, nonatomic) _Bool hasOriginalName;
- (void)_readOriginalName;
@property(retain, nonatomic) GEORPAccessPointCorrections *accessPoint;
@property(readonly, nonatomic) _Bool hasAccessPoint;
- (void)_readAccessPoint;
@property(nonatomic) _Bool hasLineScheduleDelay;
@property(nonatomic) _Bool lineScheduleDelay;
@property(nonatomic) _Bool hasLineShapeIncorrect;
@property(nonatomic) _Bool lineShapeIncorrect;
@property(retain, nonatomic) GEORPMapLocation *mapLocation;
@property(readonly, nonatomic) _Bool hasMapLocation;
- (void)_readMapLocation;
@property(retain, nonatomic) GEORPCorrectedCoordinate *coordinate;
@property(readonly, nonatomic) _Bool hasCoordinate;
- (void)_readCoordinate;
- (id)businessHoursAtIndex:(unsigned long long)arg1;
- (unsigned long long)businessHoursCount;
- (void)_addNoFlagsBusinessHours:(id)arg1;
- (void)addBusinessHours:(id)arg1;
- (void)clearBusinessHours;
@property(retain, nonatomic) NSMutableArray *businessHours;
- (void)_readBusinessHours;
@property(retain, nonatomic) GEORPAmenityCorrections *amenity;
@property(readonly, nonatomic) _Bool hasAmenity;
- (void)_readAmenity;
@property(retain, nonatomic) NSString *name;
@property(readonly, nonatomic) _Bool hasName;
- (void)_readName;
- (id)initWithData:(id)arg1;
- (id)init;

@end

