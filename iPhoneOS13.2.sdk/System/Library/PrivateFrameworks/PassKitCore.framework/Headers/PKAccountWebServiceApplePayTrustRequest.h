//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PassKitCore/PKAccountWebServiceRequest.h>

@class PKApplePayTrustSignature;
@protocol PKAccountWebServiceApplePayTrustProtocol;

@interface PKAccountWebServiceApplePayTrustRequest : PKAccountWebServiceRequest
{
    id <PKAccountWebServiceApplePayTrustProtocol> _protocol;
    PKApplePayTrustSignature *_signature;
}

@property(retain, nonatomic) PKApplePayTrustSignature *signature; // @synthesize signature=_signature;
- (id)_urlRequestWithAppleAccountInformation:(id)arg1;
- (id)endpointComponents;
- (Class)responseClass;
- (id)initWithApplePayTrustProtocol:(id)arg1;

@end

