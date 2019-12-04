//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>



@class GEOPDPhoto, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDIcon : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    GEOPDPhoto *_image;
    int _iconType;
    struct {
        unsigned int has_iconType:1;
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
- (int)StringAsIconType:(id)arg1;
- (id)iconTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasIconType;
@property(nonatomic) int iconType;
@property(retain, nonatomic) GEOPDPhoto *image;
@property(readonly, nonatomic) _Bool hasImage;

@end

