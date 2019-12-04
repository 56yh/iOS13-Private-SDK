//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>



@class NPKProtoPass, NSData, NSMutableArray;

@interface NPKProtoRemotePassUpdateResponse : PBCodable <NSCopying>
{
    NSData *_errorData;
    NSMutableArray *_expressPassInformations;
    NPKProtoPass *_pass;
    int _upgradeStatus;
    _Bool _pending;
    struct {
        unsigned int upgradeStatus:1;
        unsigned int pending:1;
    } _has;
}

+ (Class)expressPassInformationType;
@property(retain, nonatomic) NSMutableArray *expressPassInformations; // @synthesize expressPassInformations=_expressPassInformations;
@property(retain, nonatomic) NSData *errorData; // @synthesize errorData=_errorData;
@property(retain, nonatomic) NPKProtoPass *pass; // @synthesize pass=_pass;
@property(nonatomic) _Bool pending; // @synthesize pending=_pending;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)expressPassInformationAtIndex:(unsigned long long)arg1;
- (unsigned long long)expressPassInformationsCount;
- (void)addExpressPassInformation:(id)arg1;
- (void)clearExpressPassInformations;
- (int)StringAsUpgradeStatus:(id)arg1;
- (id)upgradeStatusAsString:(int)arg1;
@property(nonatomic) _Bool hasUpgradeStatus;
@property(nonatomic) int upgradeStatus; // @synthesize upgradeStatus=_upgradeStatus;
@property(readonly, nonatomic) _Bool hasErrorData;
@property(readonly, nonatomic) _Bool hasPass;
@property(nonatomic) _Bool hasPending;

@end

