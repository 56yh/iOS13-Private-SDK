//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>



@class NSString;

@interface NTPBShareSheetIapFail : PBCodable <NSCopying>
{
    NSString *_articleId;
    NSString *_failedIapId;
    int _failureReason;
    NSString *_sourceChannelId;
    struct {
        unsigned int failureReason:1;
    } _has;
}

@property(retain, nonatomic) NSString *sourceChannelId; // @synthesize sourceChannelId=_sourceChannelId;
@property(retain, nonatomic) NSString *articleId; // @synthesize articleId=_articleId;
@property(retain, nonatomic) NSString *failedIapId; // @synthesize failedIapId=_failedIapId;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasSourceChannelId;
@property(readonly, nonatomic) _Bool hasArticleId;
@property(nonatomic) _Bool hasFailureReason;
@property(nonatomic) int failureReason; // @synthesize failureReason=_failureReason;
@property(readonly, nonatomic) _Bool hasFailedIapId;

@end

