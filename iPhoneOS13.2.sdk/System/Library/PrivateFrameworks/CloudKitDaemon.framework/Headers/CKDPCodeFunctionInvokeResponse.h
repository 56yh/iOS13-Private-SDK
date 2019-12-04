//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>



@class CKDPCodeFunctionInvokeResponseAttestationResponse, NSData;

__attribute__((visibility("hidden")))
@interface CKDPCodeFunctionInvokeResponse : PBCodable <NSCopying>
{
    CKDPCodeFunctionInvokeResponseAttestationResponse *_attestationResponse;
    NSData *_serializedResult;
}

@property(retain, nonatomic) CKDPCodeFunctionInvokeResponseAttestationResponse *attestationResponse; // @synthesize attestationResponse=_attestationResponse;
@property(retain, nonatomic) NSData *serializedResult; // @synthesize serializedResult=_serializedResult;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasAttestationResponse;
@property(readonly, nonatomic) _Bool hasSerializedResult;

@end

