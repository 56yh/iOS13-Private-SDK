//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>



@class NSMutableArray;

@interface _MPUProtoBufUserActivityContext : PBCodable <NSCopying>
{
    NSMutableArray *_containerItems;
    int _originatorType;
    int _originatorVersion;
    struct {
        unsigned int originatorType:1;
        unsigned int originatorVersion:1;
    } _has;
}

@property(nonatomic) int originatorVersion; // @synthesize originatorVersion=_originatorVersion;
@property(nonatomic) int originatorType; // @synthesize originatorType=_originatorType;
@property(retain, nonatomic) NSMutableArray *containerItems; // @synthesize containerItems=_containerItems;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasOriginatorVersion;
@property(nonatomic) _Bool hasOriginatorType;
- (id)containerItemsAtIndex:(unsigned long long)arg1;
- (unsigned long long)containerItemsCount;
- (void)addContainerItems:(id)arg1;
- (void)clearContainerItems;

@end

