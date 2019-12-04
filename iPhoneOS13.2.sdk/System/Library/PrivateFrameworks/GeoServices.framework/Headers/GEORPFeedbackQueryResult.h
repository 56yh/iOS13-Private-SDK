//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>



@class NSData, NSMutableArray, PBDataReader, PBUnknownFields;

@interface GEORPFeedbackQueryResult : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_feedbackInfos;
    NSData *_nextPageToken;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_feedbackInfos:1;
        unsigned int read_nextPageToken:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_feedbackInfos:1;
        unsigned int wrote_nextPageToken:1;
    } _flags;
}

+ (_Bool)isValid:(id)arg1;
+ (Class)feedbackInfoType;
- (void)clearUnknownFields:(_Bool)arg1;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(retain, nonatomic) NSData *nextPageToken;
@property(readonly, nonatomic) _Bool hasNextPageToken;
- (void)_readNextPageToken;
- (id)feedbackInfoAtIndex:(unsigned long long)arg1;
- (unsigned long long)feedbackInfosCount;
- (void)_addNoFlagsFeedbackInfo:(id)arg1;
- (void)addFeedbackInfo:(id)arg1;
- (void)clearFeedbackInfos;
@property(retain, nonatomic) NSMutableArray *feedbackInfos;
- (void)_readFeedbackInfos;
- (id)initWithData:(id)arg1;
- (id)init;

@end

