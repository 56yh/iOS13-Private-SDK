//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>



@class NSString;

@interface NNMKProtoMailbox : PBCodable <NSCopying>
{
    NSString *_accountId;
    NSString *_customName;
    unsigned int _filterType;
    NSString *_mailboxId;
    unsigned int _type;
    _Bool _syncEnabled;
    _Bool _syncRequested;
    struct {
        unsigned int filterType:1;
        unsigned int type:1;
        unsigned int syncEnabled:1;
        unsigned int syncRequested:1;
    } _has;
}

+ (id)protoMailboxFromMailbox:(id)arg1;
@property(nonatomic) _Bool syncRequested; // @synthesize syncRequested=_syncRequested;
@property(nonatomic) unsigned int type; // @synthesize type=_type;
@property(nonatomic) _Bool syncEnabled; // @synthesize syncEnabled=_syncEnabled;
@property(nonatomic) unsigned int filterType; // @synthesize filterType=_filterType;
@property(retain, nonatomic) NSString *customName; // @synthesize customName=_customName;
@property(retain, nonatomic) NSString *mailboxId; // @synthesize mailboxId=_mailboxId;
@property(retain, nonatomic) NSString *accountId; // @synthesize accountId=_accountId;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasSyncRequested;
@property(nonatomic) _Bool hasType;
@property(nonatomic) _Bool hasSyncEnabled;
@property(nonatomic) _Bool hasFilterType;
@property(readonly, nonatomic) _Bool hasCustomName;
@property(readonly, nonatomic) _Bool hasMailboxId;
@property(readonly, nonatomic) _Bool hasAccountId;
- (id)mailbox;

@end

