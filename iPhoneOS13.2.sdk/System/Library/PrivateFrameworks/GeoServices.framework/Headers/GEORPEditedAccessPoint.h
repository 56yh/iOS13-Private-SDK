//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>



@class GEORPCorrectedString, GEORoadAccessPoint, PBDataReader, PBUnknownFields;

@interface GEORPEditedAccessPoint : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEORoadAccessPoint *_corrected;
    GEORPCorrectedString *_name;
    GEORoadAccessPoint *_original;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_corrected:1;
        unsigned int read_name:1;
        unsigned int read_original:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_corrected:1;
        unsigned int wrote_name:1;
        unsigned int wrote_original:1;
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
@property(retain, nonatomic) GEORPCorrectedString *name;
@property(readonly, nonatomic) _Bool hasName;
- (void)_readName;
@property(retain, nonatomic) GEORoadAccessPoint *corrected;
@property(readonly, nonatomic) _Bool hasCorrected;
- (void)_readCorrected;
@property(retain, nonatomic) GEORoadAccessPoint *original;
@property(readonly, nonatomic) _Bool hasOriginal;
- (void)_readOriginal;
- (id)initWithData:(id)arg1;
- (id)init;

@end

