//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSMutableArray;

@interface BLTPBFullBulletinList : PBCodable <NSCopying>
{
    NSMutableArray *_sectionBulletinLists;
}

+ (Class)sectionBulletinListType;
@property(retain, nonatomic) NSMutableArray *sectionBulletinLists; // @synthesize sectionBulletinLists=_sectionBulletinLists;
// - (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)sectionBulletinListAtIndex:(NSUInteger)arg1;
- (NSUInteger)sectionBulletinListsCount;
- (void)addSectionBulletinList:(id)arg1;
- (void)clearSectionBulletinLists;

@end

