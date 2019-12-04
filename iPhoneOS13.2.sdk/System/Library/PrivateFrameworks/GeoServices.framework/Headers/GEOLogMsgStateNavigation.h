//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>



@class GEONavCameraState;

@interface GEOLogMsgStateNavigation : PBCodable <NSCopying>
{
    double _distanceToDestination;
    GEONavCameraState *_navCameraState;
    int _lineType;
    int _navState;
    struct {
        unsigned int has_distanceToDestination:1;
        unsigned int has_lineType:1;
        unsigned int has_navState:1;
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
@property(retain, nonatomic) GEONavCameraState *navCameraState;
@property(readonly, nonatomic) _Bool hasNavCameraState;
@property(nonatomic) _Bool hasDistanceToDestination;
@property(nonatomic) double distanceToDestination;
- (int)StringAsNavState:(id)arg1;
- (id)navStateAsString:(int)arg1;
@property(nonatomic) _Bool hasNavState;
@property(nonatomic) int navState;
- (int)StringAsLineType:(id)arg1;
- (id)lineTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasLineType;
@property(nonatomic) int lineType;

@end

