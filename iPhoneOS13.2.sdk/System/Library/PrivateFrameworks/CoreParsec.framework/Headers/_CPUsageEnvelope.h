//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


#import <CoreParsec/_CPUsageEnvelope-Protocol.h>

@class NSData, NSString, _CPDeviceContext, _CPImagesUsagePropensity, _CPNewsUsagePropensity, _CPSafariUsagePropensity, _CPSpotlightUsagePropensity, _CPUsageSinceLookback;

@interface _CPUsageEnvelope : PBCodable <_CPUsageEnvelope, NSSecureCoding>
{
    int _configuredLookbackTimeInDays;
    int _totalSessions;
    _CPUsageSinceLookback *_usageSinceLookback;
    _CPSafariUsagePropensity *_safariUsagePropensity;
    _CPSpotlightUsagePropensity *_spotlightUsagePropensity;
    _CPImagesUsagePropensity *_imagesUsagePropensity;
    _CPNewsUsagePropensity *_newsUsagePropensity;
    long long _collectionStartTimestamp;
    long long _collectionEndTimestamp;
    _CPDeviceContext *_context;
    NSData *_uuidBytes;
    unsigned long long _whichKind;
}

@property(readonly, nonatomic) unsigned long long whichKind; // @synthesize whichKind=_whichKind;
@property(copy, nonatomic) NSData *uuidBytes; // @synthesize uuidBytes=_uuidBytes;
@property(retain, nonatomic) _CPDeviceContext *context; // @synthesize context=_context;
@property(nonatomic) int totalSessions; // @synthesize totalSessions=_totalSessions;
@property(nonatomic) int configuredLookbackTimeInDays; // @synthesize configuredLookbackTimeInDays=_configuredLookbackTimeInDays;
@property(nonatomic) long long collectionEndTimestamp; // @synthesize collectionEndTimestamp=_collectionEndTimestamp;
@property(nonatomic) long long collectionStartTimestamp; // @synthesize collectionStartTimestamp=_collectionStartTimestamp;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;
@property(readonly) NSUInteger hash;
- (_Bool)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
@property(retain, nonatomic) _CPNewsUsagePropensity *newsUsagePropensity; // @synthesize newsUsagePropensity=_newsUsagePropensity;
@property(retain, nonatomic) _CPImagesUsagePropensity *imagesUsagePropensity; // @synthesize imagesUsagePropensity=_imagesUsagePropensity;
@property(retain, nonatomic) _CPSpotlightUsagePropensity *spotlightUsagePropensity; // @synthesize spotlightUsagePropensity=_spotlightUsagePropensity;
@property(retain, nonatomic) _CPSafariUsagePropensity *safariUsagePropensity; // @synthesize safariUsagePropensity=_safariUsagePropensity;
@property(retain, nonatomic) _CPUsageSinceLookback *usageSinceLookback; // @synthesize usageSinceLookback=_usageSinceLookback;
- (void)clearKind;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

