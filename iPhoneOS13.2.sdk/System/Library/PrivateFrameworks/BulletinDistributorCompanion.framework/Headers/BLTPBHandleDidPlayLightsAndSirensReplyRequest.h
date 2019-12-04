//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>



@class NSString;

@interface BLTPBHandleDidPlayLightsAndSirensReplyRequest : PBRequest <NSCopying>
{
    double _date;
    NSString *_phoneSectionID;
    NSString *_publisherMatchID;
    NSString *_replyToken;
    _Bool _didPlayLightsAndSirens;
    struct {
        unsigned int date:1;
        unsigned int didPlayLightsAndSirens:1;
    } _has;
}

@property(retain, nonatomic) NSString *replyToken; // @synthesize replyToken=_replyToken;
@property(nonatomic) double date; // @synthesize date=_date;
@property(retain, nonatomic) NSString *phoneSectionID; // @synthesize phoneSectionID=_phoneSectionID;
@property(retain, nonatomic) NSString *publisherMatchID; // @synthesize publisherMatchID=_publisherMatchID;
@property(nonatomic) _Bool didPlayLightsAndSirens; // @synthesize didPlayLightsAndSirens=_didPlayLightsAndSirens;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasReplyToken;
@property(nonatomic) _Bool hasDate;
@property(readonly, nonatomic) _Bool hasPhoneSectionID;
@property(readonly, nonatomic) _Bool hasPublisherMatchID;
@property(nonatomic) _Bool hasDidPlayLightsAndSirens;

@end

