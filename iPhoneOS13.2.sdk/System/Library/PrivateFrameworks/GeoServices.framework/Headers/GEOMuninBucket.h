//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>



@class NSString, PBUnknownFields;

@interface GEOMuninBucket : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    NSString *_bucketURL;
    unsigned int _bucketID;
    unsigned int _lodLevel;
    struct {
        unsigned int has_bucketID:1;
        unsigned int has_lodLevel:1;
    } _flags;
}

+ (_Bool)isValid:(id)arg1;
- (void)clearUnknownFields:(_Bool)arg1;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
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
@property(nonatomic) _Bool hasLodLevel;
@property(nonatomic) unsigned int lodLevel;
@property(retain, nonatomic) NSString *bucketURL;
@property(readonly, nonatomic) _Bool hasBucketURL;
@property(nonatomic) _Bool hasBucketID;
@property(nonatomic) unsigned int bucketID;

@end

