//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>



@class NSMutableArray, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDOfflineUpdateManifest : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_datas;
    NSMutableArray *_patchs;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_datas:1;
        unsigned int read_patchs:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_datas:1;
        unsigned int wrote_patchs:1;
    } _flags;
}

+ (_Bool)isValid:(id)arg1;
+ (Class)dataType;
+ (Class)patchType;
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
- (id)dataAtIndex:(unsigned long long)arg1;
- (unsigned long long)datasCount;
- (void)_addNoFlagsData:(id)arg1;
- (void)addData:(id)arg1;
- (void)clearDatas;
@property(retain, nonatomic) NSMutableArray *datas;
- (void)_readDatas;
- (id)patchAtIndex:(unsigned long long)arg1;
- (unsigned long long)patchsCount;
- (void)_addNoFlagsPatch:(id)arg1;
- (void)addPatch:(id)arg1;
- (void)clearPatchs;
@property(retain, nonatomic) NSMutableArray *patchs;
- (void)_readPatchs;
- (id)initWithData:(id)arg1;
- (id)init;

@end

