//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>



@class NSString, NSUUID, PBDataReader, PBUnknownFields;

@interface GEOMapItemRoutineAttributes : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    double _eventDate;
    NSString *_eventName;
    NSString *_loiIdentifierString;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _loiType;
    _Bool _isEventAllDay;
    struct {
        unsigned int has_eventDate:1;
        unsigned int has_loiType:1;
        unsigned int has_isEventAllDay:1;
        unsigned int read_unknownFields:1;
        unsigned int read_eventName:1;
        unsigned int read_loiIdentifierString:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_eventDate:1;
        unsigned int wrote_eventName:1;
        unsigned int wrote_loiIdentifierString:1;
        unsigned int wrote_loiType:1;
        unsigned int wrote_isEventAllDay:1;
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
@property(retain, nonatomic) NSString *loiIdentifierString;
@property(readonly, nonatomic) _Bool hasLoiIdentifierString;
- (void)_readLoiIdentifierString;
@property(nonatomic) _Bool hasIsEventAllDay;
@property(nonatomic) _Bool isEventAllDay;
@property(nonatomic) _Bool hasEventDate;
@property(nonatomic) double eventDate;
@property(retain, nonatomic) NSString *eventName;
@property(readonly, nonatomic) _Bool hasEventName;
- (void)_readEventName;
- (int)StringAsLoiType:(id)arg1;
- (id)loiTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasLoiType;
@property(nonatomic) int loiType;
- (id)initWithData:(id)arg1;
- (id)init;
@property(retain, nonatomic) NSUUID *loiIdentifier;

@end

