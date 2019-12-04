//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>



@class NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDSearchPlaceContextMetadata : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_interpretedCategory;
    NSString *_matchedDisplayName;
    NSString *_normalizedQuery;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    _Bool _isDefaultName;
    struct {
        unsigned int has_isDefaultName:1;
        unsigned int read_unknownFields:1;
        unsigned int read_interpretedCategory:1;
        unsigned int read_matchedDisplayName:1;
        unsigned int read_normalizedQuery:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_interpretedCategory:1;
        unsigned int wrote_matchedDisplayName:1;
        unsigned int wrote_normalizedQuery:1;
        unsigned int wrote_isDefaultName:1;
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
@property(retain, nonatomic) NSString *interpretedCategory;
@property(readonly, nonatomic) _Bool hasInterpretedCategory;
- (void)_readInterpretedCategory;
@property(retain, nonatomic) NSString *normalizedQuery;
@property(readonly, nonatomic) _Bool hasNormalizedQuery;
- (void)_readNormalizedQuery;
@property(nonatomic) _Bool hasIsDefaultName;
@property(nonatomic) _Bool isDefaultName;
@property(retain, nonatomic) NSString *matchedDisplayName;
@property(readonly, nonatomic) _Bool hasMatchedDisplayName;
- (void)_readMatchedDisplayName;
- (id)initWithData:(id)arg1;
- (id)init;

@end

