//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>



@class NSString, PBDataReader;

@interface GEOLogMsgStateMapLaunch : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    NSString *_launchUri;
    NSString *_sourceAppId;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_launchUri:1;
        unsigned int read_sourceAppId:1;
        unsigned int wrote_launchUri:1;
        unsigned int wrote_sourceAppId:1;
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
@property(retain, nonatomic) NSString *launchUri;
@property(readonly, nonatomic) _Bool hasLaunchUri;
- (void)_readLaunchUri;
@property(retain, nonatomic) NSString *sourceAppId;
@property(readonly, nonatomic) _Bool hasSourceAppId;
- (void)_readSourceAppId;
- (id)initWithData:(id)arg1;
- (id)init;

@end
