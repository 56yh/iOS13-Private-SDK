//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>



@class GEOCacheHit, GEOCacheMiss, PBDataReader;

@interface GEOLogMsgEventTileCacheAnalytic : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    GEOCacheHit *_cacheHit;
    GEOCacheMiss *_cacheMiss;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_cacheHit:1;
        unsigned int read_cacheMiss:1;
        unsigned int wrote_cacheHit:1;
        unsigned int wrote_cacheMiss:1;
    } _flags;
}

+ (_Bool)isValid:(id)arg1;
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
@property(retain, nonatomic) GEOCacheMiss *cacheMiss;
@property(readonly, nonatomic) _Bool hasCacheMiss;
- (void)_readCacheMiss;
@property(retain, nonatomic) GEOCacheHit *cacheHit;
@property(readonly, nonatomic) _Bool hasCacheHit;
- (void)_readCacheHit;
- (id)initWithData:(id)arg1;
- (id)init;

@end

