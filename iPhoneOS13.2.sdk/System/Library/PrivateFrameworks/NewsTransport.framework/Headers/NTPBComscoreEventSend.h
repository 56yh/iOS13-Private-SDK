//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>



@class NSString;

@interface NTPBComscoreEventSend : PBCodable <NSCopying>
{
    int _comscoreEventType;
    NSString *_contentViewedId;
    NSString *_eventUdid;
    NSString *_failureReasonCode;
    int _resultType;
    NSString *_sourceChannelId;
    struct {
        unsigned int comscoreEventType:1;
        unsigned int resultType:1;
    } _has;
}

@property(retain, nonatomic) NSString *sourceChannelId; // @synthesize sourceChannelId=_sourceChannelId;
@property(retain, nonatomic) NSString *contentViewedId; // @synthesize contentViewedId=_contentViewedId;
@property(retain, nonatomic) NSString *failureReasonCode; // @synthesize failureReasonCode=_failureReasonCode;
@property(retain, nonatomic) NSString *eventUdid; // @synthesize eventUdid=_eventUdid;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasSourceChannelId;
@property(readonly, nonatomic) _Bool hasContentViewedId;
@property(readonly, nonatomic) _Bool hasFailureReasonCode;
@property(readonly, nonatomic) _Bool hasEventUdid;
@property(nonatomic) _Bool hasResultType;
@property(nonatomic) int resultType; // @synthesize resultType=_resultType;
@property(nonatomic) _Bool hasComscoreEventType;
@property(nonatomic) int comscoreEventType; // @synthesize comscoreEventType=_comscoreEventType;

@end

