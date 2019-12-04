//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>



@class NPKProtoStandalonePaymentDigitalIssuanceMetadata, NSMutableArray, NSString;

@interface NPKProtoStandalonePaymentProvisioningMethodMetadata : PBCodable <NSCopying>
{
    NSString *_currency;
    NSString *_depositAmount;
    NPKProtoStandalonePaymentDigitalIssuanceMetadata *_digitalIssuanceMetadata;
    NSString *_maxLoadedBalance;
    NSString *_minLoadedBalance;
    NSString *_minimumReaderModeBalance;
    NSString *_productIdentifier;
    NSString *_readerModeMetadataJson;
    NSString *_readerModeResourcesJson;
    NSMutableArray *_requiredFields;
}

+ (Class)requiredFieldsType;
@property(retain, nonatomic) NSString *minimumReaderModeBalance; // @synthesize minimumReaderModeBalance=_minimumReaderModeBalance;
@property(retain, nonatomic) NSString *readerModeResourcesJson; // @synthesize readerModeResourcesJson=_readerModeResourcesJson;
@property(retain, nonatomic) NPKProtoStandalonePaymentDigitalIssuanceMetadata *digitalIssuanceMetadata; // @synthesize digitalIssuanceMetadata=_digitalIssuanceMetadata;
@property(retain, nonatomic) NSString *readerModeMetadataJson; // @synthesize readerModeMetadataJson=_readerModeMetadataJson;
@property(retain, nonatomic) NSMutableArray *requiredFields; // @synthesize requiredFields=_requiredFields;
@property(retain, nonatomic) NSString *maxLoadedBalance; // @synthesize maxLoadedBalance=_maxLoadedBalance;
@property(retain, nonatomic) NSString *minLoadedBalance; // @synthesize minLoadedBalance=_minLoadedBalance;
@property(retain, nonatomic) NSString *depositAmount; // @synthesize depositAmount=_depositAmount;
@property(retain, nonatomic) NSString *currency; // @synthesize currency=_currency;
@property(retain, nonatomic) NSString *productIdentifier; // @synthesize productIdentifier=_productIdentifier;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasMinimumReaderModeBalance;
@property(readonly, nonatomic) _Bool hasReaderModeResourcesJson;
@property(readonly, nonatomic) _Bool hasDigitalIssuanceMetadata;
@property(readonly, nonatomic) _Bool hasReaderModeMetadataJson;
- (id)requiredFieldsAtIndex:(unsigned long long)arg1;
- (unsigned long long)requiredFieldsCount;
- (void)addRequiredFields:(id)arg1;
- (void)clearRequiredFields;
@property(readonly, nonatomic) _Bool hasMaxLoadedBalance;
@property(readonly, nonatomic) _Bool hasMinLoadedBalance;
@property(readonly, nonatomic) _Bool hasDepositAmount;
@property(readonly, nonatomic) _Bool hasCurrency;
@property(readonly, nonatomic) _Bool hasProductIdentifier;

@end

