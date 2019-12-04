//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>



@interface NTPBGroupingFlags : PBCodable <NSCopying>
{
    _Bool _isEligibleForGrouping;
    _Bool _isEligibleForGroupingIfFavorited;
    _Bool _isHidden;
    CDStruct_d00ad9e3 _has;
}

@property(nonatomic) _Bool isEligibleForGroupingIfFavorited; // @synthesize isEligibleForGroupingIfFavorited=_isEligibleForGroupingIfFavorited;
@property(nonatomic) _Bool isEligibleForGrouping; // @synthesize isEligibleForGrouping=_isEligibleForGrouping;
@property(nonatomic) _Bool isHidden; // @synthesize isHidden=_isHidden;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasIsEligibleForGroupingIfFavorited;
@property(nonatomic) _Bool hasIsEligibleForGrouping;
@property(nonatomic) _Bool hasIsHidden;

@end

