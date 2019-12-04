//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>



@class GEOLocation, NSMutableArray, PBDataReader;

@interface GEOLogMsgEventDirections : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    struct GEONavigationAudioFeedback _navigationAudioFeedback;
    struct GEOSessionID _navSessionId;
    NSMutableArray *_directionsFeedbacks;
    NSMutableArray *_durationInNavigationModes;
    double _durationOfTrip;
    GEOLocation *_finalLocation;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    unsigned int _originalEta;
    _Bool _arrivedAtDestination;
    _Bool _preArrival;
    struct {
        unsigned int has_navigationAudioFeedback:1;
        unsigned int has_navSessionId:1;
        unsigned int has_durationOfTrip:1;
        unsigned int has_originalEta:1;
        unsigned int has_arrivedAtDestination:1;
        unsigned int has_preArrival:1;
        unsigned int read_directionsFeedbacks:1;
        unsigned int read_durationInNavigationModes:1;
        unsigned int read_finalLocation:1;
        unsigned int wrote_navigationAudioFeedback:1;
        unsigned int wrote_navSessionId:1;
        unsigned int wrote_directionsFeedbacks:1;
        unsigned int wrote_durationInNavigationModes:1;
        unsigned int wrote_durationOfTrip:1;
        unsigned int wrote_finalLocation:1;
        unsigned int wrote_originalEta:1;
        unsigned int wrote_arrivedAtDestination:1;
        unsigned int wrote_preArrival:1;
    } _flags;
}

+ (_Bool)isValid:(id)arg1;
+ (Class)durationInNavigationModeType;
+ (Class)directionsFeedbackType;
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
@property(nonatomic) _Bool hasPreArrival;
@property(nonatomic) _Bool preArrival;
@property(nonatomic) _Bool hasOriginalEta;
@property(nonatomic) unsigned int originalEta;
- (id)durationInNavigationModeAtIndex:(unsigned long long)arg1;
- (unsigned long long)durationInNavigationModesCount;
- (void)_addNoFlagsDurationInNavigationMode:(id)arg1;
- (void)addDurationInNavigationMode:(id)arg1;
- (void)clearDurationInNavigationModes;
@property(retain, nonatomic) NSMutableArray *durationInNavigationModes;
- (void)_readDurationInNavigationModes;
@property(nonatomic) _Bool hasNavSessionId;
@property(nonatomic) struct GEOSessionID navSessionId;
@property(nonatomic) _Bool hasDurationOfTrip;
@property(nonatomic) double durationOfTrip;
@property(nonatomic) _Bool hasNavigationAudioFeedback;
@property(nonatomic) struct GEONavigationAudioFeedback navigationAudioFeedback;
@property(nonatomic) _Bool hasArrivedAtDestination;
@property(nonatomic) _Bool arrivedAtDestination;
@property(retain, nonatomic) GEOLocation *finalLocation;
@property(readonly, nonatomic) _Bool hasFinalLocation;
- (void)_readFinalLocation;
- (id)directionsFeedbackAtIndex:(unsigned long long)arg1;
- (unsigned long long)directionsFeedbacksCount;
- (void)_addNoFlagsDirectionsFeedback:(id)arg1;
- (void)addDirectionsFeedback:(id)arg1;
- (void)clearDirectionsFeedbacks;
@property(retain, nonatomic) NSMutableArray *directionsFeedbacks;
- (void)_readDirectionsFeedbacks;
- (id)initWithData:(id)arg1;
- (id)init;

@end

