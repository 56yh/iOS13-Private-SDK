//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>



@class NSData;

@interface ETPAnger : PBCodable <NSCopying>
{
    NSData *_delays;
    float _duration;
    float _normalizedCenterX;
    float _normalizedCenterY;
    NSData *_points;
    struct {
        unsigned int duration:1;
        unsigned int normalizedCenterX:1;
        unsigned int normalizedCenterY:1;
    } _has;
}

@property(retain, nonatomic) NSData *points; // @synthesize points=_points;
@property(retain, nonatomic) NSData *delays; // @synthesize delays=_delays;
@property(nonatomic) float normalizedCenterY; // @synthesize normalizedCenterY=_normalizedCenterY;
@property(nonatomic) float normalizedCenterX; // @synthesize normalizedCenterX=_normalizedCenterX;
@property(nonatomic) float duration; // @synthesize duration=_duration;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasPoints;
@property(readonly, nonatomic) _Bool hasDelays;
@property(nonatomic) _Bool hasNormalizedCenterY;
@property(nonatomic) _Bool hasNormalizedCenterX;
@property(nonatomic) _Bool hasDuration;

@end

