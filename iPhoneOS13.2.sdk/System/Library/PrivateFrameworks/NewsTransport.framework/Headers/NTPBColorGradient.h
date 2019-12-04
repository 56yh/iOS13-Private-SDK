//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>



@class NSMutableArray;

@interface NTPBColorGradient : PBCodable <NSCopying>
{
    struct {
        double *list;
        unsigned long long count;
        unsigned long long size;
    } _locations;
    double _endPointX;
    double _endPointY;
    double _startPointX;
    double _startPointY;
    NSMutableArray *_colors;
    struct {
        unsigned int endPointX:1;
        unsigned int endPointY:1;
        unsigned int startPointX:1;
        unsigned int startPointY:1;
    } _has;
}

+ (Class)colorType;
@property(retain, nonatomic) NSMutableArray *colors; // @synthesize colors=_colors;
@property(nonatomic) double endPointY; // @synthesize endPointY=_endPointY;
@property(nonatomic) double endPointX; // @synthesize endPointX=_endPointX;
@property(nonatomic) double startPointY; // @synthesize startPointY=_startPointY;
@property(nonatomic) double startPointX; // @synthesize startPointX=_startPointX;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (void)setLocations:(double *)arg1 count:(unsigned long long)arg2;
- (double)locationAtIndex:(unsigned long long)arg1;
- (void)addLocation:(double)arg1;
- (void)clearLocations;
@property(readonly, nonatomic) double *locations;
@property(readonly, nonatomic) unsigned long long locationsCount;
- (id)colorAtIndex:(unsigned long long)arg1;
- (unsigned long long)colorsCount;
- (void)addColor:(id)arg1;
- (void)clearColors;
@property(nonatomic) _Bool hasEndPointY;
@property(nonatomic) _Bool hasEndPointX;
@property(nonatomic) _Bool hasStartPointY;
@property(nonatomic) _Bool hasStartPointX;
- (void)dealloc;

@end

