//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/GEOServerFormatTokenCountdownValue-Protocol.h>


@class NSArray, NSDictionary, NSMutableArray, NSString, PBDataReader, PBUnknownFields;

@interface GEOCountdownData : PBCodable <GEOServerFormatTokenCountdownValue, NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    CDStruct_95bda58d _alternateCountdownTypes;
    CDStruct_9f2792e4 _timestampValues;
    NSMutableArray *_alternateFormatStrings;
    NSString *_separator;
    NSString *_timezone;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_alternateCountdownTypes:1;
        unsigned int read_timestampValues:1;
        unsigned int read_alternateFormatStrings:1;
        unsigned int read_separator:1;
        unsigned int read_timezone:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_alternateCountdownTypes:1;
        unsigned int wrote_timestampValues:1;
        unsigned int wrote_alternateFormatStrings:1;
        unsigned int wrote_separator:1;
        unsigned int wrote_timezone:1;
    } _flags;
}

+ (_Bool)isValid:(id)arg1;
+ (Class)alternateFormatStringType;
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
@property(retain, nonatomic) NSString *timezone;
@property(readonly, nonatomic) _Bool hasTimezone;
- (void)_readTimezone;
@property(retain, nonatomic) NSString *separator;
@property(readonly, nonatomic) _Bool hasSeparator;
- (void)_readSeparator;
- (int)StringAsAlternateCountdownTypes:(id)arg1;
- (id)alternateCountdownTypesAsString:(int)arg1;
- (void)setAlternateCountdownTypes:(int *)arg1 count:(unsigned long long)arg2;
- (int)alternateCountdownTypeAtIndex:(unsigned long long)arg1;
- (void)_addNoFlagsAlternateCountdownType:(int)arg1;
- (void)addAlternateCountdownType:(int)arg1;
- (void)clearAlternateCountdownTypes;
@property(readonly, nonatomic) int *alternateCountdownTypes;
@property(readonly, nonatomic) unsigned long long alternateCountdownTypesCount;
- (void)_readAlternateCountdownTypes;
- (id)alternateFormatStringAtIndex:(unsigned long long)arg1;
- (unsigned long long)alternateFormatStringsCount;
- (void)_addNoFlagsAlternateFormatString:(id)arg1;
- (void)addAlternateFormatString:(id)arg1;
- (void)clearAlternateFormatStrings;
@property(retain, nonatomic) NSMutableArray *alternateFormatStrings;
- (void)_readAlternateFormatStrings;
- (void)setTimestampValues:(unsigned int *)arg1 count:(unsigned long long)arg2;
- (unsigned int)timestampValueAtIndex:(unsigned long long)arg1;
- (void)_addNoFlagsTimestampValue:(unsigned int)arg1;
- (void)addTimestampValue:(unsigned int)arg1;
- (void)clearTimestampValues;
@property(readonly, nonatomic) unsigned int *timestampValues;
@property(readonly, nonatomic) unsigned long long timestampValuesCount;
- (void)_readTimestampValues;
- (void)dealloc;
- (id)initWithData:(id)arg1;
- (id)init;
- (long long)_convertFrom:(int)arg1;
@property(readonly, nonatomic) NSDictionary *alternativeFormatStringsByType;
@property(readonly, nonatomic) long long countdownType;
@property(readonly, nonatomic) NSArray *timestamps;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

