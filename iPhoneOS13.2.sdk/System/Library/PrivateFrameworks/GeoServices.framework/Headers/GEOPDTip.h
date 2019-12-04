//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>



@class GEOPDUser, NSMutableArray, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDTip : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_snippets;
    NSString *_tipId;
    double _tipTime;
    GEOPDUser *_tipster;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int has_tipTime:1;
        unsigned int read_unknownFields:1;
        unsigned int read_snippets:1;
        unsigned int read_tipId:1;
        unsigned int read_tipster:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_snippets:1;
        unsigned int wrote_tipId:1;
        unsigned int wrote_tipTime:1;
        unsigned int wrote_tipster:1;
    } _flags;
}

+ (_Bool)isValid:(id)arg1;
+ (Class)snippetType;
+ (id)tipsForPlaceData:(id)arg1;
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
@property(retain, nonatomic) NSString *tipId;
@property(readonly, nonatomic) _Bool hasTipId;
- (void)_readTipId;
@property(retain, nonatomic) GEOPDUser *tipster;
@property(readonly, nonatomic) _Bool hasTipster;
- (void)_readTipster;
@property(nonatomic) _Bool hasTipTime;
@property(nonatomic) double tipTime;
- (id)snippetAtIndex:(unsigned long long)arg1;
- (unsigned long long)snippetsCount;
- (void)_addNoFlagsSnippet:(id)arg1;
- (void)addSnippet:(id)arg1;
- (void)clearSnippets;
@property(retain, nonatomic) NSMutableArray *snippets;
- (void)_readSnippets;
- (id)initWithData:(id)arg1;
- (id)init;

@end

