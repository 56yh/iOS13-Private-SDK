//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>



@class NSMutableArray, PBDataReader;

@interface GEONavigationRouteTransitSummary : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    NSMutableArray *_possibleStops;
    NSMutableArray *_scheduledLinks;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_possibleStops:1;
        unsigned int read_scheduledLinks:1;
        unsigned int wrote_possibleStops:1;
        unsigned int wrote_scheduledLinks:1;
    } _flags;
}

+ (_Bool)isValid:(id)arg1;
+ (Class)possibleStopType;
+ (Class)scheduledLinkType;
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
- (id)possibleStopAtIndex:(unsigned long long)arg1;
- (unsigned long long)possibleStopsCount;
- (void)_addNoFlagsPossibleStop:(id)arg1;
- (void)addPossibleStop:(id)arg1;
- (void)clearPossibleStops;
@property(retain, nonatomic) NSMutableArray *possibleStops;
- (void)_readPossibleStops;
- (id)scheduledLinkAtIndex:(unsigned long long)arg1;
- (unsigned long long)scheduledLinksCount;
- (void)_addNoFlagsScheduledLink:(id)arg1;
- (void)addScheduledLink:(id)arg1;
- (void)clearScheduledLinks;
@property(retain, nonatomic) NSMutableArray *scheduledLinks;
- (void)_readScheduledLinks;
- (id)initWithData:(id)arg1;
- (id)init;
- (id)initWithRoute:(id)arg1;

@end

