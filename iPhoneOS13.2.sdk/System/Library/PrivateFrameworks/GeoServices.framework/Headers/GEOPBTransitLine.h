//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/GEOTransitNamedItem-Protocol.h>


@class GEOPBTransitArtwork, GEOPBTransitLineDisplayHints, GEOStyleAttributes, NSString, PBDataReader, PBUnknownFields;

@interface GEOPBTransitLine : PBCodable <GEOTransitNamedItem, NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    struct GEOPBTransitTimeRange *_operatingHours;
    unsigned long long _operatingHoursCount;
    unsigned long long _operatingHoursSpace;
    GEOPBTransitArtwork *_alternateArtwork;
    GEOPBTransitArtwork *_artwork;
    GEOPBTransitLineDisplayHints *_displayHints;
    NSString *_lineColor;
    GEOPBTransitArtwork *_modeArtwork;
    unsigned long long _muid;
    NSString *_nameDisplayString;
    GEOStyleAttributes *_styleAttributes;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _guidanceSnappingType;
    unsigned int _lineIndex;
    int _placeDisplayStyle;
    int _preferredDepartureTimeStyle;
    unsigned int _systemIndex;
    int _transitType;
    struct {
        unsigned int has_muid:1;
        unsigned int has_guidanceSnappingType:1;
        unsigned int has_lineIndex:1;
        unsigned int has_placeDisplayStyle:1;
        unsigned int has_preferredDepartureTimeStyle:1;
        unsigned int has_systemIndex:1;
        unsigned int has_transitType:1;
        unsigned int read_unknownFields:1;
        unsigned int read_operatingHours:1;
        unsigned int read_alternateArtwork:1;
        unsigned int read_artwork:1;
        unsigned int read_displayHints:1;
        unsigned int read_lineColor:1;
        unsigned int read_modeArtwork:1;
        unsigned int read_nameDisplayString:1;
        unsigned int read_styleAttributes:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_operatingHours:1;
        unsigned int wrote_alternateArtwork:1;
        unsigned int wrote_artwork:1;
        unsigned int wrote_displayHints:1;
        unsigned int wrote_lineColor:1;
        unsigned int wrote_modeArtwork:1;
        unsigned int wrote_muid:1;
        unsigned int wrote_nameDisplayString:1;
        unsigned int wrote_styleAttributes:1;
        unsigned int wrote_guidanceSnappingType:1;
        unsigned int wrote_lineIndex:1;
        unsigned int wrote_placeDisplayStyle:1;
        unsigned int wrote_preferredDepartureTimeStyle:1;
        unsigned int wrote_systemIndex:1;
        unsigned int wrote_transitType:1;
    } _flags;
}

+ (_Bool)isValid:(id)arg1;
- (void)clearUnknownFields:(_Bool)arg1;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
@property(readonly) NSUInteger hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (id)dictionaryRepresentation;
@property(readonly, copy) NSString *description;
- (int)StringAsPlaceDisplayStyle:(id)arg1;
- (id)placeDisplayStyleAsString:(int)arg1;
@property(nonatomic) _Bool hasPlaceDisplayStyle;
@property(nonatomic) int placeDisplayStyle;
@property(retain, nonatomic) NSString *nameDisplayString;
@property(readonly, nonatomic) _Bool hasNameDisplayString;
- (void)_readNameDisplayString;
@property(retain, nonatomic) GEOPBTransitLineDisplayHints *displayHints;
@property(readonly, nonatomic) _Bool hasDisplayHints;
- (void)_readDisplayHints;
- (void)setOperatingHours:(struct GEOPBTransitTimeRange *)arg1 count:(unsigned long long)arg2;
- (struct GEOPBTransitTimeRange)operatingHoursAtIndex:(unsigned long long)arg1;
- (void)_addNoFlagsOperatingHours:(struct GEOPBTransitTimeRange)arg1;
- (void)addOperatingHours:(struct GEOPBTransitTimeRange)arg1;
- (void)clearOperatingHours;
@property(readonly, nonatomic) struct GEOPBTransitTimeRange *operatingHours;
@property(readonly, nonatomic) unsigned long long operatingHoursCount;
- (void)_readOperatingHours;
@property(retain, nonatomic) GEOStyleAttributes *styleAttributes;
@property(readonly, nonatomic) _Bool hasStyleAttributes;
- (void)_readStyleAttributes;
- (int)StringAsPreferredDepartureTimeStyle:(id)arg1;
- (id)preferredDepartureTimeStyleAsString:(int)arg1;
@property(nonatomic) _Bool hasPreferredDepartureTimeStyle;
@property(nonatomic) int preferredDepartureTimeStyle;
@property(nonatomic) _Bool hasTransitType;
@property(nonatomic) int transitType;
@property(nonatomic) _Bool hasSystemIndex;
@property(nonatomic) unsigned int systemIndex;
@property(retain, nonatomic) NSString *lineColor;
@property(readonly, nonatomic) _Bool hasLineColor;
- (void)_readLineColor;
- (int)StringAsGuidanceSnappingType:(id)arg1;
- (id)guidanceSnappingTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasGuidanceSnappingType;
@property(nonatomic) int guidanceSnappingType;
@property(nonatomic) _Bool hasMuid;
@property(nonatomic) unsigned long long muid;
@property(retain, nonatomic) GEOPBTransitArtwork *alternateArtwork;
@property(readonly, nonatomic) _Bool hasAlternateArtwork;
- (void)_readAlternateArtwork;
@property(retain, nonatomic) GEOPBTransitArtwork *modeArtwork;
@property(readonly, nonatomic) _Bool hasModeArtwork;
- (void)_readModeArtwork;
@property(retain, nonatomic) GEOPBTransitArtwork *artwork;
@property(readonly, nonatomic) _Bool hasArtwork;
- (void)_readArtwork;
@property(nonatomic) _Bool hasLineIndex;
@property(nonatomic) unsigned int lineIndex;
- (void)dealloc;
- (id)initWithData:(id)arg1;
- (id)init;
- (id)identifierWithLocationHint:(CDStruct_c3b9c2ee)arg1;
- (id)geoTransitLineWithSystem:(id)arg1 locationHint:(CDStruct_c3b9c2ee)arg2;
- (id)bestName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

