//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>



@class NSMutableArray;

@interface NTPBTodaySectionsMapping : PBCodable <NSCopying>
{
    NSMutableArray *_identifiers;
}

+ (Class)identifiersType;
@property(retain, nonatomic) NSMutableArray *identifiers; // @synthesize identifiers=_identifiers;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)identifiersAtIndex:(unsigned long long)arg1;
- (unsigned long long)identifiersCount;
- (void)addIdentifiers:(id)arg1;
- (void)clearIdentifiers;

@end

