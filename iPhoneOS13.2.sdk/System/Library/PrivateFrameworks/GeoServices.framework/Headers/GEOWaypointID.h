//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>



@class GEOLatLng, GEOStructuredAddress, NSMutableArray, NSString, PBDataReader, PBUnknownFields;

@interface GEOWaypointID : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOStructuredAddress *_addressHint;
    NSMutableArray *_formattedAddressLineHints;
    GEOLatLng *_locationHint;
    unsigned long long _muid;
    NSString *_placeNameHint;
    unsigned long long _resultProviderId;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _addressGeocodeAccuracyHint;
    int _placeTypeHint;
    struct {
        unsigned int has_muid:1;
        unsigned int has_resultProviderId:1;
        unsigned int has_addressGeocodeAccuracyHint:1;
        unsigned int has_placeTypeHint:1;
        unsigned int read_unknownFields:1;
        unsigned int read_addressHint:1;
        unsigned int read_formattedAddressLineHints:1;
        unsigned int read_locationHint:1;
        unsigned int read_placeNameHint:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_addressHint:1;
        unsigned int wrote_formattedAddressLineHints:1;
        unsigned int wrote_locationHint:1;
        unsigned int wrote_muid:1;
        unsigned int wrote_placeNameHint:1;
        unsigned int wrote_resultProviderId:1;
        unsigned int wrote_addressGeocodeAccuracyHint:1;
        unsigned int wrote_placeTypeHint:1;
    } _flags;
}

+ (_Bool)isValid:(id)arg1;
+ (Class)formattedAddressLineHintType;
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
- (int)StringAsAddressGeocodeAccuracyHint:(id)arg1;
- (id)addressGeocodeAccuracyHintAsString:(int)arg1;
@property(nonatomic) _Bool hasAddressGeocodeAccuracyHint;
@property(nonatomic) int addressGeocodeAccuracyHint;
- (int)StringAsPlaceTypeHint:(id)arg1;
- (id)placeTypeHintAsString:(int)arg1;
@property(nonatomic) _Bool hasPlaceTypeHint;
@property(nonatomic) int placeTypeHint;
- (id)formattedAddressLineHintAtIndex:(unsigned long long)arg1;
- (unsigned long long)formattedAddressLineHintsCount;
- (void)_addNoFlagsFormattedAddressLineHint:(id)arg1;
- (void)addFormattedAddressLineHint:(id)arg1;
- (void)clearFormattedAddressLineHints;
@property(retain, nonatomic) NSMutableArray *formattedAddressLineHints;
- (void)_readFormattedAddressLineHints;
@property(retain, nonatomic) NSString *placeNameHint;
@property(readonly, nonatomic) _Bool hasPlaceNameHint;
- (void)_readPlaceNameHint;
@property(retain, nonatomic) GEOStructuredAddress *addressHint;
@property(readonly, nonatomic) _Bool hasAddressHint;
- (void)_readAddressHint;
@property(retain, nonatomic) GEOLatLng *locationHint;
@property(readonly, nonatomic) _Bool hasLocationHint;
- (void)_readLocationHint;
@property(nonatomic) _Bool hasResultProviderId;
@property(nonatomic) unsigned long long resultProviderId;
@property(nonatomic) _Bool hasMuid;
@property(nonatomic) unsigned long long muid;
- (id)initWithData:(id)arg1;
- (id)init;

@end

