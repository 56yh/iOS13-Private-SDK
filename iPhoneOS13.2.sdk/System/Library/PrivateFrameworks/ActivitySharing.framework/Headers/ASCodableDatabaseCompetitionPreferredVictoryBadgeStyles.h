//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>



@interface ASCodableDatabaseCompetitionPreferredVictoryBadgeStyles : PBCodable <NSCopying>
{
    CDStruct_95bda58d _styles;
}

- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (void)setStyles:(int *)arg1 count:(unsigned long long)arg2;
- (int)stylesAtIndex:(unsigned long long)arg1;
- (void)addStyles:(int)arg1;
- (void)clearStyles;
@property(readonly, nonatomic) int *styles;
@property(readonly, nonatomic) unsigned long long stylesCount;
- (void)dealloc;

@end

