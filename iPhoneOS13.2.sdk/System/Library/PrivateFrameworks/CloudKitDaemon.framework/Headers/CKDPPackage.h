//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>



@class CKDPAsset, NSMutableArray;

__attribute__((visibility("hidden")))
@interface CKDPPackage : PBCodable <NSCopying>
{
    CKDPAsset *_manifest;
    NSMutableArray *_sections;
}

+ (Class)sectionsType;
@property(retain, nonatomic) NSMutableArray *sections; // @synthesize sections=_sections;
@property(retain, nonatomic) CKDPAsset *manifest; // @synthesize manifest=_manifest;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)sectionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)sectionsCount;
- (void)addSections:(id)arg1;
- (void)clearSections;
@property(readonly, nonatomic) _Bool hasManifest;

@end

