//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>


#import <PassKitCore/PKCloudStoreCoding-Protocol.h>

@class NSDecimalNumber, PKCurrencyAmount;

@interface PKPaymentTransactionForeignExchangeInformation : NSObject <NSSecureCoding, PKCloudStoreCoding>
{
    PKCurrencyAmount *_destinationCurrencyAmount;
    NSDecimalNumber *_exchangeRate;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSDecimalNumber *exchangeRate; // @synthesize exchangeRate=_exchangeRate;
@property(copy, nonatomic) PKCurrencyAmount *destinationCurrencyAmount; // @synthesize destinationCurrencyAmount=_destinationCurrencyAmount;
- (_Bool)isEqualToForeignExchangeInformation:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)itemType;
- (id)recordTypesAndNames;
- (void)encodeServerAndDeviceDataWithCloudStoreCoder:(id)arg1;
- (void)encodeWithCloudStoreCoder:(id)arg1;
- (id)initWithCloudStoreCoder:(id)arg1;
- (_Bool)isValid;
- (id)jsonString;
- (id)jsonDictionaryRepresentation;

@end

