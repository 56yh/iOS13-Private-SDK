//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



@class NSArray, NSSet, NSString;

@interface PKAddPaymentPassRequestConfiguration : NSObject <NSSecureCoding>
{
    _Bool _requiresFelicaSecureElement;
    NSString *_encryptionScheme;
    long long _style;
    NSString *_cardholderName;
    NSString *_primaryAccountSuffix;
    NSArray *_cardDetails;
    NSString *_localizedDescription;
    NSString *_primaryAccountIdentifier;
    NSString *_paymentNetwork;
    NSSet *_productIdentifiers;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) _Bool requiresFelicaSecureElement; // @synthesize requiresFelicaSecureElement=_requiresFelicaSecureElement;
@property(copy, nonatomic) NSSet *productIdentifiers; // @synthesize productIdentifiers=_productIdentifiers;
@property(copy, nonatomic) NSString *paymentNetwork; // @synthesize paymentNetwork=_paymentNetwork;
@property(copy, nonatomic) NSString *primaryAccountIdentifier; // @synthesize primaryAccountIdentifier=_primaryAccountIdentifier;
@property(copy, nonatomic) NSString *localizedDescription; // @synthesize localizedDescription=_localizedDescription;
@property(copy, nonatomic) NSArray *cardDetails; // @synthesize cardDetails=_cardDetails;
@property(copy, nonatomic) NSString *primaryAccountSuffix; // @synthesize primaryAccountSuffix=_primaryAccountSuffix;
@property(copy, nonatomic) NSString *cardholderName; // @synthesize cardholderName=_cardholderName;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(readonly, copy, nonatomic) NSString *encryptionScheme; // @synthesize encryptionScheme=_encryptionScheme;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithEncryptionScheme:(id)arg1;
- (id)init;

@end

