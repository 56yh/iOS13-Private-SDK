//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>



@class GEOFormattedString, NSMutableArray, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOShortTrafficSummary : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOFormattedString *_detail;
    NSMutableArray *_titles;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_detail:1;
        unsigned int read_titles:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_detail:1;
        unsigned int wrote_titles:1;
    } _flags;
}

+ (_Bool)isValid:(id)arg1;
+ (Class)titleType;
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
@property(retain, nonatomic) GEOFormattedString *detail;
@property(readonly, nonatomic) _Bool hasDetail;
- (void)_readDetail;
- (id)titleAtIndex:(unsigned long long)arg1;
- (unsigned long long)titlesCount;
- (void)_addNoFlagsTitle:(id)arg1;
- (void)addTitle:(id)arg1;
- (void)clearTitles;
@property(retain, nonatomic) NSMutableArray *titles;
- (void)_readTitles;
- (id)initWithData:(id)arg1;
- (id)init;

@end

