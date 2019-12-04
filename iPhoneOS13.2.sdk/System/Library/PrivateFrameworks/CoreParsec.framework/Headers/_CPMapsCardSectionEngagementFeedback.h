//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


#import <CoreParsec/_CPMapsCardSectionEngagementFeedback-Protocol.h>
#import <CoreParsec/_CPProcessableFeedback-Protocol.h>

@class NSData, NSDictionary, NSString, _CPPunchoutForFeedback;

@interface _CPMapsCardSectionEngagementFeedback : PBCodable <_CPProcessableFeedback, _CPMapsCardSectionEngagementFeedback, NSSecureCoding>
{
    int _triggerEvent;
    int _actionCardType;
    int _feedbackType;
    unsigned long long _timestamp;
    _CPPunchoutForFeedback *_destination;
    NSString *_cardSectionId;
    NSString *_resultId;
}

@property(copy, nonatomic) NSString *resultId; // @synthesize resultId=_resultId;
@property(copy, nonatomic) NSString *cardSectionId; // @synthesize cardSectionId=_cardSectionId;
@property(nonatomic) int feedbackType; // @synthesize feedbackType=_feedbackType;
@property(nonatomic) int actionCardType; // @synthesize actionCardType=_actionCardType;
@property(nonatomic) int triggerEvent; // @synthesize triggerEvent=_triggerEvent;
@property(retain, nonatomic) _CPPunchoutForFeedback *destination; // @synthesize destination=_destination;
@property(nonatomic) unsigned long long timestamp;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property(readonly) NSUInteger hash;
- (_Bool)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)init;
- (id)initWithFacade:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) id feedbackJSON;
@property(readonly) Class superclass;

@end

