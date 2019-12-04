//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>



@class PBUnknownFields;

@interface GEOLocalTime : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    unsigned long long _timeRoundedToHour;
    float _timezoneOffsetFromGmtInHours;
    struct {
        unsigned int has_timeRoundedToHour:1;
        unsigned int has_timezoneOffsetFromGmtInHours:1;
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
@property(nonatomic) _Bool hasTimezoneOffsetFromGmtInHours;
@property(nonatomic) float timezoneOffsetFromGmtInHours;
@property(nonatomic) _Bool hasTimeRoundedToHour;
@property(nonatomic) unsigned long long timeRoundedToHour;
- (id)initWithCFAbsoluteTime:(double)arg1;
- (id)initWithDate:(id)arg1;

@end

