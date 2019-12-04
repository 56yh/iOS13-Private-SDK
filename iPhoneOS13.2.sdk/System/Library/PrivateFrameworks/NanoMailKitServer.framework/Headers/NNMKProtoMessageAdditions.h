//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>



@class NSData, NSMutableArray, NSString;

@interface NNMKProtoMessageAdditions : PBCodable <NSCopying>
{
    NSData *_dateForRequestingMoreMessages;
    NSData *_dateSynced;
    unsigned int _fullSyncVersion;
    NSString *_mailboxId;
    unsigned int _mailboxSyncVersion;
    NSMutableArray *_messageAdditions;
    _Bool _messagesAreNew;
    struct {
        unsigned int fullSyncVersion:1;
        unsigned int mailboxSyncVersion:1;
        unsigned int messagesAreNew:1;
    } _has;
}

+ (Class)messageAdditionType;
@property(nonatomic) unsigned int mailboxSyncVersion; // @synthesize mailboxSyncVersion=_mailboxSyncVersion;
@property(retain, nonatomic) NSString *mailboxId; // @synthesize mailboxId=_mailboxId;
@property(nonatomic) _Bool messagesAreNew; // @synthesize messagesAreNew=_messagesAreNew;
@property(retain, nonatomic) NSData *dateForRequestingMoreMessages; // @synthesize dateForRequestingMoreMessages=_dateForRequestingMoreMessages;
@property(retain, nonatomic) NSMutableArray *messageAdditions; // @synthesize messageAdditions=_messageAdditions;
@property(retain, nonatomic) NSData *dateSynced; // @synthesize dateSynced=_dateSynced;
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
@property(nonatomic) _Bool hasMailboxSyncVersion;
@property(readonly, nonatomic) _Bool hasMailboxId;
@property(nonatomic) _Bool hasMessagesAreNew;
@property(readonly, nonatomic) _Bool hasDateForRequestingMoreMessages;
- (id)messageAdditionAtIndex:(unsigned long long)arg1;
- (unsigned long long)messageAdditionsCount;
- (void)addMessageAddition:(id)arg1;
- (void)clearMessageAdditions;
@property(readonly, nonatomic) _Bool hasDateSynced;
@property(nonatomic) _Bool hasFullSyncVersion;

@end

