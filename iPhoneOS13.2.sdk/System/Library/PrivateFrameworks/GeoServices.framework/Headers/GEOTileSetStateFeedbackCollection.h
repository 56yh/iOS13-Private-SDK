//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>



__attribute__((visibility("hidden")))
@interface GEOTileSetStateFeedbackCollection : PBCodable <NSCopying>
{
    struct GEOSessionID _sessionID;
    double _durationInOldState;
    double _newCoverage;
    double _oldCoverage;
    double _sessionRelativeTimestamp;
    int _tileSetStateType;
    struct {
        unsigned int has_sessionID:1;
        unsigned int has_durationInOldState:1;
        unsigned int has_newCoverage:1;
        unsigned int has_oldCoverage:1;
        unsigned int has_sessionRelativeTimestamp:1;
        unsigned int has_tileSetStateType:1;
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
@property(nonatomic) _Bool hasNewCoverage;
@property(nonatomic) double newCoverage;
@property(nonatomic) _Bool hasOldCoverage;
@property(nonatomic) double oldCoverage;
- (int)StringAsTileSetStateType:(id)arg1;
- (id)tileSetStateTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasTileSetStateType;
@property(nonatomic) int tileSetStateType;
@property(nonatomic) _Bool hasDurationInOldState;
@property(nonatomic) double durationInOldState;
@property(nonatomic) _Bool hasSessionRelativeTimestamp;
@property(nonatomic) double sessionRelativeTimestamp;
@property(nonatomic) _Bool hasSessionID;
@property(nonatomic) struct GEOSessionID sessionID;

@end

