//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>



@class CKDPShare, CKDPShareIdentifier;

__attribute__((visibility("hidden")))
@interface CKDPRecordRetrieveChangesResponseShareChange : PBCodable <NSCopying>
{
    int _changeType;
    CKDPShare *_share;
    CKDPShareIdentifier *_shareIdentifier;
    struct {
        unsigned int changeType:1;
    } _has;
}

@property(retain, nonatomic) CKDPShare *share; // @synthesize share=_share;
@property(retain, nonatomic) CKDPShareIdentifier *shareIdentifier; // @synthesize shareIdentifier=_shareIdentifier;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasShare;
- (int)StringAsChangeType:(id)arg1;
- (id)changeTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasChangeType;
@property(nonatomic) int changeType; // @synthesize changeType=_changeType;
@property(readonly, nonatomic) _Bool hasShareIdentifier;

@end

