//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>



@class GEOFormattedString, GEOPlaceFormattedString, PBDataReader, PBUnknownFields;

@interface GEOAlertNonRecommendedRouteText : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOPlaceFormattedString *_body;
    GEOFormattedString *_responseAlertPrimary;
    GEOFormattedString *_responseAlertSecondary;
    GEOPlaceFormattedString *_title;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_body:1;
        unsigned int read_responseAlertPrimary:1;
        unsigned int read_responseAlertSecondary:1;
        unsigned int read_title:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_body:1;
        unsigned int wrote_responseAlertPrimary:1;
        unsigned int wrote_responseAlertSecondary:1;
        unsigned int wrote_title:1;
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
@property(retain, nonatomic) GEOPlaceFormattedString *body;
@property(readonly, nonatomic) _Bool hasBody;
- (void)_readBody;
@property(retain, nonatomic) GEOPlaceFormattedString *title;
@property(readonly, nonatomic) _Bool hasTitle;
- (void)_readTitle;
@property(retain, nonatomic) GEOFormattedString *responseAlertSecondary;
@property(readonly, nonatomic) _Bool hasResponseAlertSecondary;
- (void)_readResponseAlertSecondary;
@property(retain, nonatomic) GEOFormattedString *responseAlertPrimary;
@property(readonly, nonatomic) _Bool hasResponseAlertPrimary;
- (void)_readResponseAlertPrimary;
- (id)initWithData:(id)arg1;
- (id)init;

@end

