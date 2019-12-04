//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


#import <SearchFoundation/_SFPBProduct-Protocol.h>

@class NSData, NSString, _SFPBURL;

@interface _SFPBProduct : PBCodable <_SFPBProduct, NSSecureCoding>
{
    _Bool _buyable;
    NSString *_identifier;
    NSString *_productIdentifier;
    _SFPBURL *_availabilityURL;
    NSString *_displayName;
}

@property(nonatomic) _Bool buyable; // @synthesize buyable=_buyable;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(retain, nonatomic) _SFPBURL *availabilityURL; // @synthesize availabilityURL=_availabilityURL;
@property(copy, nonatomic) NSString *productIdentifier; // @synthesize productIdentifier=_productIdentifier;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
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

