//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>



@class NSData;

@interface NPKProtoPeerPaymentUnregistrationResponse : PBCodable <NSCopying>
{
    NSData *_errorData;
    NSData *_peerPaymentAccountData;
    NSData *_peerPaymentWebServiceContextData;
    _Bool _pending;
    _Bool _success;
    CDStruct_5ee4970e _has;
}

@property(retain, nonatomic) NSData *peerPaymentAccountData; // @synthesize peerPaymentAccountData=_peerPaymentAccountData;
@property(retain, nonatomic) NSData *peerPaymentWebServiceContextData; // @synthesize peerPaymentWebServiceContextData=_peerPaymentWebServiceContextData;
@property(retain, nonatomic) NSData *errorData; // @synthesize errorData=_errorData;
@property(nonatomic) _Bool success; // @synthesize success=_success;
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
@property(readonly, nonatomic) _Bool hasPeerPaymentAccountData;
@property(readonly, nonatomic) _Bool hasPeerPaymentWebServiceContextData;
@property(readonly, nonatomic) _Bool hasErrorData;
@property(nonatomic) _Bool hasSuccess;
@property(nonatomic) _Bool hasPending;

@end

