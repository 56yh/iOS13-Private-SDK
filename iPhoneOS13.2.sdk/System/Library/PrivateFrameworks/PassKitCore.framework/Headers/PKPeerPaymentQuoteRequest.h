//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PassKitCore/PKPeerPaymentWebServiceRequest.h>



@class NSDecimalNumber, NSString, PKPeerPaymentQuoteCertificatesResponse, PKPeerPaymentRequestToken;

@interface PKPeerPaymentQuoteRequest : PKPeerPaymentWebServiceRequest <NSSecureCoding>
{
    NSString *_orderIdentifier;
    NSDecimalNumber *_amount;
    NSString *_currency;
    unsigned long long _externalFundingSource;
    unsigned long long _destination;
    unsigned long long _context;
    PKPeerPaymentRequestToken *_requestToken;
    NSString *_dpanIdentifier;
    NSString *_fpanIdentifier;
    long long _paymentNetwork;
    unsigned long long _paymentMethodType;
    NSString *_recipientIdentifier;
    NSString *_senderAddress;
    NSString *_bankName;
    NSString *_routingNumber;
    NSString *_accountNumber;
    PKPeerPaymentQuoteCertificatesResponse *_quoteCertificatesResponse;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) PKPeerPaymentQuoteCertificatesResponse *quoteCertificatesResponse; // @synthesize quoteCertificatesResponse=_quoteCertificatesResponse;
@property(copy, nonatomic) NSString *accountNumber; // @synthesize accountNumber=_accountNumber;
@property(copy, nonatomic) NSString *routingNumber; // @synthesize routingNumber=_routingNumber;
@property(copy, nonatomic) NSString *bankName; // @synthesize bankName=_bankName;
@property(copy, nonatomic) NSString *senderAddress; // @synthesize senderAddress=_senderAddress;
@property(copy, nonatomic) NSString *recipientIdentifier; // @synthesize recipientIdentifier=_recipientIdentifier;
@property(nonatomic) unsigned long long paymentMethodType; // @synthesize paymentMethodType=_paymentMethodType;
@property(nonatomic) long long paymentNetwork; // @synthesize paymentNetwork=_paymentNetwork;
@property(copy, nonatomic, setter=setFPANIdentifier:) NSString *fpanIdentifier; // @synthesize fpanIdentifier=_fpanIdentifier;
@property(copy, nonatomic, setter=setDPANIdentifier:) NSString *dpanIdentifier; // @synthesize dpanIdentifier=_dpanIdentifier;
@property(retain, nonatomic) PKPeerPaymentRequestToken *requestToken; // @synthesize requestToken=_requestToken;
@property(nonatomic) unsigned long long context; // @synthesize context=_context;
@property(nonatomic) unsigned long long destination; // @synthesize destination=_destination;
@property(nonatomic) unsigned long long externalFundingSource; // @synthesize externalFundingSource=_externalFundingSource;
@property(copy, nonatomic) NSString *currency; // @synthesize currency=_currency;
@property(copy, nonatomic) NSDecimalNumber *amount; // @synthesize amount=_amount;
@property(readonly, copy, nonatomic) NSString *orderIdentifier; // @synthesize orderIdentifier=_orderIdentifier;
- (_Bool)isEqualToPeerPaymentQuoteRequest:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_urlRequestWithServiceURL:(id)arg1 appleAccountInformation:(id)arg2 deviceIdentifier:(id)arg3 deviceScore:(id)arg4 deviceMetadata:(id)arg5;
- (id)init;
- (void)updateWithPaymentPass:(id)arg1 externalFundingSource:(unsigned long long)arg2;
- (void)updateWithPaymentPass:(id)arg1;

@end

