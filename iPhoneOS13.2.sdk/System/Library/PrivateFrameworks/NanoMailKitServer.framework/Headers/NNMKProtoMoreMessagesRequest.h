//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>



@class NSData, NSString;

@interface NNMKProtoMoreMessagesRequest : PBRequest <NSCopying>
{
    NSData *_beforeDateReceived;
    unsigned int _filterType;
    unsigned int _fullSyncVersion;
    NSString *_mailboxId;
    struct {
        unsigned int filterType:1;
        unsigned int fullSyncVersion:1;
    } _has;
}

@property(nonatomic) unsigned int filterType; // @synthesize filterType=_filterType;
@property(retain, nonatomic) NSString *mailboxId; // @synthesize mailboxId=_mailboxId;
@property(retain, nonatomic) NSData *beforeDateReceived; // @synthesize beforeDateReceived=_beforeDateReceived;
@property(nonatomic) unsigned int fullSyncVersion; // @synthesize fullSyncVersion=_fullSyncVersion;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasFilterType;
@property(readonly, nonatomic) _Bool hasMailboxId;
@property(readonly, nonatomic) _Bool hasBeforeDateReceived;
@property(nonatomic) _Bool hasFullSyncVersion;

@end

