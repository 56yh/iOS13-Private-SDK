//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>



@class GEOTrafficSnapshotMetaData, NSMutableArray, PBDataReader;

__attribute__((visibility("hidden")))
@interface GEOTrafficIncidentSnapshot : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    NSMutableArray *_incidents;
    unsigned long long _receivedTime;
    GEOTrafficSnapshotMetaData *_snapshotMetaData;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int has_receivedTime:1;
        unsigned int read_incidents:1;
        unsigned int read_snapshotMetaData:1;
        unsigned int wrote_incidents:1;
        unsigned int wrote_receivedTime:1;
        unsigned int wrote_snapshotMetaData:1;
    } _flags;
}

+ (_Bool)isValid:(id)arg1;
+ (Class)incidentsType;
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
@property(nonatomic) _Bool hasReceivedTime;
@property(nonatomic) unsigned long long receivedTime;
- (id)incidentsAtIndex:(unsigned long long)arg1;
- (unsigned long long)incidentsCount;
- (void)_addNoFlagsIncidents:(id)arg1;
- (void)addIncidents:(id)arg1;
- (void)clearIncidents;
@property(retain, nonatomic) NSMutableArray *incidents;
- (void)_readIncidents;
@property(retain, nonatomic) GEOTrafficSnapshotMetaData *snapshotMetaData;
@property(readonly, nonatomic) _Bool hasSnapshotMetaData;
- (void)_readSnapshotMetaData;
- (id)initWithData:(id)arg1;
- (id)init;

@end

