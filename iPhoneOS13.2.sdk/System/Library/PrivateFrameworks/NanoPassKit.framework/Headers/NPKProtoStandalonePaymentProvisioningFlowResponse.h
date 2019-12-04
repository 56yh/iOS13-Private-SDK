//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>



@class NPKProtoStandalonePaymentProvisioningFlowStepContext, NPKProtoStandaloneResponseHeader;

@interface NPKProtoStandalonePaymentProvisioningFlowResponse : PBCodable <NSCopying>
{
    NPKProtoStandalonePaymentProvisioningFlowStepContext *_context;
    int _fromStep;
    NPKProtoStandaloneResponseHeader *_responseHeader;
    int _toStep;
}

@property(retain, nonatomic) NPKProtoStandalonePaymentProvisioningFlowStepContext *context; // @synthesize context=_context;
@property(nonatomic) int toStep; // @synthesize toStep=_toStep;
@property(nonatomic) int fromStep; // @synthesize fromStep=_fromStep;
@property(retain, nonatomic) NPKProtoStandaloneResponseHeader *responseHeader; // @synthesize responseHeader=_responseHeader;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasContext;
- (int)StringAsToStep:(id)arg1;
- (id)toStepAsString:(int)arg1;
- (int)StringAsFromStep:(id)arg1;
- (id)fromStepAsString:(int)arg1;

@end

