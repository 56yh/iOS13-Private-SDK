//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


#import <SiriInstrumentation/SISchemaSpeechResultSelected-Protocol.h>

@class NSData, NSString;

@interface SISchemaSpeechResultSelected : PBCodable <SISchemaSpeechResultSelected, NSSecureCoding>
{
    int _source;
    NSString *_resultCandidateId;
}

@property(nonatomic) int source; // @synthesize source=_source;
@property(copy, nonatomic) NSString *resultCandidateId; // @synthesize resultCandidateId=_resultCandidateId;
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

