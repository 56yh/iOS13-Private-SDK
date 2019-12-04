//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>



@class NSString, PBDataReader, PBUnknownFields;

@interface GEOPBTransitZoomRangeString : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_labelLanguage;
    NSString *_labelText;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    unsigned int _minZoom;
    struct {
        unsigned int has_minZoom:1;
        unsigned int read_unknownFields:1;
        unsigned int read_labelLanguage:1;
        unsigned int read_labelText:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_labelLanguage:1;
        unsigned int wrote_labelText:1;
        unsigned int wrote_minZoom:1;
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
@property(retain, nonatomic) NSString *labelText;
@property(readonly, nonatomic) _Bool hasLabelText;
- (void)_readLabelText;
@property(retain, nonatomic) NSString *labelLanguage;
@property(readonly, nonatomic) _Bool hasLabelLanguage;
- (void)_readLabelLanguage;
@property(nonatomic) _Bool hasMinZoom;
@property(nonatomic) unsigned int minZoom;
- (id)initWithData:(id)arg1;
- (id)init;

@end

