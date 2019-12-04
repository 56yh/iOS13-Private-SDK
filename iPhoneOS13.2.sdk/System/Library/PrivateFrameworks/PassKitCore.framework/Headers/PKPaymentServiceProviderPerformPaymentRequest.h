//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PassKitCore/PKPaymentWebServiceRequest.h>

@class NSData, PKPaymentPass, PKSecureElementCertificateSet, PKServiceProviderOrder;

@interface PKPaymentServiceProviderPerformPaymentRequest : PKPaymentWebServiceRequest
{
    PKSecureElementCertificateSet *_certificates;
    PKPaymentPass *_pass;
    PKServiceProviderOrder *_serviceProviderOrder;
    NSData *_nonce;
}

@property(copy, nonatomic) NSData *nonce; // @synthesize nonce=_nonce;
@property(retain, nonatomic) PKServiceProviderOrder *serviceProviderOrder; // @synthesize serviceProviderOrder=_serviceProviderOrder;
@property(retain, nonatomic) PKPaymentPass *pass; // @synthesize pass=_pass;
- (void)_urlRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 appleAccountInformation:(id)arg3 webService:(id)arg4 completion:(id /* block */)arg5;

@end

