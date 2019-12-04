//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>



@class NSMutableArray;

@interface GEOWalletCategoryStylingMap : PBCodable <NSCopying>
{
    NSMutableArray *_mappings;
}

+ (_Bool)isValid:(id)arg1;
+ (Class)mappingsType;
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
- (id)mappingsAtIndex:(unsigned long long)arg1;
- (unsigned long long)mappingsCount;
- (void)addMappings:(id)arg1;
- (void)clearMappings;
@property(retain, nonatomic) NSMutableArray *mappings;

@end

