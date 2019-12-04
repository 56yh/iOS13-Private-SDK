//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/GEOSurchargeType-Protocol.h>


@class GEOFormattedString, NSString, PBUnknownFields;
@protocol GEOServerFormattedString;

@interface GEORequestOption : PBCodable <GEOSurchargeType, NSCopying>
{
    PBUnknownFields *_unknownFields;
    GEOFormattedString *_name;
    int _enumValue;
    struct {
        unsigned int has_enumValue:1;
    } _flags;
}

+ (_Bool)isValid:(id)arg1;
- (void)clearUnknownFields:(_Bool)arg1;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
@property(readonly) NSUInteger hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (id)dictionaryRepresentation;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) GEOFormattedString *name;
@property(readonly, nonatomic) _Bool hasName;
@property(nonatomic) _Bool hasEnumValue;
@property(nonatomic) int enumValue;
@property(readonly, nonatomic) id <GEOServerFormattedString> formattedName;
@property(readonly, nonatomic) int value;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

