//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


#import <SiriInstrumentation/SISchemaViewContainer-Protocol.h>

@class NSData, NSString;

@interface SISchemaViewContainer : PBCodable <SISchemaViewContainer, NSSecureCoding>
{
    NSString *_viewID;
    NSString *_snippetClass;
    NSString *_dialogIdentifier;
    NSString *_dialogPhase;
}

@property(copy, nonatomic) NSString *dialogPhase; // @synthesize dialogPhase=_dialogPhase;
@property(copy, nonatomic) NSString *dialogIdentifier; // @synthesize dialogIdentifier=_dialogIdentifier;
@property(copy, nonatomic) NSString *snippetClass; // @synthesize snippetClass=_snippetClass;
@property(copy, nonatomic) NSString *viewID; // @synthesize viewID=_viewID;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;
@property(readonly) NSUInteger hash;
- (_Bool)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

