//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>



@interface NTPBIAdConfig : PBCodable <NSCopying>
{
    long long _segmentsHistoryWindowInterval;
    long long _segmentsMinimumArticleCount;
    long long _segmentsSubmissionFrequency;
    double _segmentsThreshold;
    _Bool _segmentsEnabled;
    struct {
        unsigned int segmentsHistoryWindowInterval:1;
        unsigned int segmentsMinimumArticleCount:1;
        unsigned int segmentsSubmissionFrequency:1;
        unsigned int segmentsThreshold:1;
        unsigned int segmentsEnabled:1;
    } _has;
}

@property(nonatomic) long long segmentsMinimumArticleCount; // @synthesize segmentsMinimumArticleCount=_segmentsMinimumArticleCount;
@property(nonatomic) long long segmentsHistoryWindowInterval; // @synthesize segmentsHistoryWindowInterval=_segmentsHistoryWindowInterval;
@property(nonatomic) long long segmentsSubmissionFrequency; // @synthesize segmentsSubmissionFrequency=_segmentsSubmissionFrequency;
@property(nonatomic) double segmentsThreshold; // @synthesize segmentsThreshold=_segmentsThreshold;
@property(nonatomic) _Bool segmentsEnabled; // @synthesize segmentsEnabled=_segmentsEnabled;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasSegmentsMinimumArticleCount;
@property(nonatomic) _Bool hasSegmentsHistoryWindowInterval;
@property(nonatomic) _Bool hasSegmentsSubmissionFrequency;
@property(nonatomic) _Bool hasSegmentsThreshold;
@property(nonatomic) _Bool hasSegmentsEnabled;

@end

