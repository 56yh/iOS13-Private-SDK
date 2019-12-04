//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/GEOServiceGap-Protocol.h>


@class GEOFormattedString, NSDate, NSString, PBUnknownFields;
@protocol GEOServerFormattedString;

@interface GEOTransitServiceGap : PBCodable <GEOServiceGap, NSCopying>
{
    PBUnknownFields *_unknownFields;
    GEOFormattedString *_displayMessage;
    unsigned int _absEndTime;
    unsigned int _absStartTime;
    unsigned int _appearsBeforeSuggestedRouteIndex;
    struct {
        unsigned int has_absEndTime:1;
        unsigned int has_absStartTime:1;
        unsigned int has_appearsBeforeSuggestedRouteIndex:1;
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
@property(retain, nonatomic) GEOFormattedString *displayMessage;
@property(readonly, nonatomic) _Bool hasDisplayMessage;
@property(nonatomic) _Bool hasAbsEndTime;
@property(nonatomic) unsigned int absEndTime;
@property(nonatomic) _Bool hasAbsStartTime;
@property(nonatomic) unsigned int absStartTime;
@property(nonatomic) _Bool hasAppearsBeforeSuggestedRouteIndex;
@property(nonatomic) unsigned int appearsBeforeSuggestedRouteIndex;
@property(readonly, nonatomic) id <GEOServerFormattedString> displayMessagFormatString;
@property(readonly, nonatomic) unsigned long long routeListInsertBeforeIndex;
@property(readonly, nonatomic) NSDate *endDate;
@property(readonly, nonatomic) NSDate *startDate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

