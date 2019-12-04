//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>



@interface CLPIndoorCMPedometer : PBCodable <NSCopying>
{
    double _firstStepTime;
    double _timestamp;
    float _activeTime;
    float _distance;
    int _floorsAscended;
    int _floorsDescended;
    int _numberOfSteps;
    struct {
        unsigned int firstStepTime:1;
        unsigned int timestamp:1;
        unsigned int activeTime:1;
        unsigned int distance:1;
        unsigned int floorsAscended:1;
        unsigned int floorsDescended:1;
        unsigned int numberOfSteps:1;
    } _has;
}

@property(nonatomic) float activeTime; // @synthesize activeTime=_activeTime;
@property(nonatomic) double firstStepTime; // @synthesize firstStepTime=_firstStepTime;
@property(nonatomic) int floorsDescended; // @synthesize floorsDescended=_floorsDescended;
@property(nonatomic) int floorsAscended; // @synthesize floorsAscended=_floorsAscended;
@property(nonatomic) int numberOfSteps; // @synthesize numberOfSteps=_numberOfSteps;
@property(nonatomic) float distance; // @synthesize distance=_distance;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasActiveTime;
@property(nonatomic) _Bool hasFirstStepTime;
@property(nonatomic) _Bool hasFloorsDescended;
@property(nonatomic) _Bool hasFloorsAscended;
@property(nonatomic) _Bool hasNumberOfSteps;
@property(nonatomic) _Bool hasDistance;
@property(nonatomic) _Bool hasTimestamp;

@end

