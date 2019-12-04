//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>



@interface AWDMailUserEngagement : PBCodable <NSCopying>
{
    long long _messageAgeInWeeks;
    long long _topHitIndexInSpotlightList;
    long long _topHitIndexInTopHitsList;
    int _mailboxType;
    int _type;
    _Bool _isTopHitMessage;
    struct {
        unsigned int messageAgeInWeeks:1;
        unsigned int topHitIndexInSpotlightList:1;
        unsigned int topHitIndexInTopHitsList:1;
        unsigned int mailboxType:1;
        unsigned int type:1;
        unsigned int isTopHitMessage:1;
    } _has;
}

@property(nonatomic) long long topHitIndexInSpotlightList; // @synthesize topHitIndexInSpotlightList=_topHitIndexInSpotlightList;
@property(nonatomic) long long topHitIndexInTopHitsList; // @synthesize topHitIndexInTopHitsList=_topHitIndexInTopHitsList;
@property(nonatomic) _Bool isTopHitMessage; // @synthesize isTopHitMessage=_isTopHitMessage;
@property(nonatomic) long long messageAgeInWeeks; // @synthesize messageAgeInWeeks=_messageAgeInWeeks;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasTopHitIndexInSpotlightList;
@property(nonatomic) _Bool hasTopHitIndexInTopHitsList;
@property(nonatomic) _Bool hasIsTopHitMessage;
- (int)StringAsMailboxType:(id)arg1;
- (id)mailboxTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasMailboxType;
@property(nonatomic) int mailboxType; // @synthesize mailboxType=_mailboxType;
@property(nonatomic) _Bool hasMessageAgeInWeeks;
- (int)StringAsType:(id)arg1;
- (id)typeAsString:(int)arg1;
@property(nonatomic) _Bool hasType;
@property(nonatomic) int type; // @synthesize type=_type;
- (id)initWithEngagmentType:(int)arg1;
- (id)initWithEngagmentType:(int)arg1 isTopHit:(_Bool)arg2;
- (id)initWithEngagmentType:(int)arg1 message:(id)arg2 isTopHit:(_Bool)arg3 messageListIndex:(long long)arg4 spotlightListIndex:(long long)arg5;
- (id)initWithEngagmentType:(int)arg1 receivedDate:(id)arg2 mailboxType:(int)arg3 isTopHit:(_Bool)arg4 messageListIndex:(long long)arg5 spotlightListIndex:(long long)arg6;

@end

