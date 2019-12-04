//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>



@class NSString;

@interface PPPBExtractedDonationRecord : PBCodable <NSCopying>
{
    double _score;
    unsigned long long _topicId;
    unsigned long long _unixTimestampSec;
    NSString *_algorithm;
    NSString *_namedEntity;
    NSString *_sourceBundleId;
    struct {
        unsigned int score:1;
        unsigned int topicId:1;
        unsigned int unixTimestampSec:1;
    } _has;
}

@property(nonatomic) unsigned long long unixTimestampSec; // @synthesize unixTimestampSec=_unixTimestampSec;
@property(retain, nonatomic) NSString *namedEntity; // @synthesize namedEntity=_namedEntity;
@property(nonatomic) unsigned long long topicId; // @synthesize topicId=_topicId;
@property(nonatomic) double score; // @synthesize score=_score;
@property(retain, nonatomic) NSString *algorithm; // @synthesize algorithm=_algorithm;
@property(retain, nonatomic) NSString *sourceBundleId; // @synthesize sourceBundleId=_sourceBundleId;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasUnixTimestampSec;
@property(readonly, nonatomic) _Bool hasNamedEntity;
@property(nonatomic) _Bool hasTopicId;
@property(nonatomic) _Bool hasScore;
@property(readonly, nonatomic) _Bool hasAlgorithm;
@property(readonly, nonatomic) _Bool hasSourceBundleId;

@end

