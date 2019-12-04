//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/GEOTransitLabelItem-Protocol.h>


@class GEOPBTransitArtwork, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDTransitLabel : PBCodable <GEOTransitLabelItem, NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOPBTransitArtwork *_labelArtwork;
    NSString *_labelTextString;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _labelType;
    struct {
        unsigned int has_labelType:1;
        unsigned int read_unknownFields:1;
        unsigned int read_labelArtwork:1;
        unsigned int read_labelTextString:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_labelArtwork:1;
        unsigned int wrote_labelTextString:1;
        unsigned int wrote_labelType:1;
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
@property(retain, nonatomic) GEOPBTransitArtwork *labelArtwork;
@property(readonly, nonatomic) _Bool hasLabelArtwork;
- (void)_readLabelArtwork;
@property(retain, nonatomic) NSString *labelTextString;
@property(readonly, nonatomic) _Bool hasLabelTextString;
- (void)_readLabelTextString;
- (int)StringAsLabelType:(id)arg1;
- (id)labelTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasLabelType;
@property(nonatomic) int labelType;
- (id)initWithData:(id)arg1;
- (id)init;
@property(readonly, nonatomic) NSString *labelString;
@property(readonly, nonatomic) unsigned long long type;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

