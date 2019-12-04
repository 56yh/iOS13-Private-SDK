//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


#import <SearchFoundation/_SFPBPin-Protocol.h>

@class NSData, NSString, _SFPBColor, _SFPBLatLng;

@interface _SFPBPin : PBCodable <_SFPBPin, NSSecureCoding>
{
    int _pinBehavior;
    _SFPBLatLng *_location;
    _SFPBColor *_pinColor;
    NSString *_label;
    NSString *_resultID;
    NSData *_mapsData;
}

@property(nonatomic) int pinBehavior; // @synthesize pinBehavior=_pinBehavior;
@property(copy, nonatomic) NSData *mapsData; // @synthesize mapsData=_mapsData;
@property(copy, nonatomic) NSString *resultID; // @synthesize resultID=_resultID;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(retain, nonatomic) _SFPBColor *pinColor; // @synthesize pinColor=_pinColor;
@property(retain, nonatomic) _SFPBLatLng *location; // @synthesize location=_location;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;
@property(readonly) NSUInteger hash;
- (_Bool)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)initWithFacade:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

