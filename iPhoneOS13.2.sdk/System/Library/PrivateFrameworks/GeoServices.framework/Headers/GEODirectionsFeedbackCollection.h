//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>



@class GEOLocation, NSMutableArray, PBDataReader;

__attribute__((visibility("hidden")))
@interface GEODirectionsFeedbackCollection : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    struct GEONavigationAudioFeedback _navigationAudioFeedback;
    NSMutableArray *_directionsFeedbacks;
    double _durationOfTrip;
    GEOLocation *_finalLocation;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    _Bool _arrivedAtDestination;
    CDStruct_57366784 _flags;
}

+ (_Bool)isValid:(id)arg1;
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

